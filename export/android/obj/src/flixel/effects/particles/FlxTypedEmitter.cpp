#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimation
#include <flixel/animation/FlxAnimation.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxBaseAnimation
#include <flixel/animation/FlxBaseAnimation.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxEmitterMode
#include <flixel/effects/particles/FlxEmitterMode.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxParticle
#include <flixel/effects/particles/FlxParticle.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_FlxTypedEmitter
#include <flixel/effects/particles/FlxTypedEmitter.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
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
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxPointRangeBounds
#include <flixel/util/helpers/FlxPointRangeBounds.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRangeBounds
#include <flixel/util/helpers/FlxRangeBounds.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

Void FlxTypedEmitter_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{
HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","new",0x3e1a9dc9,"flixel.effects.particles.FlxTypedEmitter.new","flixel/effects/particles/FlxEmitter.hx",36,0x6dff0520)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Size,"Size")
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
int Size = __o_Size.Default(0);
{
	HX_STACK_LINE(177)
	this->_waitForKill = false;
	HX_STACK_LINE(169)
	this->_counter = (int)0;
	HX_STACK_LINE(165)
	this->_timer = (int)0;
	HX_STACK_LINE(161)
	this->_explode = true;
	HX_STACK_LINE(157)
	this->_quantity = (int)0;
	HX_STACK_LINE(149)
	this->allowCollisions = (int)0;
	HX_STACK_LINE(145)
	this->autoUpdateHitbox = false;
	HX_STACK_LINE(141)
	this->immovable = false;
	HX_STACK_LINE(105)
	this->ignoreAngularVelocity = false;
	HX_STACK_LINE(77)
	this->keepScaleRatio = false;
	HX_STACK_LINE(73)
	this->launchMode = ::flixel::effects::particles::FlxEmitterMode_obj::CIRCLE;
	HX_STACK_LINE(69)
	this->height = (int)0;
	HX_STACK_LINE(65)
	this->width = (int)0;
	HX_STACK_LINE(61)
	this->y = (int)0;
	HX_STACK_LINE(57)
	this->x = (int)0;
	HX_STACK_LINE(49)
	this->frequency = 0.1;
	HX_STACK_LINE(45)
	this->emitting = false;
	HX_STACK_LINE(189)
	super::__construct(Size);
	HX_STACK_LINE(191)
	this->x = X;
	HX_STACK_LINE(192)
	this->y = Y;
	HX_STACK_LINE(194)
	::flixel::util::helpers::FlxPointRangeBounds _g = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)-100,(int)-100,(int)100,(int)100,null(),null(),null(),null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(194)
	this->velocity = _g;
	HX_STACK_LINE(195)
	::flixel::util::helpers::FlxRangeBounds _g1 = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)100,null(),null());		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(195)
	this->speed = _g1;
	HX_STACK_LINE(196)
	::flixel::util::helpers::FlxRangeBounds _g2 = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(196)
	this->angularAcceleration = _g2;
	HX_STACK_LINE(197)
	::flixel::util::helpers::FlxRangeBounds _g3 = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(197)
	this->angularDrag = _g3;
	HX_STACK_LINE(198)
	::flixel::util::helpers::FlxRangeBounds _g4 = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(198)
	this->angularVelocity = _g4;
	HX_STACK_LINE(199)
	::flixel::util::helpers::FlxRangeBounds _g5 = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(199)
	this->angle = _g5;
	HX_STACK_LINE(200)
	::flixel::util::helpers::FlxBounds _g6 = ::flixel::util::helpers::FlxBounds_obj::__new((int)-180,(int)180);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(200)
	this->launchAngle = _g6;
	HX_STACK_LINE(201)
	::flixel::util::helpers::FlxBounds _g7 = ::flixel::util::helpers::FlxBounds_obj::__new((int)3,null());		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(201)
	this->lifespan = _g7;
	HX_STACK_LINE(202)
	::flixel::util::helpers::FlxPointRangeBounds _g8 = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)1,(int)1,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(202)
	this->scale = _g8;
	HX_STACK_LINE(203)
	::flixel::util::helpers::FlxRangeBounds _g9 = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)1,null(),null(),null());		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(203)
	this->alpha = _g9;
	HX_STACK_LINE(204)
	::flixel::util::helpers::FlxRangeBounds _g10 = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)-1,(int)-1,null(),null());		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(204)
	this->color = _g10;
	HX_STACK_LINE(205)
	::flixel::util::helpers::FlxPointRangeBounds _g11 = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)0,(int)0,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(205)
	this->drag = _g11;
	HX_STACK_LINE(206)
	::flixel::util::helpers::FlxPointRangeBounds _g12 = ::flixel::util::helpers::FlxPointRangeBounds_obj::__new((int)0,(int)0,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(206)
	this->acceleration = _g12;
	HX_STACK_LINE(207)
	::flixel::util::helpers::FlxRangeBounds _g13 = ::flixel::util::helpers::FlxRangeBounds_obj::__new((int)0,null(),null(),null());		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(207)
	this->elasticity = _g13;
	HX_STACK_LINE(209)
	this->particleClass = hx::ClassOf< ::flixel::effects::particles::FlxParticle >();
	HX_STACK_LINE(211)
	this->set_exists(false);
	HX_STACK_LINE(212)
	::flixel::math::FlxPoint _g14;		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(212)
	{
		HX_STACK_LINE(212)
		Float X1 = (int)0;		HX_STACK_VAR(X1,"X1");
		HX_STACK_LINE(212)
		Float Y1 = (int)0;		HX_STACK_VAR(Y1,"Y1");
		HX_STACK_LINE(212)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X1,Y1);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(212)
		point->_inPool = false;
		HX_STACK_LINE(212)
		_g14 = point;
	}
	HX_STACK_LINE(212)
	this->_point = _g14;
}
;
	return null();
}

//FlxTypedEmitter_obj::~FlxTypedEmitter_obj() { }

Dynamic FlxTypedEmitter_obj::__CreateEmpty() { return  new FlxTypedEmitter_obj; }
hx::ObjectPtr< FlxTypedEmitter_obj > FlxTypedEmitter_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< int >  __o_Size)
{  hx::ObjectPtr< FlxTypedEmitter_obj > result = new FlxTypedEmitter_obj();
	result->__construct(__o_X,__o_Y,__o_Size);
	return result;}

Dynamic FlxTypedEmitter_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedEmitter_obj > result = new FlxTypedEmitter_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void FlxTypedEmitter_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","destroy",0x574a62e3,"flixel.effects.particles.FlxTypedEmitter.destroy","flixel/effects/particles/FlxEmitter.hx",219,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(220)
		::flixel::util::helpers::FlxPointRangeBounds _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->velocity);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(220)
		this->velocity = _g;
		HX_STACK_LINE(221)
		::flixel::util::helpers::FlxPointRangeBounds _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->scale);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(221)
		this->scale = _g1;
		HX_STACK_LINE(222)
		::flixel::util::helpers::FlxPointRangeBounds _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->drag);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(222)
		this->drag = _g2;
		HX_STACK_LINE(223)
		::flixel::util::helpers::FlxPointRangeBounds _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->acceleration);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(223)
		this->acceleration = _g3;
		HX_STACK_LINE(224)
		::flixel::math::FlxPoint _g4 = ::flixel::util::FlxDestroyUtil_obj::put(this->_point);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(224)
		this->_point = _g4;
		HX_STACK_LINE(226)
		this->blend = null();
		HX_STACK_LINE(227)
		this->angularAcceleration = null();
		HX_STACK_LINE(228)
		this->angularDrag = null();
		HX_STACK_LINE(229)
		this->angularVelocity = null();
		HX_STACK_LINE(230)
		this->angle = null();
		HX_STACK_LINE(231)
		this->speed = null();
		HX_STACK_LINE(232)
		this->launchAngle = null();
		HX_STACK_LINE(233)
		this->lifespan = null();
		HX_STACK_LINE(234)
		this->alpha = null();
		HX_STACK_LINE(235)
		this->color = null();
		HX_STACK_LINE(236)
		this->elasticity = null();
		HX_STACK_LINE(238)
		this->super::destroy();
	}
return null();
}


::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::loadParticles( Dynamic Graphics,hx::Null< int >  __o_Quantity,hx::Null< int >  __o_bakedRotationAngles,hx::Null< bool >  __o_Multiple,hx::Null< bool >  __o_AutoBuffer){
int Quantity = __o_Quantity.Default(50);
int bakedRotationAngles = __o_bakedRotationAngles.Default(16);
bool Multiple = __o_Multiple.Default(false);
bool AutoBuffer = __o_AutoBuffer.Default(false);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","loadParticles",0x7d4e1b10,"flixel.effects.particles.FlxTypedEmitter.loadParticles","flixel/effects/particles/FlxEmitter.hx",252,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Graphics,"Graphics")
	HX_STACK_ARG(Quantity,"Quantity")
	HX_STACK_ARG(bakedRotationAngles,"bakedRotationAngles")
	HX_STACK_ARG(Multiple,"Multiple")
	HX_STACK_ARG(AutoBuffer,"AutoBuffer")
{
		HX_STACK_LINE(253)
		this->set_maxSize(Quantity);
		HX_STACK_LINE(254)
		int totalFrames = (int)1;		HX_STACK_VAR(totalFrames,"totalFrames");
		HX_STACK_LINE(256)
		if ((Multiple)){
			HX_STACK_LINE(258)
			::flixel::FlxSprite sprite = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(sprite,"sprite");
			HX_STACK_LINE(259)
			sprite->loadGraphic(Graphics,true,null(),null(),null(),null());
			HX_STACK_LINE(260)
			totalFrames = sprite->numFrames;
			HX_STACK_LINE(261)
			sprite->destroy();
		}
		HX_STACK_LINE(264)
		int randomFrame;		HX_STACK_VAR(randomFrame,"randomFrame");
		HX_STACK_LINE(265)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(267)
		while((true)){
			HX_STACK_LINE(267)
			if ((!(((i < Quantity))))){
				HX_STACK_LINE(267)
				break;
			}
			HX_STACK_LINE(269)
			Dynamic particle = ::Type_obj::createInstance(this->particleClass,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(particle,"particle");
			HX_STACK_LINE(271)
			if ((Multiple)){
				HX_STACK_LINE(273)
				int _g = ::flixel::FlxG_obj::random->_int((int)0,(totalFrames - (int)1),null());		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(273)
				randomFrame = _g;
				HX_STACK_LINE(275)
				if (((bakedRotationAngles > (int)0))){
					HX_STACK_LINE(280)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,true,null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(285)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,true,null(),null(),null(),null());
				}
				HX_STACK_LINE(287)
				particle->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("set_frameIndex"),true)(randomFrame);
			}
			else{
				HX_STACK_LINE(291)
				if (((bakedRotationAngles > (int)0))){
					HX_STACK_LINE(296)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,null(),null(),null(),null(),null());
				}
				else{
					HX_STACK_LINE(301)
					particle->__Field(HX_CSTRING("loadGraphic"),true)(Graphics,null(),null(),null(),null(),null());
				}
			}
			HX_STACK_LINE(305)
			this->add(particle);
			HX_STACK_LINE(306)
			(i)++;
		}
		HX_STACK_LINE(309)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC5(FlxTypedEmitter_obj,loadParticles,return )

::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::makeParticles( hx::Null< int >  __o_Width,hx::Null< int >  __o_Height,hx::Null< int >  __o_Color,hx::Null< int >  __o_Quantity){
int Width = __o_Width.Default(2);
int Height = __o_Height.Default(2);
int Color = __o_Color.Default(-1);
int Quantity = __o_Quantity.Default(50);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","makeParticles",0xf3914248,"flixel.effects.particles.FlxTypedEmitter.makeParticles","flixel/effects/particles/FlxEmitter.hx",322,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Width,"Width")
	HX_STACK_ARG(Height,"Height")
	HX_STACK_ARG(Color,"Color")
	HX_STACK_ARG(Quantity,"Quantity")
{
		HX_STACK_LINE(323)
		int i = (int)0;		HX_STACK_VAR(i,"i");
		HX_STACK_LINE(325)
		while((true)){
			HX_STACK_LINE(325)
			if ((!(((i < Quantity))))){
				HX_STACK_LINE(325)
				break;
			}
			HX_STACK_LINE(327)
			Dynamic particle = ::Type_obj::createInstance(this->particleClass,Dynamic( Array_obj<Dynamic>::__new()));		HX_STACK_VAR(particle,"particle");
			HX_STACK_LINE(328)
			particle->__Field(HX_CSTRING("makeGraphic"),true)(Width,Height,Color,null(),null());
			HX_STACK_LINE(329)
			this->add(particle);
			HX_STACK_LINE(331)
			(i)++;
		}
		HX_STACK_LINE(334)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedEmitter_obj,makeParticles,return )

Void FlxTypedEmitter_obj::update( Float elapsed){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","update",0x6f244040,"flixel.effects.particles.FlxTypedEmitter.update","flixel/effects/particles/FlxEmitter.hx",341,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(342)
		if ((this->emitting)){
			HX_STACK_LINE(344)
			if ((this->_explode)){
				HX_STACK_LINE(346)
				this->emitting = false;
				HX_STACK_LINE(347)
				this->_waitForKill = true;
				HX_STACK_LINE(349)
				int i = (int)0;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(350)
				int l = this->_quantity;		HX_STACK_VAR(l,"l");
				HX_STACK_LINE(352)
				if (((bool((l <= (int)0)) || bool((l > this->length))))){
					HX_STACK_LINE(354)
					l = this->length;
				}
				HX_STACK_LINE(357)
				while((true)){
					HX_STACK_LINE(357)
					if ((!(((i < l))))){
						HX_STACK_LINE(357)
						break;
					}
					HX_STACK_LINE(359)
					this->emitParticle();
					HX_STACK_LINE(360)
					(i)++;
				}
				HX_STACK_LINE(363)
				this->_quantity = (int)0;
			}
			else{
				HX_STACK_LINE(368)
				if (((this->frequency <= (int)0))){
					HX_STACK_LINE(370)
					this->emitParticle();
					struct _Function_4_1{
						inline static bool Block( hx::ObjectPtr< ::flixel::effects::particles::FlxTypedEmitter_obj > __this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",372,0x6dff0520)
							{
								HX_STACK_LINE(372)
								int _g = ++(__this->_counter);		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(372)
								return (_g >= __this->_quantity);
							}
							return null();
						}
					};
					HX_STACK_LINE(372)
					if (((  (((this->_quantity > (int)0))) ? bool(_Function_4_1::Block(this)) : bool(false) ))){
						HX_STACK_LINE(374)
						this->emitting = false;
						HX_STACK_LINE(375)
						this->_waitForKill = true;
						HX_STACK_LINE(376)
						this->_quantity = (int)0;
					}
				}
				else{
					HX_STACK_LINE(381)
					hx::AddEq(this->_timer,elapsed);
					HX_STACK_LINE(383)
					while((true)){
						HX_STACK_LINE(383)
						if ((!(((this->_timer > this->frequency))))){
							HX_STACK_LINE(383)
							break;
						}
						HX_STACK_LINE(385)
						hx::SubEq(this->_timer,this->frequency);
						HX_STACK_LINE(386)
						this->emitParticle();
						struct _Function_5_1{
							inline static bool Block( hx::ObjectPtr< ::flixel::effects::particles::FlxTypedEmitter_obj > __this){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",388,0x6dff0520)
								{
									HX_STACK_LINE(388)
									int _g1 = ++(__this->_counter);		HX_STACK_VAR(_g1,"_g1");
									HX_STACK_LINE(388)
									return (_g1 >= __this->_quantity);
								}
								return null();
							}
						};
						HX_STACK_LINE(388)
						if (((  (((this->_quantity > (int)0))) ? bool(_Function_5_1::Block(this)) : bool(false) ))){
							HX_STACK_LINE(390)
							this->emitting = false;
							HX_STACK_LINE(391)
							this->_waitForKill = true;
							HX_STACK_LINE(392)
							this->_quantity = (int)0;
						}
					}
				}
			}
		}
		else{
			HX_STACK_LINE(398)
			if ((this->_waitForKill)){
				HX_STACK_LINE(400)
				hx::AddEq(this->_timer,elapsed);
				HX_STACK_LINE(402)
				if (((bool((this->lifespan->max > (int)0)) && bool((this->_timer > this->lifespan->max))))){
					HX_STACK_LINE(404)
					this->kill();
					HX_STACK_LINE(405)
					return null();
				}
			}
		}
		HX_STACK_LINE(409)
		this->super::update(elapsed);
	}
return null();
}


Void FlxTypedEmitter_obj::kill( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","kill",0x1736ce15,"flixel.effects.particles.FlxTypedEmitter.kill","flixel/effects/particles/FlxEmitter.hx",416,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(417)
		this->emitting = false;
		HX_STACK_LINE(418)
		this->_waitForKill = false;
		HX_STACK_LINE(420)
		this->super::kill();
	}
return null();
}


::flixel::effects::particles::FlxTypedEmitter FlxTypedEmitter_obj::start( hx::Null< bool >  __o_Explode,hx::Null< Float >  __o_Frequency,hx::Null< int >  __o_Quantity){
bool Explode = __o_Explode.Default(true);
Float Frequency = __o_Frequency.Default(0.1);
int Quantity = __o_Quantity.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","start",0xdb2f2e0b,"flixel.effects.particles.FlxTypedEmitter.start","flixel/effects/particles/FlxEmitter.hx",432,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Explode,"Explode")
	HX_STACK_ARG(Frequency,"Frequency")
	HX_STACK_ARG(Quantity,"Quantity")
{
		HX_STACK_LINE(433)
		this->set_exists(true);
		HX_STACK_LINE(434)
		this->set_visible(true);
		HX_STACK_LINE(435)
		this->emitting = true;
		HX_STACK_LINE(437)
		this->_explode = Explode;
		HX_STACK_LINE(438)
		this->frequency = Frequency;
		HX_STACK_LINE(439)
		hx::AddEq(this->_quantity,Quantity);
		HX_STACK_LINE(441)
		this->_counter = (int)0;
		HX_STACK_LINE(442)
		this->_timer = (int)0;
		HX_STACK_LINE(444)
		this->_waitForKill = false;
		HX_STACK_LINE(446)
		return hx::ObjectPtr<OBJ_>(this);
	}
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedEmitter_obj,start,return )

Void FlxTypedEmitter_obj::emitParticle( ){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","emitParticle",0xe36e6130,"flixel.effects.particles.FlxTypedEmitter.emitParticle","flixel/effects/particles/FlxEmitter.hx",453,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_LINE(454)
		Dynamic particle = this->recycle(this->particleClass,null(),null(),null());		HX_STACK_VAR(particle,"particle");
		HX_STACK_LINE(456)
		particle->__Field(HX_CSTRING("reset"),true)((int)0,(int)0);
		HX_STACK_LINE(458)
		particle->__Field(HX_CSTRING("set_blend"),true)(this->blend);
		HX_STACK_LINE(459)
		particle->__Field(HX_CSTRING("set_immovable"),true)(this->immovable);
		HX_STACK_LINE(460)
		particle->__Field(HX_CSTRING("set_solid"),true)((((int(this->allowCollisions) & int((int)4369))) > (int)0));
		HX_STACK_LINE(461)
		particle->__FieldRef(HX_CSTRING("allowCollisions")) = this->allowCollisions;
		HX_STACK_LINE(462)
		particle->__FieldRef(HX_CSTRING("autoUpdateHitbox")) = this->autoUpdateHitbox;
		struct _Function_1_1{
			inline static bool Block( Dynamic &particle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",466,0x6dff0520)
				{
					HX_STACK_LINE(466)
					::flixel::math::FlxPoint _this = particle->__Field(HX_CSTRING("velocityRange"),true)->__Field(HX_CSTRING("start"),true);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(466)
					::flixel::math::FlxPoint point = particle->__Field(HX_CSTRING("velocityRange"),true)->__Field(HX_CSTRING("end"),true);		HX_STACK_VAR(point,"point");
					struct _Function_2_1{
						inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",466,0x6dff0520)
							{
								HX_STACK_LINE(466)
								Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
								HX_STACK_LINE(466)
								Float _g = ::Math_obj::abs((_this->x - point->x));		HX_STACK_VAR(_g,"_g");
								HX_STACK_LINE(466)
								return (_g <= aDiff);
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",466,0x6dff0520)
							{
								HX_STACK_LINE(466)
								Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
								HX_STACK_LINE(466)
								Float _g1 = ::Math_obj::abs((_this->y - point->y));		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(466)
								return (_g1 <= aDiff);
							}
							return null();
						}
					};
					HX_STACK_LINE(466)
					return (  ((_Function_2_1::Block(point,_this))) ? bool(_Function_2_2::Block(point,_this)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(466)
		bool _g2 = !(_Function_1_1::Block(particle));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(466)
		particle->__Field(HX_CSTRING("velocityRange"),true)->__FieldRef(HX_CSTRING("active")) = _g2;
		HX_STACK_LINE(468)
		if (((this->launchMode == ::flixel::effects::particles::FlxEmitterMode_obj::CIRCLE))){
			HX_STACK_LINE(470)
			Float particleAngle = ::flixel::FlxG_obj::random->_float(this->launchAngle->min,this->launchAngle->max,null());		HX_STACK_VAR(particleAngle,"particleAngle");
			HX_STACK_LINE(472)
			::flixel::math::FlxPoint _g5;		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(472)
			{
				HX_STACK_LINE(472)
				Float Speed = ::flixel::FlxG_obj::random->_float(this->speed->start->min,this->speed->start->max,null());		HX_STACK_VAR(Speed,"Speed");
				HX_STACK_LINE(472)
				Float a = (particleAngle * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(472)
				{
					HX_STACK_LINE(472)
					Float _g3 = ::Math_obj::cos(a);		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(472)
					Float X = (_g3 * Speed);		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(472)
					Float _g4 = ::Math_obj::sin(a);		HX_STACK_VAR(_g4,"_g4");
					HX_STACK_LINE(472)
					Float Y = (_g4 * Speed);		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(472)
					::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(472)
					point->_inPool = false;
					HX_STACK_LINE(472)
					_g5 = point;
				}
			}
			HX_STACK_LINE(472)
			this->_point = _g5;
			HX_STACK_LINE(473)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_x"),true)(this->_point->x);
			HX_STACK_LINE(474)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_y"),true)(this->_point->y);
			HX_STACK_LINE(475)
			particle->__Field(HX_CSTRING("velocityRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("set"),true)(this->_point->x,this->_point->y);
			HX_STACK_LINE(477)
			::flixel::math::FlxPoint _g8;		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(477)
			{
				HX_STACK_LINE(477)
				Float Speed = ::flixel::FlxG_obj::random->_float(this->speed->end->min,this->speed->end->max,null());		HX_STACK_VAR(Speed,"Speed");
				HX_STACK_LINE(477)
				Float a = (particleAngle * ((Float(::Math_obj::PI) / Float((int)180))));		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(477)
				{
					HX_STACK_LINE(477)
					Float _g6 = ::Math_obj::cos(a);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(477)
					Float X = (_g6 * Speed);		HX_STACK_VAR(X,"X");
					HX_STACK_LINE(477)
					Float _g7 = ::Math_obj::sin(a);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(477)
					Float Y = (_g7 * Speed);		HX_STACK_VAR(Y,"Y");
					HX_STACK_LINE(477)
					::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
					HX_STACK_LINE(477)
					point->_inPool = false;
					HX_STACK_LINE(477)
					_g8 = point;
				}
			}
			HX_STACK_LINE(477)
			this->_point = _g8;
			HX_STACK_LINE(478)
			particle->__Field(HX_CSTRING("velocityRange"),true)->__Field(HX_CSTRING("end"),true)->__Field(HX_CSTRING("set"),true)(this->_point->x,this->_point->y);
		}
		else{
			HX_STACK_LINE(482)
			Float _g9 = ::flixel::FlxG_obj::random->_float(this->velocity->start->min->__Field(HX_CSTRING("x"),true),this->velocity->start->max->__Field(HX_CSTRING("x"),true),null());		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(482)
			particle->__Field(HX_CSTRING("velocityRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("set_x"),true)(_g9);
			HX_STACK_LINE(483)
			Float _g10 = ::flixel::FlxG_obj::random->_float(this->velocity->start->min->__Field(HX_CSTRING("y"),true),this->velocity->start->max->__Field(HX_CSTRING("y"),true),null());		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(483)
			particle->__Field(HX_CSTRING("velocityRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("set_y"),true)(_g10);
			HX_STACK_LINE(484)
			Float _g11 = ::flixel::FlxG_obj::random->_float(this->velocity->end->min->__Field(HX_CSTRING("x"),true),this->velocity->end->max->__Field(HX_CSTRING("x"),true),null());		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(484)
			particle->__Field(HX_CSTRING("velocityRange"),true)->__Field(HX_CSTRING("end"),true)->__Field(HX_CSTRING("set_x"),true)(_g11);
			HX_STACK_LINE(485)
			Float _g12 = ::flixel::FlxG_obj::random->_float(this->velocity->end->min->__Field(HX_CSTRING("y"),true),this->velocity->end->max->__Field(HX_CSTRING("y"),true),null());		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(485)
			particle->__Field(HX_CSTRING("velocityRange"),true)->__Field(HX_CSTRING("end"),true)->__Field(HX_CSTRING("set_y"),true)(_g12);
			HX_STACK_LINE(486)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_x"),true)(particle->__Field(HX_CSTRING("velocityRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("x"),true));
			HX_STACK_LINE(487)
			particle->__Field(HX_CSTRING("velocity"),true)->__Field(HX_CSTRING("set_y"),true)(particle->__Field(HX_CSTRING("velocityRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("y"),true));
		}
		HX_STACK_LINE(492)
		particle->__Field(HX_CSTRING("angularVelocityRange"),true)->__FieldRef(HX_CSTRING("active")) = (this->angularVelocity->start != this->angularVelocity->end);
		HX_STACK_LINE(494)
		if ((!(this->ignoreAngularVelocity))){
			HX_STACK_LINE(496)
			Float _g13 = ::flixel::FlxG_obj::random->_float(this->angularAcceleration->start->min,this->angularAcceleration->start->max,null());		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(496)
			particle->__FieldRef(HX_CSTRING("angularAcceleration")) = _g13;
			HX_STACK_LINE(498)
			Float _g14 = ::flixel::FlxG_obj::random->_float(this->angularVelocity->start->min,this->angularVelocity->start->max,null());		HX_STACK_VAR(_g14,"_g14");
			HX_STACK_LINE(498)
			particle->__Field(HX_CSTRING("angularVelocityRange"),true)->__FieldRef(HX_CSTRING("start")) = _g14;
			HX_STACK_LINE(499)
			Float _g15 = ::flixel::FlxG_obj::random->_float(this->angularVelocity->end->min,this->angularVelocity->end->max,null());		HX_STACK_VAR(_g15,"_g15");
			HX_STACK_LINE(499)
			particle->__Field(HX_CSTRING("angularVelocityRange"),true)->__FieldRef(HX_CSTRING("end")) = _g15;
			HX_STACK_LINE(500)
			particle->__FieldRef(HX_CSTRING("angularVelocity")) = particle->__Field(HX_CSTRING("angularVelocityRange"),true)->__Field(HX_CSTRING("start"),true);
			HX_STACK_LINE(502)
			Float _g16 = ::flixel::FlxG_obj::random->_float(this->angularDrag->start->min,this->angularDrag->start->max,null());		HX_STACK_VAR(_g16,"_g16");
			HX_STACK_LINE(502)
			particle->__FieldRef(HX_CSTRING("angularDrag")) = _g16;
		}
		else{
			HX_STACK_LINE(506)
			Float _g17 = ::flixel::FlxG_obj::random->_float(this->angle->end->min,this->angle->end->max,null());		HX_STACK_VAR(_g17,"_g17");
			HX_STACK_LINE(506)
			Float _g18 = ::flixel::FlxG_obj::random->_float(this->angle->start->min,this->angle->start->max,null());		HX_STACK_VAR(_g18,"_g18");
			HX_STACK_LINE(506)
			Float _g19 = (_g17 - _g18);		HX_STACK_VAR(_g19,"_g19");
			HX_STACK_LINE(506)
			Float _g20 = ::flixel::FlxG_obj::random->_float(this->lifespan->min,this->lifespan->max,null());		HX_STACK_VAR(_g20,"_g20");
			HX_STACK_LINE(506)
			Float _g21 = (Float(_g19) / Float(_g20));		HX_STACK_VAR(_g21,"_g21");
			HX_STACK_LINE(506)
			particle->__FieldRef(HX_CSTRING("angularVelocity")) = _g21;
			HX_STACK_LINE(507)
			particle->__Field(HX_CSTRING("angularVelocityRange"),true)->__FieldRef(HX_CSTRING("active")) = false;
		}
		HX_STACK_LINE(512)
		Float _g22 = ::flixel::FlxG_obj::random->_float(this->angle->start->min,this->angle->start->max,null());		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(512)
		particle->__Field(HX_CSTRING("set_angle"),true)(_g22);
		HX_STACK_LINE(516)
		Float _g23 = ::flixel::FlxG_obj::random->_float(this->lifespan->min,this->lifespan->max,null());		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(516)
		particle->__FieldRef(HX_CSTRING("lifespan")) = _g23;
		HX_STACK_LINE(520)
		Float _g24 = ::flixel::FlxG_obj::random->_float(this->scale->start->min->__Field(HX_CSTRING("x"),true),this->scale->start->max->__Field(HX_CSTRING("x"),true),null());		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(520)
		particle->__Field(HX_CSTRING("scaleRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("set_x"),true)(_g24);
		HX_STACK_LINE(521)
		Float _g25;		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(521)
		if ((this->keepScaleRatio)){
			HX_STACK_LINE(521)
			_g25 = particle->__Field(HX_CSTRING("scaleRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("x"),true);
		}
		else{
			HX_STACK_LINE(521)
			_g25 = ::flixel::FlxG_obj::random->_float(this->scale->start->min->__Field(HX_CSTRING("y"),true),this->scale->start->max->__Field(HX_CSTRING("y"),true),null());
		}
		HX_STACK_LINE(521)
		particle->__Field(HX_CSTRING("scaleRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("set_y"),true)(_g25);
		HX_STACK_LINE(522)
		Float _g26 = ::flixel::FlxG_obj::random->_float(this->scale->end->min->__Field(HX_CSTRING("x"),true),this->scale->end->max->__Field(HX_CSTRING("x"),true),null());		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(522)
		particle->__Field(HX_CSTRING("scaleRange"),true)->__Field(HX_CSTRING("end"),true)->__Field(HX_CSTRING("set_x"),true)(_g26);
		HX_STACK_LINE(523)
		Float _g27;		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(523)
		if ((this->keepScaleRatio)){
			HX_STACK_LINE(523)
			_g27 = particle->__Field(HX_CSTRING("scaleRange"),true)->__Field(HX_CSTRING("end"),true)->__Field(HX_CSTRING("x"),true);
		}
		else{
			HX_STACK_LINE(523)
			_g27 = ::flixel::FlxG_obj::random->_float(this->scale->end->min->__Field(HX_CSTRING("y"),true),this->scale->end->max->__Field(HX_CSTRING("y"),true),null());
		}
		HX_STACK_LINE(523)
		particle->__Field(HX_CSTRING("scaleRange"),true)->__Field(HX_CSTRING("end"),true)->__Field(HX_CSTRING("set_y"),true)(_g27);
		struct _Function_1_2{
			inline static bool Block( Dynamic &particle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",524,0x6dff0520)
				{
					HX_STACK_LINE(524)
					::flixel::math::FlxPoint _this = particle->__Field(HX_CSTRING("scaleRange"),true)->__Field(HX_CSTRING("start"),true);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(524)
					::flixel::math::FlxPoint point = particle->__Field(HX_CSTRING("scaleRange"),true)->__Field(HX_CSTRING("end"),true);		HX_STACK_VAR(point,"point");
					struct _Function_2_1{
						inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",524,0x6dff0520)
							{
								HX_STACK_LINE(524)
								Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
								HX_STACK_LINE(524)
								Float _g28 = ::Math_obj::abs((_this->x - point->x));		HX_STACK_VAR(_g28,"_g28");
								HX_STACK_LINE(524)
								return (_g28 <= aDiff);
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",524,0x6dff0520)
							{
								HX_STACK_LINE(524)
								Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
								HX_STACK_LINE(524)
								Float _g29 = ::Math_obj::abs((_this->y - point->y));		HX_STACK_VAR(_g29,"_g29");
								HX_STACK_LINE(524)
								return (_g29 <= aDiff);
							}
							return null();
						}
					};
					HX_STACK_LINE(524)
					return (  ((_Function_2_1::Block(point,_this))) ? bool(_Function_2_2::Block(point,_this)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(524)
		bool _g30 = !(_Function_1_2::Block(particle));		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(524)
		particle->__Field(HX_CSTRING("scaleRange"),true)->__FieldRef(HX_CSTRING("active")) = _g30;
		HX_STACK_LINE(525)
		particle->__Field(HX_CSTRING("scale"),true)->__Field(HX_CSTRING("set_x"),true)(particle->__Field(HX_CSTRING("scaleRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(526)
		particle->__Field(HX_CSTRING("scale"),true)->__Field(HX_CSTRING("set_y"),true)(particle->__Field(HX_CSTRING("scaleRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(527)
		if ((particle->__Field(HX_CSTRING("autoUpdateHitbox"),true))){
			HX_STACK_LINE(527)
			particle->__Field(HX_CSTRING("updateHitbox"),true)();
		}
		HX_STACK_LINE(531)
		Float _g31 = ::flixel::FlxG_obj::random->_float(this->alpha->start->min,this->alpha->start->max,null());		HX_STACK_VAR(_g31,"_g31");
		HX_STACK_LINE(531)
		particle->__Field(HX_CSTRING("alphaRange"),true)->__FieldRef(HX_CSTRING("start")) = _g31;
		HX_STACK_LINE(532)
		Float _g32 = ::flixel::FlxG_obj::random->_float(this->alpha->end->min,this->alpha->end->max,null());		HX_STACK_VAR(_g32,"_g32");
		HX_STACK_LINE(532)
		particle->__Field(HX_CSTRING("alphaRange"),true)->__FieldRef(HX_CSTRING("end")) = _g32;
		HX_STACK_LINE(533)
		particle->__Field(HX_CSTRING("alphaRange"),true)->__FieldRef(HX_CSTRING("active")) = (particle->__Field(HX_CSTRING("alphaRange"),true)->__Field(HX_CSTRING("start"),true) != particle->__Field(HX_CSTRING("alphaRange"),true)->__Field(HX_CSTRING("end"),true));
		HX_STACK_LINE(534)
		particle->__Field(HX_CSTRING("set_alpha"),true)(particle->__Field(HX_CSTRING("alphaRange"),true)->__Field(HX_CSTRING("start"),true));
		HX_STACK_LINE(538)
		int _g33 = ::flixel::FlxG_obj::random->color(this->color->start->min,this->color->start->max,null(),null());		HX_STACK_VAR(_g33,"_g33");
		HX_STACK_LINE(538)
		particle->__Field(HX_CSTRING("colorRange"),true)->__FieldRef(HX_CSTRING("start")) = _g33;
		HX_STACK_LINE(539)
		int _g34 = ::flixel::FlxG_obj::random->color(this->color->end->min,this->color->end->max,null(),null());		HX_STACK_VAR(_g34,"_g34");
		HX_STACK_LINE(539)
		particle->__Field(HX_CSTRING("colorRange"),true)->__FieldRef(HX_CSTRING("end")) = _g34;
		HX_STACK_LINE(540)
		particle->__Field(HX_CSTRING("colorRange"),true)->__FieldRef(HX_CSTRING("active")) = (particle->__Field(HX_CSTRING("colorRange"),true)->__Field(HX_CSTRING("start"),true) != particle->__Field(HX_CSTRING("colorRange"),true)->__Field(HX_CSTRING("end"),true));
		HX_STACK_LINE(541)
		particle->__Field(HX_CSTRING("set_color"),true)(particle->__Field(HX_CSTRING("colorRange"),true)->__Field(HX_CSTRING("start"),true));
		HX_STACK_LINE(545)
		Float _g35 = ::flixel::FlxG_obj::random->_float(this->drag->start->min->__Field(HX_CSTRING("x"),true),this->drag->start->max->__Field(HX_CSTRING("x"),true),null());		HX_STACK_VAR(_g35,"_g35");
		HX_STACK_LINE(545)
		particle->__Field(HX_CSTRING("dragRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("set_x"),true)(_g35);
		HX_STACK_LINE(546)
		Float _g36 = ::flixel::FlxG_obj::random->_float(this->drag->start->min->__Field(HX_CSTRING("y"),true),this->drag->start->max->__Field(HX_CSTRING("y"),true),null());		HX_STACK_VAR(_g36,"_g36");
		HX_STACK_LINE(546)
		particle->__Field(HX_CSTRING("dragRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("set_y"),true)(_g36);
		HX_STACK_LINE(547)
		Float _g37 = ::flixel::FlxG_obj::random->_float(this->drag->end->min->__Field(HX_CSTRING("x"),true),this->drag->end->max->__Field(HX_CSTRING("x"),true),null());		HX_STACK_VAR(_g37,"_g37");
		HX_STACK_LINE(547)
		particle->__Field(HX_CSTRING("dragRange"),true)->__Field(HX_CSTRING("end"),true)->__Field(HX_CSTRING("set_x"),true)(_g37);
		HX_STACK_LINE(548)
		Float _g38 = ::flixel::FlxG_obj::random->_float(this->drag->end->min->__Field(HX_CSTRING("y"),true),this->drag->end->max->__Field(HX_CSTRING("y"),true),null());		HX_STACK_VAR(_g38,"_g38");
		HX_STACK_LINE(548)
		particle->__Field(HX_CSTRING("dragRange"),true)->__Field(HX_CSTRING("end"),true)->__Field(HX_CSTRING("set_y"),true)(_g38);
		struct _Function_1_3{
			inline static bool Block( Dynamic &particle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",549,0x6dff0520)
				{
					HX_STACK_LINE(549)
					::flixel::math::FlxPoint _this = particle->__Field(HX_CSTRING("dragRange"),true)->__Field(HX_CSTRING("start"),true);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(549)
					::flixel::math::FlxPoint point = particle->__Field(HX_CSTRING("dragRange"),true)->__Field(HX_CSTRING("end"),true);		HX_STACK_VAR(point,"point");
					struct _Function_2_1{
						inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",549,0x6dff0520)
							{
								HX_STACK_LINE(549)
								Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
								HX_STACK_LINE(549)
								Float _g39 = ::Math_obj::abs((_this->x - point->x));		HX_STACK_VAR(_g39,"_g39");
								HX_STACK_LINE(549)
								return (_g39 <= aDiff);
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",549,0x6dff0520)
							{
								HX_STACK_LINE(549)
								Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
								HX_STACK_LINE(549)
								Float _g40 = ::Math_obj::abs((_this->y - point->y));		HX_STACK_VAR(_g40,"_g40");
								HX_STACK_LINE(549)
								return (_g40 <= aDiff);
							}
							return null();
						}
					};
					HX_STACK_LINE(549)
					return (  ((_Function_2_1::Block(point,_this))) ? bool(_Function_2_2::Block(point,_this)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(549)
		bool _g41 = !(_Function_1_3::Block(particle));		HX_STACK_VAR(_g41,"_g41");
		HX_STACK_LINE(549)
		particle->__Field(HX_CSTRING("dragRange"),true)->__FieldRef(HX_CSTRING("active")) = _g41;
		HX_STACK_LINE(550)
		particle->__Field(HX_CSTRING("drag"),true)->__Field(HX_CSTRING("set_x"),true)(particle->__Field(HX_CSTRING("dragRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(551)
		particle->__Field(HX_CSTRING("drag"),true)->__Field(HX_CSTRING("set_y"),true)(particle->__Field(HX_CSTRING("dragRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(555)
		Float _g42 = ::flixel::FlxG_obj::random->_float(this->acceleration->start->min->__Field(HX_CSTRING("x"),true),this->acceleration->start->max->__Field(HX_CSTRING("x"),true),null());		HX_STACK_VAR(_g42,"_g42");
		HX_STACK_LINE(555)
		particle->__Field(HX_CSTRING("accelerationRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("set_x"),true)(_g42);
		HX_STACK_LINE(556)
		Float _g43 = ::flixel::FlxG_obj::random->_float(this->acceleration->start->min->__Field(HX_CSTRING("y"),true),this->acceleration->start->max->__Field(HX_CSTRING("y"),true),null());		HX_STACK_VAR(_g43,"_g43");
		HX_STACK_LINE(556)
		particle->__Field(HX_CSTRING("accelerationRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("set_y"),true)(_g43);
		HX_STACK_LINE(557)
		Float _g44 = ::flixel::FlxG_obj::random->_float(this->acceleration->end->min->__Field(HX_CSTRING("x"),true),this->acceleration->end->max->__Field(HX_CSTRING("x"),true),null());		HX_STACK_VAR(_g44,"_g44");
		HX_STACK_LINE(557)
		particle->__Field(HX_CSTRING("accelerationRange"),true)->__Field(HX_CSTRING("end"),true)->__Field(HX_CSTRING("set_x"),true)(_g44);
		HX_STACK_LINE(558)
		Float _g45 = ::flixel::FlxG_obj::random->_float(this->acceleration->end->min->__Field(HX_CSTRING("y"),true),this->acceleration->end->max->__Field(HX_CSTRING("y"),true),null());		HX_STACK_VAR(_g45,"_g45");
		HX_STACK_LINE(558)
		particle->__Field(HX_CSTRING("accelerationRange"),true)->__Field(HX_CSTRING("end"),true)->__Field(HX_CSTRING("set_y"),true)(_g45);
		struct _Function_1_4{
			inline static bool Block( Dynamic &particle){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",559,0x6dff0520)
				{
					HX_STACK_LINE(559)
					::flixel::math::FlxPoint _this = particle->__Field(HX_CSTRING("accelerationRange"),true)->__Field(HX_CSTRING("start"),true);		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(559)
					::flixel::math::FlxPoint point = particle->__Field(HX_CSTRING("accelerationRange"),true)->__Field(HX_CSTRING("end"),true);		HX_STACK_VAR(point,"point");
					struct _Function_2_1{
						inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",559,0x6dff0520)
							{
								HX_STACK_LINE(559)
								Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
								HX_STACK_LINE(559)
								Float _g46 = ::Math_obj::abs((_this->x - point->x));		HX_STACK_VAR(_g46,"_g46");
								HX_STACK_LINE(559)
								return (_g46 <= aDiff);
							}
							return null();
						}
					};
					struct _Function_2_2{
						inline static bool Block( ::flixel::math::FlxPoint &point,::flixel::math::FlxPoint _this){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/effects/particles/FlxEmitter.hx",559,0x6dff0520)
							{
								HX_STACK_LINE(559)
								Float aDiff = 0.0000001;		HX_STACK_VAR(aDiff,"aDiff");
								HX_STACK_LINE(559)
								Float _g47 = ::Math_obj::abs((_this->y - point->y));		HX_STACK_VAR(_g47,"_g47");
								HX_STACK_LINE(559)
								return (_g47 <= aDiff);
							}
							return null();
						}
					};
					HX_STACK_LINE(559)
					return (  ((_Function_2_1::Block(point,_this))) ? bool(_Function_2_2::Block(point,_this)) : bool(false) );
				}
				return null();
			}
		};
		HX_STACK_LINE(559)
		bool _g48 = !(_Function_1_4::Block(particle));		HX_STACK_VAR(_g48,"_g48");
		HX_STACK_LINE(559)
		particle->__Field(HX_CSTRING("accelerationRange"),true)->__FieldRef(HX_CSTRING("active")) = _g48;
		HX_STACK_LINE(560)
		particle->__Field(HX_CSTRING("acceleration"),true)->__Field(HX_CSTRING("set_x"),true)(particle->__Field(HX_CSTRING("accelerationRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("x"),true));
		HX_STACK_LINE(561)
		particle->__Field(HX_CSTRING("acceleration"),true)->__Field(HX_CSTRING("set_y"),true)(particle->__Field(HX_CSTRING("accelerationRange"),true)->__Field(HX_CSTRING("start"),true)->__Field(HX_CSTRING("y"),true));
		HX_STACK_LINE(565)
		Float _g49 = ::flixel::FlxG_obj::random->_float(this->elasticity->start->min,this->elasticity->start->max,null());		HX_STACK_VAR(_g49,"_g49");
		HX_STACK_LINE(565)
		particle->__Field(HX_CSTRING("elasticityRange"),true)->__FieldRef(HX_CSTRING("start")) = _g49;
		HX_STACK_LINE(566)
		Float _g50 = ::flixel::FlxG_obj::random->_float(this->elasticity->end->min,this->elasticity->end->max,null());		HX_STACK_VAR(_g50,"_g50");
		HX_STACK_LINE(566)
		particle->__Field(HX_CSTRING("elasticityRange"),true)->__FieldRef(HX_CSTRING("end")) = _g50;
		HX_STACK_LINE(567)
		particle->__Field(HX_CSTRING("elasticityRange"),true)->__FieldRef(HX_CSTRING("active")) = (particle->__Field(HX_CSTRING("elasticityRange"),true)->__Field(HX_CSTRING("start"),true) != particle->__Field(HX_CSTRING("elasticityRange"),true)->__Field(HX_CSTRING("end"),true));
		HX_STACK_LINE(568)
		particle->__FieldRef(HX_CSTRING("elasticity")) = particle->__Field(HX_CSTRING("elasticityRange"),true)->__Field(HX_CSTRING("start"),true);
		HX_STACK_LINE(571)
		Float _g51 = ::flixel::FlxG_obj::random->_float(this->x,(this->x + this->width),null());		HX_STACK_VAR(_g51,"_g51");
		HX_STACK_LINE(571)
		Float _g52 = particle->__Field(HX_CSTRING("get_width"),true)();		HX_STACK_VAR(_g52,"_g52");
		HX_STACK_LINE(571)
		Float _g53 = (Float(_g52) / Float((int)2));		HX_STACK_VAR(_g53,"_g53");
		HX_STACK_LINE(571)
		Float _g54 = (_g51 - _g53);		HX_STACK_VAR(_g54,"_g54");
		HX_STACK_LINE(571)
		particle->__Field(HX_CSTRING("set_x"),true)(_g54);
		HX_STACK_LINE(572)
		Float _g55 = ::flixel::FlxG_obj::random->_float(this->y,(this->y + this->height),null());		HX_STACK_VAR(_g55,"_g55");
		HX_STACK_LINE(572)
		Float _g56 = particle->__Field(HX_CSTRING("get_height"),true)();		HX_STACK_VAR(_g56,"_g56");
		HX_STACK_LINE(572)
		Float _g57 = (Float(_g56) / Float((int)2));		HX_STACK_VAR(_g57,"_g57");
		HX_STACK_LINE(572)
		Float _g58 = (_g55 - _g57);		HX_STACK_VAR(_g58,"_g58");
		HX_STACK_LINE(572)
		particle->__Field(HX_CSTRING("set_y"),true)(_g58);
		HX_STACK_LINE(575)
		if (((particle->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("_curAnim"),true) != null()))){
			HX_STACK_LINE(577)
			particle->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("_curAnim"),true)->__Field(HX_CSTRING("restart"),true)();
		}
		HX_STACK_LINE(580)
		particle->__Field(HX_CSTRING("onEmit"),true)();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,emitParticle,(void))

Void FlxTypedEmitter_obj::focusOn( ::flixel::FlxObject Object){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","focusOn",0x74478100,"flixel.effects.particles.FlxTypedEmitter.focusOn","flixel/effects/particles/FlxEmitter.hx",589,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Object,"Object")
		HX_STACK_LINE(590)
		Object->getMidpoint(this->_point);
		HX_STACK_LINE(592)
		int _g = ::Std_obj::_int(this->width);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(592)
		int _g1 = (int(_g) >> int((int)1));		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(592)
		Float _g2 = (this->_point->x - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(592)
		this->x = _g2;
		HX_STACK_LINE(593)
		int _g3 = ::Std_obj::_int(this->height);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(593)
		int _g4 = (int(_g3) >> int((int)1));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(593)
		Float _g5 = (this->_point->y - _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(593)
		this->y = _g5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,focusOn,(void))

Void FlxTypedEmitter_obj::setPosition( hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setPosition",0x453b48d4,"flixel.effects.particles.FlxTypedEmitter.setPosition","flixel/effects/particles/FlxEmitter.hx",600,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(601)
		this->x = X;
		HX_STACK_LINE(602)
		this->y = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setPosition,(void))

Void FlxTypedEmitter_obj::setSize( Float Width,Float Height){
{
		HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","setSize",0x449c176c,"flixel.effects.particles.FlxTypedEmitter.setSize","flixel/effects/particles/FlxEmitter.hx",606,0x6dff0520)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Width,"Width")
		HX_STACK_ARG(Height,"Height")
		HX_STACK_LINE(607)
		this->width = Width;
		HX_STACK_LINE(608)
		this->height = Height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedEmitter_obj,setSize,(void))

bool FlxTypedEmitter_obj::get_solid( ){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","get_solid",0x591b52ab,"flixel.effects.particles.FlxTypedEmitter.get_solid","flixel/effects/particles/FlxEmitter.hx",613,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_LINE(613)
	return (((int(this->allowCollisions) & int((int)4369))) > (int)0);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedEmitter_obj,get_solid,return )

bool FlxTypedEmitter_obj::set_solid( bool Solid){
	HX_STACK_FRAME("flixel.effects.particles.FlxTypedEmitter","set_solid",0x3c6c3eb7,"flixel.effects.particles.FlxTypedEmitter.set_solid","flixel/effects/particles/FlxEmitter.hx",617,0x6dff0520)
	HX_STACK_THIS(this)
	HX_STACK_ARG(Solid,"Solid")
	HX_STACK_LINE(618)
	if ((Solid)){
		HX_STACK_LINE(620)
		this->allowCollisions = (int)4369;
	}
	else{
		HX_STACK_LINE(624)
		this->allowCollisions = (int)0;
	}
	HX_STACK_LINE(626)
	return Solid;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedEmitter_obj,set_solid,return )


FlxTypedEmitter_obj::FlxTypedEmitter_obj()
{
}

void FlxTypedEmitter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedEmitter);
	HX_MARK_MEMBER_NAME(particleClass,"particleClass");
	HX_MARK_MEMBER_NAME(emitting,"emitting");
	HX_MARK_MEMBER_NAME(frequency,"frequency");
	HX_MARK_MEMBER_NAME(blend,"blend");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(launchMode,"launchMode");
	HX_MARK_MEMBER_NAME(keepScaleRatio,"keepScaleRatio");
	HX_MARK_MEMBER_NAME(velocity,"velocity");
	HX_MARK_MEMBER_NAME(speed,"speed");
	HX_MARK_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_MARK_MEMBER_NAME(angularDrag,"angularDrag");
	HX_MARK_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(ignoreAngularVelocity,"ignoreAngularVelocity");
	HX_MARK_MEMBER_NAME(launchAngle,"launchAngle");
	HX_MARK_MEMBER_NAME(lifespan,"lifespan");
	HX_MARK_MEMBER_NAME(scale,"scale");
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(color,"color");
	HX_MARK_MEMBER_NAME(drag,"drag");
	HX_MARK_MEMBER_NAME(acceleration,"acceleration");
	HX_MARK_MEMBER_NAME(elasticity,"elasticity");
	HX_MARK_MEMBER_NAME(immovable,"immovable");
	HX_MARK_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_MARK_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_MARK_MEMBER_NAME(_quantity,"_quantity");
	HX_MARK_MEMBER_NAME(_explode,"_explode");
	HX_MARK_MEMBER_NAME(_timer,"_timer");
	HX_MARK_MEMBER_NAME(_counter,"_counter");
	HX_MARK_MEMBER_NAME(_point,"_point");
	HX_MARK_MEMBER_NAME(_waitForKill,"_waitForKill");
	::flixel::group::FlxTypedGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedEmitter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(particleClass,"particleClass");
	HX_VISIT_MEMBER_NAME(emitting,"emitting");
	HX_VISIT_MEMBER_NAME(frequency,"frequency");
	HX_VISIT_MEMBER_NAME(blend,"blend");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(launchMode,"launchMode");
	HX_VISIT_MEMBER_NAME(keepScaleRatio,"keepScaleRatio");
	HX_VISIT_MEMBER_NAME(velocity,"velocity");
	HX_VISIT_MEMBER_NAME(speed,"speed");
	HX_VISIT_MEMBER_NAME(angularAcceleration,"angularAcceleration");
	HX_VISIT_MEMBER_NAME(angularDrag,"angularDrag");
	HX_VISIT_MEMBER_NAME(angularVelocity,"angularVelocity");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(ignoreAngularVelocity,"ignoreAngularVelocity");
	HX_VISIT_MEMBER_NAME(launchAngle,"launchAngle");
	HX_VISIT_MEMBER_NAME(lifespan,"lifespan");
	HX_VISIT_MEMBER_NAME(scale,"scale");
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(color,"color");
	HX_VISIT_MEMBER_NAME(drag,"drag");
	HX_VISIT_MEMBER_NAME(acceleration,"acceleration");
	HX_VISIT_MEMBER_NAME(elasticity,"elasticity");
	HX_VISIT_MEMBER_NAME(immovable,"immovable");
	HX_VISIT_MEMBER_NAME(autoUpdateHitbox,"autoUpdateHitbox");
	HX_VISIT_MEMBER_NAME(allowCollisions,"allowCollisions");
	HX_VISIT_MEMBER_NAME(_quantity,"_quantity");
	HX_VISIT_MEMBER_NAME(_explode,"_explode");
	HX_VISIT_MEMBER_NAME(_timer,"_timer");
	HX_VISIT_MEMBER_NAME(_counter,"_counter");
	HX_VISIT_MEMBER_NAME(_point,"_point");
	HX_VISIT_MEMBER_NAME(_waitForKill,"_waitForKill");
	::flixel::group::FlxTypedGroup_obj::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedEmitter_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { return drag; }
		if (HX_FIELD_EQ(inName,"kill") ) { return kill_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { return blend; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"speed") ) { return speed; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		if (HX_FIELD_EQ(inName,"scale") ) { return scale; }
		if (HX_FIELD_EQ(inName,"alpha") ) { return alpha; }
		if (HX_FIELD_EQ(inName,"color") ) { return color; }
		if (HX_FIELD_EQ(inName,"solid") ) { return get_solid(); }
		if (HX_FIELD_EQ(inName,"start") ) { return start_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"_timer") ) { return _timer; }
		if (HX_FIELD_EQ(inName,"_point") ) { return _point; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"focusOn") ) { return focusOn_dyn(); }
		if (HX_FIELD_EQ(inName,"setSize") ) { return setSize_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitting") ) { return emitting; }
		if (HX_FIELD_EQ(inName,"velocity") ) { return velocity; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { return lifespan; }
		if (HX_FIELD_EQ(inName,"_explode") ) { return _explode; }
		if (HX_FIELD_EQ(inName,"_counter") ) { return _counter; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { return frequency; }
		if (HX_FIELD_EQ(inName,"immovable") ) { return immovable; }
		if (HX_FIELD_EQ(inName,"_quantity") ) { return _quantity; }
		if (HX_FIELD_EQ(inName,"get_solid") ) { return get_solid_dyn(); }
		if (HX_FIELD_EQ(inName,"set_solid") ) { return set_solid_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"launchMode") ) { return launchMode; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { return elasticity; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angularDrag") ) { return angularDrag; }
		if (HX_FIELD_EQ(inName,"launchAngle") ) { return launchAngle; }
		if (HX_FIELD_EQ(inName,"setPosition") ) { return setPosition_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { return acceleration; }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { return _waitForKill; }
		if (HX_FIELD_EQ(inName,"emitParticle") ) { return emitParticle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { return particleClass; }
		if (HX_FIELD_EQ(inName,"loadParticles") ) { return loadParticles_dyn(); }
		if (HX_FIELD_EQ(inName,"makeParticles") ) { return makeParticles_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keepScaleRatio") ) { return keepScaleRatio; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { return angularVelocity; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { return allowCollisions; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { return autoUpdateHitbox; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { return angularAcceleration; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ignoreAngularVelocity") ) { return ignoreAngularVelocity; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedEmitter_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"drag") ) { drag=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"blend") ) { blend=inValue.Cast< ::openfl::_v2::display::BlendMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scale") ) { scale=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"color") ) { color=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"solid") ) { return set_solid(inValue); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_timer") ) { _timer=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_point") ) { _point=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"emitting") ) { emitting=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"velocity") ) { velocity=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"lifespan") ) { lifespan=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_explode") ) { _explode=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_counter") ) { _counter=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frequency") ) { frequency=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"immovable") ) { immovable=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_quantity") ) { _quantity=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"launchMode") ) { launchMode=inValue.Cast< ::flixel::effects::particles::FlxEmitterMode >(); return inValue; }
		if (HX_FIELD_EQ(inName,"elasticity") ) { elasticity=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"angularDrag") ) { angularDrag=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"launchAngle") ) { launchAngle=inValue.Cast< ::flixel::util::helpers::FlxBounds >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"acceleration") ) { acceleration=inValue.Cast< ::flixel::util::helpers::FlxPointRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_waitForKill") ) { _waitForKill=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"particleClass") ) { particleClass=inValue.Cast< ::Class >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"keepScaleRatio") ) { keepScaleRatio=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"angularVelocity") ) { angularVelocity=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		if (HX_FIELD_EQ(inName,"allowCollisions") ) { allowCollisions=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"autoUpdateHitbox") ) { autoUpdateHitbox=inValue.Cast< bool >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"angularAcceleration") ) { angularAcceleration=inValue.Cast< ::flixel::util::helpers::FlxRangeBounds >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"ignoreAngularVelocity") ) { ignoreAngularVelocity=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedEmitter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("particleClass"));
	outFields->push(HX_CSTRING("emitting"));
	outFields->push(HX_CSTRING("frequency"));
	outFields->push(HX_CSTRING("blend"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("launchMode"));
	outFields->push(HX_CSTRING("keepScaleRatio"));
	outFields->push(HX_CSTRING("velocity"));
	outFields->push(HX_CSTRING("speed"));
	outFields->push(HX_CSTRING("angularAcceleration"));
	outFields->push(HX_CSTRING("angularDrag"));
	outFields->push(HX_CSTRING("angularVelocity"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("ignoreAngularVelocity"));
	outFields->push(HX_CSTRING("launchAngle"));
	outFields->push(HX_CSTRING("lifespan"));
	outFields->push(HX_CSTRING("scale"));
	outFields->push(HX_CSTRING("alpha"));
	outFields->push(HX_CSTRING("color"));
	outFields->push(HX_CSTRING("drag"));
	outFields->push(HX_CSTRING("acceleration"));
	outFields->push(HX_CSTRING("elasticity"));
	outFields->push(HX_CSTRING("immovable"));
	outFields->push(HX_CSTRING("autoUpdateHitbox"));
	outFields->push(HX_CSTRING("allowCollisions"));
	outFields->push(HX_CSTRING("solid"));
	outFields->push(HX_CSTRING("_quantity"));
	outFields->push(HX_CSTRING("_explode"));
	outFields->push(HX_CSTRING("_timer"));
	outFields->push(HX_CSTRING("_counter"));
	outFields->push(HX_CSTRING("_point"));
	outFields->push(HX_CSTRING("_waitForKill"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::Class*/ ,(int)offsetof(FlxTypedEmitter_obj,particleClass),HX_CSTRING("particleClass")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,emitting),HX_CSTRING("emitting")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,frequency),HX_CSTRING("frequency")},
	{hx::fsObject /*::openfl::_v2::display::BlendMode*/ ,(int)offsetof(FlxTypedEmitter_obj,blend),HX_CSTRING("blend")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,x),HX_CSTRING("x")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,y),HX_CSTRING("y")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,width),HX_CSTRING("width")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,height),HX_CSTRING("height")},
	{hx::fsObject /*::flixel::effects::particles::FlxEmitterMode*/ ,(int)offsetof(FlxTypedEmitter_obj,launchMode),HX_CSTRING("launchMode")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,keepScaleRatio),HX_CSTRING("keepScaleRatio")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,velocity),HX_CSTRING("velocity")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,speed),HX_CSTRING("speed")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angularAcceleration),HX_CSTRING("angularAcceleration")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angularDrag),HX_CSTRING("angularDrag")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angularVelocity),HX_CSTRING("angularVelocity")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,angle),HX_CSTRING("angle")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,ignoreAngularVelocity),HX_CSTRING("ignoreAngularVelocity")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,launchAngle),HX_CSTRING("launchAngle")},
	{hx::fsObject /*::flixel::util::helpers::FlxBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,lifespan),HX_CSTRING("lifespan")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,scale),HX_CSTRING("scale")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,alpha),HX_CSTRING("alpha")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,color),HX_CSTRING("color")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,drag),HX_CSTRING("drag")},
	{hx::fsObject /*::flixel::util::helpers::FlxPointRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,acceleration),HX_CSTRING("acceleration")},
	{hx::fsObject /*::flixel::util::helpers::FlxRangeBounds*/ ,(int)offsetof(FlxTypedEmitter_obj,elasticity),HX_CSTRING("elasticity")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,immovable),HX_CSTRING("immovable")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,autoUpdateHitbox),HX_CSTRING("autoUpdateHitbox")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,allowCollisions),HX_CSTRING("allowCollisions")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_quantity),HX_CSTRING("_quantity")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_explode),HX_CSTRING("_explode")},
	{hx::fsFloat,(int)offsetof(FlxTypedEmitter_obj,_timer),HX_CSTRING("_timer")},
	{hx::fsInt,(int)offsetof(FlxTypedEmitter_obj,_counter),HX_CSTRING("_counter")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxTypedEmitter_obj,_point),HX_CSTRING("_point")},
	{hx::fsBool,(int)offsetof(FlxTypedEmitter_obj,_waitForKill),HX_CSTRING("_waitForKill")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("particleClass"),
	HX_CSTRING("emitting"),
	HX_CSTRING("frequency"),
	HX_CSTRING("blend"),
	HX_CSTRING("x"),
	HX_CSTRING("y"),
	HX_CSTRING("width"),
	HX_CSTRING("height"),
	HX_CSTRING("launchMode"),
	HX_CSTRING("keepScaleRatio"),
	HX_CSTRING("velocity"),
	HX_CSTRING("speed"),
	HX_CSTRING("angularAcceleration"),
	HX_CSTRING("angularDrag"),
	HX_CSTRING("angularVelocity"),
	HX_CSTRING("angle"),
	HX_CSTRING("ignoreAngularVelocity"),
	HX_CSTRING("launchAngle"),
	HX_CSTRING("lifespan"),
	HX_CSTRING("scale"),
	HX_CSTRING("alpha"),
	HX_CSTRING("color"),
	HX_CSTRING("drag"),
	HX_CSTRING("acceleration"),
	HX_CSTRING("elasticity"),
	HX_CSTRING("immovable"),
	HX_CSTRING("autoUpdateHitbox"),
	HX_CSTRING("allowCollisions"),
	HX_CSTRING("_quantity"),
	HX_CSTRING("_explode"),
	HX_CSTRING("_timer"),
	HX_CSTRING("_counter"),
	HX_CSTRING("_point"),
	HX_CSTRING("_waitForKill"),
	HX_CSTRING("destroy"),
	HX_CSTRING("loadParticles"),
	HX_CSTRING("makeParticles"),
	HX_CSTRING("update"),
	HX_CSTRING("kill"),
	HX_CSTRING("start"),
	HX_CSTRING("emitParticle"),
	HX_CSTRING("focusOn"),
	HX_CSTRING("setPosition"),
	HX_CSTRING("setSize"),
	HX_CSTRING("get_solid"),
	HX_CSTRING("set_solid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedEmitter_obj::__mClass,"__mClass");
};

#endif

Class FlxTypedEmitter_obj::__mClass;

void FlxTypedEmitter_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.FlxTypedEmitter"), hx::TCanCast< FlxTypedEmitter_obj> ,sStaticFields,sMemberFields,
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

void FlxTypedEmitter_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
