#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
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
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Console
#include <flixel/system/debug/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ConsoleCommands
#include <flixel/system/debug/ConsoleCommands.h>
#endif
#ifndef INCLUDED_flixel_system_debug_ConsoleUtil
#include <flixel/system/debug/ConsoleUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_LogStyle
#include <flixel/system/debug/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Watch
#include <flixel/system/debug/Watch.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapLogFrontEnd
#include <flixel/system/frontEnds/BitmapLogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_DebuggerFrontEnd
#include <flixel/system/frontEnds/DebuggerFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_VCRFrontEnd
#include <flixel/system/frontEnds/VCRFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
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
namespace flixel{
namespace system{
namespace debug{

Void ConsoleCommands_obj::__construct(::flixel::system::debug::Console console)
{
HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","new",0xd36fb809,"flixel.system.debug.ConsoleCommands.new","flixel/system/debug/ConsoleCommands.hx",11,0x4441c1e8)
HX_STACK_THIS(this)
HX_STACK_ARG(console,"console")
{
	HX_STACK_LINE(20)
	this->_watchingMouse = false;
	HX_STACK_LINE(25)
	this->_console = console;
	HX_STACK_LINE(28)
	{
		HX_STACK_LINE(28)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",28,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("help")).Add(HX_CSTRING("h")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->help_dyn(),false);
					__result->Add(HX_CSTRING("help") , null(),false);
					__result->Add(HX_CSTRING("paramHelp") , HX_CSTRING("(Command)"),false);
					__result->Add(HX_CSTRING("numParams") , (int)1,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(28)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,ParamCutoff));
	}
	HX_STACK_LINE(29)
	{
		HX_STACK_LINE(29)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(29)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",29,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("close")).Add(HX_CSTRING("cl")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->close_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Closes the debugger overlay."),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(29)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,NumParams,ParamCutoff));
	}
	HX_STACK_LINE(30)
	{
		HX_STACK_LINE(30)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(30)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",30,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("clearHistory")).Add(HX_CSTRING("ch")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->clearHistory_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Clears the command history."),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(30)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,NumParams,ParamCutoff));
	}
	HX_STACK_LINE(32)
	{
		HX_STACK_LINE(32)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(32)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",32,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("clearLog")).Add(HX_CSTRING("clear")),false);
					__result->Add(HX_CSTRING("processFunction") , ::flixel::FlxG_obj::log->clear_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Clears the log window."),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(NumParams,ParamCutoff));
	}
	HX_STACK_LINE(34)
	{
		HX_STACK_LINE(34)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(34)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",34,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("resetState")).Add(HX_CSTRING("rs")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->resetState_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Resets the current state."),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(34)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,NumParams,ParamCutoff));
	}
	HX_STACK_LINE(35)
	{
		HX_STACK_LINE(35)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(35)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",35,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("switchState")).Add(HX_CSTRING("ss")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->switchState_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Switches to a specified state."),false);
					__result->Add(HX_CSTRING("paramHelp") , HX_CSTRING("[FlxState]"),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(35)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,NumParams,ParamCutoff));
	}
	HX_STACK_LINE(36)
	{
		HX_STACK_LINE(36)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(36)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",36,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("resetGame")).Add(HX_CSTRING("rg")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->resetGame_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Resets the game."),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(36)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,NumParams,ParamCutoff));
	}
	struct _Function_1_1{
		inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",38,0x4441c1e8)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("create")).Add(HX_CSTRING("cr")),false);
				__result->Add(HX_CSTRING("processFunction") , __this->create_dyn(),false);
				__result->Add(HX_CSTRING("help") , HX_CSTRING("Creates a new FlxObject and registers it - by default at the mouse position."),false);
				__result->Add(HX_CSTRING("paramHelp") , HX_CSTRING("[FlxObject] (MousePos = true)"),false);
				__result->Add(HX_CSTRING("numParams") , (int)3,false);
				__result->Add(HX_CSTRING("paramCutoff") , (int)3,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(38)
	console->commands->__Field(HX_CSTRING("push"),true)(_Function_1_1::Block(this));
	HX_STACK_LINE(40)
	{
		HX_STACK_LINE(40)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",40,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("set")).Add(HX_CSTRING("s")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->set_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Sets a variable within a registered object."),false);
					__result->Add(HX_CSTRING("paramHelp") , HX_CSTRING("[Path to variable] [Value]"),false);
					__result->Add(HX_CSTRING("numParams") , (int)3,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(40)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,ParamCutoff));
	}
	struct _Function_1_2{
		inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",41,0x4441c1e8)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("call")).Add(HX_CSTRING("c")),false);
				__result->Add(HX_CSTRING("processFunction") , __this->call_dyn(),false);
				__result->Add(HX_CSTRING("help") , HX_CSTRING("Calls a registered function / function within a registered object."),false);
				__result->Add(HX_CSTRING("paramHelp") , null(),false);
				__result->Add(HX_CSTRING("numParams") , (int)3,false);
				__result->Add(HX_CSTRING("paramCutoff") , (int)2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(41)
	console->commands->__Field(HX_CSTRING("push"),true)(_Function_1_2::Block(this));
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",42,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("fields")).Add(HX_CSTRING("f")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->fields_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Lists the fields of a class or instance"),false);
					__result->Add(HX_CSTRING("paramHelp") , HX_CSTRING("[Class or path to instance] [NumSuperClassesToInclude]"),false);
					__result->Add(HX_CSTRING("numParams") , (int)2,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(42)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,ParamCutoff));
	}
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(44)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",44,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("listObjects")).Add(HX_CSTRING("lo")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->listObjects_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Lists all the aliases of the registered objects."),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(44)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,NumParams,ParamCutoff));
	}
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(45)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",45,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("listFunctions")).Add(HX_CSTRING("lf")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->listFunctions_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Lists all the aliases of the registered objects."),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(45)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,NumParams,ParamCutoff));
	}
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(47)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",47,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("watchMouse")).Add(HX_CSTRING("wm")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->watchMouse_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Adds the mouse coordinates to the watch window."),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(47)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,NumParams,ParamCutoff));
	}
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(48)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",48,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("track")).Add(HX_CSTRING("t")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->track_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Adds a tracker window for the specified object."),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(48)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,NumParams,ParamCutoff));
	}
	HX_STACK_LINE(50)
	{
		HX_STACK_LINE(50)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(50)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( hx::ObjectPtr< ::flixel::system::debug::ConsoleCommands_obj > __this,int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",50,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("pause")).Add(HX_CSTRING("p")),false);
					__result->Add(HX_CSTRING("processFunction") , __this->pause_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Toggle between paused and unpaused"),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(50)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(this,NumParams,ParamCutoff));
	}
	HX_STACK_LINE(52)
	{
		HX_STACK_LINE(52)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(52)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",52,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("clearBitmapLog")).Add(HX_CSTRING("cbl")),false);
					__result->Add(HX_CSTRING("processFunction") , ::flixel::FlxG_obj::bitmapLog->clear_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Clears the bitmapLog window."),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(52)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(NumParams,ParamCutoff));
	}
	HX_STACK_LINE(53)
	{
		HX_STACK_LINE(53)
		int NumParams = (int)0;		HX_STACK_VAR(NumParams,"NumParams");
		HX_STACK_LINE(53)
		int ParamCutoff = (int)-1;		HX_STACK_VAR(ParamCutoff,"ParamCutoff");
		struct _Function_2_1{
			inline static Dynamic Block( int &NumParams,int &ParamCutoff){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",53,0x4441c1e8)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("aliases") , Array_obj< ::String >::__new().Add(HX_CSTRING("viewCache")).Add(HX_CSTRING("vc")),false);
					__result->Add(HX_CSTRING("processFunction") , ::flixel::FlxG_obj::bitmapLog->viewCache_dyn(),false);
					__result->Add(HX_CSTRING("help") , HX_CSTRING("Adds the cache to the bitmapLog window"),false);
					__result->Add(HX_CSTRING("paramHelp") , null(),false);
					__result->Add(HX_CSTRING("numParams") , NumParams,false);
					__result->Add(HX_CSTRING("paramCutoff") , ParamCutoff,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(53)
		console->commands->__Field(HX_CSTRING("push"),true)(_Function_2_1::Block(NumParams,ParamCutoff));
	}
	HX_STACK_LINE(56)
	{
		HX_STACK_LINE(56)
		Dynamic value = hx::ClassOf< ::flixel::FlxG >();		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(56)
		console->registeredObjects->set(HX_CSTRING("FlxG"),value);
	}
}
;
	return null();
}

//ConsoleCommands_obj::~ConsoleCommands_obj() { }

Dynamic ConsoleCommands_obj::__CreateEmpty() { return  new ConsoleCommands_obj; }
hx::ObjectPtr< ConsoleCommands_obj > ConsoleCommands_obj::__new(::flixel::system::debug::Console console)
{  hx::ObjectPtr< ConsoleCommands_obj > result = new ConsoleCommands_obj();
	result->__construct(console);
	return result;}

Dynamic ConsoleCommands_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ConsoleCommands_obj > result = new ConsoleCommands_obj();
	result->__construct(inArgs[0]);
	return result;}

Void ConsoleCommands_obj::help( ::String Alias){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","help",0x2a59fef8,"flixel.system.debug.ConsoleCommands.help","flixel/system/debug/ConsoleCommands.hx",67,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Alias,"Alias")
		HX_STACK_LINE(67)
		if (((Alias == null()))){
			HX_STACK_LINE(69)
			::String output = HX_CSTRING("System commands: ");		HX_STACK_VAR(output,"output");
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(70)
				Dynamic _g1 = this->_console->commands;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(70)
				while((true)){
					HX_STACK_LINE(70)
					if ((!(((_g < _g1->__Field(HX_CSTRING("length"),true)))))){
						HX_STACK_LINE(70)
						break;
					}
					HX_STACK_LINE(70)
					Dynamic command = _g1->__GetItem(_g);		HX_STACK_VAR(command,"command");
					HX_STACK_LINE(70)
					++(_g);
					HX_STACK_LINE(72)
					hx::AddEq(output,(command->__Field(HX_CSTRING("aliases"),true)->__GetItem((int)0) + HX_CSTRING(", ")));
				}
			}
			HX_STACK_LINE(74)
			::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(output)),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
			HX_STACK_LINE(75)
			::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("help (Command) for more information about a specific command"))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
		}
		else{
			HX_STACK_LINE(79)
			Dynamic command = ::flixel::system::debug::ConsoleUtil_obj::findCommand(Alias,this->_console->commands);		HX_STACK_VAR(command,"command");
			HX_STACK_LINE(81)
			if (((command != null()))){
				HX_STACK_LINE(83)
				::flixel::FlxG_obj::log->advanced(HX_CSTRING(""),::flixel::system::debug::LogStyle_obj::NORMAL,null());
				HX_STACK_LINE(84)
				::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(command->__Field(HX_CSTRING("aliases"),true))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
				HX_STACK_LINE(86)
				if (((command->__Field(HX_CSTRING("help"),true) != null()))){
					HX_STACK_LINE(87)
					::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(command->__Field(HX_CSTRING("help"),true))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
				}
				HX_STACK_LINE(89)
				::String cutoffHelp = HX_CSTRING("");		HX_STACK_VAR(cutoffHelp,"cutoffHelp");
				HX_STACK_LINE(90)
				if (((command->__Field(HX_CSTRING("paramCutoff"),true) > (int)0))){
					HX_STACK_LINE(91)
					cutoffHelp = HX_CSTRING(" [param0...paramX]");
				}
				HX_STACK_LINE(93)
				if (((bool((command->__Field(HX_CSTRING("paramHelp"),true) != null())) || bool((cutoffHelp != HX_CSTRING("")))))){
					HX_STACK_LINE(94)
					::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(((HX_CSTRING("Params: ") + command->__Field(HX_CSTRING("paramHelp"),true)) + cutoffHelp))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
				}
			}
			else{
				HX_STACK_LINE(98)
				::flixel::FlxG_obj::log->advanced(((HX_CSTRING("A command named '") + Alias) + HX_CSTRING("' does not exist")),::flixel::system::debug::LogStyle_obj::ERROR,true);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,help,(void))

Void ConsoleCommands_obj::close( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","close",0x0806fba1,"flixel.system.debug.ConsoleCommands.close","flixel/system/debug/ConsoleCommands.hx",105,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(105)
		::flixel::FlxG_obj::game->debugger->set_visible(false);
		HX_STACK_LINE(105)
		::flixel::FlxG_obj::debugger->visible = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,close,(void))

Void ConsoleCommands_obj::clearHistory( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","clearHistory",0xd49e427e,"flixel.system.debug.ConsoleCommands.clearHistory","flixel/system/debug/ConsoleCommands.hx",109,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(110)
		Array< ::String > _g = Array_obj< ::String >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(110)
		this->_console->cmdHistory = _g;
		HX_STACK_LINE(111)
		::flixel::FlxG_obj::save->flush(null(),null());
		HX_STACK_LINE(112)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("clearHistory: Command history cleared"))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,clearHistory,(void))

Void ConsoleCommands_obj::resetState( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","resetState",0x4a33fd39,"flixel.system.debug.ConsoleCommands.resetState","flixel/system/debug/ConsoleCommands.hx",116,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(117)
		{
			HX_STACK_LINE(117)
			::Class _g = ::Type_obj::getClass(::flixel::FlxG_obj::game->_state);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(117)
			::flixel::FlxState State = ::Type_obj::createInstance(_g,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(117)
			if ((::flixel::FlxG_obj::game->_state->isTransitionNeeded())){
				HX_STACK_LINE(117)
				::flixel::FlxG_obj::game->_state->transitionToState(State);
				HX_STACK_LINE(117)
				Dynamic();
			}
			else{
				HX_STACK_LINE(117)
				::flixel::FlxG_obj::game->_requestedState = State;
			}
		}
		HX_STACK_LINE(118)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("resetState: State has been reset"))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,resetState,(void))

Void ConsoleCommands_obj::switchState( ::String ClassName){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","switchState",0x74c44026,"flixel.system.debug.ConsoleCommands.switchState","flixel/system/debug/ConsoleCommands.hx",122,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ClassName,"ClassName")
		HX_STACK_LINE(123)
		Dynamic instance = ::flixel::system::debug::ConsoleUtil_obj::attemptToCreateInstance_flixel_FlxState(ClassName,hx::ClassOf< ::flixel::FlxState >(),null());		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(124)
		if (((instance == null()))){
			HX_STACK_LINE(125)
			return null();
		}
		HX_STACK_LINE(127)
		{
			HX_STACK_LINE(127)
			::flixel::FlxState State = instance;		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(127)
			if ((::flixel::FlxG_obj::game->_state->isTransitionNeeded())){
				HX_STACK_LINE(127)
				::flixel::FlxG_obj::game->_state->transitionToState(State);
				HX_STACK_LINE(127)
				Dynamic();
			}
			else{
				HX_STACK_LINE(127)
				::flixel::FlxG_obj::game->_requestedState = State;
			}
		}
		HX_STACK_LINE(128)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(((HX_CSTRING("switchState: New '") + ClassName) + HX_CSTRING("' created")))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,switchState,(void))

Void ConsoleCommands_obj::resetGame( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","resetGame",0x757989ca,"flixel.system.debug.ConsoleCommands.resetGame","flixel/system/debug/ConsoleCommands.hx",132,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(133)
		::flixel::FlxG_obj::game->_resetGame = true;
		HX_STACK_LINE(134)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("resetGame: Game has been reset"))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,resetGame,(void))

Void ConsoleCommands_obj::create( ::String ClassName,::String __o_MousePos,Array< ::String > Params){
::String MousePos = __o_MousePos.Default(HX_CSTRING("true"));
	HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","create",0x6bd2eef3,"flixel.system.debug.ConsoleCommands.create","flixel/system/debug/ConsoleCommands.hx",138,0x4441c1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ClassName,"ClassName")
	HX_STACK_ARG(MousePos,"MousePos")
	HX_STACK_ARG(Params,"Params")
{
		HX_STACK_LINE(139)
		if (((Params == null()))){
			HX_STACK_LINE(140)
			Params = Array_obj< ::String >::__new();
		}
		HX_STACK_LINE(142)
		Dynamic instance = ::flixel::system::debug::ConsoleUtil_obj::attemptToCreateInstance_flixel_FlxObject(ClassName,hx::ClassOf< ::flixel::FlxObject >(),Params);		HX_STACK_VAR(instance,"instance");
		HX_STACK_LINE(143)
		if (((instance == null()))){
			HX_STACK_LINE(144)
			return null();
		}
		HX_STACK_LINE(146)
		::flixel::FlxObject obj = instance;		HX_STACK_VAR(obj,"obj");
		HX_STACK_LINE(148)
		if (((MousePos == HX_CSTRING("true")))){
			HX_STACK_LINE(150)
			Float _g = ::flixel::FlxG_obj::game->get_mouseX();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(150)
			obj->set_x(_g);
			HX_STACK_LINE(151)
			Float _g1 = ::flixel::FlxG_obj::game->get_mouseY();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(151)
			obj->set_y(_g1);
		}
		HX_STACK_LINE(154)
		::flixel::FlxG_obj::game->_state->add(instance);
		HX_STACK_LINE(156)
		if (((Params->length == (int)0))){
			HX_STACK_LINE(157)
			::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add((((((HX_CSTRING("create: New ") + ClassName) + HX_CSTRING(" created at X = ")) + obj->x) + HX_CSTRING(" Y = ")) + obj->y))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
		}
		else{
			HX_STACK_LINE(159)
			::String _g2 = ::Std_obj::string(Params);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(159)
			Dynamic Text = (((((((HX_CSTRING("create: New ") + ClassName) + HX_CSTRING(" created at X = ")) + obj->x) + HX_CSTRING(" Y = ")) + obj->y) + HX_CSTRING(" with params ")) + _g2);		HX_STACK_VAR(Text,"Text");
			HX_STACK_LINE(159)
			::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(Text)),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
		}
		HX_STACK_LINE(161)
		this->_console->objectStack->push(instance);
		HX_STACK_LINE(162)
		{
			HX_STACK_LINE(162)
			::String ObjectAlias = ::Std_obj::string(this->_console->objectStack->length);		HX_STACK_VAR(ObjectAlias,"ObjectAlias");
			HX_STACK_LINE(162)
			{
				HX_STACK_LINE(162)
				Dynamic value = instance;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(162)
				this->_console->registeredObjects->set(ObjectAlias,value);
			}
		}
		HX_STACK_LINE(164)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(((((HX_CSTRING("create: ") + ClassName) + HX_CSTRING(" registered as object '")) + this->_console->objectStack->length) + HX_CSTRING("'")))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleCommands_obj,create,(void))

Void ConsoleCommands_obj::set( ::String ObjectAndVariable,Dynamic NewVariableValue,::String WatchName){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","set",0xd373834b,"flixel.system.debug.ConsoleCommands.set","flixel/system/debug/ConsoleCommands.hx",168,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
		HX_STACK_ARG(NewVariableValue,"NewVariableValue")
		HX_STACK_ARG(WatchName,"WatchName")
		HX_STACK_LINE(169)
		Dynamic pathToVariable;		HX_STACK_VAR(pathToVariable,"pathToVariable");
		HX_STACK_LINE(169)
		{
			HX_STACK_LINE(169)
			::String ObjectAndVariable1 = ObjectAndVariable;		HX_STACK_VAR(ObjectAndVariable1,"ObjectAndVariable1");
			HX_STACK_LINE(169)
			Array< ::String > splitString = ObjectAndVariable1.split(HX_CSTRING("."));		HX_STACK_VAR(splitString,"splitString");
			HX_STACK_LINE(169)
			Dynamic object = this->_console->registeredObjects->get(splitString->__get((int)0));		HX_STACK_VAR(object,"object");
			HX_STACK_LINE(169)
			splitString->shift();
			HX_STACK_LINE(169)
			::String _g = splitString->join(HX_CSTRING("."));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(169)
			ObjectAndVariable1 = _g;
			HX_STACK_LINE(169)
			pathToVariable = ::flixel::system::debug::ConsoleUtil_obj::resolveObjectAndVariable(ObjectAndVariable1,object);
		}
		HX_STACK_LINE(172)
		if (((pathToVariable == null()))){
			HX_STACK_LINE(173)
			return null();
		}
		HX_STACK_LINE(175)
		Dynamic object = pathToVariable->__Field(HX_CSTRING("object"),true);		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(176)
		::String varName = pathToVariable->__Field(HX_CSTRING("variableName"),true);		HX_STACK_VAR(varName,"varName");
		HX_STACK_LINE(177)
		Dynamic variable = null();		HX_STACK_VAR(variable,"variable");
		HX_STACK_LINE(178)
		::Class arrayType = null();		HX_STACK_VAR(arrayType,"arrayType");
		HX_STACK_LINE(179)
		bool isArrayIndex = false;		HX_STACK_VAR(isArrayIndex,"isArrayIndex");
		HX_STACK_LINE(182)
		Dynamic index = (int)-1;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(183)
		int bracketStart = varName.lastIndexOf(HX_CSTRING("["),null());		HX_STACK_VAR(bracketStart,"bracketStart");
		HX_STACK_LINE(184)
		if (((bracketStart != (int)-1))){
			HX_STACK_LINE(186)
			::String bracket = varName.substr((bracketStart + (int)1),null());		HX_STACK_VAR(bracket,"bracket");
			HX_STACK_LINE(187)
			::String _g1 = bracket.substr((int)0,(bracket.length - (int)1));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(187)
			Dynamic _g2 = ::Std_obj::parseInt(_g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(187)
			index = _g2;
			HX_STACK_LINE(188)
			if (((index == null()))){
				HX_STACK_LINE(190)
				::flixel::FlxG_obj::log->advanced(((HX_CSTRING("set: '") + ObjectAndVariable) + HX_CSTRING("' invalid syntax")),::flixel::system::debug::LogStyle_obj::ERROR,true);
				HX_STACK_LINE(191)
				return null();
			}
			HX_STACK_LINE(193)
			::String _g3 = varName.substr((int)0,bracketStart);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(193)
			varName = _g3;
			HX_STACK_LINE(194)
			isArrayIndex = true;
		}
		HX_STACK_LINE(197)
		try
		{
		HX_STACK_CATCHABLE(Dynamic, 0);
		{
			HX_STACK_LINE(199)
			Dynamic _g4 = ::flixel::system::debug::ConsoleUtil_obj::resolveProperty(object,varName);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(199)
			variable = _g4;
		}
		}
		catch(Dynamic __e){
			{
				HX_STACK_BEGIN_CATCH
				Dynamic e = __e;{
					HX_STACK_LINE(203)
					return null();
				}
			}
		}
		HX_STACK_LINE(206)
		if (((variable == null()))){
			HX_STACK_LINE(208)
			::flixel::FlxG_obj::log->advanced(((HX_CSTRING("set: '") + ObjectAndVariable) + HX_CSTRING("' could not be found")),::flixel::system::debug::LogStyle_obj::ERROR,true);
			HX_STACK_LINE(209)
			return null();
		}
		HX_STACK_LINE(212)
		if (((bool(!(isArrayIndex)) && bool((index >= (int)0))))){
			HX_STACK_LINE(214)
			::flixel::FlxG_obj::log->advanced(((HX_CSTRING("set: '") + ObjectAndVariable) + HX_CSTRING("' is an invalid array access")),::flixel::system::debug::LogStyle_obj::ERROR,true);
			HX_STACK_LINE(215)
			return null();
		}
		HX_STACK_LINE(218)
		if (((bool(isArrayIndex) && bool((variable->__Field(HX_CSTRING("length"),true) <= index))))){
			HX_STACK_LINE(220)
			{
				HX_STACK_LINE(220)
				::String _g10;		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(220)
				{
					HX_STACK_LINE(220)
					::Class cl;		HX_STACK_VAR(cl,"cl");
					HX_STACK_LINE(220)
					if ((::Std_obj::is(variable,hx::ClassOf< ::Class >()))){
						HX_STACK_LINE(220)
						cl = variable;
					}
					else{
						HX_STACK_LINE(220)
						::Class _g5 = ::Type_obj::getClass(variable);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(220)
						cl = _g5;
					}
					HX_STACK_LINE(220)
					::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
					HX_STACK_LINE(220)
					if (((s != null()))){
						HX_STACK_LINE(220)
						::String _g6 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g6,"_g6");
						HX_STACK_LINE(220)
						s = _g6;
						HX_STACK_LINE(220)
						int _g7 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g7,"_g7");
						HX_STACK_LINE(220)
						int _g8 = (_g7 + (int)1);		HX_STACK_VAR(_g8,"_g8");
						HX_STACK_LINE(220)
						::String _g9 = s.substr(_g8,null());		HX_STACK_VAR(_g9,"_g9");
						HX_STACK_LINE(220)
						s = _g9;
					}
					HX_STACK_LINE(220)
					_g10 = s;
				}
				HX_STACK_LINE(220)
				::String _g11 = (((HX_CSTRING("set: '") + varName) + HX_CSTRING(":")) + _g10);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(220)
				::String _g12 = (_g11 + HX_CSTRING("' cannot access indice "));		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(220)
				Dynamic Data = (_g12 + index);		HX_STACK_VAR(Data,"Data");
				HX_STACK_LINE(220)
				::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
			}
			HX_STACK_LINE(221)
			return null();
		}
		HX_STACK_LINE(225)
		if ((::Std_obj::is((  ((isArrayIndex)) ? Dynamic(variable->__GetItem(index)) : Dynamic(variable) ),hx::ClassOf< Array<int> >()))){
			HX_STACK_LINE(227)
			Dynamic arrayValue = ::flixel::system::debug::ConsoleUtil_obj::parseArray(NewVariableValue);		HX_STACK_VAR(arrayValue,"arrayValue");
			HX_STACK_LINE(228)
			if (((arrayValue == null()))){
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					::String _g13 = ::Std_obj::string(NewVariableValue);		HX_STACK_VAR(_g13,"_g13");
					HX_STACK_LINE(230)
					::String _g14 = (HX_CSTRING("set: '") + _g13);		HX_STACK_VAR(_g14,"_g14");
					HX_STACK_LINE(230)
					::String _g15 = (_g14 + HX_CSTRING("' is not a valid value for Array '"));		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(230)
					::String _g16 = (_g15 + varName);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(230)
					Dynamic Data = (_g16 + HX_CSTRING("'"));		HX_STACK_VAR(Data,"Data");
					HX_STACK_LINE(230)
					::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
				}
				HX_STACK_LINE(231)
				return null();
			}
			HX_STACK_LINE(233)
			NewVariableValue = arrayValue;
		}
		HX_STACK_LINE(237)
		if ((::Std_obj::is((  ((isArrayIndex)) ? Dynamic(variable->__GetItem(index)) : Dynamic(variable) ),hx::ClassOf< ::Bool >()))){
			HX_STACK_LINE(239)
			::String oldVal = NewVariableValue;		HX_STACK_VAR(oldVal,"oldVal");
			HX_STACK_LINE(240)
			Dynamic _g17 = ::flixel::system::debug::ConsoleUtil_obj::parseBool(NewVariableValue);		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(240)
			NewVariableValue = _g17;
			HX_STACK_LINE(242)
			if (((NewVariableValue == null()))){
				HX_STACK_LINE(244)
				::flixel::FlxG_obj::log->advanced(((((HX_CSTRING("set: '") + oldVal) + HX_CSTRING("' is not a valid value for Bool '")) + varName) + HX_CSTRING("'")),::flixel::system::debug::LogStyle_obj::ERROR,true);
				HX_STACK_LINE(245)
				return null();
			}
		}
		struct _Function_1_1{
			inline static bool Block( Dynamic &NewVariableValue){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/debug/ConsoleCommands.hx",250,0x4441c1e8)
				{
					HX_STACK_LINE(250)
					Float _g18 = ::Std_obj::parseFloat(NewVariableValue);		HX_STACK_VAR(_g18,"_g18");
					HX_STACK_LINE(250)
					return ::Math_obj::isNaN(_g18);
				}
				return null();
			}
		};
		HX_STACK_LINE(250)
		if (((  ((::Std_obj::is((  ((isArrayIndex)) ? Dynamic(variable->__GetItem(index)) : Dynamic(variable) ),hx::ClassOf< ::Float >()))) ? bool(_Function_1_1::Block(NewVariableValue)) : bool(false) ))){
			HX_STACK_LINE(252)
			{
				HX_STACK_LINE(252)
				::String _g19 = ::Std_obj::string(NewVariableValue);		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(252)
				::String _g20 = (HX_CSTRING("set: '") + _g19);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(252)
				::String _g21 = (_g20 + HX_CSTRING("' is not a valid value for number '"));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(252)
				::String _g22 = (_g21 + varName);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(252)
				Dynamic Data = (_g22 + HX_CSTRING("'"));		HX_STACK_VAR(Data,"Data");
				HX_STACK_LINE(252)
				::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
			}
			HX_STACK_LINE(253)
			return null();
		}
		else{
			HX_STACK_LINE(256)
			if (((  (((  (((  ((!(::Std_obj::is((  ((isArrayIndex)) ? Dynamic(variable->__GetItem(index)) : Dynamic(variable) ),hx::ClassOf< ::Float >())))) ? bool(!(::Std_obj::is((  ((isArrayIndex)) ? Dynamic(variable->__GetItem(index)) : Dynamic(variable) ),hx::ClassOf< ::Bool >()))) : bool(false) ))) ? bool(!(::Std_obj::is((  ((isArrayIndex)) ? Dynamic(variable->__GetItem(index)) : Dynamic(variable) ),hx::ClassOf< ::String >()))) : bool(false) ))) ? bool(!(::Std_obj::is((  ((isArrayIndex)) ? Dynamic(variable->__GetItem(index)) : Dynamic(variable) ),hx::ClassOf< Array<int> >()))) : bool(false) ))){
				HX_STACK_LINE(258)
				{
					HX_STACK_LINE(258)
					::String _g28;		HX_STACK_VAR(_g28,"_g28");
					HX_STACK_LINE(258)
					{
						HX_STACK_LINE(258)
						Dynamic Obj;		HX_STACK_VAR(Obj,"Obj");
						HX_STACK_LINE(258)
						if ((isArrayIndex)){
							HX_STACK_LINE(258)
							Obj = variable->__GetItem(index);
						}
						else{
							HX_STACK_LINE(258)
							Obj = variable;
						}
						HX_STACK_LINE(258)
						::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(258)
						if ((::Std_obj::is(Obj,hx::ClassOf< ::Class >()))){
							HX_STACK_LINE(258)
							cl = Obj;
						}
						else{
							HX_STACK_LINE(258)
							::Class _g23 = ::Type_obj::getClass(Obj);		HX_STACK_VAR(_g23,"_g23");
							HX_STACK_LINE(258)
							cl = _g23;
						}
						HX_STACK_LINE(258)
						::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(258)
						if (((s != null()))){
							HX_STACK_LINE(258)
							::String _g24 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g24,"_g24");
							HX_STACK_LINE(258)
							s = _g24;
							HX_STACK_LINE(258)
							int _g25 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g25,"_g25");
							HX_STACK_LINE(258)
							int _g26 = (_g25 + (int)1);		HX_STACK_VAR(_g26,"_g26");
							HX_STACK_LINE(258)
							::String _g27 = s.substr(_g26,null());		HX_STACK_VAR(_g27,"_g27");
							HX_STACK_LINE(258)
							s = _g27;
						}
						HX_STACK_LINE(258)
						_g28 = s;
					}
					HX_STACK_LINE(258)
					::String _g29 = (((HX_CSTRING("set: '") + varName) + HX_CSTRING(":")) + _g28);		HX_STACK_VAR(_g29,"_g29");
					HX_STACK_LINE(258)
					Dynamic Data = (_g29 + HX_CSTRING("' is not of a simple type (number, bool, string or array)"));		HX_STACK_VAR(Data,"Data");
					HX_STACK_LINE(258)
					::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
				}
				HX_STACK_LINE(259)
				return null();
			}
		}
		HX_STACK_LINE(262)
		if ((isArrayIndex)){
			HX_STACK_LINE(264)
			hx::IndexRef((variable).mPtr,index) = NewVariableValue;
		}
		else{
			HX_STACK_LINE(268)
			if (((object != null()))){
				HX_STACK_LINE(268)
				object->__SetField(varName,NewVariableValue,true);
			}
		}
		HX_STACK_LINE(270)
		{
			HX_STACK_LINE(270)
			::String _g35;		HX_STACK_VAR(_g35,"_g35");
			HX_STACK_LINE(270)
			{
				HX_STACK_LINE(270)
				::Class cl;		HX_STACK_VAR(cl,"cl");
				HX_STACK_LINE(270)
				if ((::Std_obj::is(object,hx::ClassOf< ::Class >()))){
					HX_STACK_LINE(270)
					cl = object;
				}
				else{
					HX_STACK_LINE(270)
					::Class _g30 = ::Type_obj::getClass(object);		HX_STACK_VAR(_g30,"_g30");
					HX_STACK_LINE(270)
					cl = _g30;
				}
				HX_STACK_LINE(270)
				::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
				HX_STACK_LINE(270)
				if (((s != null()))){
					HX_STACK_LINE(270)
					::String _g31 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(270)
					s = _g31;
					HX_STACK_LINE(270)
					int _g32 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g32,"_g32");
					HX_STACK_LINE(270)
					int _g33 = (_g32 + (int)1);		HX_STACK_VAR(_g33,"_g33");
					HX_STACK_LINE(270)
					::String _g34 = s.substr(_g33,null());		HX_STACK_VAR(_g34,"_g34");
					HX_STACK_LINE(270)
					s = _g34;
				}
				HX_STACK_LINE(270)
				_g35 = s;
			}
			HX_STACK_LINE(270)
			::String _g36 = (HX_CSTRING("set: ") + _g35);		HX_STACK_VAR(_g36,"_g36");
			HX_STACK_LINE(270)
			::String _g37 = (_g36 + HX_CSTRING("."));		HX_STACK_VAR(_g37,"_g37");
			HX_STACK_LINE(270)
			::String _g38 = (_g37 + varName);		HX_STACK_VAR(_g38,"_g38");
			HX_STACK_LINE(270)
			::String _g39;		HX_STACK_VAR(_g39,"_g39");
			HX_STACK_LINE(270)
			_g39 = (_g38 + ((  ((isArrayIndex)) ? ::String(((HX_CSTRING("[") + index) + HX_CSTRING("]"))) : ::String(HX_CSTRING("")) )));
			HX_STACK_LINE(270)
			::String _g40 = (_g39 + HX_CSTRING(" is now "));		HX_STACK_VAR(_g40,"_g40");
			HX_STACK_LINE(270)
			::String _g41 = ::Std_obj::string(NewVariableValue);		HX_STACK_VAR(_g41,"_g41");
			HX_STACK_LINE(270)
			Dynamic Text = (_g40 + _g41);		HX_STACK_VAR(Text,"Text");
			HX_STACK_LINE(270)
			::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(Text)),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
		}
		HX_STACK_LINE(272)
		if (((WatchName != null()))){
			HX_STACK_LINE(273)
			::flixel::FlxG_obj::game->debugger->watch->add(object,varName,WatchName);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(ConsoleCommands_obj,set,(void))

Void ConsoleCommands_obj::fields( ::String ObjectAndVariable,hx::Null< int >  __o_NumSuperClassesToInclude){
int NumSuperClassesToInclude = __o_NumSuperClassesToInclude.Default(0);
	HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","fields",0x70521670,"flixel.system.debug.ConsoleCommands.fields","flixel/system/debug/ConsoleCommands.hx",277,0x4441c1e8)
	HX_STACK_THIS(this)
	HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
	HX_STACK_ARG(NumSuperClassesToInclude,"NumSuperClassesToInclude")
{
		HX_STACK_LINE(278)
		Dynamic pathToVariable;		HX_STACK_VAR(pathToVariable,"pathToVariable");
		HX_STACK_LINE(278)
		{
			HX_STACK_LINE(278)
			::String ObjectAndVariable1 = ObjectAndVariable;		HX_STACK_VAR(ObjectAndVariable1,"ObjectAndVariable1");
			HX_STACK_LINE(278)
			Array< ::String > splitString = ObjectAndVariable1.split(HX_CSTRING("."));		HX_STACK_VAR(splitString,"splitString");
			HX_STACK_LINE(278)
			Dynamic object = this->_console->registeredObjects->get(splitString->__get((int)0));		HX_STACK_VAR(object,"object");
			HX_STACK_LINE(278)
			splitString->shift();
			HX_STACK_LINE(278)
			::String _g = splitString->join(HX_CSTRING("."));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(278)
			ObjectAndVariable1 = _g;
			HX_STACK_LINE(278)
			pathToVariable = ::flixel::system::debug::ConsoleUtil_obj::resolveObjectAndVariable(ObjectAndVariable1,object);
		}
		HX_STACK_LINE(281)
		if (((pathToVariable == null()))){
			HX_STACK_LINE(282)
			return null();
		}
		HX_STACK_LINE(284)
		Array< ::String > fields = Array_obj< ::String >::__new();		HX_STACK_VAR(fields,"fields");
		HX_STACK_LINE(285)
		bool isClass = ::Std_obj::is(pathToVariable->__Field(HX_CSTRING("object"),true),hx::ClassOf< ::Class >());		HX_STACK_VAR(isClass,"isClass");
		HX_STACK_LINE(288)
		if (((bool(isClass) && bool((pathToVariable->__Field(HX_CSTRING("variableName"),true) == HX_CSTRING("")))))){
			HX_STACK_LINE(290)
			Array< ::String > _g1 = ::Type_obj::getClassFields(pathToVariable->__Field(HX_CSTRING("object"),true));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(290)
			fields = _g1;
		}
		else{
			HX_STACK_LINE(294)
			Dynamic instance;		HX_STACK_VAR(instance,"instance");
			HX_STACK_LINE(294)
			{
				HX_STACK_LINE(294)
				Dynamic o = pathToVariable->__Field(HX_CSTRING("object"),true);		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(294)
				if (((o == null()))){
					HX_STACK_LINE(294)
					instance = null();
				}
				else{
					HX_STACK_LINE(294)
					instance = o->__Field(pathToVariable->__Field(HX_CSTRING("variableName"),true),true);
				}
			}
			HX_STACK_LINE(295)
			if (((instance == null()))){
				HX_STACK_LINE(296)
				return null();
			}
			HX_STACK_LINE(298)
			::Class cl = ::Type_obj::getClass(instance);		HX_STACK_VAR(cl,"cl");
			HX_STACK_LINE(299)
			Array< ::String > _g2 = ::flixel::system::debug::ConsoleUtil_obj::getInstanceFieldsAdvanced(cl,NumSuperClassesToInclude);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(299)
			fields = _g2;
		}
		HX_STACK_LINE(302)
		Dynamic object;		HX_STACK_VAR(object,"object");
		HX_STACK_LINE(302)
		if ((isClass)){
			HX_STACK_LINE(302)
			object = pathToVariable->__Field(HX_CSTRING("object"),true);
		}
		else{
			HX_STACK_LINE(303)
			Dynamic o = pathToVariable->__Field(HX_CSTRING("object"),true);		HX_STACK_VAR(o,"o");
			HX_STACK_LINE(303)
			if (((o == null()))){
				HX_STACK_LINE(303)
				object = null();
			}
			else{
				HX_STACK_LINE(303)
				object = o->__Field(pathToVariable->__Field(HX_CSTRING("variableName"),true),true);
			}
		}
		HX_STACK_LINE(305)
		{
			HX_STACK_LINE(305)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(305)
			int _g = fields->length;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(305)
			while((true)){
				HX_STACK_LINE(305)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(305)
					break;
				}
				HX_STACK_LINE(305)
				int i = (_g1)++;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(307)
				Dynamic _g3;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(307)
				_g3 = (  (((object == null()))) ? Dynamic(null()) : Dynamic(object->__Field(fields->__get(i),true)) );
				HX_STACK_LINE(307)
				::String _g4 = ::flixel::system::debug::ConsoleUtil_obj::getTypeName(_g3);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(307)
				hx::AddEq(fields[i],(HX_CSTRING(":") + _g4));
			}
		}
		HX_STACK_LINE(310)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add((HX_CSTRING("fields: list of fields for ") + ObjectAndVariable))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
		HX_STACK_LINE(311)
		::String output = HX_CSTRING("");		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(312)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(312)
			while((true)){
				HX_STACK_LINE(312)
				if ((!(((_g < fields->length))))){
					HX_STACK_LINE(312)
					break;
				}
				HX_STACK_LINE(312)
				::String field = fields->__get(_g);		HX_STACK_VAR(field,"field");
				HX_STACK_LINE(312)
				++(_g);
				HX_STACK_LINE(314)
				hx::AddEq(output,(field + HX_CSTRING("\n")));
			}
		}
		HX_STACK_LINE(316)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(output)),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleCommands_obj,fields,(void))

Void ConsoleCommands_obj::call( ::String FunctionAlias,Array< ::String > Params){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","call",0x2708e4d5,"flixel.system.debug.ConsoleCommands.call","flixel/system/debug/ConsoleCommands.hx",320,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(FunctionAlias,"FunctionAlias")
		HX_STACK_ARG(Params,"Params")
		HX_STACK_LINE(321)
		if (((Params == null()))){
			HX_STACK_LINE(322)
			Params = Array_obj< ::String >::__new();
		}
		HX_STACK_LINE(325)
		Dynamic func = this->_console->registeredFunctions->get(FunctionAlias);		HX_STACK_VAR(func,"func");
		HX_STACK_LINE(328)
		if ((!(::Reflect_obj::isFunction(func)))){
			HX_STACK_LINE(330)
			Array< ::String > searchArr = FunctionAlias.split(HX_CSTRING("."));		HX_STACK_VAR(searchArr,"searchArr");
			HX_STACK_LINE(331)
			::String objectName = searchArr->shift();		HX_STACK_VAR(objectName,"objectName");
			HX_STACK_LINE(332)
			Dynamic object = this->_console->registeredObjects->get(objectName);		HX_STACK_VAR(object,"object");
			HX_STACK_LINE(334)
			if ((!(::Reflect_obj::isObject(object)))){
				HX_STACK_LINE(336)
				{
					HX_STACK_LINE(336)
					::String _g5;		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(336)
					{
						HX_STACK_LINE(336)
						::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(336)
						if ((::Std_obj::is(object,hx::ClassOf< ::Class >()))){
							HX_STACK_LINE(336)
							cl = object;
						}
						else{
							HX_STACK_LINE(336)
							::Class _g = ::Type_obj::getClass(object);		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(336)
							cl = _g;
						}
						HX_STACK_LINE(336)
						::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(336)
						if (((s != null()))){
							HX_STACK_LINE(336)
							::String _g1 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(336)
							s = _g1;
							HX_STACK_LINE(336)
							int _g2 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(336)
							int _g3 = (_g2 + (int)1);		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(336)
							::String _g4 = s.substr(_g3,null());		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(336)
							s = _g4;
						}
						HX_STACK_LINE(336)
						_g5 = s;
					}
					HX_STACK_LINE(336)
					::String _g6 = (HX_CSTRING("call: '") + _g5);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(336)
					Dynamic Data = (_g6 + HX_CSTRING("' is not a valid Object to call"));		HX_STACK_VAR(Data,"Data");
					HX_STACK_LINE(336)
					::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
				}
				HX_STACK_LINE(337)
				return null();
			}
			HX_STACK_LINE(340)
			Dynamic tempObj = object;		HX_STACK_VAR(tempObj,"tempObj");
			HX_STACK_LINE(341)
			::String tempVarName = HX_CSTRING("");		HX_STACK_VAR(tempVarName,"tempVarName");
			HX_STACK_LINE(342)
			::String funcName = HX_CSTRING("");		HX_STACK_VAR(funcName,"funcName");
			HX_STACK_LINE(343)
			int l = (searchArr->length - (int)1);		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(344)
			{
				HX_STACK_LINE(344)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(344)
				while((true)){
					HX_STACK_LINE(344)
					if ((!(((_g < l))))){
						HX_STACK_LINE(344)
						break;
					}
					HX_STACK_LINE(344)
					int i = (_g)++;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(346)
					tempVarName = searchArr->__get(i);
					HX_STACK_LINE(348)
					try
					{
					HX_STACK_CATCHABLE(Dynamic, 0);
					{
						HX_STACK_LINE(350)
						Dynamic prop;		HX_STACK_VAR(prop,"prop");
						HX_STACK_LINE(350)
						prop = (  (((tempObj == null()))) ? Dynamic(null()) : Dynamic(tempObj->__Field(tempVarName,true)) );
					}
					}
					catch(Dynamic __e){
						{
							HX_STACK_BEGIN_CATCH
							Dynamic e = __e;{
								HX_STACK_LINE(354)
								{
									HX_STACK_LINE(354)
									::String _g12;		HX_STACK_VAR(_g12,"_g12");
									HX_STACK_LINE(354)
									{
										HX_STACK_LINE(354)
										::Class cl;		HX_STACK_VAR(cl,"cl");
										HX_STACK_LINE(354)
										if ((::Std_obj::is(tempObj,hx::ClassOf< ::Class >()))){
											HX_STACK_LINE(354)
											cl = tempObj;
										}
										else{
											HX_STACK_LINE(354)
											::Class _g7 = ::Type_obj::getClass(tempObj);		HX_STACK_VAR(_g7,"_g7");
											HX_STACK_LINE(354)
											cl = _g7;
										}
										HX_STACK_LINE(354)
										::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
										HX_STACK_LINE(354)
										if (((s != null()))){
											HX_STACK_LINE(354)
											::String _g8 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g8,"_g8");
											HX_STACK_LINE(354)
											s = _g8;
											HX_STACK_LINE(354)
											int _g9 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g9,"_g9");
											HX_STACK_LINE(354)
											int _g10 = (_g9 + (int)1);		HX_STACK_VAR(_g10,"_g10");
											HX_STACK_LINE(354)
											::String _g11 = s.substr(_g10,null());		HX_STACK_VAR(_g11,"_g11");
											HX_STACK_LINE(354)
											s = _g11;
										}
										HX_STACK_LINE(354)
										_g12 = s;
									}
									HX_STACK_LINE(354)
									::String _g13 = (HX_CSTRING("call: ") + _g12);		HX_STACK_VAR(_g13,"_g13");
									HX_STACK_LINE(354)
									::String _g14 = (_g13 + HX_CSTRING(" does not have a field '"));		HX_STACK_VAR(_g14,"_g14");
									HX_STACK_LINE(354)
									::String _g15 = (_g14 + tempVarName);		HX_STACK_VAR(_g15,"_g15");
									HX_STACK_LINE(354)
									Dynamic Data = (_g15 + HX_CSTRING("' to call"));		HX_STACK_VAR(Data,"Data");
									HX_STACK_LINE(354)
									::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
								}
								HX_STACK_LINE(355)
								return null();
							}
						}
					}
					HX_STACK_LINE(358)
					Dynamic _g16;		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(358)
					_g16 = (  (((tempObj == null()))) ? Dynamic(null()) : Dynamic(tempObj->__Field(tempVarName,true)) );
					HX_STACK_LINE(358)
					tempObj = _g16;
				}
			}
			HX_STACK_LINE(361)
			Dynamic _g17 = ::Reflect_obj::field(tempObj,searchArr->__get(l));		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(361)
			func = _g17;
			HX_STACK_LINE(363)
			if (((func == null()))){
				HX_STACK_LINE(365)
				{
					HX_STACK_LINE(365)
					::String _g23;		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(365)
					{
						HX_STACK_LINE(365)
						::Class cl;		HX_STACK_VAR(cl,"cl");
						HX_STACK_LINE(365)
						if ((::Std_obj::is(tempObj,hx::ClassOf< ::Class >()))){
							HX_STACK_LINE(365)
							cl = tempObj;
						}
						else{
							HX_STACK_LINE(365)
							::Class _g18 = ::Type_obj::getClass(tempObj);		HX_STACK_VAR(_g18,"_g18");
							HX_STACK_LINE(365)
							cl = _g18;
						}
						HX_STACK_LINE(365)
						::String s = ::Type_obj::getClassName(cl);		HX_STACK_VAR(s,"s");
						HX_STACK_LINE(365)
						if (((s != null()))){
							HX_STACK_LINE(365)
							::String _g19 = ::StringTools_obj::replace(s,HX_CSTRING("::"),HX_CSTRING("."));		HX_STACK_VAR(_g19,"_g19");
							HX_STACK_LINE(365)
							s = _g19;
							HX_STACK_LINE(365)
							int _g20 = s.lastIndexOf(HX_CSTRING("."),null());		HX_STACK_VAR(_g20,"_g20");
							HX_STACK_LINE(365)
							int _g21 = (_g20 + (int)1);		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(365)
							::String _g22 = s.substr(_g21,null());		HX_STACK_VAR(_g22,"_g22");
							HX_STACK_LINE(365)
							s = _g22;
						}
						HX_STACK_LINE(365)
						_g23 = s;
					}
					HX_STACK_LINE(365)
					::String _g24 = (HX_CSTRING("call: ") + _g23);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(365)
					::String _g25 = (_g24 + HX_CSTRING(" does not have a method '"));		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(365)
					::String _g26 = (_g25 + searchArr->__get(l));		HX_STACK_VAR(_g26,"_g26");
					HX_STACK_LINE(365)
					Dynamic Data = (_g26 + HX_CSTRING("' to call"));		HX_STACK_VAR(Data,"Data");
					HX_STACK_LINE(365)
					::flixel::FlxG_obj::log->advanced(Data,::flixel::system::debug::LogStyle_obj::ERROR,true);
				}
				HX_STACK_LINE(366)
				return null();
			}
		}
		HX_STACK_LINE(370)
		if ((::Reflect_obj::isFunction(func))){
			HX_STACK_LINE(372)
			bool success = ::flixel::system::debug::ConsoleUtil_obj::callFunction(func,Params);		HX_STACK_VAR(success,"success");
			HX_STACK_LINE(374)
			if (((bool((Params->length == (int)0)) && bool(success)))){
				HX_STACK_LINE(375)
				::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(((HX_CSTRING("call: Called '") + FunctionAlias) + HX_CSTRING("()'")))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
			}
			else{
				HX_STACK_LINE(377)
				if ((success)){
					HX_STACK_LINE(378)
					::String _g27 = ::Std_obj::string(Params);		HX_STACK_VAR(_g27,"_g27");
					HX_STACK_LINE(378)
					Dynamic Text = (((HX_CSTRING("call: Called '") + FunctionAlias) + HX_CSTRING("()' with params ")) + _g27);		HX_STACK_VAR(Text,"Text");
					HX_STACK_LINE(378)
					::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(Text)),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
				}
			}
		}
		else{
			HX_STACK_LINE(382)
			::flixel::FlxG_obj::log->advanced(((HX_CSTRING("call: '") + FunctionAlias) + HX_CSTRING("' is not a valid function")),::flixel::system::debug::LogStyle_obj::ERROR,true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(ConsoleCommands_obj,call,(void))

Void ConsoleCommands_obj::listObjects( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","listObjects",0x368814bf,"flixel.system.debug.ConsoleCommands.listObjects","flixel/system/debug/ConsoleCommands.hx",388,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(388)
		::String _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(388)
		{
			HX_STACK_LINE(388)
			::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
			HX_STACK_LINE(388)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_console->registeredObjects->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(388)
					::String _g = ::Std_obj::string(key);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(388)
					hx::AddEq(string,_g);
					HX_STACK_LINE(388)
					hx::AddEq(string,HX_CSTRING(", "));
				}
;
			}
			HX_STACK_LINE(388)
			_g1 = string.substring((int)0,(string.length - (int)2));
		}
		HX_STACK_LINE(388)
		Dynamic Text = (HX_CSTRING("Objects registered: \n") + _g1);		HX_STACK_VAR(Text,"Text");
		HX_STACK_LINE(388)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(Text)),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listObjects,(void))

Void ConsoleCommands_obj::listFunctions( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","listFunctions",0x68aec706,"flixel.system.debug.ConsoleCommands.listFunctions","flixel/system/debug/ConsoleCommands.hx",393,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(393)
		::String _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(393)
		{
			HX_STACK_LINE(393)
			::String string = HX_CSTRING("");		HX_STACK_VAR(string,"string");
			HX_STACK_LINE(393)
			for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(this->_console->registeredFunctions->keys());  __it->hasNext(); ){
				::String key = __it->next();
				{
					HX_STACK_LINE(393)
					::String _g = ::Std_obj::string(key);		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(393)
					hx::AddEq(string,_g);
					HX_STACK_LINE(393)
					hx::AddEq(string,HX_CSTRING(", "));
				}
;
			}
			HX_STACK_LINE(393)
			_g1 = string.substring((int)0,(string.length - (int)2));
		}
		HX_STACK_LINE(393)
		Dynamic Text = (HX_CSTRING("Functions registered: \n") + _g1);		HX_STACK_VAR(Text,"Text");
		HX_STACK_LINE(393)
		::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(Text)),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,listFunctions,(void))

Void ConsoleCommands_obj::watchMouse( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","watchMouse",0x61fb80cd,"flixel.system.debug.ConsoleCommands.watchMouse","flixel/system/debug/ConsoleCommands.hx",397,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(398)
		if ((!(this->_watchingMouse))){
			HX_STACK_LINE(400)
			::flixel::FlxG_obj::game->debugger->watch->add(hx::ClassOf< ::flixel::FlxG >(),HX_CSTRING("mouse"),HX_CSTRING("Mouse Position"));
			HX_STACK_LINE(401)
			::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("watchMouse: Mouse position added to watch window"))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
		}
		else{
			HX_STACK_LINE(405)
			::flixel::FlxG_obj::game->debugger->watch->remove(hx::ClassOf< ::flixel::FlxG >(),HX_CSTRING("mouse"),null());
			HX_STACK_LINE(406)
			::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("watchMouse: Mouse position removed from watch window"))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
		}
		HX_STACK_LINE(409)
		this->_watchingMouse = !(this->_watchingMouse);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,watchMouse,(void))

Void ConsoleCommands_obj::track( ::String ObjectAndVariable){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","track",0xd5c37274,"flixel.system.debug.ConsoleCommands.track","flixel/system/debug/ConsoleCommands.hx",414,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_ARG(ObjectAndVariable,"ObjectAndVariable")
		HX_STACK_LINE(414)
		if (((ObjectAndVariable != null()))){
			HX_STACK_LINE(416)
			Dynamic pathToVariable;		HX_STACK_VAR(pathToVariable,"pathToVariable");
			HX_STACK_LINE(416)
			{
				HX_STACK_LINE(416)
				::String ObjectAndVariable1 = ObjectAndVariable;		HX_STACK_VAR(ObjectAndVariable1,"ObjectAndVariable1");
				HX_STACK_LINE(416)
				Array< ::String > splitString = ObjectAndVariable1.split(HX_CSTRING("."));		HX_STACK_VAR(splitString,"splitString");
				HX_STACK_LINE(416)
				Dynamic object = this->_console->registeredObjects->get(splitString->__get((int)0));		HX_STACK_VAR(object,"object");
				HX_STACK_LINE(416)
				splitString->shift();
				HX_STACK_LINE(416)
				::String _g = splitString->join(HX_CSTRING("."));		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(416)
				ObjectAndVariable1 = _g;
				HX_STACK_LINE(416)
				pathToVariable = ::flixel::system::debug::ConsoleUtil_obj::resolveObjectAndVariable(ObjectAndVariable1,object);
			}
			HX_STACK_LINE(417)
			Dynamic _g1;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(417)
			{
				HX_STACK_LINE(417)
				Dynamic o = pathToVariable->__Field(HX_CSTRING("object"),true);		HX_STACK_VAR(o,"o");
				HX_STACK_LINE(417)
				if (((o == null()))){
					HX_STACK_LINE(417)
					_g1 = null();
				}
				else{
					HX_STACK_LINE(417)
					_g1 = o->__Field(pathToVariable->__Field(HX_CSTRING("variableName"),true),true);
				}
			}
			HX_STACK_LINE(417)
			::flixel::FlxG_obj::debugger->track(_g1,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(ConsoleCommands_obj,track,(void))

Void ConsoleCommands_obj::pause( ){
{
		HX_STACK_FRAME("flixel.system.debug.ConsoleCommands","pause",0x7cfbbadf,"flixel.system.debug.ConsoleCommands.pause","flixel/system/debug/ConsoleCommands.hx",423,0x4441c1e8)
		HX_STACK_THIS(this)
		HX_STACK_LINE(423)
		if ((::flixel::FlxG_obj::vcr->paused)){
			HX_STACK_LINE(425)
			::flixel::FlxG_obj::vcr->resume();
			HX_STACK_LINE(426)
			::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("pause: Game unpaused"))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
		}
		else{
			HX_STACK_LINE(430)
			::flixel::FlxG_obj::vcr->pause();
			HX_STACK_LINE(431)
			::flixel::FlxG_obj::log->advanced(Dynamic( Array_obj<Dynamic>::__new().Add(HX_CSTRING("pause: Game paused"))),::flixel::system::debug::LogStyle_obj::CONSOLE,null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(ConsoleCommands_obj,pause,(void))


ConsoleCommands_obj::ConsoleCommands_obj()
{
}

void ConsoleCommands_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ConsoleCommands);
	HX_MARK_MEMBER_NAME(_console,"_console");
	HX_MARK_MEMBER_NAME(_watchingMouse,"_watchingMouse");
	HX_MARK_END_CLASS();
}

void ConsoleCommands_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_console,"_console");
	HX_VISIT_MEMBER_NAME(_watchingMouse,"_watchingMouse");
}

Dynamic ConsoleCommands_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"help") ) { return help_dyn(); }
		if (HX_FIELD_EQ(inName,"call") ) { return call_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		if (HX_FIELD_EQ(inName,"track") ) { return track_dyn(); }
		if (HX_FIELD_EQ(inName,"pause") ) { return pause_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"fields") ) { return fields_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { return _console; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"resetGame") ) { return resetGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"resetState") ) { return resetState_dyn(); }
		if (HX_FIELD_EQ(inName,"watchMouse") ) { return watchMouse_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"switchState") ) { return switchState_dyn(); }
		if (HX_FIELD_EQ(inName,"listObjects") ) { return listObjects_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clearHistory") ) { return clearHistory_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listFunctions") ) { return listFunctions_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { return _watchingMouse; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic ConsoleCommands_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_console") ) { _console=inValue.Cast< ::flixel::system::debug::Console >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_watchingMouse") ) { _watchingMouse=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ConsoleCommands_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_console"));
	outFields->push(HX_CSTRING("_watchingMouse"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::system::debug::Console*/ ,(int)offsetof(ConsoleCommands_obj,_console),HX_CSTRING("_console")},
	{hx::fsBool,(int)offsetof(ConsoleCommands_obj,_watchingMouse),HX_CSTRING("_watchingMouse")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_console"),
	HX_CSTRING("_watchingMouse"),
	HX_CSTRING("help"),
	HX_CSTRING("close"),
	HX_CSTRING("clearHistory"),
	HX_CSTRING("resetState"),
	HX_CSTRING("switchState"),
	HX_CSTRING("resetGame"),
	HX_CSTRING("create"),
	HX_CSTRING("set"),
	HX_CSTRING("fields"),
	HX_CSTRING("call"),
	HX_CSTRING("listObjects"),
	HX_CSTRING("listFunctions"),
	HX_CSTRING("watchMouse"),
	HX_CSTRING("track"),
	HX_CSTRING("pause"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ConsoleCommands_obj::__mClass,"__mClass");
};

#endif

Class ConsoleCommands_obj::__mClass;

void ConsoleCommands_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.system.debug.ConsoleCommands"), hx::TCanCast< ConsoleCommands_obj> ,sStaticFields,sMemberFields,
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

void ConsoleCommands_obj::__boot()
{
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
