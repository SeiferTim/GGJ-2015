#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_effects_particles_IFlxParticle
#include <flixel/effects/particles/IFlxParticle.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
namespace flixel{
namespace effects{
namespace particles{

HX_DEFINE_DYNAMIC_FUNC0(IFlxParticle_obj,onEmit,)


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
	HX_CSTRING("onEmit"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IFlxParticle_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IFlxParticle_obj::__mClass,"__mClass");
};

#endif

Class IFlxParticle_obj::__mClass;

void IFlxParticle_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.effects.particles.IFlxParticle"), hx::TCanCast< IFlxParticle_obj> ,0,sMemberFields,
	0, 0,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void IFlxParticle_obj::__boot()
{
}

} // end namespace flixel
} // end namespace effects
} // end namespace particles
