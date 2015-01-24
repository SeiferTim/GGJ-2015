#ifndef INCLUDED_flixel_input_android_FlxAndroidKeyList
#define INCLUDED_flixel_input_android_FlxAndroidKeyList

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/input/FlxBaseKeyList.h>
HX_DECLARE_CLASS2(flixel,input,FlxBaseKeyList)
HX_DECLARE_CLASS2(flixel,input,FlxKeyManager)
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,android,FlxAndroidKeyList)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
namespace flixel{
namespace input{
namespace android{


class HXCPP_CLASS_ATTRIBUTES  FlxAndroidKeyList_obj : public ::flixel::input::FlxBaseKeyList_obj{
	public:
		typedef ::flixel::input::FlxBaseKeyList_obj super;
		typedef FlxAndroidKeyList_obj OBJ_;
		FlxAndroidKeyList_obj();
		Void __construct(int status,::flixel::input::FlxKeyManager keyManager);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxAndroidKeyList_obj > __new(int status,::flixel::input::FlxKeyManager keyManager);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAndroidKeyList_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxAndroidKeyList"); }

		virtual bool get_BACK( );
		Dynamic get_BACK_dyn();

		virtual bool get_MENU( );
		Dynamic get_MENU_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace android

#endif /* INCLUDED_flixel_input_android_FlxAndroidKeyList */ 
