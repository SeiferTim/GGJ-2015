#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_android_FlxAndroidKeyList
#include <flixel/input/android/FlxAndroidKeyList.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
namespace flixel{
namespace input{
namespace android{

Void FlxAndroidKeyList_obj::__construct(int status,::flixel::input::FlxKeyManager keyManager)
{
HX_STACK_FRAME("flixel.input.android.FlxAndroidKeyList","new",0x85ddcc1d,"flixel.input.android.FlxAndroidKeyList.new","flixel/input/android/FlxAndroidKeyList.hx",11,0x85400236)
HX_STACK_THIS(this)
HX_STACK_ARG(status,"status")
HX_STACK_ARG(keyManager,"keyManager")
{
	HX_STACK_LINE(11)
	super::__construct(status,keyManager);
}
;
	return null();
}

//FlxAndroidKeyList_obj::~FlxAndroidKeyList_obj() { }

Dynamic FlxAndroidKeyList_obj::__CreateEmpty() { return  new FlxAndroidKeyList_obj; }
hx::ObjectPtr< FlxAndroidKeyList_obj > FlxAndroidKeyList_obj::__new(int status,::flixel::input::FlxKeyManager keyManager)
{  hx::ObjectPtr< FlxAndroidKeyList_obj > result = new FlxAndroidKeyList_obj();
	result->__construct(status,keyManager);
	return result;}

Dynamic FlxAndroidKeyList_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAndroidKeyList_obj > result = new FlxAndroidKeyList_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

bool FlxAndroidKeyList_obj::get_BACK( ){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeyList","get_BACK",0x9a67b4d3,"flixel.input.android.FlxAndroidKeyList.get_BACK","flixel/input/android/FlxAndroidKeyList.hx",13,0x85400236)
	HX_STACK_THIS(this)
	HX_STACK_LINE(13)
	return this->keyManager->checkStatus((int)27,this->status);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeyList_obj,get_BACK,return )

bool FlxAndroidKeyList_obj::get_MENU( ){
	HX_STACK_FRAME("flixel.input.android.FlxAndroidKeyList","get_MENU",0xa1b0204b,"flixel.input.android.FlxAndroidKeyList.get_MENU","flixel/input/android/FlxAndroidKeyList.hx",14,0x85400236)
	HX_STACK_THIS(this)
	HX_STACK_LINE(14)
	return this->keyManager->checkStatus((int)16777234,this->status);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxAndroidKeyList_obj,get_MENU,return )


FlxAndroidKeyList_obj::FlxAndroidKeyList_obj()
{
}

Dynamic FlxAndroidKeyList_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"BACK") ) { return get_BACK(); }
		if (HX_FIELD_EQ(inName,"MENU") ) { return get_MENU(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_BACK") ) { return get_BACK_dyn(); }
		if (HX_FIELD_EQ(inName,"get_MENU") ) { return get_MENU_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAndroidKeyList_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAndroidKeyList_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("BACK"));
	outFields->push(HX_CSTRING("MENU"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("get_BACK"),
	HX_CSTRING("get_MENU"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAndroidKeyList_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAndroidKeyList_obj::__mClass,"__mClass");
};

#endif

Class FlxAndroidKeyList_obj::__mClass;

void FlxAndroidKeyList_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.android.FlxAndroidKeyList"), hx::TCanCast< FlxAndroidKeyList_obj> ,sStaticFields,sMemberFields,
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

void FlxAndroidKeyList_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
} // end namespace android
