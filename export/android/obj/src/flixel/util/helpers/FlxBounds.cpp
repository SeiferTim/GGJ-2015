#include <hxcpp.h>

#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
namespace flixel{
namespace util{
namespace helpers{

Void FlxBounds_obj::__construct(Dynamic min,Dynamic max)
{
HX_STACK_FRAME("flixel.util.helpers.FlxBounds","new",0x7ac2a156,"flixel.util.helpers.FlxBounds.new","flixel/util/helpers/FlxBounds.hx",9,0x3d29a4bb)
HX_STACK_THIS(this)
HX_STACK_ARG(min,"min")
HX_STACK_ARG(max,"max")
{
	HX_STACK_LINE(22)
	this->active = false;
	HX_STACK_LINE(32)
	this->min = min;
	HX_STACK_LINE(33)
	if (((max == null()))){
		HX_STACK_LINE(33)
		this->max = min;
	}
	else{
		HX_STACK_LINE(33)
		this->max = max;
	}
}
;
	return null();
}

//FlxBounds_obj::~FlxBounds_obj() { }

Dynamic FlxBounds_obj::__CreateEmpty() { return  new FlxBounds_obj; }
hx::ObjectPtr< FlxBounds_obj > FlxBounds_obj::__new(Dynamic min,Dynamic max)
{  hx::ObjectPtr< FlxBounds_obj > result = new FlxBounds_obj();
	result->__construct(min,max);
	return result;}

Dynamic FlxBounds_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxBounds_obj > result = new FlxBounds_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

::flixel::util::helpers::FlxBounds FlxBounds_obj::set( Dynamic min,Dynamic max){
	HX_STACK_FRAME("flixel.util.helpers.FlxBounds","set",0x7ac66c98,"flixel.util.helpers.FlxBounds.set","flixel/util/helpers/FlxBounds.hx",44,0x3d29a4bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(45)
	this->min = min;
	HX_STACK_LINE(46)
	if (((max == null()))){
		HX_STACK_LINE(46)
		this->max = min;
	}
	else{
		HX_STACK_LINE(46)
		this->max = max;
	}
	HX_STACK_LINE(47)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxBounds_obj,set,return )

bool FlxBounds_obj::equals( ::flixel::util::helpers::FlxBounds OtherFlxBounds){
	HX_STACK_FRAME("flixel.util.helpers.FlxBounds","equals",0x1d409b09,"flixel.util.helpers.FlxBounds.equals","flixel/util/helpers/FlxBounds.hx",58,0x3d29a4bb)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OtherFlxBounds,"OtherFlxBounds")
	HX_STACK_LINE(58)
	return (bool((this->min == OtherFlxBounds->min)) && bool((this->max == OtherFlxBounds->max)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxBounds_obj,equals,return )

::String FlxBounds_obj::toString( ){
	HX_STACK_FRAME("flixel.util.helpers.FlxBounds","toString",0xc618c3f6,"flixel.util.helpers.FlxBounds.toString","flixel/util/helpers/FlxBounds.hx",65,0x3d29a4bb)
	HX_STACK_THIS(this)
	HX_STACK_LINE(67)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(67)
	{
		HX_STACK_LINE(67)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(67)
		_this->label = HX_CSTRING("min");
		HX_STACK_LINE(67)
		_this->value = this->min;
		HX_STACK_LINE(67)
		_g = _this;
	}
	HX_STACK_LINE(68)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(68)
	{
		HX_STACK_LINE(68)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(68)
		_this->label = HX_CSTRING("max");
		HX_STACK_LINE(68)
		_this->value = this->max;
		HX_STACK_LINE(68)
		_g1 = _this;
	}
	HX_STACK_LINE(66)
	Array< ::Dynamic > _g2 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(66)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g2);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxBounds_obj,toString,return )


FlxBounds_obj::FlxBounds_obj()
{
}

void FlxBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxBounds);
	HX_MARK_MEMBER_NAME(min,"min");
	HX_MARK_MEMBER_NAME(max,"max");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(min,"min");
	HX_VISIT_MEMBER_NAME(max,"max");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic FlxBounds_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { return min; }
		if (HX_FIELD_EQ(inName,"max") ) { return max; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"equals") ) { return equals_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxBounds_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"min") ) { min=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"max") ) { max=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("min"));
	outFields->push(HX_CSTRING("max"));
	outFields->push(HX_CSTRING("active"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBounds_obj,min),HX_CSTRING("min")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxBounds_obj,max),HX_CSTRING("max")},
	{hx::fsBool,(int)offsetof(FlxBounds_obj,active),HX_CSTRING("active")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("min"),
	HX_CSTRING("max"),
	HX_CSTRING("active"),
	HX_CSTRING("set"),
	HX_CSTRING("equals"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxBounds_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxBounds_obj::__mClass,"__mClass");
};

#endif

Class FlxBounds_obj::__mClass;

void FlxBounds_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.helpers.FlxBounds"), hx::TCanCast< FlxBounds_obj> ,sStaticFields,sMemberFields,
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

void FlxBounds_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace helpers
