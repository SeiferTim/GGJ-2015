#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeyList
#include <flixel/input/android/FlxAndroidKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeys
#include <flixel/input/android/FlxAndroidKeys.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
namespace flixel{
namespace input{
namespace android{

Void FlxAndroidKeys_obj::__construct()
{
HX_STACK_FRAME("flixel.input.android.FlxAndroidKeys","new",0x7d1b2d18,"flixel.input.android.FlxAndroidKeys.new","flixel/input/android/FlxAndroidKeys.hx",10,0x680fe935)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(11)
	super::__construct(hx::ClassOf< ::flixel::input::android::FlxAndroidKeyList >());
	HX_STACK_LINE(14)
	::flixel::input::FlxInput back = ::flixel::input::FlxInput_obj::__new((int)27);		HX_STACK_VAR(back,"back");
	HX_STACK_LINE(15)
	this->_keyListArray->push(back);
	HX_STACK_LINE(16)
	this->_keyListMap->set(back->ID,back);
	HX_STACK_LINE(19)
	::flixel::input::FlxInput menu = ::flixel::input::FlxInput_obj::__new((int)16777234);		HX_STACK_VAR(menu,"menu");
	HX_STACK_LINE(20)
	this->_keyListArray->push(menu);
	HX_STACK_LINE(21)
	this->_keyListMap->set(menu->ID,menu);
}
;
	return null();
}

//FlxAndroidKeys_obj::~FlxAndroidKeys_obj() { }

Dynamic FlxAndroidKeys_obj::__CreateEmpty() { return  new FlxAndroidKeys_obj; }
hx::ObjectPtr< FlxAndroidKeys_obj > FlxAndroidKeys_obj::__new()
{  hx::ObjectPtr< FlxAndroidKeys_obj > result = new FlxAndroidKeys_obj();
	result->__construct();
	return result;}

Dynamic FlxAndroidKeys_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAndroidKeys_obj > result = new FlxAndroidKeys_obj();
	result->__construct();
	return result;}


FlxAndroidKeys_obj::FlxAndroidKeys_obj()
{
}

Dynamic FlxAndroidKeys_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAndroidKeys_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAndroidKeys_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAndroidKeys_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAndroidKeys_obj::__mClass,"__mClass");
};

#endif

Class FlxAndroidKeys_obj::__mClass;

void FlxAndroidKeys_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.android.FlxAndroidKeys"), hx::TCanCast< FlxAndroidKeys_obj> ,sStaticFields,sMemberFields,
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

void FlxAndroidKeys_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace android
