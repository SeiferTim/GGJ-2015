#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_touch_FlxTouch
#include <flixel/input/touch/FlxTouch.h>
#endif
#ifndef INCLUDED_flixel_math_FlxAngle
#include <flixel/math/FlxAngle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace math{

Void FlxAngle_obj::__construct()
{
	return null();
}

//FlxAngle_obj::~FlxAngle_obj() { }

Dynamic FlxAngle_obj::__CreateEmpty() { return  new FlxAngle_obj; }
hx::ObjectPtr< FlxAngle_obj > FlxAngle_obj::__new()
{  hx::ObjectPtr< FlxAngle_obj > result = new FlxAngle_obj();
	result->__construct();
	return result;}

Dynamic FlxAngle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAngle_obj > result = new FlxAngle_obj();
	result->__construct();
	return result;}

Float FlxAngle_obj::wrapAngle( Float angle){
	HX_STACK_FRAME("flixel.math.FlxAngle","wrapAngle",0xae3043f0,"flixel.math.FlxAngle.wrapAngle","flixel/math/FlxAngle.hx",71,0x32e99189)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_LINE(72)
	if (((angle > (int)180))){
		HX_STACK_LINE(74)
		angle = (int)-180;
	}
	else{
		HX_STACK_LINE(76)
		if (((angle < (int)-180))){
			HX_STACK_LINE(78)
			angle = (int)180;
		}
	}
	HX_STACK_LINE(81)
	return angle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,wrapAngle,return )

Float FlxAngle_obj::angleLimit( Float angle,Float min,Float max){
	HX_STACK_FRAME("flixel.math.FlxAngle","angleLimit",0x6d448641,"flixel.math.FlxAngle.angleLimit","flixel/math/FlxAngle.hx",94,0x32e99189)
	HX_STACK_ARG(angle,"angle")
	HX_STACK_ARG(min,"min")
	HX_STACK_ARG(max,"max")
	HX_STACK_LINE(95)
	if (((angle > max))){
		HX_STACK_LINE(97)
		angle = max;
	}
	else{
		HX_STACK_LINE(99)
		if (((angle < min))){
			HX_STACK_LINE(101)
			angle = min;
		}
	}
	HX_STACK_LINE(104)
	return angle;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleLimit,return )

Float FlxAngle_obj::asDegrees( Float radians){
	HX_STACK_FRAME("flixel.math.FlxAngle","asDegrees",0x8ea59f1c,"flixel.math.FlxAngle.asDegrees","flixel/math/FlxAngle.hx",116,0x32e99189)
	HX_STACK_ARG(radians,"radians")
	HX_STACK_LINE(116)
	return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asDegrees,return )

Float FlxAngle_obj::asRadians( Float degrees){
	HX_STACK_FRAME("flixel.math.FlxAngle","asRadians",0x7b3b01e7,"flixel.math.FlxAngle.asRadians","flixel/math/FlxAngle.hx",128,0x32e99189)
	HX_STACK_ARG(degrees,"degrees")
	HX_STACK_LINE(128)
	return (degrees * ((Float(::Math_obj::PI) / Float((int)180))));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAngle_obj,asRadians,return )

Float FlxAngle_obj::angleBetween( ::flixel::FlxSprite SpriteA,::flixel::FlxSprite SpriteB,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleBetween",0x83e3464e,"flixel.math.FlxAngle.angleBetween","flixel/math/FlxAngle.hx",141,0x32e99189)
	HX_STACK_ARG(SpriteA,"SpriteA")
	HX_STACK_ARG(SpriteB,"SpriteB")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(142)
		Float dx = ((SpriteB->x + SpriteB->origin->x) - ((SpriteA->x + SpriteA->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(143)
		Float dy = ((SpriteB->y + SpriteB->origin->y) - ((SpriteA->y + SpriteA->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(145)
		if ((AsDegrees)){
			HX_STACK_LINE(146)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(146)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(148)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(145)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetween,return )

Float FlxAngle_obj::angleBetweenPoint( ::flixel::FlxSprite Sprite,::flixel::math::FlxPoint Target,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleBetweenPoint",0x0a124322,"flixel.math.FlxAngle.angleBetweenPoint","flixel/math/FlxAngle.hx",161,0x32e99189)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(Target,"Target")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(162)
		Float dx = (Target->x - ((Sprite->x + Sprite->origin->x)));		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(163)
		Float dy = (Target->y - ((Sprite->y + Sprite->origin->y)));		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(165)
		if ((AsDegrees)){
			HX_STACK_LINE(166)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(166)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(168)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(165)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenPoint,return )

Float FlxAngle_obj::angleBetweenMouse( ::flixel::FlxObject Object,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleBetweenMouse",0x4fe7a4f7,"flixel.math.FlxAngle.angleBetweenMouse","flixel/math/FlxAngle.hx",181,0x32e99189)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(183)
		if (((Object == null()))){
			HX_STACK_LINE(184)
			return (int)0;
		}
		HX_STACK_LINE(186)
		::flixel::math::FlxPoint p = Object->getScreenPosition(null(),null());		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(188)
		Float dx = (::flixel::FlxG_obj::mouse->screenX - p->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(189)
		Float dy = (::flixel::FlxG_obj::mouse->screenY - p->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(191)
		if ((AsDegrees)){
			HX_STACK_LINE(192)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(192)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(194)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(191)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleBetweenMouse,return )

Float FlxAngle_obj::angleBetweenTouch( ::flixel::FlxObject Object,::flixel::input::touch::FlxTouch Touch,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleBetweenTouch",0x57b5a691,"flixel.math.FlxAngle.angleBetweenTouch","flixel/math/FlxAngle.hx",209,0x32e99189)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Touch,"Touch")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(211)
		::flixel::math::FlxPoint p = Object->getScreenPosition(null(),null());		HX_STACK_VAR(p,"p");
		HX_STACK_LINE(213)
		Float dx = (Touch->screenX - p->x);		HX_STACK_VAR(dx,"dx");
		HX_STACK_LINE(214)
		Float dy = (Touch->screenY - p->y);		HX_STACK_VAR(dy,"dy");
		HX_STACK_LINE(216)
		if ((AsDegrees)){
			HX_STACK_LINE(217)
			Float radians = ::Math_obj::atan2(dy,dx);		HX_STACK_VAR(radians,"radians");
			HX_STACK_LINE(217)
			return (radians * ((Float((int)180) / Float(::Math_obj::PI))));
		}
		else{
			HX_STACK_LINE(219)
			return ::Math_obj::atan2(dy,dx);
		}
		HX_STACK_LINE(216)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,angleBetweenTouch,return )

Float FlxAngle_obj::angleFromFacing( ::flixel::FlxSprite Sprite,hx::Null< bool >  __o_AsDegrees){
bool AsDegrees = __o_AsDegrees.Default(false);
	HX_STACK_FRAME("flixel.math.FlxAngle","angleFromFacing",0x8474a75e,"flixel.math.FlxAngle.angleFromFacing","flixel/math/FlxAngle.hx",227,0x32e99189)
	HX_STACK_ARG(Sprite,"Sprite")
	HX_STACK_ARG(AsDegrees,"AsDegrees")
{
		HX_STACK_LINE(228)
		int degrees;		HX_STACK_VAR(degrees,"degrees");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			int _g = Sprite->facing;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(228)
			{
				HX_STACK_LINE(228)
				int f = _g;		HX_STACK_VAR(f,"f");
				HX_STACK_LINE(228)
				int f1 = _g;		HX_STACK_VAR(f1,"f1");
				HX_STACK_LINE(228)
				int f2 = _g;		HX_STACK_VAR(f2,"f2");
				HX_STACK_LINE(228)
				int f3 = _g;		HX_STACK_VAR(f3,"f3");
				HX_STACK_LINE(228)
				switch( (int)(_g)){
					case (int)1: {
						HX_STACK_LINE(230)
						degrees = (int)180;
					}
					;break;
					case (int)16: {
						HX_STACK_LINE(231)
						degrees = (int)0;
					}
					;break;
					case (int)256: {
						HX_STACK_LINE(232)
						degrees = (int)-90;
					}
					;break;
					case (int)4096: {
						HX_STACK_LINE(233)
						degrees = (int)90;
					}
					;break;
					default: {
						HX_STACK_LINE(234)
						if (((f == (int)257))){
							HX_STACK_LINE(234)
							degrees = (int)-135;
						}
						else{
							HX_STACK_LINE(235)
							if (((f1 == (int)272))){
								HX_STACK_LINE(235)
								degrees = (int)-45;
							}
							else{
								HX_STACK_LINE(236)
								if (((f2 == (int)4097))){
									HX_STACK_LINE(236)
									degrees = (int)135;
								}
								else{
									HX_STACK_LINE(237)
									if (((f3 == (int)4112))){
										HX_STACK_LINE(237)
										degrees = (int)45;
									}
									else{
										HX_STACK_LINE(238)
										degrees = (int)0;
									}
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(240)
		if ((AsDegrees)){
			HX_STACK_LINE(240)
			return degrees;
		}
		else{
			HX_STACK_LINE(240)
			return (degrees * ((Float(::Math_obj::PI) / Float((int)180))));
		}
		HX_STACK_LINE(240)
		return 0.;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAngle_obj,angleFromFacing,return )

::flixel::math::FlxPoint FlxAngle_obj::getCartesianCoords( Float Radius,Float Angle,::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxAngle","getCartesianCoords",0x688d1f29,"flixel.math.FlxAngle.getCartesianCoords","flixel/math/FlxAngle.hx",253,0x32e99189)
	HX_STACK_ARG(Radius,"Radius")
	HX_STACK_ARG(Angle,"Angle")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(254)
	::flixel::math::FlxPoint p = point;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(255)
	if (((p == null()))){
		HX_STACK_LINE(257)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(257)
		{
			HX_STACK_LINE(257)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(257)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(257)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(257)
			point1->_inPool = false;
			HX_STACK_LINE(257)
			_g = point1;
		}
		HX_STACK_LINE(257)
		p = _g;
	}
	HX_STACK_LINE(260)
	Float _g1 = ::Math_obj::cos((Angle * ((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(260)
	Float _g2 = (Radius * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(260)
	p->set_x(_g2);
	HX_STACK_LINE(261)
	Float _g3 = ::Math_obj::sin((Angle * ((Float(::Math_obj::PI) / Float((int)180)))));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(261)
	Float _g4 = (Radius * _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(261)
	p->set_y(_g4);
	HX_STACK_LINE(262)
	return p;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getCartesianCoords,return )

::flixel::math::FlxPoint FlxAngle_obj::getPolarCoords( Float X,Float Y,::flixel::math::FlxPoint point){
	HX_STACK_FRAME("flixel.math.FlxAngle","getPolarCoords",0xf74e15df,"flixel.math.FlxAngle.getPolarCoords","flixel/math/FlxAngle.hx",274,0x32e99189)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(point,"point")
	HX_STACK_LINE(275)
	::flixel::math::FlxPoint p = point;		HX_STACK_VAR(p,"p");
	HX_STACK_LINE(276)
	if (((p == null()))){
		HX_STACK_LINE(278)
		::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(278)
		{
			HX_STACK_LINE(278)
			Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
			HX_STACK_LINE(278)
			Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
			HX_STACK_LINE(278)
			::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point1,"point1");
			HX_STACK_LINE(278)
			point1->_inPool = false;
			HX_STACK_LINE(278)
			_g = point1;
		}
		HX_STACK_LINE(278)
		p = _g;
	}
	HX_STACK_LINE(281)
	Float _g1 = ::Math_obj::sqrt(((X * X) + (Y * Y)));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(281)
	p->set_x(_g1);
	HX_STACK_LINE(282)
	Float _g2 = ::Math_obj::atan2(Y,X);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(282)
	Float _g3 = (_g2 * ((Float((int)180) / Float(::Math_obj::PI))));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(282)
	p->set_y(_g3);
	HX_STACK_LINE(283)
	return p;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxAngle_obj,getPolarCoords,return )

Float FlxAngle_obj::get_TO_DEG( ){
	HX_STACK_FRAME("flixel.math.FlxAngle","get_TO_DEG",0x36e6a544,"flixel.math.FlxAngle.get_TO_DEG","flixel/math/FlxAngle.hx",288,0x32e99189)
	HX_STACK_LINE(288)
	return (Float((int)180) / Float(::Math_obj::PI));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_DEG,return )

Float FlxAngle_obj::get_TO_RAD( ){
	HX_STACK_FRAME("flixel.math.FlxAngle","get_TO_RAD",0x36f14153,"flixel.math.FlxAngle.get_TO_RAD","flixel/math/FlxAngle.hx",293,0x32e99189)
	HX_STACK_LINE(293)
	return (Float(::Math_obj::PI) / Float((int)180));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAngle_obj,get_TO_RAD,return )


FlxAngle_obj::FlxAngle_obj()
{
}

Dynamic FlxAngle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"TO_DEG") ) { return get_TO_DEG(); }
		if (HX_FIELD_EQ(inName,"TO_RAD") ) { return get_TO_RAD(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"wrapAngle") ) { return wrapAngle_dyn(); }
		if (HX_FIELD_EQ(inName,"asDegrees") ) { return asDegrees_dyn(); }
		if (HX_FIELD_EQ(inName,"asRadians") ) { return asRadians_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"angleLimit") ) { return angleLimit_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TO_DEG") ) { return get_TO_DEG_dyn(); }
		if (HX_FIELD_EQ(inName,"get_TO_RAD") ) { return get_TO_RAD_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"angleBetween") ) { return angleBetween_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getPolarCoords") ) { return getPolarCoords_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angleFromFacing") ) { return angleFromFacing_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"angleBetweenPoint") ) { return angleBetweenPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenMouse") ) { return angleBetweenMouse_dyn(); }
		if (HX_FIELD_EQ(inName,"angleBetweenTouch") ) { return angleBetweenTouch_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getCartesianCoords") ) { return getCartesianCoords_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAngle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAngle_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("wrapAngle"),
	HX_CSTRING("angleLimit"),
	HX_CSTRING("asDegrees"),
	HX_CSTRING("asRadians"),
	HX_CSTRING("angleBetween"),
	HX_CSTRING("angleBetweenPoint"),
	HX_CSTRING("angleBetweenMouse"),
	HX_CSTRING("angleBetweenTouch"),
	HX_CSTRING("angleFromFacing"),
	HX_CSTRING("getCartesianCoords"),
	HX_CSTRING("getPolarCoords"),
	HX_CSTRING("get_TO_DEG"),
	HX_CSTRING("get_TO_RAD"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAngle_obj::__mClass,"__mClass");
};

#endif

Class FlxAngle_obj::__mClass;

void FlxAngle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.math.FlxAngle"), hx::TCanCast< FlxAngle_obj> ,sStaticFields,sMemberFields,
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

void FlxAngle_obj::__boot()
{
}

} // end namespace flixel
} // end namespace math
