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
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPath
#include <flixel/util/FlxPath.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPathManager
#include <flixel/util/FlxPathManager.h>
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
#ifndef INCLUDED_openfl__v2_display_CapsStyle
#include <openfl/_v2/display/CapsStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Graphics
#include <openfl/_v2/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_JointStyle
#include <openfl/_v2/display/JointStyle.h>
#endif
#ifndef INCLUDED_openfl__v2_display_LineScaleMode
#include <openfl/_v2/display/LineScaleMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace util{

Void FlxPath_obj::__construct()
{
HX_STACK_FRAME("flixel.util.FlxPath","new",0x6e30af6f,"flixel.util.FlxPath.new","flixel/util/FlxPath.hx",20,0x22aae741)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(129)
	this->_inManager = false;
	HX_STACK_LINE(127)
	this->_autoRotate = false;
	HX_STACK_LINE(123)
	this->_inc = (int)1;
	HX_STACK_LINE(114)
	this->finished = false;
	HX_STACK_LINE(112)
	this->nodeIndex = (int)0;
	HX_STACK_LINE(106)
	this->ignoreDrawDebug = false;
	HX_STACK_LINE(101)
	this->debugScrollY = 1.0;
	HX_STACK_LINE(100)
	this->debugScrollX = 1.0;
	HX_STACK_LINE(95)
	this->debugColor = (int)16777215;
	HX_STACK_LINE(87)
	this->active = false;
	HX_STACK_LINE(82)
	this->autoCenter = true;
	HX_STACK_LINE(78)
	this->angle = (int)0;
	HX_STACK_LINE(74)
	this->speed = (int)0;
}
;
	return null();
}

//FlxPath_obj::~FlxPath_obj() { }

Dynamic FlxPath_obj::__CreateEmpty() { return  new FlxPath_obj; }
hx::ObjectPtr< FlxPath_obj > FlxPath_obj::__new()
{  hx::ObjectPtr< FlxPath_obj > result = new FlxPath_obj();
	result->__construct();
	return result;}

Dynamic FlxPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxPath_obj > result = new FlxPath_obj();
	result->__construct();
	return result;}

hx::Object *FlxPath_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

::flixel::util::FlxPath FlxPath_obj::reset( ){
	HX_STACK_FRAME("flixel.util.FlxPath","reset",0x2ce64a9e,"flixel.util.FlxPath.reset","flixel/util/FlxPath.hx",139,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(141)
	this->debugScrollX = 1.0;
	HX_STACK_LINE(142)
	this->debugScrollY = 1.0;
	HX_STACK_LINE(143)
	this->debugColor = (int)16777215;
	HX_STACK_LINE(144)
	this->ignoreDrawDebug = false;
	HX_STACK_LINE(146)
	this->autoCenter = true;
	HX_STACK_LINE(147)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,reset,return )

::flixel::util::FlxPath FlxPath_obj::start( ::flixel::FlxObject Object,Array< ::Dynamic > Nodes,hx::Null< Float >  __o_Speed,hx::Null< int >  __o_Mode,hx::Null< bool >  __o_AutoRotate){
Float Speed = __o_Speed.Default(100);
int Mode = __o_Mode.Default(0);
bool AutoRotate = __o_AutoRotate.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","start",0xca297531,"flixel.util.FlxPath.start","flixel/util/FlxPath.hx",151,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Object,"Object")
	HX_STACK_ARG(Nodes,"Nodes")
	HX_STACK_ARG(Speed,"Speed")
	HX_STACK_ARG(Mode,"Mode")
	HX_STACK_ARG(AutoRotate,"AutoRotate")
{
		HX_STACK_LINE(152)
		this->object = Object;
		HX_STACK_LINE(153)
		this->nodes = Nodes;
		HX_STACK_LINE(154)
		Float _g = ::Math_obj::abs(Speed);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(154)
		this->speed = _g;
		HX_STACK_LINE(155)
		this->_mode = Mode;
		HX_STACK_LINE(156)
		this->_autoRotate = AutoRotate;
		HX_STACK_LINE(157)
		this->restart();
		HX_STACK_LINE(158)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxPath_obj,start,return )

::flixel::util::FlxPath FlxPath_obj::restart( ){
	HX_STACK_FRAME("flixel.util.FlxPath","restart",0xf4e0da5e,"flixel.util.FlxPath.restart","flixel/util/FlxPath.hx",162,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(163)
	if (((bool((::flixel::util::FlxPath_obj::manager != null())) && bool(!(this->_inManager))))){
		HX_STACK_LINE(165)
		::flixel::util::FlxPath_obj::manager->add(hx::ObjectPtr<OBJ_>(this));
		HX_STACK_LINE(166)
		this->_inManager = true;
	}
	HX_STACK_LINE(169)
	this->finished = false;
	HX_STACK_LINE(170)
	this->active = true;
	HX_STACK_LINE(171)
	if (((bool((this->nodes == null())) || bool((this->nodes->length <= (int)0))))){
		HX_STACK_LINE(173)
		this->active = false;
	}
	HX_STACK_LINE(177)
	if (((bool((this->_mode == (int)1)) || bool((this->_mode == (int)256))))){
		HX_STACK_LINE(179)
		this->nodeIndex = (this->nodes->length - (int)1);
		HX_STACK_LINE(180)
		this->_inc = (int)-1;
	}
	else{
		HX_STACK_LINE(184)
		this->nodeIndex = (int)0;
		HX_STACK_LINE(185)
		this->_inc = (int)1;
	}
	HX_STACK_LINE(188)
	this->_wasObjectImmovable = this->object->immovable;
	HX_STACK_LINE(189)
	this->object->set_immovable(true);
	HX_STACK_LINE(191)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,restart,return )

Void FlxPath_obj::setNode( int NodeIndex){
{
		HX_STACK_FRAME("flixel.util.FlxPath","setNode",0x98c95d53,"flixel.util.FlxPath.setNode","flixel/util/FlxPath.hx",200,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(NodeIndex,"NodeIndex")
		HX_STACK_LINE(201)
		if (((NodeIndex < (int)0))){
			HX_STACK_LINE(202)
			NodeIndex = (int)0;
		}
		else{
			HX_STACK_LINE(203)
			if (((NodeIndex > (this->nodes->length - (int)1)))){
				HX_STACK_LINE(204)
				NodeIndex = (this->nodes->length - (int)1);
			}
		}
		HX_STACK_LINE(206)
		this->nodeIndex = NodeIndex;
		HX_STACK_LINE(207)
		this->advancePath(null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,setNode,(void))

Void FlxPath_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.util.FlxPath","update",0x9b283a5a,"flixel.util.FlxPath.update","flixel/util/FlxPath.hx",217,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(219)
		::flixel::util::FlxPath_obj::_point->set_x(this->object->x);
		HX_STACK_LINE(220)
		::flixel::util::FlxPath_obj::_point->set_y(this->object->y);
		HX_STACK_LINE(221)
		if ((this->autoCenter)){
			HX_STACK_LINE(223)
			::flixel::math::FlxPoint _this = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(223)
			Float _g = this->object->get_width();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(223)
			Float X = (_g * 0.5);		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(223)
			Float _g1 = this->object->get_height();		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(223)
			Float Y = (_g1 * 0.5);		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::flixel::math::FlxPoint _g2 = _this;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(223)
				_g2->set_x((_g2->x + X));
			}
			HX_STACK_LINE(223)
			{
				HX_STACK_LINE(223)
				::flixel::math::FlxPoint _g2 = _this;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(223)
				_g2->set_y((_g2->y + Y));
			}
			HX_STACK_LINE(223)
			_this;
		}
		HX_STACK_LINE(225)
		::flixel::math::FlxPoint node = this->nodes->__get(this->nodeIndex).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(226)
		Float deltaX = (node->x - ::flixel::util::FlxPath_obj::_point->x);		HX_STACK_VAR(deltaX,"deltaX");
		HX_STACK_LINE(227)
		Float deltaY = (node->y - ::flixel::util::FlxPath_obj::_point->y);		HX_STACK_VAR(deltaY,"deltaY");
		HX_STACK_LINE(229)
		bool horizontalOnly = (((int(this->_mode) & int((int)65536))) > (int)0);		HX_STACK_VAR(horizontalOnly,"horizontalOnly");
		HX_STACK_LINE(230)
		bool verticalOnly = (((int(this->_mode) & int((int)1048576))) > (int)0);		HX_STACK_VAR(verticalOnly,"verticalOnly");
		HX_STACK_LINE(232)
		if ((horizontalOnly)){
			HX_STACK_LINE(234)
			if (((((  (((deltaX > (int)0))) ? Float(deltaX) : Float(-(deltaX)) )) < (this->speed * elapsed)))){
				HX_STACK_LINE(236)
				::flixel::math::FlxPoint _g2 = this->advancePath(null());		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(236)
				node = _g2;
			}
		}
		else{
			HX_STACK_LINE(239)
			if ((verticalOnly)){
				HX_STACK_LINE(241)
				if (((((  (((deltaY > (int)0))) ? Float(deltaY) : Float(-(deltaY)) )) < (this->speed * elapsed)))){
					HX_STACK_LINE(243)
					::flixel::math::FlxPoint _g3 = this->advancePath(null());		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(243)
					node = _g3;
				}
			}
			else{
				HX_STACK_LINE(248)
				Float _g4 = ::Math_obj::sqrt(((deltaX * deltaX) + (deltaY * deltaY)));		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(248)
				if (((_g4 < (this->speed * elapsed)))){
					HX_STACK_LINE(250)
					::flixel::math::FlxPoint _g5 = this->advancePath(null());		HX_STACK_VAR(_g5,"_g5");
					HX_STACK_LINE(250)
					node = _g5;
				}
			}
		}
		HX_STACK_LINE(255)
		if (((this->speed != (int)0))){
			HX_STACK_LINE(258)
			::flixel::util::FlxPath_obj::_point->set_x(this->object->x);
			HX_STACK_LINE(259)
			::flixel::util::FlxPath_obj::_point->set_y(this->object->y);
			HX_STACK_LINE(261)
			if ((this->autoCenter)){
				HX_STACK_LINE(263)
				::flixel::math::FlxPoint _this = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(_this,"_this");
				HX_STACK_LINE(263)
				Float _g6 = this->object->get_width();		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(263)
				Float X = (_g6 * 0.5);		HX_STACK_VAR(X,"X");
				HX_STACK_LINE(263)
				Float _g7 = this->object->get_height();		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(263)
				Float Y = (_g7 * 0.5);		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(263)
				{
					HX_STACK_LINE(263)
					::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(263)
					_g->set_x((_g->x + X));
				}
				HX_STACK_LINE(263)
				{
					HX_STACK_LINE(263)
					::flixel::math::FlxPoint _g = _this;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(263)
					_g->set_y((_g->y + Y));
				}
				HX_STACK_LINE(263)
				_this;
			}
			struct _Function_2_1{
				inline static bool Block( ::flixel::math::FlxPoint &node){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxPath.hx",266,0x22aae741)
					{
						HX_STACK_LINE(266)
						::flixel::math::FlxPoint _this = ::flixel::util::FlxPath_obj::_point;		HX_STACK_VAR(_this,"_this");
						struct _Function_3_1{
							inline static bool Block( ::flixel::math::FlxPoint &node,::flixel::math::FlxPoint _this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxPath.hx",266,0x22aae741)
								{
									HX_STACK_LINE(266)
									Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
									HX_STACK_LINE(266)
									Float _g8 = ::Math_obj::abs((_this->x - node->x));		HX_STACK_VAR(_g8,"_g8");
									HX_STACK_LINE(266)
									return (_g8 <= aDiff);
								}
								return null();
							}
						};
						struct _Function_3_2{
							inline static bool Block( ::flixel::math::FlxPoint &node,::flixel::math::FlxPoint _this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxPath.hx",266,0x22aae741)
								{
									HX_STACK_LINE(266)
									Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
									HX_STACK_LINE(266)
									Float _g9 = ::Math_obj::abs((_this->y - node->y));		HX_STACK_VAR(_g9,"_g9");
									HX_STACK_LINE(266)
									return (_g9 <= aDiff);
								}
								return null();
							}
						};
						HX_STACK_LINE(266)
						return (  ((_Function_3_1::Block(node,_this))) ? bool(_Function_3_2::Block(node,_this)) : bool(false) );
					}
					return null();
				}
			};
			HX_STACK_LINE(266)
			if ((!(_Function_2_1::Block(node)))){
				HX_STACK_LINE(268)
				this->calculateVelocity(node,horizontalOnly,verticalOnly);
			}
			else{
				HX_STACK_LINE(272)
				this->object->velocity->set(null(),null());
			}
			HX_STACK_LINE(276)
			if ((this->_autoRotate)){
				HX_STACK_LINE(278)
				this->object->angularVelocity = (int)0;
				HX_STACK_LINE(279)
				this->object->angularAcceleration = (int)0;
				HX_STACK_LINE(280)
				this->object->set_angle(this->angle);
			}
			HX_STACK_LINE(283)
			if ((this->finished)){
				HX_STACK_LINE(285)
				this->cancel();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,update,(void))

Void FlxPath_obj::calculateVelocity( ::flixel::math::FlxPoint node,bool horizontalOnly,bool verticalOnly){
{
		HX_STACK_FRAME("flixel.util.FlxPath","calculateVelocity",0x682aa4f2,"flixel.util.FlxPath.calculateVelocity","flixel/util/FlxPath.hx",292,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(node,"node")
		HX_STACK_ARG(horizontalOnly,"horizontalOnly")
		HX_STACK_ARG(verticalOnly,"verticalOnly")
		HX_STACK_LINE(292)
		if (((bool(horizontalOnly) || bool((::flixel::util::FlxPath_obj::_point->y == node->y))))){
			HX_STACK_LINE(294)
			this->object->velocity->set_x((  (((::flixel::util::FlxPath_obj::_point->x < node->x))) ? Float(this->speed) : Float(-(this->speed)) ));
			HX_STACK_LINE(295)
			if (((this->object->velocity->x < (int)0))){
				HX_STACK_LINE(295)
				this->angle = (int)-90;
			}
			else{
				HX_STACK_LINE(295)
				this->angle = (int)90;
			}
			HX_STACK_LINE(297)
			if ((!(horizontalOnly))){
				HX_STACK_LINE(299)
				this->object->velocity->set_y((int)0);
			}
		}
		else{
			HX_STACK_LINE(302)
			if (((bool(verticalOnly) || bool((::flixel::util::FlxPath_obj::_point->x == node->x))))){
				HX_STACK_LINE(304)
				this->object->velocity->set_y((  (((::flixel::util::FlxPath_obj::_point->y < node->y))) ? Float(this->speed) : Float(-(this->speed)) ));
				HX_STACK_LINE(305)
				if (((this->object->velocity->y < (int)0))){
					HX_STACK_LINE(305)
					this->angle = (int)0;
				}
				else{
					HX_STACK_LINE(305)
					this->angle = (int)180;
				}
				HX_STACK_LINE(307)
				if ((!(verticalOnly))){
					HX_STACK_LINE(309)
					this->object->velocity->set_x((int)0);
				}
			}
			else{
				HX_STACK_LINE(314)
				this->object->velocity->set_x((  (((::flixel::util::FlxPath_obj::_point->x < node->x))) ? Float(this->speed) : Float(-(this->speed)) ));
				HX_STACK_LINE(315)
				this->object->velocity->set_y((  (((::flixel::util::FlxPath_obj::_point->y < node->y))) ? Float(this->speed) : Float(-(this->speed)) ));
				HX_STACK_LINE(317)
				Float _g = ::flixel::util::FlxPath_obj::_point->angleBetween(node);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(317)
				this->angle = _g;
				HX_STACK_LINE(319)
				this->object->velocity->set((int)0,-(this->speed));
				HX_STACK_LINE(320)
				::flixel::math::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(320)
				{
					HX_STACK_LINE(320)
					::flixel::math::FlxPoint point;		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(320)
					{
						HX_STACK_LINE(320)
						::flixel::math::FlxPoint point1 = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point1,"point1");
						HX_STACK_LINE(320)
						point1->_inPool = false;
						HX_STACK_LINE(320)
						point = point1;
					}
					HX_STACK_LINE(320)
					point->_weak = true;
					HX_STACK_LINE(320)
					_g1 = point;
				}
				HX_STACK_LINE(320)
				this->object->velocity->rotate(_g1,this->angle);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,calculateVelocity,(void))

::flixel::math::FlxPoint FlxPath_obj::advancePath( hx::Null< bool >  __o_Snap){
bool Snap = __o_Snap.Default(true);
	HX_STACK_FRAME("flixel.util.FlxPath","advancePath",0xf96b8956,"flixel.util.FlxPath.advancePath","flixel/util/FlxPath.hx",330,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Snap,"Snap")
{
		HX_STACK_LINE(331)
		if ((Snap)){
			HX_STACK_LINE(333)
			::flixel::math::FlxPoint oldNode = this->nodes->__get(this->nodeIndex).StaticCast< ::flixel::math::FlxPoint >();		HX_STACK_VAR(oldNode,"oldNode");
			HX_STACK_LINE(334)
			if (((oldNode != null()))){
				HX_STACK_LINE(336)
				if (((((int(this->_mode) & int((int)1048576))) == (int)0))){
					HX_STACK_LINE(338)
					this->object->set_x(oldNode->x);
					HX_STACK_LINE(339)
					if ((this->autoCenter)){
						HX_STACK_LINE(340)
						::flixel::FlxObject _g = this->object;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(340)
						Float _g1 = this->object->get_width();		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(340)
						Float _g11 = (_g1 * 0.5);		HX_STACK_VAR(_g11,"_g11");
						HX_STACK_LINE(340)
						Float _g2 = (_g->x - _g11);		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(340)
						_g->set_x(_g2);
					}
				}
				HX_STACK_LINE(342)
				if (((((int(this->_mode) & int((int)65536))) == (int)0))){
					HX_STACK_LINE(344)
					this->object->set_y(oldNode->y);
					HX_STACK_LINE(345)
					if ((this->autoCenter)){
						HX_STACK_LINE(346)
						::flixel::FlxObject _g = this->object;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(346)
						Float _g3 = this->object->get_height();		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(346)
						Float _g4 = (_g3 * 0.5);		HX_STACK_VAR(_g4,"_g4");
						HX_STACK_LINE(346)
						Float _g5 = (_g->y - _g4);		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(346)
						_g->set_y(_g5);
					}
				}
			}
		}
		HX_STACK_LINE(351)
		bool callComplete = false;		HX_STACK_VAR(callComplete,"callComplete");
		HX_STACK_LINE(352)
		hx::AddEq(this->nodeIndex,this->_inc);
		HX_STACK_LINE(354)
		if (((((int(this->_mode) & int((int)1))) > (int)0))){
			HX_STACK_LINE(356)
			if (((this->nodeIndex < (int)0))){
				HX_STACK_LINE(358)
				this->nodeIndex = (int)0;
				HX_STACK_LINE(359)
				callComplete = true;
				HX_STACK_LINE(360)
				this->onEnd();
			}
		}
		else{
			HX_STACK_LINE(363)
			if (((((int(this->_mode) & int((int)16))) > (int)0))){
				HX_STACK_LINE(365)
				if (((this->nodeIndex >= this->nodes->length))){
					HX_STACK_LINE(367)
					callComplete = true;
					HX_STACK_LINE(368)
					this->nodeIndex = (int)0;
				}
			}
			else{
				HX_STACK_LINE(371)
				if (((((int(this->_mode) & int((int)256))) > (int)0))){
					HX_STACK_LINE(373)
					if (((this->nodeIndex < (int)0))){
						HX_STACK_LINE(375)
						this->nodeIndex = (this->nodes->length - (int)1);
						HX_STACK_LINE(376)
						callComplete = true;
						HX_STACK_LINE(377)
						if (((this->nodeIndex < (int)0))){
							HX_STACK_LINE(379)
							this->nodeIndex = (int)0;
						}
					}
				}
				else{
					HX_STACK_LINE(383)
					if (((((int(this->_mode) & int((int)4096))) > (int)0))){
						HX_STACK_LINE(385)
						if (((this->_inc > (int)0))){
							HX_STACK_LINE(387)
							if (((this->nodeIndex >= this->nodes->length))){
								HX_STACK_LINE(389)
								this->nodeIndex = (this->nodes->length - (int)2);
								HX_STACK_LINE(390)
								callComplete = true;
								HX_STACK_LINE(391)
								if (((this->nodeIndex < (int)0))){
									HX_STACK_LINE(393)
									this->nodeIndex = (int)0;
								}
								HX_STACK_LINE(395)
								this->_inc = -(this->_inc);
							}
						}
						else{
							HX_STACK_LINE(398)
							if (((this->nodeIndex < (int)0))){
								HX_STACK_LINE(400)
								this->nodeIndex = (int)1;
								HX_STACK_LINE(401)
								callComplete = true;
								HX_STACK_LINE(402)
								if (((this->nodeIndex >= this->nodes->length))){
									HX_STACK_LINE(404)
									this->nodeIndex = (this->nodes->length - (int)1);
								}
								HX_STACK_LINE(406)
								if (((this->nodeIndex < (int)0))){
									HX_STACK_LINE(408)
									this->nodeIndex = (int)0;
								}
								HX_STACK_LINE(410)
								this->_inc = -(this->_inc);
							}
						}
					}
					else{
						HX_STACK_LINE(415)
						if (((this->nodeIndex >= this->nodes->length))){
							HX_STACK_LINE(417)
							this->nodeIndex = (this->nodes->length - (int)1);
							HX_STACK_LINE(418)
							callComplete = true;
							HX_STACK_LINE(419)
							this->onEnd();
						}
					}
				}
			}
		}
		HX_STACK_LINE(423)
		if (((bool(callComplete) && bool((this->onComplete_dyn() != null()))))){
			HX_STACK_LINE(425)
			this->onComplete(hx::ObjectPtr<OBJ_>(this));
		}
		HX_STACK_LINE(428)
		return this->nodes->__get(this->nodeIndex).StaticCast< ::flixel::math::FlxPoint >();
	}
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,advancePath,return )

Void FlxPath_obj::cancel( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","cancel",0xcc56a1cb,"flixel.util.FlxPath.cancel","flixel/util/FlxPath.hx",435,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(436)
		this->onEnd();
		HX_STACK_LINE(438)
		if (((this->object != null()))){
			HX_STACK_LINE(440)
			this->object->velocity->set((int)0,(int)0);
		}
		HX_STACK_LINE(443)
		if (((bool((::flixel::util::FlxPath_obj::manager != null())) && bool(this->_inManager)))){
			HX_STACK_LINE(445)
			::flixel::util::FlxPath_obj::manager->remove(hx::ObjectPtr<OBJ_>(this),null());
			HX_STACK_LINE(446)
			this->_inManager = false;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,cancel,(void))

Void FlxPath_obj::onEnd( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","onEnd",0x788298cb,"flixel.util.FlxPath.onEnd","flixel/util/FlxPath.hx",454,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(455)
		this->finished = true;
		HX_STACK_LINE(456)
		this->active = false;
		HX_STACK_LINE(457)
		this->object->set_immovable(this->_wasObjectImmovable);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,onEnd,(void))

Void FlxPath_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.util.FlxPath","destroy",0xaec13f89,"flixel.util.FlxPath.destroy","flixel/util/FlxPath.hx",464,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_LINE(465)
		::flixel::util::FlxDestroyUtil_obj::putArray(this->nodes);
		HX_STACK_LINE(466)
		this->nodes = null();
		HX_STACK_LINE(467)
		this->object = null();
		HX_STACK_LINE(468)
		this->onComplete = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,destroy,(void))

::flixel::util::FlxPath FlxPath_obj::add( Float X,Float Y){
	HX_STACK_FRAME("flixel.util.FlxPath","add",0x6e26d130,"flixel.util.FlxPath.add","flixel/util/FlxPath.hx",478,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_LINE(479)
	::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(479)
	{
		HX_STACK_LINE(479)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(479)
		point->_inPool = false;
		HX_STACK_LINE(479)
		_g = point;
	}
	HX_STACK_LINE(479)
	this->nodes->push(_g);
	HX_STACK_LINE(480)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,add,return )

::flixel::util::FlxPath FlxPath_obj::addAt( Float X,Float Y,int Index){
	HX_STACK_FRAME("flixel.util.FlxPath","addAt",0x6261b643,"flixel.util.FlxPath.addAt","flixel/util/FlxPath.hx",491,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(492)
	if (((Index < (int)0))){
		HX_STACK_LINE(492)
		return hx::ObjectPtr<OBJ_>(this);
	}
	HX_STACK_LINE(493)
	if (((Index > this->nodes->length))){
		HX_STACK_LINE(495)
		Index = this->nodes->length;
	}
	HX_STACK_LINE(497)
	::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(497)
	{
		HX_STACK_LINE(497)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(497)
		point->_inPool = false;
		HX_STACK_LINE(497)
		_g = point;
	}
	HX_STACK_LINE(497)
	this->nodes->insert(Index,_g);
	HX_STACK_LINE(498)
	return hx::ObjectPtr<OBJ_>(this);
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addAt,return )

::flixel::util::FlxPath FlxPath_obj::addPoint( ::flixel::math::FlxPoint Node,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","addPoint",0xa9620500,"flixel.util.FlxPath.addPoint","flixel/util/FlxPath.hx",510,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_ARG(AsReference,"AsReference")
{
		HX_STACK_LINE(511)
		if ((AsReference)){
			HX_STACK_LINE(513)
			this->nodes->push(Node);
		}
		else{
			HX_STACK_LINE(517)
			::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(517)
			{
				HX_STACK_LINE(517)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(Node->x,Node->y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(517)
				point->_inPool = false;
				HX_STACK_LINE(517)
				_g = point;
			}
			HX_STACK_LINE(517)
			this->nodes->push(_g);
		}
		HX_STACK_LINE(519)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC2(FlxPath_obj,addPoint,return )

::flixel::util::FlxPath FlxPath_obj::addPointAt( ::flixel::math::FlxPoint Node,int Index,hx::Null< bool >  __o_AsReference){
bool AsReference = __o_AsReference.Default(false);
	HX_STACK_FRAME("flixel.util.FlxPath","addPointAt",0x49ad7e13,"flixel.util.FlxPath.addPointAt","flixel/util/FlxPath.hx",532,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_ARG(Index,"Index")
	HX_STACK_ARG(AsReference,"AsReference")
{
		HX_STACK_LINE(533)
		if (((Index < (int)0))){
			HX_STACK_LINE(533)
			return hx::ObjectPtr<OBJ_>(this);
		}
		HX_STACK_LINE(534)
		if (((Index > this->nodes->length))){
			HX_STACK_LINE(536)
			Index = this->nodes->length;
		}
		HX_STACK_LINE(538)
		if ((AsReference)){
			HX_STACK_LINE(540)
			this->nodes->insert(Index,Node);
		}
		else{
			HX_STACK_LINE(544)
			::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(544)
			{
				HX_STACK_LINE(544)
				::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(Node->x,Node->y);		HX_STACK_VAR(point,"point");
				HX_STACK_LINE(544)
				point->_inPool = false;
				HX_STACK_LINE(544)
				_g = point;
			}
			HX_STACK_LINE(544)
			this->nodes->insert(Index,_g);
		}
		HX_STACK_LINE(546)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxPath_obj,addPointAt,return )

::flixel::math::FlxPoint FlxPath_obj::remove( ::flixel::math::FlxPoint Node){
	HX_STACK_FRAME("flixel.util.FlxPath","remove",0x18ab5095,"flixel.util.FlxPath.remove","flixel/util/FlxPath.hx",557,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Node,"Node")
	HX_STACK_LINE(558)
	int index = this->nodes->indexOf(Node,null());		HX_STACK_VAR(index,"index");
	HX_STACK_LINE(559)
	if (((index >= (int)0))){
		HX_STACK_LINE(561)
		Array< ::Dynamic > _g = this->nodes->splice(index,(int)1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(561)
		return _g->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();
	}
	else{
		HX_STACK_LINE(565)
		return null();
	}
	HX_STACK_LINE(559)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,remove,return )

::flixel::math::FlxPoint FlxPath_obj::removeAt( int Index){
	HX_STACK_FRAME("flixel.util.FlxPath","removeAt",0x169098e8,"flixel.util.FlxPath.removeAt","flixel/util/FlxPath.hx",576,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Index,"Index")
	HX_STACK_LINE(577)
	if (((this->nodes->length <= (int)0))){
		HX_STACK_LINE(579)
		return null();
	}
	HX_STACK_LINE(581)
	if (((Index >= this->nodes->length))){
		HX_STACK_LINE(583)
		Index = (this->nodes->length - (int)1);
	}
	HX_STACK_LINE(585)
	Array< ::Dynamic > _g = this->nodes->splice(Index,(int)1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(585)
	return _g->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,removeAt,return )

::flixel::math::FlxPoint FlxPath_obj::head( ){
	HX_STACK_FRAME("flixel.util.FlxPath","head",0xf8717731,"flixel.util.FlxPath.head","flixel/util/FlxPath.hx",594,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(595)
	if (((this->nodes->length > (int)0))){
		HX_STACK_LINE(597)
		return this->nodes->__get((int)0).StaticCast< ::flixel::math::FlxPoint >();
	}
	HX_STACK_LINE(599)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,head,return )

::flixel::math::FlxPoint FlxPath_obj::tail( ){
	HX_STACK_FRAME("flixel.util.FlxPath","tail",0x005d04a1,"flixel.util.FlxPath.tail","flixel/util/FlxPath.hx",608,0x22aae741)
	HX_STACK_THIS(this)
	HX_STACK_LINE(609)
	if (((this->nodes->length > (int)0))){
		HX_STACK_LINE(611)
		return this->nodes->__get((this->nodes->length - (int)1)).StaticCast< ::flixel::math::FlxPoint >();
	}
	HX_STACK_LINE(613)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxPath_obj,tail,return )

Void FlxPath_obj::drawDebug( ::flixel::FlxCamera Camera){
{
		HX_STACK_FRAME("flixel.util.FlxPath","drawDebug",0x7c3a9bfe,"flixel.util.FlxPath.drawDebug","flixel/util/FlxPath.hx",626,0x22aae741)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Camera,"Camera")
		HX_STACK_LINE(627)
		if (((bool((this->nodes == null())) || bool((this->nodes->length <= (int)0))))){
			HX_STACK_LINE(629)
			return null();
		}
		HX_STACK_LINE(631)
		if (((Camera == null()))){
			HX_STACK_LINE(633)
			Camera = ::flixel::FlxG_obj::camera;
		}
		HX_STACK_LINE(641)
		::openfl::_v2::display::Graphics gfx = Camera->debugLayer->get_graphics();		HX_STACK_VAR(gfx,"gfx");
		HX_STACK_LINE(645)
		::flixel::math::FlxPoint node;		HX_STACK_VAR(node,"node");
		HX_STACK_LINE(646)
		::flixel::math::FlxPoint nextNode;		HX_STACK_VAR(nextNode,"nextNode");
		HX_STACK_LINE(647)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(648)
		int l = this->nodes->length;		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(649)
		while((true)){
			HX_STACK_LINE(649)
			if ((!(((i < l))))){
				HX_STACK_LINE(649)
				break;
			}
			HX_STACK_LINE(652)
			node = this->nodes->__get(i).StaticCast< ::flixel::math::FlxPoint >();
			HX_STACK_LINE(655)
			::flixel::util::FlxPath_obj::_point->set_x((node->x - (Camera->scroll->x * this->debugScrollX)));
			HX_STACK_LINE(656)
			::flixel::util::FlxPath_obj::_point->set_y((node->y - (Camera->scroll->y * this->debugScrollY)));
			HX_STACK_LINE(659)
			int nodeSize = (int)2;		HX_STACK_VAR(nodeSize,"nodeSize");
			HX_STACK_LINE(660)
			if (((bool((i == (int)0)) || bool((i == (l - (int)1)))))){
				HX_STACK_LINE(662)
				hx::MultEq(nodeSize,(int)2);
			}
			HX_STACK_LINE(664)
			int nodeColor = this->debugColor;		HX_STACK_VAR(nodeColor,"nodeColor");
			HX_STACK_LINE(665)
			if (((l > (int)1))){
				HX_STACK_LINE(667)
				if (((i == (int)0))){
					HX_STACK_LINE(669)
					nodeColor = (int)-16744448;
				}
				else{
					HX_STACK_LINE(671)
					if (((i == (l - (int)1)))){
						HX_STACK_LINE(673)
						nodeColor = (int)-65536;
					}
				}
			}
			HX_STACK_LINE(678)
			gfx->beginFill(nodeColor,0.5);
			HX_STACK_LINE(679)
			gfx->lineStyle(null(),null(),null(),null(),null(),null(),null(),null());
			HX_STACK_LINE(680)
			gfx->drawRect((::flixel::util::FlxPath_obj::_point->x - (nodeSize * 0.5)),(::flixel::util::FlxPath_obj::_point->y - (nodeSize * 0.5)),nodeSize,nodeSize);
			HX_STACK_LINE(681)
			gfx->endFill();
			HX_STACK_LINE(684)
			Float linealpha = 0.3;		HX_STACK_VAR(linealpha,"linealpha");
			HX_STACK_LINE(685)
			if (((i < (l - (int)1)))){
				HX_STACK_LINE(687)
				nextNode = this->nodes->__get((i + (int)1)).StaticCast< ::flixel::math::FlxPoint >();
			}
			else{
				HX_STACK_LINE(691)
				nextNode = this->nodes->__get(i).StaticCast< ::flixel::math::FlxPoint >();
			}
			HX_STACK_LINE(695)
			gfx->moveTo(::flixel::util::FlxPath_obj::_point->x,::flixel::util::FlxPath_obj::_point->y);
			HX_STACK_LINE(696)
			gfx->lineStyle((int)1,this->debugColor,linealpha,null(),null(),null(),null(),null());
			HX_STACK_LINE(697)
			::flixel::util::FlxPath_obj::_point->set_x((nextNode->x - (Camera->scroll->x * this->debugScrollX)));
			HX_STACK_LINE(698)
			::flixel::util::FlxPath_obj::_point->set_y((nextNode->y - (Camera->scroll->y * this->debugScrollY)));
			HX_STACK_LINE(699)
			gfx->lineTo(::flixel::util::FlxPath_obj::_point->x,::flixel::util::FlxPath_obj::_point->y);
			HX_STACK_LINE(701)
			(i)++;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxPath_obj,drawDebug,(void))

::flixel::util::FlxPathManager FlxPath_obj::manager;

int FlxPath_obj::FORWARD;

int FlxPath_obj::BACKWARD;

int FlxPath_obj::LOOP_FORWARD;

int FlxPath_obj::LOOP_BACKWARD;

int FlxPath_obj::YOYO;

int FlxPath_obj::HORIZONTAL_ONLY;

int FlxPath_obj::VERTICAL_ONLY;

::flixel::math::FlxPoint FlxPath_obj::_point;


FlxPath_obj::FlxPath_obj()
{
}

void FlxPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxPath);
	HX_MARK_MEMBER_NAME(nodes,"nodes");
	HX_MARK_MEMBER_NAME(object,"object");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(autoCenter,"autoCenter");
	HX_MARK_MEMBER_NAME(active,"active");
	HX_MARK_MEMBER_NAME(onComplete,"onComplete");
	HX_MARK_MEMBER_NAME(debugColor,"debugColor");
	HX_MARK_MEMBER_NAME(debugScrollX,"debugScrollX");
	HX_MARK_MEMBER_NAME(debugScrollY,"debugScrollY");
	HX_MARK_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_MARK_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_MARK_MEMBER_NAME(finished,"finished");
	HX_MARK_MEMBER_NAME(_mode,"_mode");
	HX_MARK_MEMBER_NAME(_inc,"_inc");
	HX_MARK_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_MARK_MEMBER_NAME(_inManager,"_inManager");
	HX_MARK_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
	HX_MARK_END_CLASS();
}

void FlxPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(nodes,"nodes");
	HX_VISIT_MEMBER_NAME(object,"object");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(autoCenter,"autoCenter");
	HX_VISIT_MEMBER_NAME(active,"active");
	HX_VISIT_MEMBER_NAME(onComplete,"onComplete");
	HX_VISIT_MEMBER_NAME(debugColor,"debugColor");
	HX_VISIT_MEMBER_NAME(debugScrollX,"debugScrollX");
	HX_VISIT_MEMBER_NAME(debugScrollY,"debugScrollY");
	HX_VISIT_MEMBER_NAME(ignoreDrawDebug,"ignoreDrawDebug");
	HX_VISIT_MEMBER_NAME(nodeIndex,"nodeIndex");
	HX_VISIT_MEMBER_NAME(finished,"finished");
	HX_VISIT_MEMBER_NAME(_mode,"_mode");
	HX_VISIT_MEMBER_NAME(_inc,"_inc");
	HX_VISIT_MEMBER_NAME(_autoRotate,"_autoRotate");
	HX_VISIT_MEMBER_NAME(_inManager,"_inManager");
	HX_VISIT_MEMBER_NAME(_wasObjectImmovable,"_wasObjectImmovable");
}

Dynamic FlxPath_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { return _inc; }
		if (HX_FIELD_EQ(inName,"head") ) { return head_dyn(); }
		if (HX_FIELD_EQ(inName,"tail") ) { return tail_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { return nodes; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"_mode") ) { return _mode; }
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		if (HX_FIELD_EQ(inName,"onEnd") ) { return onEnd_dyn(); }
		if (HX_FIELD_EQ(inName,"addAt") ) { return addAt_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"object") ) { return object; }
		if (HX_FIELD_EQ(inName,"active") ) { return active; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"cancel") ) { return cancel_dyn(); }
		if (HX_FIELD_EQ(inName,"remove") ) { return remove_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { return manager; }
		if (HX_FIELD_EQ(inName,"restart") ) { return restart_dyn(); }
		if (HX_FIELD_EQ(inName,"setNode") ) { return setNode_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { return finished; }
		if (HX_FIELD_EQ(inName,"addPoint") ) { return addPoint_dyn(); }
		if (HX_FIELD_EQ(inName,"removeAt") ) { return removeAt_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { return nodeIndex; }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { return autoCenter; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return onComplete; }
		if (HX_FIELD_EQ(inName,"debugColor") ) { return debugColor; }
		if (HX_FIELD_EQ(inName,"_inManager") ) { return _inManager; }
		if (HX_FIELD_EQ(inName,"addPointAt") ) { return addPointAt_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { return _autoRotate; }
		if (HX_FIELD_EQ(inName,"advancePath") ) { return advancePath_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"debugScrollX") ) { return debugScrollX; }
		if (HX_FIELD_EQ(inName,"debugScrollY") ) { return debugScrollY; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { return ignoreDrawDebug; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"calculateVelocity") ) { return calculateVelocity_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { return _wasObjectImmovable; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_inc") ) { _inc=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"nodes") ) { nodes=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_mode") ) { _mode=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"object") ) { object=inValue.Cast< ::flixel::FlxObject >(); return inValue; }
		if (HX_FIELD_EQ(inName,"active") ) { active=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"manager") ) { manager=inValue.Cast< ::flixel::util::FlxPathManager >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"finished") ) { finished=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"nodeIndex") ) { nodeIndex=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"autoCenter") ) { autoCenter=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onComplete") ) { onComplete=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugColor") ) { debugColor=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_inManager") ) { _inManager=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_autoRotate") ) { _autoRotate=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"debugScrollX") ) { debugScrollX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debugScrollY") ) { debugScrollY=inValue.Cast< Float >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"ignoreDrawDebug") ) { ignoreDrawDebug=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_wasObjectImmovable") ) { _wasObjectImmovable=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("nodes"));
	outFields->push(HX_CSTRING("object"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("autoCenter"));
	outFields->push(HX_CSTRING("active"));
	outFields->push(HX_CSTRING("debugColor"));
	outFields->push(HX_CSTRING("debugScrollX"));
	outFields->push(HX_CSTRING("debugScrollY"));
	outFields->push(HX_CSTRING("ignoreDrawDebug"));
	outFields->push(HX_CSTRING("nodeIndex"));
	outFields->push(HX_CSTRING("finished"));
	outFields->push(HX_CSTRING("_mode"));
	outFields->push(HX_CSTRING("_inc"));
	outFields->push(HX_CSTRING("_autoRotate"));
	outFields->push(HX_CSTRING("_inManager"));
	outFields->push(HX_CSTRING("_wasObjectImmovable"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("manager"),
	HX_CSTRING("FORWARD"),
	HX_CSTRING("BACKWARD"),
	HX_CSTRING("LOOP_FORWARD"),
	HX_CSTRING("LOOP_BACKWARD"),
	HX_CSTRING("YOYO"),
	HX_CSTRING("HORIZONTAL_ONLY"),
	HX_CSTRING("VERTICAL_ONLY"),
	HX_CSTRING("_point"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxPath_obj,nodes),HX_CSTRING("nodes")},
	{hx::fsObject /*::flixel::FlxObject*/ ,(int)offsetof(FlxPath_obj,object),HX_CSTRING("object")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,speed),HX_CSTRING("speed")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,angle),HX_CSTRING("angle")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,autoCenter),HX_CSTRING("autoCenter")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,active),HX_CSTRING("active")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxPath_obj,onComplete),HX_CSTRING("onComplete")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,debugColor),HX_CSTRING("debugColor")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,debugScrollX),HX_CSTRING("debugScrollX")},
	{hx::fsFloat,(int)offsetof(FlxPath_obj,debugScrollY),HX_CSTRING("debugScrollY")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,ignoreDrawDebug),HX_CSTRING("ignoreDrawDebug")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,nodeIndex),HX_CSTRING("nodeIndex")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,finished),HX_CSTRING("finished")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_mode),HX_CSTRING("_mode")},
	{hx::fsInt,(int)offsetof(FlxPath_obj,_inc),HX_CSTRING("_inc")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,_autoRotate),HX_CSTRING("_autoRotate")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,_inManager),HX_CSTRING("_inManager")},
	{hx::fsBool,(int)offsetof(FlxPath_obj,_wasObjectImmovable),HX_CSTRING("_wasObjectImmovable")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("nodes"),
	HX_CSTRING("object"),
	HX_CSTRING("speed"),
	HX_CSTRING("angle"),
	HX_CSTRING("autoCenter"),
	HX_CSTRING("active"),
	HX_CSTRING("onComplete"),
	HX_CSTRING("debugColor"),
	HX_CSTRING("debugScrollX"),
	HX_CSTRING("debugScrollY"),
	HX_CSTRING("ignoreDrawDebug"),
	HX_CSTRING("nodeIndex"),
	HX_CSTRING("finished"),
	HX_CSTRING("_mode"),
	HX_CSTRING("_inc"),
	HX_CSTRING("_autoRotate"),
	HX_CSTRING("_inManager"),
	HX_CSTRING("_wasObjectImmovable"),
	HX_CSTRING("reset"),
	HX_CSTRING("start"),
	HX_CSTRING("restart"),
	HX_CSTRING("setNode"),
	HX_CSTRING("update"),
	HX_CSTRING("calculateVelocity"),
	HX_CSTRING("advancePath"),
	HX_CSTRING("cancel"),
	HX_CSTRING("onEnd"),
	HX_CSTRING("destroy"),
	HX_CSTRING("add"),
	HX_CSTRING("addAt"),
	HX_CSTRING("addPoint"),
	HX_CSTRING("addPointAt"),
	HX_CSTRING("remove"),
	HX_CSTRING("removeAt"),
	HX_CSTRING("head"),
	HX_CSTRING("tail"),
	HX_CSTRING("drawDebug"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxPath_obj::manager,"manager");
	HX_MARK_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_MARK_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_MARK_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_MARK_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxPath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::manager,"manager");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::FORWARD,"FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::BACKWARD,"BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_FORWARD,"LOOP_FORWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::LOOP_BACKWARD,"LOOP_BACKWARD");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::YOYO,"YOYO");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::HORIZONTAL_ONLY,"HORIZONTAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::VERTICAL_ONLY,"VERTICAL_ONLY");
	HX_VISIT_MEMBER_NAME(FlxPath_obj::_point,"_point");
};

#endif

Class FlxPath_obj::__mClass;

void FlxPath_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util.FlxPath"), hx::TCanCast< FlxPath_obj> ,sStaticFields,sMemberFields,
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

void FlxPath_obj::__boot()
{
	FORWARD= (int)0;
	BACKWARD= (int)1;
	LOOP_FORWARD= (int)16;
	LOOP_BACKWARD= (int)256;
	YOYO= (int)4096;
	HORIZONTAL_ONLY= (int)65536;
	VERTICAL_ONLY= (int)1048576;
struct _Function_0_1{
	inline static ::flixel::math::FlxPoint Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxPath.hx",55,0x22aae741)
		{
			HX_STACK_LINE(55)
			Float X = (int)0;		HX_STACK_VAR(X,"X");
			HX_STACK_LINE(55)
			Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
			HX_STACK_LINE(55)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(55)
			point->_inPool = false;
			HX_STACK_LINE(55)
			return point;
		}
		return null();
	}
};
	_point= _Function_0_1::Block();
}

} // end namespace flixel
} // end namespace util
