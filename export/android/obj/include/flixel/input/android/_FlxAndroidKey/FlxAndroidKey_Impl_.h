#ifndef INCLUDED_flixel_input_android__FlxAndroidKey_FlxAndroidKey_Impl_
#define INCLUDED_flixel_input_android__FlxAndroidKey_FlxAndroidKey_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(IMap)
HX_DECLARE_CLASS4(flixel,input,android,_FlxAndroidKey,FlxAndroidKey_Impl_)
HX_DECLARE_CLASS2(haxe,ds,IntMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
namespace flixel{
namespace input{
namespace android{
namespace _FlxAndroidKey{


class HXCPP_CLASS_ATTRIBUTES  FlxAndroidKey_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef FlxAndroidKey_Impl__obj OBJ_;
		FlxAndroidKey_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< FlxAndroidKey_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxAndroidKey_Impl__obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("FlxAndroidKey_Impl_"); }

		static ::haxe::ds::StringMap fromStringMap;
		static ::haxe::ds::IntMap toStringMap;
		static int ANY;
		static int NONE;
		static int MENU;
		static int BACK;
		static int fromString( ::String s);
		static Dynamic fromString_dyn();

		static ::String toString( int this1);
		static Dynamic toString_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace android
} // end namespace _FlxAndroidKey

#endif /* INCLUDED_flixel_input_android__FlxAndroidKey_FlxAndroidKey_Impl_ */ 
