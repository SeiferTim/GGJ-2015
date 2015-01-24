#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#include <flixel/util/helpers/FlxPointRangeBounds.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{
namespace helpers{

Void FlxPointRangeBounds_obj::__construct(Float startMinX,Dynamic startMinY,Dynamic startMaxX,Dynamic startMaxY,Dynamic endMinX,Dynamic endMinY,Dynamic endMaxX,Dynamic endMaxY)
{
HX_STACK_FRAME("flixel.util.helpers.FlxPointRangeBounds","new",0x02dca7c3,"flixel.util.helpers.FlxPointRangeBounds.new","flixel/util/helpers/FlxPointRangeBounds.hx",11,0x6e9a8e2e)
HX_STACK_THIS(this)
HX_STACK_ARG(startMinX,"startMinX")
HX_STACK_ARG(startMinY,"startMinY")
HX_STACK_ARG(startMaxX,"startMaxX")
HX_STACK_ARG(startMaxY,"startMaxY")
HX_STACK_ARG(endMinX,"endMinX")
HX_STACK_ARG(endMinY,"endMinY")
HX_STACK_ARG(endMaxX,"endMaxX")
HX_STACK_ARG(endMaxY,"endMaxY")
{
	HX_STACK_LINE(24)
	this->active = false;
	HX_STACK_LINE(41)
	::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(41)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(41)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(41)
		point->_inPool = false;
		HX_STACK_LINE(41)
		_g = point;
	}
	HX_STACK_LINE(41)
	::flixel::math::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(41)
	{
		HX_STACK_LINE(41)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(41)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(41)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(41)
		point->_inPool = false;
		HX_STACK_LINE(41)
		_g1 = point;
	}
	HX_STACK_LINE(41)
	::flixel::util::helpers::FlxBounds _g2 = ::flixel::util::helpers::FlxBounds_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(41)
	this->start = _g2;
	HX_STACK_LINE(42)
	::flixel::math::FlxPoint _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(42)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(42)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(42)
		point->_inPool = false;
		HX_STACK_LINE(42)
		_g3 = point;
	}
	HX_STACK_LINE(42)
	::flixel::math::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(42)
	{
		HX_STACK_LINE(42)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(42)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(42)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(42)
		point->_inPool = false;
		HX_STACK_LINE(42)
		_g4 = point;
	}
	HX_STACK_LINE(42)
	::flixel::util::helpers::FlxBounds _g5 = ::flixel::util::helpers::FlxBounds_obj::__new(_g3,_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(42)
	this->end = _g5;
	HX_STACK_LINE(44)
	this->set(startMinX,startMinY,startMaxX,startMaxY,endMinX,endMinY,endMaxX,endMaxY);
}
;
	return null();
}

//FlxPointRangeBounds_obj::~FlxPointRangeBounds_obj() { }

Dynamic FlxPointRangeBounds_obj::__CreateEmpty() { return  new FlxPointRangeBounds_obj; }
hx::ObjectPtr< FlxPointRangeBounds_obj > FlxPointRangeBounds_obj::__new(Float startMinX,Dynamic startMinY,Dynamic startMaxX,Dynamic startMaxY,Dynamic endMinX,Dynamic endMinY,Dynamic endMaxX,Dynamic endMaxY)
{  hx::ObjectPtr< FlxPointRangeBounds_obj > result = new FlxPointRangeBounds_obj();
	result->__construct(startMinX,startMinY,startMaxX,startMaxY,endMinX,endMinY,endMaxX,endMaxY);
	return result;}

Dynamic FlxPointRangeBounds_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPointRangeBounds_obj > result = new FlxPointRangeBounds_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return result;}

hx::Object *FlxPointRangeBounds_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

::flixel::util::helpers::FlxPointRangeBounds FlxPointRangeBounds_obj::set( Float startMinX,Dynamic startMinY,Dynamic startMaxX,Dynamic startMaxY,Dynamic endMinX,Dynamic endMinY,Dynamic endMaxX,Dynamic endMaxY){
	HX_STACK_FRAME("flixel.util.helpers.FlxPointRangeBounds","set",0x02e07305,"flixel.util.helpers.FlxPointRangeBounds.set","flixel/util/helpers/FlxPointRangeBounds.hx",61,0x6e9a8e2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(startMinX,"startMinX")
	HX_STACK_ARG(startMinY,"startMinY")
	HX_STACK_ARG(startMaxX,"startMaxX")
	HX_STACK_ARG(startMaxY,"startMaxY")
	HX_STACK_ARG(endMinX,"endMinX")
	HX_STACK_ARG(endMinY,"endMinY")
	HX_STACK_ARG(endMaxX,"endMaxX")
	HX_STACK_ARG(endMaxY,"endMaxY")
	HX_STACK_LINE(62)
	this->start->min->__Field(HX_CSTRING("set_x"),true)(startMinX);
	HX_STACK_LINE(63)
	this->start->min->__Field(HX_CSTRING("set_y"),true)((  (((startMinY == null()))) ? Float(this->start->min->__Field(HX_CSTRING("x"),true)) : Float(startMinY) ));
	HX_STACK_LINE(64)
	this->start->max->__Field(HX_CSTRING("set_x"),true)((  (((startMaxX == null()))) ? Float(this->start->min->__Field(HX_CSTRING("x"),true)) : Float(startMaxX) ));
	HX_STACK_LINE(65)
	this->start->max->__Field(HX_CSTRING("set_y"),true)((  (((startMaxY == null()))) ? Float(this->start->min->__Field(HX_CSTRING("y"),true)) : Float(startMaxY) ));
	HX_STACK_LINE(66)
	this->end->min->__Field(HX_CSTRING("set_x"),true)((  (((endMinX == null()))) ? Float(this->start->min->__Field(HX_CSTRING("x"),true)) : Float(endMinX) ));
	HX_STACK_LINE(67)
	this->end->min->__Field(HX_CSTRING("set_y"),true)((  (((endMinY == null()))) ? Float(this->start->min->__Field(HX_CSTRING("y"),true)) : Float(endMinY) ));
	struct _Function_1_1{
		inline static Float Block( hx::ObjectPtr< ::flixel::util::helpers::FlxPointRangeBounds_obj > __this,Dynamic &endMinX){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",68,0x6e9a8e2e)
			{
				HX_STACK_LINE(68)
				return (  (((endMinX == null()))) ? Float(__this->start->max->__Field(HX_CSTRING("x"),true)) : Float(__this->end->min->__Field(HX_CSTRING("x"),true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(68)
	this->end->max->__Field(HX_CSTRING("set_x"),true)((  (((endMaxX == null()))) ? Float(_Function_1_1::Block(this,endMinX)) : Float(endMaxX) ));
	struct _Function_1_2{
		inline static Float Block( hx::ObjectPtr< ::flixel::util::helpers::FlxPointRangeBounds_obj > __this,Dynamic &endMinY){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",69,0x6e9a8e2e)
			{
				HX_STACK_LINE(69)
				return (  (((endMinY == null()))) ? Float(__this->start->max->__Field(HX_CSTRING("y"),true)) : Float(__this->end->min->__Field(HX_CSTRING("y"),true)) );
			}
			return null();
		}
	};
	HX_STACK_LINE(69)
	this->end->max->__Field(HX_CSTRING("set_y"),true)((  (((endMaxY == null()))) ? Float(_Function_1_2::Block(this,endMinY)) : Float(endMaxY) ));
	HX_STACK_LINE(71)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC8(FlxPointRangeBounds_obj,set,return )

bool FlxPointRangeBounds_obj::equals( ::flixel::util::helpers::FlxPointRangeBounds OtherFlxPointRangeBounds){
	HX_STACK_FRAME("flixel.util.helpers.FlxPointRangeBounds","equals",0x60ba96bc,"flixel.util.helpers.FlxPointRangeBounds.equals","flixel/util/helpers/FlxPointRangeBounds.hx",82,0x6e9a8e2e)
	HX_STACK_THIS(this)
	HX_STACK_ARG(OtherFlxPointRangeBounds,"OtherFlxPointRangeBounds")
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::util::helpers::FlxPointRangeBounds_obj > __this,::flixel::util::helpers::FlxPointRangeBounds &OtherFlxPointRangeBounds){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",82,0x6e9a8e2e)
			{
				HX_STACK_LINE(82)
				::flixel::math::FlxPoint _this = __this->start->min;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(82)
				::flixel::math::FlxPoint point = OtherFlxPointRangeBounds->start->min;		HX_STACK_VAR(point,"point");
				struct _Function_2_1{
					inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",82,0x6e9a8e2e)
						{
							HX_STACK_LINE(82)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(82)
							Float _g = ::Math_obj::abs((_this->x - point->x));		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(82)
							return (_g <= aDiff);
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",82,0x6e9a8e2e)
						{
							HX_STACK_LINE(82)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(82)
							Float _g1 = ::Math_obj::abs((_this->y - point->y));		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(82)
							return (_g1 <= aDiff);
						}
						return null();
					}
				};
				HX_STACK_LINE(82)
				return (  ((_Function_2_1::Block(point,_this))) ? bool(_Function_2_2::Block(point,_this)) : bool(false) );
			}
			return null();
		}
	};
	struct _Function_1_2{
		inline static bool Block( hx::ObjectPtr< ::flixel::util::helpers::FlxPointRangeBounds_obj > __this,::flixel::util::helpers::FlxPointRangeBounds &OtherFlxPointRangeBounds){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",83,0x6e9a8e2e)
			{
				HX_STACK_LINE(83)
				::flixel::math::FlxPoint _this = __this->start->max;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(83)
				::flixel::math::FlxPoint point = OtherFlxPointRangeBounds->start->max;		HX_STACK_VAR(point,"point");
				struct _Function_2_1{
					inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",83,0x6e9a8e2e)
						{
							HX_STACK_LINE(83)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(83)
							Float _g2 = ::Math_obj::abs((_this->x - point->x));		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(83)
							return (_g2 <= aDiff);
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",83,0x6e9a8e2e)
						{
							HX_STACK_LINE(83)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(83)
							Float _g3 = ::Math_obj::abs((_this->y - point->y));		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(83)
							return (_g3 <= aDiff);
						}
						return null();
					}
				};
				HX_STACK_LINE(83)
				return (  ((_Function_2_1::Block(point,_this))) ? bool(_Function_2_2::Block(point,_this)) : bool(false) );
			}
			return null();
		}
	};
	struct _Function_1_3{
		inline static bool Block( hx::ObjectPtr< ::flixel::util::helpers::FlxPointRangeBounds_obj > __this,::flixel::util::helpers::FlxPointRangeBounds &OtherFlxPointRangeBounds){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",84,0x6e9a8e2e)
			{
				HX_STACK_LINE(84)
				::flixel::math::FlxPoint _this = __this->end->min;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(84)
				::flixel::math::FlxPoint point = OtherFlxPointRangeBounds->end->min;		HX_STACK_VAR(point,"point");
				struct _Function_2_1{
					inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",84,0x6e9a8e2e)
						{
							HX_STACK_LINE(84)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(84)
							Float _g4 = ::Math_obj::abs((_this->x - point->x));		HX_STACK_VAR(_g4,"_g4");
							HX_STACK_LINE(84)
							return (_g4 <= aDiff);
						}
						return null();
					}
				};
				struct _Function_2_2{
					inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",84,0x6e9a8e2e)
						{
							HX_STACK_LINE(84)
							Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
							HX_STACK_LINE(84)
							Float _g5 = ::Math_obj::abs((_this->y - point->y));		HX_STACK_VAR(_g5,"_g5");
							HX_STACK_LINE(84)
							return (_g5 <= aDiff);
						}
						return null();
					}
				};
				HX_STACK_LINE(84)
				return (  ((_Function_2_1::Block(point,_this))) ? bool(_Function_2_2::Block(point,_this)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(82)
	if (((  (((  ((_Function_1_1::Block(this,OtherFlxPointRangeBounds))) ? bool(_Function_1_2::Block(this,OtherFlxPointRangeBounds)) : bool(false) ))) ? bool(_Function_1_3::Block(this,OtherFlxPointRangeBounds)) : bool(false) ))){
		HX_STACK_LINE(85)
		::flixel::math::FlxPoint _this = this->end->max;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(85)
		::flixel::math::FlxPoint point = OtherFlxPointRangeBounds->end->max;		HX_STACK_VAR(point,"point");
		struct _Function_2_1{
			inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/helpers/FlxPointRangeBounds.hx",85,0x6e9a8e2e)
				{
					HX_STACK_LINE(85)
					Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
					HX_STACK_LINE(85)
					Float _g6 = ::Math_obj::abs((_this->x - point->x));		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(85)
					return (_g6 <= aDiff);
				}
				return null();
			}
		};
		HX_STACK_LINE(85)
		if ((_Function_2_1::Block(point,_this))){
			HX_STACK_LINE(85)
			Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
			HX_STACK_LINE(85)
			Float _g7 = ::Math_obj::abs((_this->y - point->y));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(85)
			return (_g7 <= aDiff);
		}
		else{
			HX_STACK_LINE(85)
			return false;
		}
	}
	else{
		HX_STACK_LINE(82)
		return false;
	}
	HX_STACK_LINE(82)
	return false;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPointRangeBounds_obj,equals,return )

::String FlxPointRangeBounds_obj::toString( ){
	HX_STACK_FRAME("flixel.util.helpers.FlxPointRangeBounds","toString",0x58cf5269,"flixel.util.helpers.FlxPointRangeBounds.toString","flixel/util/helpers/FlxPointRangeBounds.hx",92,0x6e9a8e2e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(94)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(94)
	{
		HX_STACK_LINE(94)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(94)
		_this->label = HX_CSTRING("start.min.x");
		HX_STACK_LINE(94)
		_this->value = this->start->min->__Field(HX_CSTRING("x"),true);
		HX_STACK_LINE(94)
		_g = _this;
	}
	HX_STACK_LINE(95)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(95)
	{
		HX_STACK_LINE(95)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(95)
		_this->label = HX_CSTRING("start.min.y");
		HX_STACK_LINE(95)
		_this->value = this->start->min->__Field(HX_CSTRING("y"),true);
		HX_STACK_LINE(95)
		_g1 = _this;
	}
	HX_STACK_LINE(96)
	::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(96)
	{
		HX_STACK_LINE(96)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(96)
		_this->label = HX_CSTRING("start.max.x");
		HX_STACK_LINE(96)
		_this->value = this->start->max->__Field(HX_CSTRING("x"),true);
		HX_STACK_LINE(96)
		_g2 = _this;
	}
	HX_STACK_LINE(97)
	::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(97)
	{
		HX_STACK_LINE(97)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(97)
		_this->label = HX_CSTRING("start.max.y");
		HX_STACK_LINE(97)
		_this->value = this->start->max->__Field(HX_CSTRING("y"),true);
		HX_STACK_LINE(97)
		_g3 = _this;
	}
	HX_STACK_LINE(98)
	::flixel::util::LabelValuePair _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(98)
	{
		HX_STACK_LINE(98)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(98)
		_this->label = HX_CSTRING("end.min.x");
		HX_STACK_LINE(98)
		_this->value = this->end->min->__Field(HX_CSTRING("x"),true);
		HX_STACK_LINE(98)
		_g4 = _this;
	}
	HX_STACK_LINE(99)
	::flixel::util::LabelValuePair _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(99)
	{
		HX_STACK_LINE(99)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(99)
		_this->label = HX_CSTRING("end.min.y");
		HX_STACK_LINE(99)
		_this->value = this->end->min->__Field(HX_CSTRING("y"),true);
		HX_STACK_LINE(99)
		_g5 = _this;
	}
	HX_STACK_LINE(100)
	::flixel::util::LabelValuePair _g6;		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(100)
	{
		HX_STACK_LINE(100)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(100)
		_this->label = HX_CSTRING("end.max.x");
		HX_STACK_LINE(100)
		_this->value = this->end->max->__Field(HX_CSTRING("x"),true);
		HX_STACK_LINE(100)
		_g6 = _this;
	}
	HX_STACK_LINE(101)
	::flixel::util::LabelValuePair _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(101)
	{
		HX_STACK_LINE(101)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(101)
		_this->label = HX_CSTRING("end.max.y");
		HX_STACK_LINE(101)
		_this->value = this->end->max->__Field(HX_CSTRING("y"),true);
		HX_STACK_LINE(101)
		_g7 = _this;
	}
	HX_STACK_LINE(93)
	Array< ::Dynamic > _g8 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3).Add(_g4).Add(_g5).Add(_g6).Add(_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(93)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g8);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointRangeBounds_obj,toString,return )

Void FlxPointRangeBounds_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.helpers.FlxPointRangeBounds","destroy",0x3271f1dd,"flixel.util.helpers.FlxPointRangeBounds.destroy","flixel/util/helpers/FlxPointRangeBounds.hx",105,0x6e9a8e2e)
		HX_STACK_THIS(this)
		HX_STACK_LINE(106)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->start->min);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(106)
		this->start->min = _g;
		HX_STACK_LINE(107)
		::flixel::math::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->start->max);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(107)
		this->start->max = _g1;
		HX_STACK_LINE(108)
		::flixel::math::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->end->min);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(108)
		this->end->min = _g2;
		HX_STACK_LINE(109)
		::flixel::math::FlxPoint _g3 = ::flixel::util::FlxDestroyUtil_obj::put(this->end->max);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(109)
		this->end->max = _g3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPointRangeBounds_obj,destroy,(void))


FlxPointRangeBounds_obj::FlxPointRangeBounds_obj()
{
}

void FlxPointRangeBounds_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPointRangeBounds);
	HX_MARK_MEMBER_NAME(start,"start");
	HX_MARK_MEMBER_NAME(end,"end");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_END_CLASS();
}

void FlxPointRangeBounds_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(start,"start");
	HX_VISIT_MEMBER_NAME(end,"end");
	HX_VISIT_MEMBER_NAME(active,"active");
}

Dynamic FlxPointRangeBounds_obj::__Field(const ::String &inName,bool inCallProp)
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
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPointRangeBounds_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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

void FlxPointRangeBounds_obj::__GetFields(Array< ::String> &outFields)
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
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxPointRangeBounds_obj,start),HX_CSTRING("start")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxPointRangeBounds_obj,end),HX_CSTRING("end")},
	{hx::fsBool,(int)offsetof(FlxPointRangeBounds_obj,active),HX_CSTRING("active")},
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
	HX_CSTRING("destroy"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPointRangeBounds_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPointRangeBounds_obj::__mClass,"__mClass");
};

#endif

Class FlxPointRangeBounds_obj::__mClass;

void FlxPointRangeBounds_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.helpers.FlxPointRangeBounds"), hx::TCanCast< FlxPointRangeBounds_obj> ,sStaticFields,sMemberFields,
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

void FlxPointRangeBounds_obj::__boot()
{
}

} // end namespace flixel
} // end namespace util
} // end namespace helpers
