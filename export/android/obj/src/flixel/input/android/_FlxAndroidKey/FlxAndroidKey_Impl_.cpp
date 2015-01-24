#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_input_android__FlxAndroidKey_FlxAndroidKey_Impl_
#include <flixel/input/android/_FlxAndroidKey/FlxAndroidKey_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
namespace flixel{
namespace input{
namespace android{
namespace _FlxAndroidKey{

Void FlxAndroidKey_Impl__obj::__construct()
{
	return null();
}

//FlxAndroidKey_Impl__obj::~FlxAndroidKey_Impl__obj() { }

Dynamic FlxAndroidKey_Impl__obj::__CreateEmpty() { return  new FlxAndroidKey_Impl__obj; }
hx::ObjectPtr< FlxAndroidKey_Impl__obj > FlxAndroidKey_Impl__obj::__new()
{  hx::ObjectPtr< FlxAndroidKey_Impl__obj > result = new FlxAndroidKey_Impl__obj();
	result->__construct();
	return result;}

Dynamic FlxAndroidKey_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAndroidKey_Impl__obj > result = new FlxAndroidKey_Impl__obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap FlxAndroidKey_Impl__obj::fromStringMap;

::haxe::ds::IntMap FlxAndroidKey_Impl__obj::toStringMap;

int FlxAndroidKey_Impl__obj::ANY;

int FlxAndroidKey_Impl__obj::NONE;

int FlxAndroidKey_Impl__obj::MENU;

int FlxAndroidKey_Impl__obj::BACK;

int FlxAndroidKey_Impl__obj::fromString( ::String s){
	HX_STACK_FRAME("flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","fromString",0xb5388f3d,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_.fromString","flixel/input/android/FlxAndroidKey.hx",25,0xd13214f4)
	HX_STACK_ARG(s,"s")
	HX_STACK_LINE(26)
	::String _g = s.toUpperCase();		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(26)
	s = _g;
	HX_STACK_LINE(27)
	if ((::flixel::input::android::_FlxAndroidKey::FlxAndroidKey_Impl__obj::fromStringMap->exists(s))){
		HX_STACK_LINE(27)
		return ::flixel::input::android::_FlxAndroidKey::FlxAndroidKey_Impl__obj::fromStringMap->get(s);
	}
	else{
		HX_STACK_LINE(27)
		return (int)-1;
	}
	HX_STACK_LINE(27)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKey_Impl__obj,fromString,return )

::String FlxAndroidKey_Impl__obj::toString( int this1){
	HX_STACK_FRAME("flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_","toString",0x27c6b58e,"flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_.toString","flixel/input/android/FlxAndroidKey.hx",33,0xd13214f4)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(33)
	return ::flixel::input::android::_FlxAndroidKey::FlxAndroidKey_Impl__obj::toStringMap->get(this1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAndroidKey_Impl__obj,toString,return )


FlxAndroidKey_Impl__obj::FlxAndroidKey_Impl__obj()
{
}

Dynamic FlxAndroidKey_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAndroidKey_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAndroidKey_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("fromStringMap"),
	HX_CSTRING("toStringMap"),
	HX_CSTRING("ANY"),
	HX_CSTRING("NONE"),
	HX_CSTRING("MENU"),
	HX_CSTRING("BACK"),
	HX_CSTRING("fromString"),
	HX_CSTRING("toString"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::toStringMap,"toStringMap");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::ANY,"ANY");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::MENU,"MENU");
	HX_MARK_MEMBER_NAME(FlxAndroidKey_Impl__obj::BACK,"BACK");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::fromStringMap,"fromStringMap");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::toStringMap,"toStringMap");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::ANY,"ANY");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::MENU,"MENU");
	HX_VISIT_MEMBER_NAME(FlxAndroidKey_Impl__obj::BACK,"BACK");
};

#endif

Class FlxAndroidKey_Impl__obj::__mClass;

void FlxAndroidKey_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.android._FlxAndroidKey.FlxAndroidKey_Impl_"), hx::TCanCast< FlxAndroidKey_Impl__obj> ,sStaticFields,sMemberFields,
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

void FlxAndroidKey_Impl__obj::__boot()
{
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/macros/FlxMacroUtil.hx",52,0x8cc0f087)
		{
			HX_STACK_LINE(52)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("ANY"),(int)-2);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("MENU"),(int)16777234);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("BACK"),(int)27);
			HX_STACK_LINE(52)
			return _g;
		}
		return null();
	}
};
	fromStringMap= _Function_0_1::Block();
struct _Function_0_2{
	inline static ::haxe::ds::IntMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/macros/FlxMacroUtil.hx",52,0x8cc0f087)
		{
			HX_STACK_LINE(52)
			::haxe::ds::IntMap _g = ::haxe::ds::IntMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			_g->set((int)-2,HX_CSTRING("ANY"));
			HX_STACK_LINE(52)
			_g->set((int)16777234,HX_CSTRING("MENU"));
			HX_STACK_LINE(52)
			_g->set((int)27,HX_CSTRING("BACK"));
			HX_STACK_LINE(52)
			return _g;
		}
		return null();
	}
};
	toStringMap= _Function_0_2::Block();
	ANY= (int)-2;
	NONE= (int)-1;
	MENU= (int)16777234;
	BACK= (int)27;
}

} // end namespace flixel
} // end namespace input
} // end namespace android
} // end namespace _FlxAndroidKey
