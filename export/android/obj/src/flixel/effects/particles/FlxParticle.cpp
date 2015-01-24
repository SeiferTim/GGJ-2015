#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
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
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxParticle_obj::__construct()
{
HX_STACK_FRAME("flixel.effects.particles.FlxParticle","new",0x64bf516b,"flixel.effects.particles.FlxParticle.new","flixel/effects/particles/FlxParticle.hx",19,0xdb578328)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(73)
	this->_delta = (int)0;
	HX_STACK_LINE(37)
	this->autoUpdateHitbox = false;
	HX_STACK_LINE(33)
	this->percent = (int)0;
	HX_STACK_LINE(29)
	this->age = (int)0;
	HX_STACK_LINE(25)
	this->lifespan = (int)0;
	HX_STACK_LINE(82)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(84)
	::flixel::math::FlxPoint _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(84)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(84)
		point->_inPool = false;
		HX_STACK_LINE(84)
		_g = point;
	}
	HX_STACK_LINE(84)
	::flixel::math::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(84)
	{
		HX_STACK_LINE(84)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(84)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(84)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(84)
		point->_inPool = false;
		HX_STACK_LINE(84)
		_g1 = point;
	}
	HX_STACK_LINE(84)
	::flixel::util::helpers::FlxRange _g2 = ::flixel::util::helpers::FlxRange_obj::__new(_g,_g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(84)
	this->velocityRange = _g2;
	HX_STACK_LINE(85)
	::flixel::util::helpers::FlxRange _g3 = ::flixel::util::helpers::FlxRange_obj::__new((int)0,null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(85)
	this->angularVelocityRange = _g3;
	HX_STACK_LINE(86)
	::flixel::math::FlxPoint _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(86)
		point->_inPool = false;
		HX_STACK_LINE(86)
		_g4 = point;
	}
	HX_STACK_LINE(86)
	::flixel::math::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)1,(int)1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(86)
		point->_inPool = false;
		HX_STACK_LINE(86)
		_g5 = point;
	}
	HX_STACK_LINE(86)
	::flixel::util::helpers::FlxRange _g6 = ::flixel::util::helpers::FlxRange_obj::__new(_g4,_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(86)
	this->scaleRange = _g6;
	HX_STACK_LINE(87)
	::flixel::util::helpers::FlxRange _g7 = ::flixel::util::helpers::FlxRange_obj::__new((int)1,(int)1);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(87)
	this->alphaRange = _g7;
	HX_STACK_LINE(88)
	::flixel::util::helpers::FlxRange _g8 = ::flixel::util::helpers::FlxRange_obj::__new((int)-1,null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(88)
	this->colorRange = _g8;
	HX_STACK_LINE(89)
	::flixel::math::FlxPoint _g9;		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(89)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(89)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(89)
		point->_inPool = false;
		HX_STACK_LINE(89)
		_g9 = point;
	}
	HX_STACK_LINE(89)
	::flixel::math::FlxPoint _g10;		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(89)
	{
		HX_STACK_LINE(89)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(89)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(89)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(89)
		point->_inPool = false;
		HX_STACK_LINE(89)
		_g10 = point;
	}
	HX_STACK_LINE(89)
	::flixel::util::helpers::FlxRange _g11 = ::flixel::util::helpers::FlxRange_obj::__new(_g9,_g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(89)
	this->dragRange = _g11;
	HX_STACK_LINE(90)
	::flixel::math::FlxPoint _g12;		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(90)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(90)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(90)
		point->_inPool = false;
		HX_STACK_LINE(90)
		_g12 = point;
	}
	HX_STACK_LINE(90)
	::flixel::math::FlxPoint _g13;		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(90)
	{
		HX_STACK_LINE(90)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(90)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(90)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(90)
		point->_inPool = false;
		HX_STACK_LINE(90)
		_g13 = point;
	}
	HX_STACK_LINE(90)
	::flixel::util::helpers::FlxRange _g14 = ::flixel::util::helpers::FlxRange_obj::__new(_g12,_g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(90)
	this->accelerationRange = _g14;
	HX_STACK_LINE(91)
	::flixel::util::helpers::FlxRange _g15 = ::flixel::util::helpers::FlxRange_obj::__new((int)0,null());		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(91)
	this->elasticityRange = _g15;
	HX_STACK_LINE(93)
	this->set_exists(false);
}
;
	return null();
}

//FlxParticle_obj::~FlxParticle_obj() { }

Dynamic FlxParticle_obj::__CreateEmpty() { return  new FlxParticle_obj; }
hx::ObjectPtr< FlxParticle_obj > FlxParticle_obj::__new()
{  hx::ObjectPtr< FlxParticle_obj > result = new FlxParticle_obj();
	result->__construct();
	return result;}

Dynamic FlxParticle_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxParticle_obj > result = new FlxParticle_obj();
	result->__construct();
	return result;}

hx::Object *FlxParticle_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::IFlxSprite_obj)) return operator ::flixel::IFlxSprite_obj *();
	if (inType==typeid( ::flixel::IFlxBasic_obj)) return operator ::flixel::IFlxBasic_obj *();
	if (inType==typeid( ::flixel::effects::particles::IFlxParticle_obj)) return operator ::flixel::effects::particles::IFlxParticle_obj *();
	return super::__ToInterface(inType);
}

Void FlxParticle_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","destroy",0xa0ae8f85,"flixel.effects.particles.FlxParticle.destroy","flixel/effects/particles/FlxParticle.hx",100,0xdb578328)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		::flixel::util::FlxDestroyUtil_obj::put(this->velocityRange->start);
		HX_STACK_LINE(102)
		::flixel::util::FlxDestroyUtil_obj::put(this->velocityRange->end);
		HX_STACK_LINE(103)
		::flixel::util::FlxDestroyUtil_obj::put(this->scaleRange->start);
		HX_STACK_LINE(104)
		::flixel::util::FlxDestroyUtil_obj::put(this->scaleRange->end);
		HX_STACK_LINE(105)
		::flixel::util::FlxDestroyUtil_obj::put(this->dragRange->start);
		HX_STACK_LINE(106)
		::flixel::util::FlxDestroyUtil_obj::put(this->dragRange->end);
		HX_STACK_LINE(107)
		::flixel::util::FlxDestroyUtil_obj::put(this->accelerationRange->start);
		HX_STACK_LINE(108)
		::flixel::util::FlxDestroyUtil_obj::put(this->accelerationRange->end);
		HX_STACK_LINE(110)
		this->velocityRange = null();
		HX_STACK_LINE(111)
		this->angularVelocityRange = null();
		HX_STACK_LINE(112)
		this->scaleRange = null();
		HX_STACK_LINE(113)
		this->alphaRange = null();
		HX_STACK_LINE(114)
		this->colorRange = null();
		HX_STACK_LINE(115)
		this->dragRange = null();
		HX_STACK_LINE(116)
		this->accelerationRange = null();
		HX_STACK_LINE(117)
		this->elasticityRange = null();
		HX_STACK_LINE(119)
		this->super::destroy();
	}
return null();
}


Void FlxParticle_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","update",0xc345fdde,"flixel.effects.particles.FlxParticle.update","flixel/effects/particles/FlxParticle.hx",126,0xdb578328)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(127)
		if (((this->age < this->lifespan))){
			HX_STACK_LINE(129)
			hx::AddEq(this->age,elapsed);
		}
		HX_STACK_LINE(132)
		if (((bool((this->age >= this->lifespan)) && bool((this->lifespan != (int)0))))){
			HX_STACK_LINE(134)
			this->kill();
		}
		else{
			HX_STACK_LINE(138)
			this->_delta = (Float(elapsed) / Float(this->lifespan));
			HX_STACK_LINE(139)
			this->percent = (Float(this->age) / Float(this->lifespan));
			HX_STACK_LINE(141)
			if ((this->velocityRange->active)){
				HX_STACK_LINE(143)
				{
					HX_STACK_LINE(143)
					::flixel::math::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(143)
					_g->set_x((_g->x + (((this->velocityRange->end->__Field(HX_CSTRING("x"),true) - this->velocityRange->start->__Field(HX_CSTRING("x"),true))) * this->_delta)));
				}
				HX_STACK_LINE(144)
				{
					HX_STACK_LINE(144)
					::flixel::math::FlxPoint _g = this->velocity;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(144)
					_g->set_y((_g->y + (((this->velocityRange->end->__Field(HX_CSTRING("y"),true) - this->velocityRange->start->__Field(HX_CSTRING("y"),true))) * this->_delta)));
				}
			}
			HX_STACK_LINE(147)
			if ((this->angularVelocityRange->active)){
				HX_STACK_LINE(149)
				hx::AddEq(this->angularVelocity,(((this->angularVelocityRange->end - this->angularVelocityRange->start)) * this->_delta));
			}
			HX_STACK_LINE(152)
			if ((this->scaleRange->active)){
				HX_STACK_LINE(154)
				{
					HX_STACK_LINE(154)
					::flixel::math::FlxPoint _g = this->scale;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(154)
					_g->set_x((_g->x + (((this->scaleRange->end->__Field(HX_CSTRING("x"),true) - this->scaleRange->start->__Field(HX_CSTRING("x"),true))) * this->_delta)));
				}
				HX_STACK_LINE(155)
				{
					HX_STACK_LINE(155)
					::flixel::math::FlxPoint _g = this->scale;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(155)
					_g->set_y((_g->y + (((this->scaleRange->end->__Field(HX_CSTRING("y"),true) - this->scaleRange->start->__Field(HX_CSTRING("y"),true))) * this->_delta)));
				}
				HX_STACK_LINE(156)
				if ((this->autoUpdateHitbox)){
					HX_STACK_LINE(156)
					this->updateHitbox();
				}
			}
			HX_STACK_LINE(159)
			if ((this->alphaRange->active)){
				HX_STACK_LINE(161)
				::flixel::effects::particles::FlxParticle _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(161)
				_g->set_alpha((_g->alpha + (((this->alphaRange->end - this->alphaRange->start)) * this->_delta)));
			}
			HX_STACK_LINE(164)
			if ((this->colorRange->active)){
				HX_STACK_LINE(166)
				int _g;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(166)
				{
					HX_STACK_LINE(166)
					int Color1 = this->colorRange->start;		HX_STACK_VAR(Color1,"Color1");
					HX_STACK_LINE(166)
					int Color2 = this->colorRange->end;		HX_STACK_VAR(Color2,"Color2");
					HX_STACK_LINE(166)
					Float Factor = this->percent;		HX_STACK_VAR(Factor,"Factor");
					HX_STACK_LINE(166)
					int r = ::Std_obj::_int(((((((int((int(Color2) >> int((int)16))) & int((int)255))) - ((int((int(Color1) >> int((int)16))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)16))) & int((int)255)))));		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(166)
					int g = ::Std_obj::_int(((((((int((int(Color2) >> int((int)8))) & int((int)255))) - ((int((int(Color1) >> int((int)8))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)8))) & int((int)255)))));		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(166)
					int b = ::Std_obj::_int(((((((int(Color2) & int((int)255))) - ((int(Color1) & int((int)255))))) * Factor) + ((int(Color1) & int((int)255)))));		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(166)
					int a = ::Std_obj::_int(((((((int((int(Color2) >> int((int)24))) & int((int)255))) - ((int((int(Color1) >> int((int)24))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)24))) & int((int)255)))));		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(166)
					{
						HX_STACK_LINE(166)
						int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
						struct _Function_5_1{
							inline static int Block( int &g,int &r,int &b,int &color,int &a){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxParticle.hx",166,0xdb578328)
								{
									HX_STACK_LINE(166)
									{
										HX_STACK_LINE(166)
										hx::AndEq(color,(int)-16711681);
										HX_STACK_LINE(166)
										hx::OrEq(color,(int(((  (((r > (int)255))) ? int((int)255) : int((  (((r < (int)0))) ? int((int)0) : int(r) )) ))) << int((int)16)));
										HX_STACK_LINE(166)
										r;
									}
									HX_STACK_LINE(166)
									{
										HX_STACK_LINE(166)
										hx::AndEq(color,(int)-65281);
										HX_STACK_LINE(166)
										hx::OrEq(color,(int(((  (((g > (int)255))) ? int((int)255) : int((  (((g < (int)0))) ? int((int)0) : int(g) )) ))) << int((int)8)));
										HX_STACK_LINE(166)
										g;
									}
									HX_STACK_LINE(166)
									{
										HX_STACK_LINE(166)
										hx::AndEq(color,(int)-256);
										HX_STACK_LINE(166)
										if (((b > (int)255))){
											HX_STACK_LINE(166)
											hx::OrEq(color,(int)255);
										}
										else{
											HX_STACK_LINE(166)
											if (((b < (int)0))){
												HX_STACK_LINE(166)
												hx::OrEq(color,(int)0);
											}
											else{
												HX_STACK_LINE(166)
												hx::OrEq(color,b);
											}
										}
										HX_STACK_LINE(166)
										b;
									}
									HX_STACK_LINE(166)
									{
										HX_STACK_LINE(166)
										hx::AndEq(color,(int)16777215);
										HX_STACK_LINE(166)
										hx::OrEq(color,(int(((  (((a > (int)255))) ? int((int)255) : int((  (((a < (int)0))) ? int((int)0) : int(a) )) ))) << int((int)24)));
										HX_STACK_LINE(166)
										a;
									}
									HX_STACK_LINE(166)
									return color;
								}
								return null();
							}
						};
						HX_STACK_LINE(166)
						_g = _Function_5_1::Block(g,r,b,color,a);
					}
				}
				HX_STACK_LINE(166)
				this->set_color(_g);
			}
			HX_STACK_LINE(169)
			if ((this->dragRange->active)){
				HX_STACK_LINE(171)
				{
					HX_STACK_LINE(171)
					::flixel::math::FlxPoint _g = this->drag;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(171)
					_g->set_x((_g->x + (((this->dragRange->end->__Field(HX_CSTRING("x"),true) - this->dragRange->start->__Field(HX_CSTRING("x"),true))) * this->_delta)));
				}
				HX_STACK_LINE(172)
				{
					HX_STACK_LINE(172)
					::flixel::math::FlxPoint _g = this->drag;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(172)
					_g->set_y((_g->y + (((this->dragRange->end->__Field(HX_CSTRING("y"),true) - this->dragRange->start->__Field(HX_CSTRING("y"),true))) * this->_delta)));
				}
			}
			HX_STACK_LINE(175)
			if ((this->accelerationRange->active)){
				HX_STACK_LINE(177)
				{
					HX_STACK_LINE(177)
					::flixel::math::FlxPoint _g = this->acceleration;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(177)
					_g->set_x((_g->x + (((this->accelerationRange->end->__Field(HX_CSTRING("x"),true) - this->accelerationRange->start->__Field(HX_CSTRING("x"),true))) * this->_delta)));
				}
				HX_STACK_LINE(178)
				{
					HX_STACK_LINE(178)
					::flixel::math::FlxPoint _g = this->acceleration;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(178)
					_g->set_y((_g->y + (((this->accelerationRange->end->__Field(HX_CSTRING("y"),true) - this->accelerationRange->start->__Field(HX_CSTRING("y"),true))) * this->_delta)));
				}
			}
			HX_STACK_LINE(181)
			if ((this->elasticityRange->active)){
				HX_STACK_LINE(183)
				hx::AddEq(this->elasticity,(((this->elasticityRange->end - this->elasticityRange->start)) * this->_delta));
			}
		}
		HX_STACK_LINE(187)
		this->super::update(elapsed);
	}
return null();
}


Void FlxParticle_obj::reset( Float X,Float Y){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","reset",0xddde639a,"flixel.effects.particles.FlxParticle.reset","flixel/effects/particles/FlxParticle.hx",191,0xdb578328)
		HX_STACK_THIS(this)
		HX_STACK_ARG(X,"X")
		HX_STACK_ARG(Y,"Y")
		HX_STACK_LINE(192)
		this->super::reset(X,Y);
		HX_STACK_LINE(193)
		this->age = (int)0;
		HX_STACK_LINE(194)
		this->set_visible(true);
	}
return null();
}


Void FlxParticle_obj::onEmit( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxParticle","onEmit",0x21e01ee7,"flixel.effects.particles.FlxParticle.onEmit","flixel/effects/particles/FlxParticle.hx",201,0xdb578328)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxParticle_obj,onEmit,(void))


FlxParticle_obj::FlxParticle_obj()
{
}

void FlxParticle_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxParticle);
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(age,"age");
	HX_MARK_MEMBER_NAME(percent,"percent");
	HX_MARK_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_MARK_MEMBER_NAME(velocityRange,"velocityRange");
	HX_MARK_MEMBER_NAME(angularVelocityRange,"angularVelocityRange");
	HX_MARK_MEMBER_NAME(scaleRange,"scaleRange");
	HX_MARK_MEMBER_NAME(alphaRange,"alphaRange");
	HX_MARK_MEMBER_NAME(colorRange,"colorRange");
	HX_MARK_MEMBER_NAME(dragRange,"dragRange");
	HX_MARK_MEMBER_NAME(accelerationRange,"accelerationRange");
	HX_MARK_MEMBER_NAME(elasticityRange,"elasticityRange");
	HX_MARK_MEMBER_NAME(_delta,"_delta");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxParticle_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(age,"age");
	HX_VISIT_MEMBER_NAME(percent,"percent");
	HX_VISIT_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_VISIT_MEMBER_NAME(velocityRange,"velocityRange");
	HX_VISIT_MEMBER_NAME(angularVelocityRange,"angularVelocityRange");
	HX_VISIT_MEMBER_NAME(scaleRange,"scaleRange");
	HX_VISIT_MEMBER_NAME(alphaRange,"alphaRange");
	HX_VISIT_MEMBER_NAME(colorRange,"colorRange");
	HX_VISIT_MEMBER_NAME(dragRange,"dragRange");
	HX_VISIT_MEMBER_NAME(accelerationRange,"accelerationRange");
	HX_VISIT_MEMBER_NAME(elasticityRange,"elasticityRange");
	HX_VISIT_MEMBER_NAME(_delta,"_delta");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxParticle_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { return age; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"reset") ) { return reset_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { return _delta; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"onEmit") ) { return onEmit_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { return percent; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragRange") ) { return dragRange; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleRange") ) { return scaleRange; }
		if (HX_FIELD_EQ(inName,"alphaRange") ) { return alphaRange; }
		if (HX_FIELD_EQ(inName,"colorRange") ) { return colorRange; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"velocityRange") ) { return velocityRange; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"elasticityRange") ) { return elasticityRange; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { return autoUpdateHitbox; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"accelerationRange") ) { return accelerationRange; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"angularVelocityRange") ) { return angularVelocityRange; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxParticle_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"age") ) { age=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_delta") ) { _delta=inValue.Cast< Float >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"percent") ) { percent=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"dragRange") ) { dragRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"scaleRange") ) { scaleRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alphaRange") ) { alphaRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		if (HX_FIELD_EQ(inName,"colorRange") ) { colorRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"velocityRange") ) { velocityRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"elasticityRange") ) { elasticityRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { autoUpdateHitbox=inValue.Cast< bool >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"accelerationRange") ) { accelerationRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"angularVelocityRange") ) { angularVelocityRange=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxParticle_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("lifespan"));
	outFields->push(HX_CSTRING("age"));
	outFields->push(HX_CSTRING("percent"));
	outFields->push(HX_CSTRING("autoUpdateHitbox"));
	outFields->push(HX_CSTRING("velocityRange"));
	outFields->push(HX_CSTRING("angularVelocityRange"));
	outFields->push(HX_CSTRING("scaleRange"));
	outFields->push(HX_CSTRING("alphaRange"));
	outFields->push(HX_CSTRING("colorRange"));
	outFields->push(HX_CSTRING("dragRange"));
	outFields->push(HX_CSTRING("accelerationRange"));
	outFields->push(HX_CSTRING("elasticityRange"));
	outFields->push(HX_CSTRING("_delta"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,lifespan),HX_CSTRING("lifespan")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,age),HX_CSTRING("age")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,percent),HX_CSTRING("percent")},
	{hx::fsBool,(int)offsetof(FlxParticle_obj,autoUpdateHitbox),HX_CSTRING("autoUpdateHitbox")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,velocityRange),HX_CSTRING("velocityRange")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,angularVelocityRange),HX_CSTRING("angularVelocityRange")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,scaleRange),HX_CSTRING("scaleRange")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,alphaRange),HX_CSTRING("alphaRange")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,colorRange),HX_CSTRING("colorRange")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,dragRange),HX_CSTRING("dragRange")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,accelerationRange),HX_CSTRING("accelerationRange")},
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxParticle_obj,elasticityRange),HX_CSTRING("elasticityRange")},
	{hx::fsFloat,(int)offsetof(FlxParticle_obj,_delta),HX_CSTRING("_delta")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("lifespan"),
	HX_CSTRING("age"),
	HX_CSTRING("percent"),
	HX_CSTRING("autoUpdateHitbox"),
	HX_CSTRING("velocityRange"),
	HX_CSTRING("angularVelocityRange"),
	HX_CSTRING("scaleRange"),
	HX_CSTRING("alphaRange"),
	HX_CSTRING("colorRange"),
	HX_CSTRING("dragRange"),
	HX_CSTRING("accelerationRange"),
	HX_CSTRING("elasticityRange"),
	HX_CSTRING("_delta"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	HX_CSTRING("reset"),
	HX_CSTRING("onEmit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxParticle_obj::__mClass,"__mClass");
};

#endif

Class FlxParticle_obj::__mClass;

void FlxParticle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.FlxParticle"), hx::TCanCast< FlxParticle_obj> ,sStaticFields,sMemberFields,
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

void FlxParticle_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
