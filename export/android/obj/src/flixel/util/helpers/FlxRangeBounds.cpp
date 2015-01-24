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
#ifndef INCLUDED_flixel_util_helpers_FlxRangeBounds
#include <flixel/util/helpers/FlxRangeBounds.h>
#endif
namespace flixel{
namespace util{
namespace helpers{

Void FlxRangeBounds_obj::__construct(Dynamic startMin,Dynamic startMax,Dynamic endMin,Dynamic endMax)
{
HX_STACK_FRAME("flixel.util.helpers.FlxRangeBounds","new",0x191ab035,"flixel.util.helpers.FlxRangeBounds.new","flixel/util/helpers/FlxRangeBounds.hx",10,0xa540535a)
HX_STACK_THIS(this)
HX_STACK_ARG(startMin,"startMin")
HX_STACK_ARG(startMax,"startMax")
HX_STACK_ARG(endMin,"endMin")
HX_STACK_ARG(endMax,"endMax")
{
	HX_STACK_LINE(23)
	this->active = false;
	HX_STACK_LINE(36)
	::flixel::util::helpers::FlxBounds _g = ::flixel::util::helpers::FlxBounds_obj::__new(startMin,(  (((startMax == null()))) ? Dynamic(startMin) : Dynamic(startMax) ));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(36)
	this->start = _g;
	HX_STACK_LINE(37)
	::flixel::util::helpers::FlxBounds _g1 = ::flixel::util::helpers::FlxBounds_obj::__new((  (((endMin == null()))) ? Dynamic(startMin) : Dynamic(endMin) ),(  (((endMax == null()))) ? Dynamic(this->start->max) : Dynamic(endMax) ));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(37)
	this->end = _g1;
}
;
	return null();
}

//FlxRangeBounds_obj::~FlxRangeBounds_obj() { }

Dynamic FlxRangeBounds_obj::__CreateEmpty() { return  new FlxRangeBounds_obj; }
hx::ObjectPtr< FlxRangeBounds_obj > FlxRangeBounds_obj::__new(Dynamic startMin,Dynamic startMax,Dynamic endMin,Dynamic endMax)
{  hx::ObjectPtr< FlxRangeBounds_obj > result = new FlxRangeBounds_obj();
	result->__construct(startMin,startMax,endMin,endMax);
	return result;}

Dynamic FlxRangeBounds_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxRangeBounds_obj > result = new FlxRangeBounds_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::flixel::util::helpers::FlxRangeBounds FlxRangeBounds_obj::set( Dynamic startMin,Dynamic startMax,Dynamic endMin,Dynamic endMax){
	HX_STACK_FRAME("flixel.util.helpers.FlxRangeBounds","set",0x191e7b77,"flixel.util.helpers.FlxRangeBounds.set","flixel/util/helpers/FlxRangeBounds.hx",50,0xa540535a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startMin,"startMin")
	HX_STACK_ARG(startMax,"startMax")
	HX_STACK_ARG(endMin,"endMin")
	HX_STACK_ARG(endMax,"endMax")
	HX_STACK_LINE(51)
	this->start->min = startMin;
	HX_STACK_LINE(52)
	if (((startMax == null()))){
		HX_STACK_LINE(52)
		this->start->max = this->start->min;
	}
	else{
		HX_STACK_LINE(52)
		this->start->max = startMax;
	}
	HX_STACK_LINE(53)
	if (((endMin == null()))){
		HX_STACK_LINE(53)
		this->end->min = this->start->min;
	}
	else{
		HX_STACK_LINE(53)
		this->end->min = endMin;
	}
	HX_STACK_LINE(54)
	if (((endMax == null()))){
		HX_STACK_LINE(54)
		if (((endMin == null()))){
			HX_STACK_LINE(54)
			this->end->max = this->start->max;
		}
		else{
			HX_STACK_LINE(54)
			this->end->max = this->end->min;
		}
	}
	else{
		HX_STACK_LINE(54)
		this->end->max = endMax;
	}
	HX_STACK_LINE(56)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC4(FlxRangeBounds_obj,set,return )

bool FlxRangeBounds_obj::equals( ::flixel::util::helpers::FlxRangeBounds OtherRangeBounds){
	HX_STACK_FRAME("flixel.util.helpers.FlxRangeBounds","equals",0xda4be18a,"flixel.util.helpers.FlxRangeBounds.equals","flixel/util/helpers/FlxRangeBounds.hx",67,0xa540535a)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OtherRangeBounds,"OtherRangeBounds")
	struct _Function_1_1{
		inline static bool Block( ::flixel::util::helpers::FlxRangeBounds &OtherRangeBounds,hx::ObjectPtr< ::flixel::util::helpers::FlxRangeBounds_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxRangeBounds.hx",67,0xa540535a)
			{
				HX_STACK_LINE(67)
				::flixel::util::helpers::FlxBounds _this = __this->start;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				::flixel::util::helpers::FlxBounds OtherFlxBounds = OtherRangeBounds->start;		HX_STACK_VAR(OtherFlxBounds,"OtherFlxBounds");
				HX_STACK_LINE(67)
				return (bool((_this->min == OtherFlxBounds->min)) && bool((_this->max == OtherFlxBounds->max)));
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( ::flixel::util::helpers::FlxRangeBounds &OtherRangeBounds,hx::ObjectPtr< ::flixel::util::helpers::FlxRangeBounds_obj > __this){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxRangeBounds.hx",67,0xa540535a)
			{
				HX_STACK_LINE(67)
				::flixel::util::helpers::FlxBounds _this = __this->end;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(67)
				::flixel::util::helpers::FlxBounds OtherFlxBounds = OtherRangeBounds->end;		HX_STACK_VAR(OtherFlxBounds,"OtherFlxBounds");
				HX_STACK_LINE(67)
				return (bool((_this->min == OtherFlxBounds->min)) && bool((_this->max == OtherFlxBounds->max)));
			}
			return null();
		}
	};
	HX_STACK_LINE(67)
	return (bool(_Function_1_1::Block(OtherRangeBounds,this)) && bool(_Function_1_2::Block(OtherRangeBounds,this)));
}


HX_DEFINE_DYNAMIC_FUNC1(FlxRangeBounds_obj,equals,return )

::String FlxRangeBounds_obj::toString( ){
	HX_STACK_FRAME("flixel.util.helpers.FlxRangeBounds","toString",0x51636cb7,"flixel.util.helpers.FlxRangeBounds.toString","flixel/util/helpers/FlxRangeBounds.hx",74,0xa540535a)
	HX_STACK_THIS(this)
	HX_STACK_LINE(76)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(76)
	{
		HX_STACK_LINE(76)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(76)
		_this->label = HX_CSTRING("start.min");
		HX_STACK_LINE(76)
		_this->value = this->start->min;
		HX_STACK_LINE(76)
		_g = _this;
	}
	HX_STACK_LINE(77)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(77)
	{
		HX_STACK_LINE(77)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(77)
		_this->label = HX_CSTRING("start.max");
		HX_STACK_LINE(77)
		_this->value = this->start->min;
		HX_STACK_LINE(77)
		_g1 = _this;
	}
	HX_STACK_LINE(78)
	::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(78)
	{
		HX_STACK_LINE(78)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(78)
		_this->label = HX_CSTRING("end.min");
		HX_STACK_LINE(78)
		_this->value = this->end->min;
		HX_STACK_LINE(78)
		_g2 = _this;
	}
	HX_STACK_LINE(79)
	::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(79)
	{
		HX_STACK_LINE(79)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(79)
		_this->label = HX_CSTRING("end.max");
		HX_STACK_LINE(79)
		_this->value = this->end->max;
		HX_STACK_LINE(79)
		_g3 = _this;
	}
	HX_STACK_LINE(75)
	Array< ::Dynamic > _g4 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(75)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g4);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxRangeBounds_obj,toString,return )


FlxRangeBounds_obj::FlxRangeBounds_obj()
{
}

void FlxRangeBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxRangeBounds);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxRangeBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic FlxRangeBounds_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { return end; }
		if (HX_FIELD_EQ(inName,"set") ) { return set_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { return start; }
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

Dynamic FlxRangeBounds_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"end") ) { end=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { start=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxRangeBounds_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("start"));
	outFields->push(HX_CSTRING("end"));
	outFields->push(HX_CSTRING("active"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxRangeBounds_obj,start),HX_CSTRING("start")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxRangeBounds_obj,end),HX_CSTRING("end")},
	{hx::fsBool,(int)offsetof(FlxRangeBounds_obj,active),HX_CSTRING("active")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("start"),
	HX_CSTRING("end"),
	HX_CSTRING("active"),
	HX_CSTRING("set"),
	HX_CSTRING("equals"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxRangeBounds_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxRangeBounds_obj::__mClass,"__mClass");
};

#endif

Class FlxRangeBounds_obj::__mClass;

void FlxRangeBounds_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.helpers.FlxRangeBounds"), hx::TCanCast< FlxRangeBounds_obj> ,sStaticFields,sMemberFields,
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

void FlxRangeBounds_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace helpers
