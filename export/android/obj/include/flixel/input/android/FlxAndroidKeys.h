#ifndef INCLUDED_flixel_input_android_FlxAndroidKeys
#define INCLUDED_flixel_input_android_FlxAndroidKeys

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/input/FlxKeyManager.h>
HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,android,FlxAndroidKeys)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{
namespace android{


class HXCPP_CLASS_ATTRIBUTES  FlxAndroidKeys_obj : public ::flixel::input::FlxKeyManager_obj{
	public:
		typedef ::flixel::input::FlxKeyManager_obj super;
		typedef FlxAndroidKeys_obj OBJ_;
		FlxAndroidKeys_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxAndroidKeys_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAndroidKeys_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxAndroidKeys"); }

};

} // end namespace flixel
} // end namespace input
} // end namespace android

#endif /* INCLUDED_flixel_input_android_FlxAndroidKeys */ 
