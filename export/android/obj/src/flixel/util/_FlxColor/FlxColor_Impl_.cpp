#include <hxcpp.h>

#ifndef INCLUDED_EReg
#include <EReg.h>
#endif
#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_util__FlxColor_FlxColor_Impl_
#include <flixel/util/_FlxColor/FlxColor_Impl_.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
namespace flixel{
namespace util{
namespace _FlxColor{

Void FlxColor_Impl__obj::__construct()
{
	return null();
}

//FlxColor_Impl__obj::~FlxColor_Impl__obj() { }

Dynamic FlxColor_Impl__obj::__CreateEmpty() { return  new FlxColor_Impl__obj; }
hx::ObjectPtr< FlxColor_Impl__obj > FlxColor_Impl__obj::__new()
{  hx::ObjectPtr< FlxColor_Impl__obj > result = new FlxColor_Impl__obj();
	result->__construct();
	return result;}

Dynamic FlxColor_Impl__obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxColor_Impl__obj > result = new FlxColor_Impl__obj();
	result->__construct();
	return result;}

int FlxColor_Impl__obj::TRANSPARENT;

int FlxColor_Impl__obj::WHITE;

int FlxColor_Impl__obj::GRAY;

int FlxColor_Impl__obj::BLACK;

int FlxColor_Impl__obj::GREEN;

int FlxColor_Impl__obj::LIME;

int FlxColor_Impl__obj::YELLOW;

int FlxColor_Impl__obj::ORANGE;

int FlxColor_Impl__obj::RED;

int FlxColor_Impl__obj::PURPLE;

int FlxColor_Impl__obj::BLUE;

int FlxColor_Impl__obj::BROWN;

int FlxColor_Impl__obj::PINK;

int FlxColor_Impl__obj::MAGENTA;

int FlxColor_Impl__obj::CYAN;

::haxe::ds::StringMap FlxColor_Impl__obj::colorLookup;

::EReg FlxColor_Impl__obj::COLOR_REGEX;

int FlxColor_Impl__obj::fromInt( int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromInt",0xdc40c740,"flixel.util._FlxColor.FlxColor_Impl_.fromInt","flixel/util/FlxColor.hx",87,0x9335c333)
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(87)
	return ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(Value);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,fromInt,return )

int FlxColor_Impl__obj::fromRGB( int Red,int Green,int Blue,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromRGB",0xdc47795e,"flixel.util._FlxColor.FlxColor_Impl_.fromRGB","flixel/util/FlxColor.hx",100,0x9335c333)
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(101)
		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
		struct _Function_1_1{
			inline static int Block( int &Red,int &Green,int &Blue,int &Alpha,int &color){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",102,0x9335c333)
				{
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						hx::AndEq(color,(int)-16711681);
						HX_STACK_LINE(102)
						hx::OrEq(color,(int(((  (((Red > (int)255))) ? int((int)255) : int((  (((Red < (int)0))) ? int((int)0) : int(Red) )) ))) << int((int)16)));
						HX_STACK_LINE(102)
						Red;
					}
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						hx::AndEq(color,(int)-65281);
						HX_STACK_LINE(102)
						hx::OrEq(color,(int(((  (((Green > (int)255))) ? int((int)255) : int((  (((Green < (int)0))) ? int((int)0) : int(Green) )) ))) << int((int)8)));
						HX_STACK_LINE(102)
						Green;
					}
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						hx::AndEq(color,(int)-256);
						HX_STACK_LINE(102)
						if (((Blue > (int)255))){
							HX_STACK_LINE(102)
							hx::OrEq(color,(int)255);
						}
						else{
							HX_STACK_LINE(102)
							if (((Blue < (int)0))){
								HX_STACK_LINE(102)
								hx::OrEq(color,(int)0);
							}
							else{
								HX_STACK_LINE(102)
								hx::OrEq(color,Blue);
							}
						}
						HX_STACK_LINE(102)
						Blue;
					}
					HX_STACK_LINE(102)
					{
						HX_STACK_LINE(102)
						hx::AndEq(color,(int)16777215);
						HX_STACK_LINE(102)
						hx::OrEq(color,(int(((  (((Alpha > (int)255))) ? int((int)255) : int((  (((Alpha < (int)0))) ? int((int)0) : int(Alpha) )) ))) << int((int)24)));
						HX_STACK_LINE(102)
						Alpha;
					}
					HX_STACK_LINE(102)
					return color;
				}
				return null();
			}
		};
		HX_STACK_LINE(102)
		return _Function_1_1::Block(Red,Green,Blue,Alpha,color);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromRGB,return )

int FlxColor_Impl__obj::fromRGBFloat( Float Red,Float Green,Float Blue,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromRGBFloat",0x9c52075e,"flixel.util._FlxColor.FlxColor_Impl_.fromRGBFloat","flixel/util/FlxColor.hx",115,0x9335c333)
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(116)
		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
		struct _Function_1_1{
			inline static int Block( Float &Red,Float &Green,Float &Blue,Float &Alpha,int &color){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",117,0x9335c333)
				{
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							int Value = ::Math_obj::round((Red * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(117)
							hx::AndEq(color,(int)-16711681);
							HX_STACK_LINE(117)
							hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(117)
							Value;
						}
						HX_STACK_LINE(117)
						Red;
					}
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							int Value = ::Math_obj::round((Green * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(117)
							hx::AndEq(color,(int)-65281);
							HX_STACK_LINE(117)
							hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(117)
							Value;
						}
						HX_STACK_LINE(117)
						Green;
					}
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							int Value = ::Math_obj::round((Blue * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(117)
							hx::AndEq(color,(int)-256);
							HX_STACK_LINE(117)
							if (((Value > (int)255))){
								HX_STACK_LINE(117)
								hx::OrEq(color,(int)255);
							}
							else{
								HX_STACK_LINE(117)
								if (((Value < (int)0))){
									HX_STACK_LINE(117)
									hx::OrEq(color,(int)0);
								}
								else{
									HX_STACK_LINE(117)
									hx::OrEq(color,Value);
								}
							}
							HX_STACK_LINE(117)
							Value;
						}
						HX_STACK_LINE(117)
						Blue;
					}
					HX_STACK_LINE(117)
					{
						HX_STACK_LINE(117)
						{
							HX_STACK_LINE(117)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(117)
							hx::AndEq(color,(int)16777215);
							HX_STACK_LINE(117)
							hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(117)
							Value;
						}
						HX_STACK_LINE(117)
						Alpha;
					}
					HX_STACK_LINE(117)
					return color;
				}
				return null();
			}
		};
		HX_STACK_LINE(117)
		return _Function_1_1::Block(Red,Green,Blue,Alpha,color);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromRGBFloat,return )

int FlxColor_Impl__obj::fromCMYK( Float Cyan,Float Magenta,Float Yellow,Float Black,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromCMYK",0xd85d276b,"flixel.util._FlxColor.FlxColor_Impl_.fromCMYK","flixel/util/FlxColor.hx",131,0x9335c333)
	HX_STACK_ARG(Cyan,"Cyan")
	HX_STACK_ARG(Magenta,"Magenta")
	HX_STACK_ARG(Yellow,"Yellow")
	HX_STACK_ARG(Black,"Black")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(132)
		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
		struct _Function_1_1{
			inline static int Block( Float &Alpha,Float &Magenta,Float &Yellow,Float &Cyan,Float &Black,int &color){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",133,0x9335c333)
				{
					HX_STACK_LINE(133)
					{
						HX_STACK_LINE(133)
						Float Value = ((((int)1 - Cyan)) * (((int)1 - Black)));		HX_STACK_VAR(Value,"Value");
						HX_STACK_LINE(133)
						{
							HX_STACK_LINE(133)
							int Value1 = ::Math_obj::round((Value * (int)255));		HX_STACK_VAR(Value1,"Value1");
							HX_STACK_LINE(133)
							hx::AndEq(color,(int)-16711681);
							HX_STACK_LINE(133)
							hx::OrEq(color,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
							HX_STACK_LINE(133)
							Value1;
						}
						HX_STACK_LINE(133)
						Value;
					}
					HX_STACK_LINE(133)
					{
						HX_STACK_LINE(133)
						Float Value = ((((int)1 - Magenta)) * (((int)1 - Black)));		HX_STACK_VAR(Value,"Value");
						HX_STACK_LINE(133)
						{
							HX_STACK_LINE(133)
							int Value1 = ::Math_obj::round((Value * (int)255));		HX_STACK_VAR(Value1,"Value1");
							HX_STACK_LINE(133)
							hx::AndEq(color,(int)-65281);
							HX_STACK_LINE(133)
							hx::OrEq(color,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
							HX_STACK_LINE(133)
							Value1;
						}
						HX_STACK_LINE(133)
						Value;
					}
					HX_STACK_LINE(133)
					{
						HX_STACK_LINE(133)
						Float Value = ((((int)1 - Yellow)) * (((int)1 - Black)));		HX_STACK_VAR(Value,"Value");
						HX_STACK_LINE(133)
						{
							HX_STACK_LINE(133)
							int Value1 = ::Math_obj::round((Value * (int)255));		HX_STACK_VAR(Value1,"Value1");
							HX_STACK_LINE(133)
							hx::AndEq(color,(int)-256);
							HX_STACK_LINE(133)
							if (((Value1 > (int)255))){
								HX_STACK_LINE(133)
								hx::OrEq(color,(int)255);
							}
							else{
								HX_STACK_LINE(133)
								if (((Value1 < (int)0))){
									HX_STACK_LINE(133)
									hx::OrEq(color,(int)0);
								}
								else{
									HX_STACK_LINE(133)
									hx::OrEq(color,Value1);
								}
							}
							HX_STACK_LINE(133)
							Value1;
						}
						HX_STACK_LINE(133)
						Value;
					}
					HX_STACK_LINE(133)
					{
						HX_STACK_LINE(133)
						{
							HX_STACK_LINE(133)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(133)
							hx::AndEq(color,(int)16777215);
							HX_STACK_LINE(133)
							hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(133)
							Value;
						}
						HX_STACK_LINE(133)
						Alpha;
					}
					HX_STACK_LINE(133)
					return color;
				}
				return null();
			}
		};
		HX_STACK_LINE(133)
		return _Function_1_1::Block(Alpha,Magenta,Yellow,Cyan,Black,color);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,fromCMYK,return )

int FlxColor_Impl__obj::fromHSB( Float Hue,Float Saturation,Float Brightness,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromHSB",0xdc3fed48,"flixel.util._FlxColor.FlxColor_Impl_.fromHSB","flixel/util/FlxColor.hx",146,0x9335c333)
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Brightness,"Brightness")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(147)
		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(148)
		Float chroma = (Brightness * Saturation);		HX_STACK_VAR(chroma,"chroma");
		HX_STACK_LINE(148)
		Float match = (Brightness - chroma);		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(148)
		Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
		HX_STACK_LINE(148)
		Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
		HX_STACK_LINE(148)
		hx::ModEq(Hue1,(int)360);
		HX_STACK_LINE(148)
		Float hueD = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(hueD,"hueD");
		HX_STACK_LINE(148)
		Float _g = ::Math_obj::abs((hx::Mod(hueD,(int)2) - (int)1));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(148)
		Float _g1 = ((int)1 - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(148)
		Float _g2 = (Chroma * _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(148)
		Float mid = (_g2 + match);		HX_STACK_VAR(mid,"mid");
		HX_STACK_LINE(148)
		hx::AddEq(Chroma,match);
		HX_STACK_LINE(148)
		{
			HX_STACK_LINE(148)
			int _g3 = ::Std_obj::_int(hueD);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(148)
			switch( (int)(_g3)){
				case (int)0: {
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Chroma;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							mid;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(148)
								if (((Value > (int)255))){
									HX_STACK_LINE(148)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(148)
									if (((Value < (int)0))){
										HX_STACK_LINE(148)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(148)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							match;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Alpha;
						}
						HX_STACK_LINE(148)
						color;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							mid;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Chroma;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(148)
								if (((Value > (int)255))){
									HX_STACK_LINE(148)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(148)
									if (((Value < (int)0))){
										HX_STACK_LINE(148)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(148)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							match;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Alpha;
						}
						HX_STACK_LINE(148)
						color;
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							match;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Chroma;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(148)
								if (((Value > (int)255))){
									HX_STACK_LINE(148)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(148)
									if (((Value < (int)0))){
										HX_STACK_LINE(148)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(148)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							mid;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Alpha;
						}
						HX_STACK_LINE(148)
						color;
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							match;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							mid;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(148)
								if (((Value > (int)255))){
									HX_STACK_LINE(148)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(148)
									if (((Value < (int)0))){
										HX_STACK_LINE(148)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(148)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Chroma;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Alpha;
						}
						HX_STACK_LINE(148)
						color;
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							mid;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							match;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(148)
								if (((Value > (int)255))){
									HX_STACK_LINE(148)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(148)
									if (((Value < (int)0))){
										HX_STACK_LINE(148)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(148)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Chroma;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Alpha;
						}
						HX_STACK_LINE(148)
						color;
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(148)
					{
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Chroma;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							match;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(148)
								if (((Value > (int)255))){
									HX_STACK_LINE(148)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(148)
									if (((Value < (int)0))){
										HX_STACK_LINE(148)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(148)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							mid;
						}
						HX_STACK_LINE(148)
						{
							HX_STACK_LINE(148)
							{
								HX_STACK_LINE(148)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(148)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(148)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(148)
								Value;
							}
							HX_STACK_LINE(148)
							Alpha;
						}
						HX_STACK_LINE(148)
						color;
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(148)
		return color;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromHSB,return )

int FlxColor_Impl__obj::fromHSL( Float Hue,Float Saturation,Float Lightness,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromHSL",0xdc3fed52,"flixel.util._FlxColor.FlxColor_Impl_.fromHSL","flixel/util/FlxColor.hx",161,0x9335c333)
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Lightness,"Lightness")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(162)
		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(163)
		Float _g = ::Math_obj::abs((((int)2 * Lightness) - (int)1));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(163)
		Float _g1 = ((int)1 - _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(163)
		Float chroma = (_g1 * Saturation);		HX_STACK_VAR(chroma,"chroma");
		HX_STACK_LINE(163)
		Float match = (Lightness - (Float(chroma) / Float((int)2)));		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(163)
		Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
		HX_STACK_LINE(163)
		Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
		HX_STACK_LINE(163)
		hx::ModEq(Hue1,(int)360);
		HX_STACK_LINE(163)
		Float hueD = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(hueD,"hueD");
		HX_STACK_LINE(163)
		Float _g2 = ::Math_obj::abs((hx::Mod(hueD,(int)2) - (int)1));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(163)
		Float _g3 = ((int)1 - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(163)
		Float _g4 = (Chroma * _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(163)
		Float mid = (_g4 + match);		HX_STACK_VAR(mid,"mid");
		HX_STACK_LINE(163)
		hx::AddEq(Chroma,match);
		HX_STACK_LINE(163)
		{
			HX_STACK_LINE(163)
			int _g5 = ::Std_obj::_int(hueD);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(163)
			switch( (int)(_g5)){
				case (int)0: {
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Chroma;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							mid;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(163)
								if (((Value > (int)255))){
									HX_STACK_LINE(163)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(163)
									if (((Value < (int)0))){
										HX_STACK_LINE(163)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(163)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							match;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Alpha;
						}
						HX_STACK_LINE(163)
						color;
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							mid;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Chroma;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(163)
								if (((Value > (int)255))){
									HX_STACK_LINE(163)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(163)
									if (((Value < (int)0))){
										HX_STACK_LINE(163)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(163)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							match;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Alpha;
						}
						HX_STACK_LINE(163)
						color;
					}
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							match;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Chroma;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(163)
								if (((Value > (int)255))){
									HX_STACK_LINE(163)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(163)
									if (((Value < (int)0))){
										HX_STACK_LINE(163)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(163)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							mid;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Alpha;
						}
						HX_STACK_LINE(163)
						color;
					}
				}
				;break;
				case (int)3: {
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							match;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							mid;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(163)
								if (((Value > (int)255))){
									HX_STACK_LINE(163)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(163)
									if (((Value < (int)0))){
										HX_STACK_LINE(163)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(163)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Chroma;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Alpha;
						}
						HX_STACK_LINE(163)
						color;
					}
				}
				;break;
				case (int)4: {
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							mid;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							match;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(163)
								if (((Value > (int)255))){
									HX_STACK_LINE(163)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(163)
									if (((Value < (int)0))){
										HX_STACK_LINE(163)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(163)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Chroma;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Alpha;
						}
						HX_STACK_LINE(163)
						color;
					}
				}
				;break;
				case (int)5: {
					HX_STACK_LINE(163)
					{
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-16711681);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Chroma;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-65281);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							match;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)-256);
								HX_STACK_LINE(163)
								if (((Value > (int)255))){
									HX_STACK_LINE(163)
									hx::OrEq(color,(int)255);
								}
								else{
									HX_STACK_LINE(163)
									if (((Value < (int)0))){
										HX_STACK_LINE(163)
										hx::OrEq(color,(int)0);
									}
									else{
										HX_STACK_LINE(163)
										hx::OrEq(color,Value);
									}
								}
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							mid;
						}
						HX_STACK_LINE(163)
						{
							HX_STACK_LINE(163)
							{
								HX_STACK_LINE(163)
								int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
								HX_STACK_LINE(163)
								hx::AndEq(color,(int)16777215);
								HX_STACK_LINE(163)
								hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
								HX_STACK_LINE(163)
								Value;
							}
							HX_STACK_LINE(163)
							Alpha;
						}
						HX_STACK_LINE(163)
						color;
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(163)
		return color;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,fromHSL,return )

Dynamic FlxColor_Impl__obj::fromString( ::String str){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","fromString",0x7279f720,"flixel.util._FlxColor.FlxColor_Impl_.fromString","flixel/util/FlxColor.hx",179,0x9335c333)
	HX_STACK_ARG(str,"str")
	HX_STACK_LINE(180)
	Dynamic result = null();		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(181)
	::String _g = ::StringTools_obj::trim(str);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(181)
	str = _g;
	HX_STACK_LINE(183)
	if ((::flixel::util::_FlxColor::FlxColor_Impl__obj::COLOR_REGEX->match(str))){
		HX_STACK_LINE(185)
		::String _g1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::COLOR_REGEX->matched((int)2);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(185)
		::String hexColor = (HX_CSTRING("0x") + _g1);		HX_STACK_VAR(hexColor,"hexColor");
		HX_STACK_LINE(186)
		Dynamic _g2 = ::Std_obj::parseInt(hexColor);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(186)
		int _g3 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(186)
		result = _g3;
		HX_STACK_LINE(187)
		if (((hexColor.length == (int)8))){
			HX_STACK_LINE(189)
			{
				HX_STACK_LINE(189)
				int Value = ::Math_obj::round((int)255);		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(189)
				hx::AndEq(result,(int)16777215);
				HX_STACK_LINE(189)
				hx::OrEq(result,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
				HX_STACK_LINE(189)
				Value;
			}
			HX_STACK_LINE(189)
			(int)1;
		}
	}
	else{
		HX_STACK_LINE(194)
		::String _g4 = str.toUpperCase();		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(194)
		str = _g4;
		HX_STACK_LINE(195)
		for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::flixel::util::_FlxColor::FlxColor_Impl__obj::colorLookup->keys());  __it->hasNext(); ){
			::String key = __it->next();
			{
				HX_STACK_LINE(197)
				::String _g5 = key.toUpperCase();		HX_STACK_VAR(_g5,"_g5");
				HX_STACK_LINE(197)
				if (((_g5 == str))){
					HX_STACK_LINE(199)
					Dynamic _g6 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::colorLookup->get(key);		HX_STACK_VAR(_g6,"_g6");
					HX_STACK_LINE(199)
					int _g7 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(_g6);		HX_STACK_VAR(_g7,"_g7");
					HX_STACK_LINE(199)
					result = _g7;
					HX_STACK_LINE(200)
					break;
				}
			}
;
		}
	}
	HX_STACK_LINE(205)
	return result;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,fromString,return )

Array< int > FlxColor_Impl__obj::getHSBColorWheel( hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getHSBColorWheel",0xaedeb29e,"flixel.util._FlxColor.FlxColor_Impl_.getHSBColorWheel","flixel/util/FlxColor.hx",215,0x9335c333)
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(216)
		Array< int > colors = Array_obj< int >::__new();		HX_STACK_VAR(colors,"colors");
		HX_STACK_LINE(218)
		{
			HX_STACK_LINE(218)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(218)
			while((true)){
				HX_STACK_LINE(218)
				if ((!(((_g < (int)360))))){
					HX_STACK_LINE(218)
					break;
				}
				HX_STACK_LINE(218)
				int c = (_g)++;		HX_STACK_VAR(c,"c");
				HX_STACK_LINE(220)
				colors[c] = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(c,1.0,1.0,Alpha);
			}
		}
		HX_STACK_LINE(223)
		return colors;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getHSBColorWheel,return )

int FlxColor_Impl__obj::interpolate( int Color1,int Color2,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(0.5);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","interpolate",0x463d27dc,"flixel.util._FlxColor.FlxColor_Impl_.interpolate","flixel/util/FlxColor.hx",235,0x9335c333)
	HX_STACK_ARG(Color1,"Color1")
	HX_STACK_ARG(Color2,"Color2")
	HX_STACK_ARG(Factor,"Factor")
{
		HX_STACK_LINE(236)
		int r = ::Std_obj::_int(((((((int((int(Color2) >> int((int)16))) & int((int)255))) - ((int((int(Color1) >> int((int)16))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)16))) & int((int)255)))));		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(237)
		int g = ::Std_obj::_int(((((((int((int(Color2) >> int((int)8))) & int((int)255))) - ((int((int(Color1) >> int((int)8))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)8))) & int((int)255)))));		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(238)
		int b = ::Std_obj::_int(((((((int(Color2) & int((int)255))) - ((int(Color1) & int((int)255))))) * Factor) + ((int(Color1) & int((int)255)))));		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(239)
		int a = ::Std_obj::_int(((((((int((int(Color2) >> int((int)24))) & int((int)255))) - ((int((int(Color1) >> int((int)24))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)24))) & int((int)255)))));		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(241)
		int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
		struct _Function_1_1{
			inline static int Block( int &g,int &r,int &b,int &color,int &a){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",241,0x9335c333)
				{
					HX_STACK_LINE(241)
					{
						HX_STACK_LINE(241)
						hx::AndEq(color,(int)-16711681);
						HX_STACK_LINE(241)
						hx::OrEq(color,(int(((  (((r > (int)255))) ? int((int)255) : int((  (((r < (int)0))) ? int((int)0) : int(r) )) ))) << int((int)16)));
						HX_STACK_LINE(241)
						r;
					}
					HX_STACK_LINE(241)
					{
						HX_STACK_LINE(241)
						hx::AndEq(color,(int)-65281);
						HX_STACK_LINE(241)
						hx::OrEq(color,(int(((  (((g > (int)255))) ? int((int)255) : int((  (((g < (int)0))) ? int((int)0) : int(g) )) ))) << int((int)8)));
						HX_STACK_LINE(241)
						g;
					}
					HX_STACK_LINE(241)
					{
						HX_STACK_LINE(241)
						hx::AndEq(color,(int)-256);
						HX_STACK_LINE(241)
						if (((b > (int)255))){
							HX_STACK_LINE(241)
							hx::OrEq(color,(int)255);
						}
						else{
							HX_STACK_LINE(241)
							if (((b < (int)0))){
								HX_STACK_LINE(241)
								hx::OrEq(color,(int)0);
							}
							else{
								HX_STACK_LINE(241)
								hx::OrEq(color,b);
							}
						}
						HX_STACK_LINE(241)
						b;
					}
					HX_STACK_LINE(241)
					{
						HX_STACK_LINE(241)
						hx::AndEq(color,(int)16777215);
						HX_STACK_LINE(241)
						hx::OrEq(color,(int(((  (((a > (int)255))) ? int((int)255) : int((  (((a < (int)0))) ? int((int)0) : int(a) )) ))) << int((int)24)));
						HX_STACK_LINE(241)
						a;
					}
					HX_STACK_LINE(241)
					return color;
				}
				return null();
			}
		};
		HX_STACK_LINE(241)
		return _Function_1_1::Block(g,r,b,color,a);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_Impl__obj,interpolate,return )

Array< int > FlxColor_Impl__obj::gradient( int Color1,int Color2,int Steps,Dynamic Ease){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","gradient",0x6325b7f5,"flixel.util._FlxColor.FlxColor_Impl_.gradient","flixel/util/FlxColor.hx",254,0x9335c333)
	HX_STACK_ARG(Color1,"Color1")
	HX_STACK_ARG(Color2,"Color2")
	HX_STACK_ARG(Steps,"Steps")
	HX_STACK_ARG(Ease,"Ease")
	HX_STACK_LINE(255)
	Array< int > output = Array_obj< int >::__new();		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(257)
	if (((Ease == null()))){

		HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_2_1)
		Float run(Float t){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","flixel/util/FlxColor.hx",261,0x9335c333)
			HX_STACK_ARG(t,"t")
			{
				HX_STACK_LINE(261)
				return t;
			}
			return null();
		}
		HX_END_LOCAL_FUNC1(return)

		HX_STACK_LINE(259)
		Ease =  Dynamic(new _Function_2_1());
	}
	HX_STACK_LINE(265)
	{
		HX_STACK_LINE(265)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(265)
		while((true)){
			HX_STACK_LINE(265)
			if ((!(((_g < Steps))))){
				HX_STACK_LINE(265)
				break;
			}
			HX_STACK_LINE(265)
			int step = (_g)++;		HX_STACK_VAR(step,"step");
			HX_STACK_LINE(267)
			{
				HX_STACK_LINE(267)
				Float Factor = Ease((Float(step) / Float(((Steps - (int)1))))).Cast< Float >();		HX_STACK_VAR(Factor,"Factor");
				HX_STACK_LINE(267)
				int r = ::Std_obj::_int(((((((int((int(Color2) >> int((int)16))) & int((int)255))) - ((int((int(Color1) >> int((int)16))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)16))) & int((int)255)))));		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(267)
				int g = ::Std_obj::_int(((((((int((int(Color2) >> int((int)8))) & int((int)255))) - ((int((int(Color1) >> int((int)8))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)8))) & int((int)255)))));		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(267)
				int b = ::Std_obj::_int(((((((int(Color2) & int((int)255))) - ((int(Color1) & int((int)255))))) * Factor) + ((int(Color1) & int((int)255)))));		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(267)
				int a = ::Std_obj::_int(((((((int((int(Color2) >> int((int)24))) & int((int)255))) - ((int((int(Color1) >> int((int)24))) & int((int)255))))) * Factor) + ((int((int(Color1) >> int((int)24))) & int((int)255)))));		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(267)
				{
					HX_STACK_LINE(267)
					int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
					struct _Function_5_1{
						inline static int Block( int &g,int &r,int &b,int &color,int &a){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",267,0x9335c333)
							{
								HX_STACK_LINE(267)
								{
									HX_STACK_LINE(267)
									hx::AndEq(color,(int)-16711681);
									HX_STACK_LINE(267)
									hx::OrEq(color,(int(((  (((r > (int)255))) ? int((int)255) : int((  (((r < (int)0))) ? int((int)0) : int(r) )) ))) << int((int)16)));
									HX_STACK_LINE(267)
									r;
								}
								HX_STACK_LINE(267)
								{
									HX_STACK_LINE(267)
									hx::AndEq(color,(int)-65281);
									HX_STACK_LINE(267)
									hx::OrEq(color,(int(((  (((g > (int)255))) ? int((int)255) : int((  (((g < (int)0))) ? int((int)0) : int(g) )) ))) << int((int)8)));
									HX_STACK_LINE(267)
									g;
								}
								HX_STACK_LINE(267)
								{
									HX_STACK_LINE(267)
									hx::AndEq(color,(int)-256);
									HX_STACK_LINE(267)
									if (((b > (int)255))){
										HX_STACK_LINE(267)
										hx::OrEq(color,(int)255);
									}
									else{
										HX_STACK_LINE(267)
										if (((b < (int)0))){
											HX_STACK_LINE(267)
											hx::OrEq(color,(int)0);
										}
										else{
											HX_STACK_LINE(267)
											hx::OrEq(color,b);
										}
									}
									HX_STACK_LINE(267)
									b;
								}
								HX_STACK_LINE(267)
								{
									HX_STACK_LINE(267)
									hx::AndEq(color,(int)16777215);
									HX_STACK_LINE(267)
									hx::OrEq(color,(int(((  (((a > (int)255))) ? int((int)255) : int((  (((a < (int)0))) ? int((int)0) : int(a) )) ))) << int((int)24)));
									HX_STACK_LINE(267)
									a;
								}
								HX_STACK_LINE(267)
								return color;
							}
							return null();
						}
					};
					HX_STACK_LINE(267)
					output[step] = _Function_5_1::Block(g,r,b,color,a);
				}
			}
		}
	}
	HX_STACK_LINE(270)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxColor_Impl__obj,gradient,return )

int FlxColor_Impl__obj::multiply( int lhs,int rhs){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","multiply",0xd3736029,"flixel.util._FlxColor.FlxColor_Impl_.multiply","flixel/util/FlxColor.hx",279,0x9335c333)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(279)
	Float Red = ((Float(((int((int(lhs) >> int((int)16))) & int((int)255)))) / Float((int)255)) * ((Float(((int((int(rhs) >> int((int)16))) & int((int)255)))) / Float((int)255))));		HX_STACK_VAR(Red,"Red");
	HX_STACK_LINE(279)
	Float Green = ((Float(((int((int(lhs) >> int((int)8))) & int((int)255)))) / Float((int)255)) * ((Float(((int((int(rhs) >> int((int)8))) & int((int)255)))) / Float((int)255))));		HX_STACK_VAR(Green,"Green");
	HX_STACK_LINE(279)
	Float Blue = ((Float(((int(lhs) & int((int)255)))) / Float((int)255)) * ((Float(((int(rhs) & int((int)255)))) / Float((int)255))));		HX_STACK_VAR(Blue,"Blue");
	HX_STACK_LINE(279)
	Float Alpha = (int)1;		HX_STACK_VAR(Alpha,"Alpha");
	HX_STACK_LINE(279)
	int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
	struct _Function_1_1{
		inline static int Block( Float &Red,Float &Green,Float &Blue,Float &Alpha,int &color){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",279,0x9335c333)
			{
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						int Value = ::Math_obj::round((Red * (int)255));		HX_STACK_VAR(Value,"Value");
						HX_STACK_LINE(279)
						hx::AndEq(color,(int)-16711681);
						HX_STACK_LINE(279)
						hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
						HX_STACK_LINE(279)
						Value;
					}
					HX_STACK_LINE(279)
					Red;
				}
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						int Value = ::Math_obj::round((Green * (int)255));		HX_STACK_VAR(Value,"Value");
						HX_STACK_LINE(279)
						hx::AndEq(color,(int)-65281);
						HX_STACK_LINE(279)
						hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
						HX_STACK_LINE(279)
						Value;
					}
					HX_STACK_LINE(279)
					Green;
				}
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						int Value = ::Math_obj::round((Blue * (int)255));		HX_STACK_VAR(Value,"Value");
						HX_STACK_LINE(279)
						hx::AndEq(color,(int)-256);
						HX_STACK_LINE(279)
						if (((Value > (int)255))){
							HX_STACK_LINE(279)
							hx::OrEq(color,(int)255);
						}
						else{
							HX_STACK_LINE(279)
							if (((Value < (int)0))){
								HX_STACK_LINE(279)
								hx::OrEq(color,(int)0);
							}
							else{
								HX_STACK_LINE(279)
								hx::OrEq(color,Value);
							}
						}
						HX_STACK_LINE(279)
						Value;
					}
					HX_STACK_LINE(279)
					Blue;
				}
				HX_STACK_LINE(279)
				{
					HX_STACK_LINE(279)
					{
						HX_STACK_LINE(279)
						int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
						HX_STACK_LINE(279)
						hx::AndEq(color,(int)16777215);
						HX_STACK_LINE(279)
						hx::OrEq(color,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
						HX_STACK_LINE(279)
						Value;
					}
					HX_STACK_LINE(279)
					Alpha;
				}
				HX_STACK_LINE(279)
				return color;
			}
			return null();
		}
	};
	HX_STACK_LINE(279)
	return _Function_1_1::Block(Red,Green,Blue,Alpha,color);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,multiply,return )

int FlxColor_Impl__obj::add( int lhs,int rhs){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","add",0x199e323c,"flixel.util._FlxColor.FlxColor_Impl_.add","flixel/util/FlxColor.hx",288,0x9335c333)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(288)
	int Red = (((int((int(lhs) >> int((int)16))) & int((int)255))) + ((int((int(rhs) >> int((int)16))) & int((int)255))));		HX_STACK_VAR(Red,"Red");
	HX_STACK_LINE(288)
	int Green = (((int((int(lhs) >> int((int)8))) & int((int)255))) + ((int((int(rhs) >> int((int)8))) & int((int)255))));		HX_STACK_VAR(Green,"Green");
	HX_STACK_LINE(288)
	int Blue = (((int(lhs) & int((int)255))) + ((int(rhs) & int((int)255))));		HX_STACK_VAR(Blue,"Blue");
	HX_STACK_LINE(288)
	int Alpha = (int)255;		HX_STACK_VAR(Alpha,"Alpha");
	HX_STACK_LINE(288)
	int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
	struct _Function_1_1{
		inline static int Block( int &Red,int &Green,int &Blue,int &Alpha,int &color){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",288,0x9335c333)
			{
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					hx::AndEq(color,(int)-16711681);
					HX_STACK_LINE(288)
					hx::OrEq(color,(int(((  (((Red > (int)255))) ? int((int)255) : int((  (((Red < (int)0))) ? int((int)0) : int(Red) )) ))) << int((int)16)));
					HX_STACK_LINE(288)
					Red;
				}
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					hx::AndEq(color,(int)-65281);
					HX_STACK_LINE(288)
					hx::OrEq(color,(int(((  (((Green > (int)255))) ? int((int)255) : int((  (((Green < (int)0))) ? int((int)0) : int(Green) )) ))) << int((int)8)));
					HX_STACK_LINE(288)
					Green;
				}
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					hx::AndEq(color,(int)-256);
					HX_STACK_LINE(288)
					if (((Blue > (int)255))){
						HX_STACK_LINE(288)
						hx::OrEq(color,(int)255);
					}
					else{
						HX_STACK_LINE(288)
						if (((Blue < (int)0))){
							HX_STACK_LINE(288)
							hx::OrEq(color,(int)0);
						}
						else{
							HX_STACK_LINE(288)
							hx::OrEq(color,Blue);
						}
					}
					HX_STACK_LINE(288)
					Blue;
				}
				HX_STACK_LINE(288)
				{
					HX_STACK_LINE(288)
					hx::AndEq(color,(int)16777215);
					HX_STACK_LINE(288)
					hx::OrEq(color,(int(((  (((Alpha > (int)255))) ? int((int)255) : int((  (((Alpha < (int)0))) ? int((int)0) : int(Alpha) )) ))) << int((int)24)));
					HX_STACK_LINE(288)
					Alpha;
				}
				HX_STACK_LINE(288)
				return color;
			}
			return null();
		}
	};
	HX_STACK_LINE(288)
	return _Function_1_1::Block(Red,Green,Blue,Alpha,color);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,add,return )

int FlxColor_Impl__obj::subtract( int lhs,int rhs){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","subtract",0x30f7f319,"flixel.util._FlxColor.FlxColor_Impl_.subtract","flixel/util/FlxColor.hx",297,0x9335c333)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(297)
	int Red = (((int((int(lhs) >> int((int)16))) & int((int)255))) - ((int((int(rhs) >> int((int)16))) & int((int)255))));		HX_STACK_VAR(Red,"Red");
	HX_STACK_LINE(297)
	int Green = (((int((int(lhs) >> int((int)8))) & int((int)255))) - ((int((int(rhs) >> int((int)8))) & int((int)255))));		HX_STACK_VAR(Green,"Green");
	HX_STACK_LINE(297)
	int Blue = (((int(lhs) & int((int)255))) - ((int(rhs) & int((int)255))));		HX_STACK_VAR(Blue,"Blue");
	HX_STACK_LINE(297)
	int Alpha = (int)255;		HX_STACK_VAR(Alpha,"Alpha");
	HX_STACK_LINE(297)
	int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
	struct _Function_1_1{
		inline static int Block( int &Red,int &Green,int &Blue,int &Alpha,int &color){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",297,0x9335c333)
			{
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					hx::AndEq(color,(int)-16711681);
					HX_STACK_LINE(297)
					hx::OrEq(color,(int(((  (((Red > (int)255))) ? int((int)255) : int((  (((Red < (int)0))) ? int((int)0) : int(Red) )) ))) << int((int)16)));
					HX_STACK_LINE(297)
					Red;
				}
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					hx::AndEq(color,(int)-65281);
					HX_STACK_LINE(297)
					hx::OrEq(color,(int(((  (((Green > (int)255))) ? int((int)255) : int((  (((Green < (int)0))) ? int((int)0) : int(Green) )) ))) << int((int)8)));
					HX_STACK_LINE(297)
					Green;
				}
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					hx::AndEq(color,(int)-256);
					HX_STACK_LINE(297)
					if (((Blue > (int)255))){
						HX_STACK_LINE(297)
						hx::OrEq(color,(int)255);
					}
					else{
						HX_STACK_LINE(297)
						if (((Blue < (int)0))){
							HX_STACK_LINE(297)
							hx::OrEq(color,(int)0);
						}
						else{
							HX_STACK_LINE(297)
							hx::OrEq(color,Blue);
						}
					}
					HX_STACK_LINE(297)
					Blue;
				}
				HX_STACK_LINE(297)
				{
					HX_STACK_LINE(297)
					hx::AndEq(color,(int)16777215);
					HX_STACK_LINE(297)
					hx::OrEq(color,(int(((  (((Alpha > (int)255))) ? int((int)255) : int((  (((Alpha < (int)0))) ? int((int)0) : int(Alpha) )) ))) << int((int)24)));
					HX_STACK_LINE(297)
					Alpha;
				}
				HX_STACK_LINE(297)
				return color;
			}
			return null();
		}
	};
	HX_STACK_LINE(297)
	return _Function_1_1::Block(Red,Green,Blue,Alpha,color);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,subtract,return )

int FlxColor_Impl__obj::getComplementHarmony( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getComplementHarmony",0xe82411cf,"flixel.util._FlxColor.FlxColor_Impl_.getComplementHarmony","flixel/util/FlxColor.hx",307,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(308)
	Float _g = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(308)
	int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(308)
	int _g2 = ::flixel::math::FlxMath_obj::wrapValue(_g1,(int)180,(int)350);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(308)
	Float _g3 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(308)
	Float _g4 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(308)
	Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(308)
	Float _g6 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(308)
	Float _g7 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(308)
	Float _g8 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g7);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(308)
	Float _g9 = (_g6 - _g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(308)
	Float _g10 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(308)
	Float _g11 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g10);		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(308)
	Float _g12 = (Float(_g9) / Float(_g11));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(308)
	return ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(_g2,_g4,_g12,(Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255)));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getComplementHarmony,return )

Dynamic FlxColor_Impl__obj::getAnalogousHarmony( int this1,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getAnalogousHarmony",0x6a6ddffa,"flixel.util._FlxColor.FlxColor_Impl_.getAnalogousHarmony","flixel/util/FlxColor.hx",319,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Threshold,"Threshold")
{
		HX_STACK_LINE(320)
		Float _g = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(320)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(320)
		int _g2 = ::flixel::math::FlxMath_obj::wrapValue(_g1,-(Threshold),(int)350);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(320)
		Float _g3 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(320)
		Float _g4 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(320)
		Float _g5 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(320)
		Float _g6 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(320)
		Float _g7 = (_g4 - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(320)
		Float _g8 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(320)
		Float _g9 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(320)
		Float _g10 = (Float(_g7) / Float(_g9));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(320)
		Float _g11 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(320)
		Float _g12 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(320)
		int warmer = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(_g2,_g10,_g12,(Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(321)
		Float _g13 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(321)
		int _g14 = ::Std_obj::_int(_g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(321)
		int _g15 = ::flixel::math::FlxMath_obj::wrapValue(_g14,Threshold,(int)350);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(321)
		Float _g16 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(321)
		Float _g17 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(321)
		Float _g18 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(321)
		Float _g19 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g18);		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(321)
		Float _g20 = (_g17 - _g19);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(321)
		Float _g21 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(321)
		Float _g22 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g21);		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(321)
		Float _g23 = (Float(_g20) / Float(_g22));		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(321)
		Float _g24 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(321)
		Float _g25 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g24);		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(321)
		int colder = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(_g15,_g23,_g25,(Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(colder,"colder");
		struct _Function_1_1{
			inline static Dynamic Block( int &warmer,int &colder,int &this1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",323,0x9335c333)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("original") , this1,false);
					__result->Add(HX_CSTRING("warmer") , warmer,false);
					__result->Add(HX_CSTRING("colder") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(323)
		return _Function_1_1::Block(warmer,colder,this1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getAnalogousHarmony,return )

Dynamic FlxColor_Impl__obj::getSplitComplementHarmony( int this1,hx::Null< int >  __o_Threshold){
int Threshold = __o_Threshold.Default(30);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getSplitComplementHarmony",0x65102b17,"flixel.util._FlxColor.FlxColor_Impl_.getSplitComplementHarmony","flixel/util/FlxColor.hx",334,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Threshold,"Threshold")
{
		HX_STACK_LINE(335)
		Float _g = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(335)
		int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(335)
		int oppositeHue = ::flixel::math::FlxMath_obj::wrapValue(_g1,(int)180,(int)350);		HX_STACK_VAR(oppositeHue,"oppositeHue");
		HX_STACK_LINE(336)
		int _g2 = ::flixel::math::FlxMath_obj::wrapValue(oppositeHue,-(Threshold),(int)350);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(336)
		Float _g3 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(336)
		Float _g4 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(336)
		Float _g5 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(336)
		Float _g6 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(336)
		Float _g7 = (_g4 - _g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(336)
		Float _g8 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(336)
		Float _g9 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(336)
		Float _g10 = (Float(_g7) / Float(_g9));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(336)
		Float _g11 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(336)
		Float _g12 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(336)
		int warmer = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(_g2,_g10,_g12,(Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(warmer,"warmer");
		HX_STACK_LINE(337)
		int _g13 = ::flixel::math::FlxMath_obj::wrapValue(oppositeHue,Threshold,(int)350);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(337)
		Float _g14 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(337)
		Float _g15 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(337)
		Float _g16 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(337)
		Float _g17 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(337)
		Float _g18 = (_g15 - _g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(337)
		Float _g19 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(337)
		Float _g20 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g19);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(337)
		Float _g21 = (Float(_g18) / Float(_g20));		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(337)
		Float _g22 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(337)
		Float _g23 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g22);		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(337)
		int colder = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(_g13,_g21,_g23,(Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(colder,"colder");
		struct _Function_1_1{
			inline static Dynamic Block( int &warmer,int &colder,int &this1){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",339,0x9335c333)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("original") , this1,false);
					__result->Add(HX_CSTRING("warmer") , warmer,false);
					__result->Add(HX_CSTRING("colder") , colder,false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(339)
		return _Function_1_1::Block(warmer,colder,this1);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getSplitComplementHarmony,return )

Dynamic FlxColor_Impl__obj::getTriadicHarmony( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getTriadicHarmony",0x8ea1774f,"flixel.util._FlxColor.FlxColor_Impl_.getTriadicHarmony","flixel/util/FlxColor.hx",349,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(350)
	Float _g = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(350)
	int _g1 = ::Std_obj::_int(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(350)
	int _g2 = ::flixel::math::FlxMath_obj::wrapValue(_g1,(int)120,(int)359);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(350)
	Float _g3 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(350)
	Float _g4 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(350)
	Float _g5 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(350)
	Float _g6 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(350)
	Float _g7 = (_g4 - _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(350)
	Float _g8 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(350)
	Float _g9 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g8);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(350)
	Float _g10 = (Float(_g7) / Float(_g9));		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(350)
	Float _g11 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(350)
	Float _g12 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g11);		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(350)
	int triadic1 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(_g2,_g10,_g12,(Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(triadic1,"triadic1");
	HX_STACK_LINE(351)
	Float _g13 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(triadic1);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(351)
	int _g14 = ::Std_obj::_int(_g13);		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(351)
	int _g15 = ::flixel::math::FlxMath_obj::wrapValue(_g14,(int)120,(int)359);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(351)
	Float _g16 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(351)
	Float _g17 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g16);		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(351)
	Float _g18 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(351)
	Float _g19 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g18);		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(351)
	Float _g20 = (_g17 - _g19);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(351)
	Float _g21 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(351)
	Float _g22 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g21);		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(351)
	Float _g23 = (Float(_g20) / Float(_g22));		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(351)
	Float _g24 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(351)
	Float _g25 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g24);		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(351)
	int triadic2 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::fromHSB(_g15,_g23,_g25,(Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(triadic2,"triadic2");
	struct _Function_1_1{
		inline static Dynamic Block( int &triadic2,int &triadic1,int &this1){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",353,0x9335c333)
			{
				hx::Anon __result = hx::Anon_obj::Create();
				__result->Add(HX_CSTRING("color1") , this1,false);
				__result->Add(HX_CSTRING("color2") , triadic1,false);
				__result->Add(HX_CSTRING("color3") , triadic2,false);
				return __result;
			}
			return null();
		}
	};
	HX_STACK_LINE(353)
	return _Function_1_1::Block(triadic2,triadic1,this1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getTriadicHarmony,return )

int FlxColor_Impl__obj::to24Bit( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","to24Bit",0xaa37506b,"flixel.util._FlxColor.FlxColor_Impl_.to24Bit","flixel/util/FlxColor.hx",363,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(363)
	return (int(this1) & int((int)16777215));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,to24Bit,return )

::String FlxColor_Impl__obj::toHexString( int this1,hx::Null< bool >  __o_Alpha,hx::Null< bool >  __o_Prefix){
bool Alpha = __o_Alpha.Default(true);
bool Prefix = __o_Prefix.Default(true);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","toHexString",0x94bdbc2c,"flixel.util._FlxColor.FlxColor_Impl_.toHexString","flixel/util/FlxColor.hx",374,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_ARG(Prefix,"Prefix")
{
		HX_STACK_LINE(375)
		::String _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(375)
		if ((Alpha)){
			HX_STACK_LINE(375)
			_g = ::StringTools_obj::hex((int((int(this1) >> int((int)24))) & int((int)255)),(int)2);
		}
		else{
			HX_STACK_LINE(375)
			_g = HX_CSTRING("");
		}
		HX_STACK_LINE(375)
		::String _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(375)
		_g1 = (((  ((Prefix)) ? ::String(HX_CSTRING("0x")) : ::String(HX_CSTRING("")) )) + _g);
		HX_STACK_LINE(376)
		::String _g2 = ::StringTools_obj::hex((int((int(this1) >> int((int)16))) & int((int)255)),(int)2);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(375)
		::String _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(376)
		::String _g4 = ::StringTools_obj::hex((int((int(this1) >> int((int)8))) & int((int)255)),(int)2);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(375)
		::String _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(376)
		::String _g6 = ::StringTools_obj::hex((int(this1) & int((int)255)),(int)2);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(375)
		return (_g5 + _g6);
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxColor_Impl__obj,toHexString,return )

::String FlxColor_Impl__obj::toWebString( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","toWebString",0x5e0aaea5,"flixel.util._FlxColor.FlxColor_Impl_.toWebString","flixel/util/FlxColor.hx",385,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(386)
	::String _g = HX_CSTRING("");		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(386)
	::String _g1 = (HX_CSTRING("") + _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(386)
	::String _g2 = ::StringTools_obj::hex((int((int(this1) >> int((int)16))) & int((int)255)),(int)2);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(386)
	::String _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(386)
	::String _g4 = ::StringTools_obj::hex((int((int(this1) >> int((int)8))) & int((int)255)),(int)2);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(386)
	::String _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(386)
	::String _g6 = ::StringTools_obj::hex((int(this1) & int((int)255)),(int)2);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(386)
	::String _g7 = (_g5 + _g6);		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(386)
	return (HX_CSTRING("#") + _g7);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,toWebString,return )

::String FlxColor_Impl__obj::getColorInfo( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getColorInfo",0x327dc480,"flixel.util._FlxColor.FlxColor_Impl_.getColorInfo","flixel/util/FlxColor.hx",395,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(396)
	::String result = HX_CSTRING("");		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(399)
	::String _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(399)
	{
		HX_STACK_LINE(399)
		bool Alpha = true;		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(399)
		bool Prefix = true;		HX_STACK_VAR(Prefix,"Prefix");
		HX_STACK_LINE(399)
		::String _g;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(399)
		if ((Alpha)){
			HX_STACK_LINE(399)
			_g = ::StringTools_obj::hex((int((int(this1) >> int((int)24))) & int((int)255)),(int)2);
		}
		else{
			HX_STACK_LINE(399)
			_g = HX_CSTRING("");
		}
		HX_STACK_LINE(399)
		::String _g1;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(399)
		_g1 = (((  ((Prefix)) ? ::String(HX_CSTRING("0x")) : ::String(HX_CSTRING("")) )) + _g);
		HX_STACK_LINE(399)
		::String _g2 = ::StringTools_obj::hex((int((int(this1) >> int((int)16))) & int((int)255)),(int)2);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(399)
		::String _g3 = (_g1 + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(399)
		::String _g4 = ::StringTools_obj::hex((int((int(this1) >> int((int)8))) & int((int)255)),(int)2);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(399)
		::String _g5 = (_g3 + _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(399)
		::String _g6 = ::StringTools_obj::hex((int(this1) & int((int)255)),(int)2);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(399)
		_g7 = (_g5 + _g6);
	}
	HX_STACK_LINE(399)
	::String result1 = (_g7 + HX_CSTRING("\n"));		HX_STACK_VAR(result1,"result1");
	HX_STACK_LINE(401)
	hx::AddEq(result1,((((((((HX_CSTRING("Alpha: ") + ((int((int(this1) >> int((int)24))) & int((int)255)))) + HX_CSTRING(" Red: ")) + ((int((int(this1) >> int((int)16))) & int((int)255)))) + HX_CSTRING(" Green: ")) + ((int((int(this1) >> int((int)8))) & int((int)255)))) + HX_CSTRING(" Blue: ")) + ((int(this1) & int((int)255)))) + HX_CSTRING("\n")));
	HX_STACK_LINE(403)
	Float _g8 = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);		HX_STACK_VAR(_g8,"_g8");
	HX_STACK_LINE(403)
	Float _g9 = ::flixel::math::FlxMath_obj::roundDecimal(_g8,(int)2);		HX_STACK_VAR(_g9,"_g9");
	HX_STACK_LINE(403)
	::String _g10 = (HX_CSTRING("Hue: ") + _g9);		HX_STACK_VAR(_g10,"_g10");
	HX_STACK_LINE(403)
	::String _g11 = (_g10 + HX_CSTRING(" Saturation: "));		HX_STACK_VAR(_g11,"_g11");
	HX_STACK_LINE(403)
	Float _g12 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g12,"_g12");
	HX_STACK_LINE(403)
	Float _g13 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g12);		HX_STACK_VAR(_g13,"_g13");
	HX_STACK_LINE(403)
	Float _g14 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g14,"_g14");
	HX_STACK_LINE(403)
	Float _g15 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g14);		HX_STACK_VAR(_g15,"_g15");
	HX_STACK_LINE(403)
	Float _g16 = (_g13 - _g15);		HX_STACK_VAR(_g16,"_g16");
	HX_STACK_LINE(403)
	Float _g17 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g17,"_g17");
	HX_STACK_LINE(403)
	Float _g18 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g17);		HX_STACK_VAR(_g18,"_g18");
	HX_STACK_LINE(403)
	Float _g19 = (Float(_g16) / Float(_g18));		HX_STACK_VAR(_g19,"_g19");
	HX_STACK_LINE(403)
	Float _g20 = ::flixel::math::FlxMath_obj::roundDecimal(_g19,(int)2);		HX_STACK_VAR(_g20,"_g20");
	HX_STACK_LINE(403)
	::String _g21 = (_g11 + _g20);		HX_STACK_VAR(_g21,"_g21");
	HX_STACK_LINE(403)
	::String _g22 = (_g21 + HX_CSTRING(" Brightness: "));		HX_STACK_VAR(_g22,"_g22");
	HX_STACK_LINE(404)
	Float _g23 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g23,"_g23");
	HX_STACK_LINE(404)
	Float _g24 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g23);		HX_STACK_VAR(_g24,"_g24");
	HX_STACK_LINE(404)
	Float _g25 = ::flixel::math::FlxMath_obj::roundDecimal(_g24,(int)2);		HX_STACK_VAR(_g25,"_g25");
	HX_STACK_LINE(403)
	::String _g26 = (_g22 + _g25);		HX_STACK_VAR(_g26,"_g26");
	HX_STACK_LINE(403)
	::String _g27 = (_g26 + HX_CSTRING(" Lightness: "));		HX_STACK_VAR(_g27,"_g27");
	HX_STACK_LINE(404)
	Float _g28 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g28,"_g28");
	HX_STACK_LINE(404)
	Float _g29 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g28);		HX_STACK_VAR(_g29,"_g29");
	HX_STACK_LINE(404)
	Float _g30 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g30,"_g30");
	HX_STACK_LINE(404)
	Float _g31 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g30);		HX_STACK_VAR(_g31,"_g31");
	HX_STACK_LINE(404)
	Float _g32 = (_g29 + _g31);		HX_STACK_VAR(_g32,"_g32");
	HX_STACK_LINE(404)
	Float _g33 = (Float(_g32) / Float((int)2));		HX_STACK_VAR(_g33,"_g33");
	HX_STACK_LINE(404)
	Float _g34 = ::flixel::math::FlxMath_obj::roundDecimal(_g33,(int)2);		HX_STACK_VAR(_g34,"_g34");
	HX_STACK_LINE(403)
	::String _g35 = (_g27 + _g34);		HX_STACK_VAR(_g35,"_g35");
	HX_STACK_LINE(403)
	hx::AddEq(result1,_g35);
	HX_STACK_LINE(406)
	return result1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getColorInfo,return )

int FlxColor_Impl__obj::getDarkened( int this1,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(0.2);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getDarkened",0xd9fa3a4f,"flixel.util._FlxColor.FlxColor_Impl_.getDarkened","flixel/util/FlxColor.hx",416,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Factor,"Factor")
{
		HX_STACK_LINE(417)
		{
			HX_STACK_LINE(417)
			Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(417)
			if (((Factor < (int)0))){
				HX_STACK_LINE(417)
				lowerBound = (int)0;
			}
			else{
				HX_STACK_LINE(417)
				lowerBound = Factor;
			}
			HX_STACK_LINE(417)
			if (((lowerBound > (int)1))){
				HX_STACK_LINE(417)
				Factor = (int)1;
			}
			else{
				HX_STACK_LINE(417)
				Factor = lowerBound;
			}
		}
		HX_STACK_LINE(418)
		int output = this1;		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			Float _g = ::Math_obj::max((Float(((int((int(output) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(output) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(419)
			Float _g1 = ::Math_obj::max((Float(((int((int(output) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(419)
			Float _g2 = ::Math_obj::min((Float(((int((int(output) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(output) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(419)
			Float _g3 = ::Math_obj::min((Float(((int((int(output) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(419)
			Float _g4 = (_g1 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(419)
			Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(419)
			Float Value = (_g5 * (((int)1 - Factor)));		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(419)
			{
				HX_STACK_LINE(419)
				Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(output);		HX_STACK_VAR(Hue,"Hue");
				HX_STACK_LINE(419)
				Float _g6 = ::Math_obj::max((Float(((int((int(output) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(output) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g6,"_g6");
				HX_STACK_LINE(419)
				Float _g7 = ::Math_obj::max((Float(((int((int(output) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g6);		HX_STACK_VAR(_g7,"_g7");
				HX_STACK_LINE(419)
				Float _g8 = ::Math_obj::min((Float(((int((int(output) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(output) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g8,"_g8");
				HX_STACK_LINE(419)
				Float _g9 = ::Math_obj::min((Float(((int((int(output) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g8);		HX_STACK_VAR(_g9,"_g9");
				HX_STACK_LINE(419)
				Float _g10 = (_g7 - _g9);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(419)
				Float _g11 = ::Math_obj::max((Float(((int((int(output) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(output) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(419)
				Float _g12 = ::Math_obj::max((Float(((int((int(output) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g11);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(419)
				Float Saturation = (Float(_g10) / Float(_g12));		HX_STACK_VAR(Saturation,"Saturation");
				HX_STACK_LINE(419)
				Float Alpha = (Float(((int((int(output) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(Alpha,"Alpha");
				HX_STACK_LINE(419)
				Float _g13 = ::Math_obj::abs((((int)2 * Value) - (int)1));		HX_STACK_VAR(_g13,"_g13");
				HX_STACK_LINE(419)
				Float _g14 = ((int)1 - _g13);		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(419)
				Float chroma = (_g14 * Saturation);		HX_STACK_VAR(chroma,"chroma");
				HX_STACK_LINE(419)
				Float match = (Value - (Float(chroma) / Float((int)2)));		HX_STACK_VAR(match,"match");
				HX_STACK_LINE(419)
				{
					HX_STACK_LINE(419)
					Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
					HX_STACK_LINE(419)
					Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
					HX_STACK_LINE(419)
					hx::ModEq(Hue1,(int)360);
					HX_STACK_LINE(419)
					Float hueD = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(hueD,"hueD");
					HX_STACK_LINE(419)
					Float _g15 = ::Math_obj::abs((hx::Mod(hueD,(int)2) - (int)1));		HX_STACK_VAR(_g15,"_g15");
					HX_STACK_LINE(419)
					Float _g16 = ((int)1 - _g15);		HX_STACK_VAR(_g16,"_g16");
					HX_STACK_LINE(419)
					Float _g17 = (Chroma * _g16);		HX_STACK_VAR(_g17,"_g17");
					HX_STACK_LINE(419)
					Float mid = (_g17 + match);		HX_STACK_VAR(mid,"mid");
					HX_STACK_LINE(419)
					hx::AddEq(Chroma,match);
					HX_STACK_LINE(419)
					{
						HX_STACK_LINE(419)
						int _g18 = ::Std_obj::_int(hueD);		HX_STACK_VAR(_g18,"_g18");
						HX_STACK_LINE(419)
						switch( (int)(_g18)){
							case (int)0: {
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Chroma;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										mid;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(419)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(419)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(419)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(419)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(419)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										match;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Alpha;
									}
									HX_STACK_LINE(419)
									output;
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										mid;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Chroma;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(419)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(419)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(419)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(419)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(419)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										match;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Alpha;
									}
									HX_STACK_LINE(419)
									output;
								}
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										match;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Chroma;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(419)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(419)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(419)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(419)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(419)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										mid;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Alpha;
									}
									HX_STACK_LINE(419)
									output;
								}
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										match;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										mid;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(419)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(419)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(419)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(419)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(419)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Chroma;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Alpha;
									}
									HX_STACK_LINE(419)
									output;
								}
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										mid;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										match;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(419)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(419)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(419)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(419)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(419)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Chroma;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Alpha;
									}
									HX_STACK_LINE(419)
									output;
								}
							}
							;break;
							case (int)5: {
								HX_STACK_LINE(419)
								{
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Chroma;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										match;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(419)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(419)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(419)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(419)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(419)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										mid;
									}
									HX_STACK_LINE(419)
									{
										HX_STACK_LINE(419)
										{
											HX_STACK_LINE(419)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(419)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(419)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(419)
											Value1;
										}
										HX_STACK_LINE(419)
										Alpha;
									}
									HX_STACK_LINE(419)
									output;
								}
							}
							;break;
						}
					}
					HX_STACK_LINE(419)
					output;
				}
			}
			HX_STACK_LINE(419)
			Value;
		}
		HX_STACK_LINE(420)
		return output;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getDarkened,return )

int FlxColor_Impl__obj::getLightened( int this1,hx::Null< Float >  __o_Factor){
Float Factor = __o_Factor.Default(0.2);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getLightened",0xe2b011ed,"flixel.util._FlxColor.FlxColor_Impl_.getLightened","flixel/util/FlxColor.hx",430,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Factor,"Factor")
{
		HX_STACK_LINE(431)
		{
			HX_STACK_LINE(431)
			Float lowerBound;		HX_STACK_VAR(lowerBound,"lowerBound");
			HX_STACK_LINE(431)
			if (((Factor < (int)0))){
				HX_STACK_LINE(431)
				lowerBound = (int)0;
			}
			else{
				HX_STACK_LINE(431)
				lowerBound = Factor;
			}
			HX_STACK_LINE(431)
			if (((lowerBound > (int)1))){
				HX_STACK_LINE(431)
				Factor = (int)1;
			}
			else{
				HX_STACK_LINE(431)
				Factor = lowerBound;
			}
		}
		HX_STACK_LINE(432)
		int output = this1;		HX_STACK_VAR(output,"output");
		HX_STACK_LINE(433)
		{
			HX_STACK_LINE(433)
			Float _g = ::Math_obj::max((Float(((int((int(output) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(output) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(433)
			Float _g1 = ::Math_obj::max((Float(((int((int(output) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(433)
			Float _g2 = ::Math_obj::min((Float(((int((int(output) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(output) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(433)
			Float _g3 = ::Math_obj::min((Float(((int((int(output) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(433)
			Float _g4 = (_g1 + _g3);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(433)
			Float _g5 = (Float(_g4) / Float((int)2));		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(433)
			Float _g6 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(433)
			Float _g7 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g6);		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(433)
			Float _g8 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(433)
			Float _g9 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(433)
			Float _g10 = (_g7 + _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(433)
			Float _g11 = (Float(_g10) / Float((int)2));		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(433)
			Float _g12 = ((int)1 - _g11);		HX_STACK_VAR(_g12,"_g12");
			HX_STACK_LINE(433)
			Float _g13 = (_g12 * Factor);		HX_STACK_VAR(_g13,"_g13");
			HX_STACK_LINE(433)
			Float Value = (_g5 + _g13);		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(433)
			{
				HX_STACK_LINE(433)
				Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(output);		HX_STACK_VAR(Hue,"Hue");
				HX_STACK_LINE(433)
				Float _g14 = ::Math_obj::max((Float(((int((int(output) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(output) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g14,"_g14");
				HX_STACK_LINE(433)
				Float _g15 = ::Math_obj::max((Float(((int((int(output) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g14);		HX_STACK_VAR(_g15,"_g15");
				HX_STACK_LINE(433)
				Float _g16 = ::Math_obj::min((Float(((int((int(output) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(output) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g16,"_g16");
				HX_STACK_LINE(433)
				Float _g17 = ::Math_obj::min((Float(((int((int(output) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g16);		HX_STACK_VAR(_g17,"_g17");
				HX_STACK_LINE(433)
				Float _g18 = (_g15 - _g17);		HX_STACK_VAR(_g18,"_g18");
				HX_STACK_LINE(433)
				Float _g19 = ::Math_obj::max((Float(((int((int(output) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(output) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g19,"_g19");
				HX_STACK_LINE(433)
				Float _g20 = ::Math_obj::max((Float(((int((int(output) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g19);		HX_STACK_VAR(_g20,"_g20");
				HX_STACK_LINE(433)
				Float Saturation = (Float(_g18) / Float(_g20));		HX_STACK_VAR(Saturation,"Saturation");
				HX_STACK_LINE(433)
				Float Alpha = (Float(((int((int(output) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(Alpha,"Alpha");
				HX_STACK_LINE(433)
				Float _g21 = ::Math_obj::abs((((int)2 * Value) - (int)1));		HX_STACK_VAR(_g21,"_g21");
				HX_STACK_LINE(433)
				Float _g22 = ((int)1 - _g21);		HX_STACK_VAR(_g22,"_g22");
				HX_STACK_LINE(433)
				Float chroma = (_g22 * Saturation);		HX_STACK_VAR(chroma,"chroma");
				HX_STACK_LINE(433)
				Float match = (Value - (Float(chroma) / Float((int)2)));		HX_STACK_VAR(match,"match");
				HX_STACK_LINE(433)
				{
					HX_STACK_LINE(433)
					Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
					HX_STACK_LINE(433)
					Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
					HX_STACK_LINE(433)
					hx::ModEq(Hue1,(int)360);
					HX_STACK_LINE(433)
					Float hueD = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(hueD,"hueD");
					HX_STACK_LINE(433)
					Float _g23 = ::Math_obj::abs((hx::Mod(hueD,(int)2) - (int)1));		HX_STACK_VAR(_g23,"_g23");
					HX_STACK_LINE(433)
					Float _g24 = ((int)1 - _g23);		HX_STACK_VAR(_g24,"_g24");
					HX_STACK_LINE(433)
					Float _g25 = (Chroma * _g24);		HX_STACK_VAR(_g25,"_g25");
					HX_STACK_LINE(433)
					Float mid = (_g25 + match);		HX_STACK_VAR(mid,"mid");
					HX_STACK_LINE(433)
					hx::AddEq(Chroma,match);
					HX_STACK_LINE(433)
					{
						HX_STACK_LINE(433)
						int _g26 = ::Std_obj::_int(hueD);		HX_STACK_VAR(_g26,"_g26");
						HX_STACK_LINE(433)
						switch( (int)(_g26)){
							case (int)0: {
								HX_STACK_LINE(433)
								{
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Chroma;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										mid;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(433)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(433)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(433)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(433)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(433)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										match;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Alpha;
									}
									HX_STACK_LINE(433)
									output;
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(433)
								{
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										mid;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Chroma;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(433)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(433)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(433)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(433)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(433)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										match;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Alpha;
									}
									HX_STACK_LINE(433)
									output;
								}
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(433)
								{
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										match;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Chroma;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(433)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(433)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(433)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(433)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(433)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										mid;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Alpha;
									}
									HX_STACK_LINE(433)
									output;
								}
							}
							;break;
							case (int)3: {
								HX_STACK_LINE(433)
								{
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										match;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										mid;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(433)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(433)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(433)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(433)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(433)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Chroma;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Alpha;
									}
									HX_STACK_LINE(433)
									output;
								}
							}
							;break;
							case (int)4: {
								HX_STACK_LINE(433)
								{
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										mid;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										match;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(433)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(433)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(433)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(433)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(433)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Chroma;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Alpha;
									}
									HX_STACK_LINE(433)
									output;
								}
							}
							;break;
							case (int)5: {
								HX_STACK_LINE(433)
								{
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-16711681);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Chroma;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-65281);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										match;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)-256);
											HX_STACK_LINE(433)
											if (((Value1 > (int)255))){
												HX_STACK_LINE(433)
												hx::OrEq(output,(int)255);
											}
											else{
												HX_STACK_LINE(433)
												if (((Value1 < (int)0))){
													HX_STACK_LINE(433)
													hx::OrEq(output,(int)0);
												}
												else{
													HX_STACK_LINE(433)
													hx::OrEq(output,Value1);
												}
											}
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										mid;
									}
									HX_STACK_LINE(433)
									{
										HX_STACK_LINE(433)
										{
											HX_STACK_LINE(433)
											int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
											HX_STACK_LINE(433)
											hx::AndEq(output,(int)16777215);
											HX_STACK_LINE(433)
											hx::OrEq(output,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
											HX_STACK_LINE(433)
											Value1;
										}
										HX_STACK_LINE(433)
										Alpha;
									}
									HX_STACK_LINE(433)
									output;
								}
							}
							;break;
						}
					}
					HX_STACK_LINE(433)
					output;
				}
			}
			HX_STACK_LINE(433)
			Value;
		}
		HX_STACK_LINE(434)
		return output;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,getLightened,return )

int FlxColor_Impl__obj::getInverted( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","getInverted",0x422fc6c6,"flixel.util._FlxColor.FlxColor_Impl_.getInverted","flixel/util/FlxColor.hx",443,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(444)
	int oldAlpha = (int((int(this1) >> int((int)24))) & int((int)255));		HX_STACK_VAR(oldAlpha,"oldAlpha");
	HX_STACK_LINE(445)
	int output;		HX_STACK_VAR(output,"output");
	HX_STACK_LINE(445)
	{
		HX_STACK_LINE(445)
		int lhs = (int)-1;		HX_STACK_VAR(lhs,"lhs");
		HX_STACK_LINE(445)
		{
			HX_STACK_LINE(445)
			int Red = (((int((int(lhs) >> int((int)16))) & int((int)255))) - ((int((int(this1) >> int((int)16))) & int((int)255))));		HX_STACK_VAR(Red,"Red");
			HX_STACK_LINE(445)
			int Green = (((int((int(lhs) >> int((int)8))) & int((int)255))) - ((int((int(this1) >> int((int)8))) & int((int)255))));		HX_STACK_VAR(Green,"Green");
			HX_STACK_LINE(445)
			int Blue = (((int(lhs) & int((int)255))) - ((int(this1) & int((int)255))));		HX_STACK_VAR(Blue,"Blue");
			HX_STACK_LINE(445)
			int Alpha = (int)255;		HX_STACK_VAR(Alpha,"Alpha");
			HX_STACK_LINE(445)
			int color = ::flixel::util::_FlxColor::FlxColor_Impl__obj::_new(null());		HX_STACK_VAR(color,"color");
			struct _Function_3_1{
				inline static int Block( int &Red,int &Green,int &Blue,int &Alpha,int &color){
					HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/util/FlxColor.hx",445,0x9335c333)
					{
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							hx::AndEq(color,(int)-16711681);
							HX_STACK_LINE(445)
							hx::OrEq(color,(int(((  (((Red > (int)255))) ? int((int)255) : int((  (((Red < (int)0))) ? int((int)0) : int(Red) )) ))) << int((int)16)));
							HX_STACK_LINE(445)
							Red;
						}
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							hx::AndEq(color,(int)-65281);
							HX_STACK_LINE(445)
							hx::OrEq(color,(int(((  (((Green > (int)255))) ? int((int)255) : int((  (((Green < (int)0))) ? int((int)0) : int(Green) )) ))) << int((int)8)));
							HX_STACK_LINE(445)
							Green;
						}
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							hx::AndEq(color,(int)-256);
							HX_STACK_LINE(445)
							if (((Blue > (int)255))){
								HX_STACK_LINE(445)
								hx::OrEq(color,(int)255);
							}
							else{
								HX_STACK_LINE(445)
								if (((Blue < (int)0))){
									HX_STACK_LINE(445)
									hx::OrEq(color,(int)0);
								}
								else{
									HX_STACK_LINE(445)
									hx::OrEq(color,Blue);
								}
							}
							HX_STACK_LINE(445)
							Blue;
						}
						HX_STACK_LINE(445)
						{
							HX_STACK_LINE(445)
							hx::AndEq(color,(int)16777215);
							HX_STACK_LINE(445)
							hx::OrEq(color,(int(((  (((Alpha > (int)255))) ? int((int)255) : int((  (((Alpha < (int)0))) ? int((int)0) : int(Alpha) )) ))) << int((int)24)));
							HX_STACK_LINE(445)
							Alpha;
						}
						HX_STACK_LINE(445)
						return color;
					}
					return null();
				}
			};
			HX_STACK_LINE(445)
			output = _Function_3_1::Block(Red,Green,Blue,Alpha,color);
		}
	}
	HX_STACK_LINE(446)
	{
		HX_STACK_LINE(446)
		hx::AndEq(output,(int)16777215);
		HX_STACK_LINE(446)
		hx::OrEq(output,(int(((  (((oldAlpha > (int)255))) ? int((int)255) : int((  (((oldAlpha < (int)0))) ? int((int)0) : int(oldAlpha) )) ))) << int((int)24)));
		HX_STACK_LINE(446)
		oldAlpha;
	}
	HX_STACK_LINE(447)
	return output;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,getInverted,return )

int FlxColor_Impl__obj::setRGB( int this1,int Red,int Green,int Blue,hx::Null< int >  __o_Alpha){
int Alpha = __o_Alpha.Default(255);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setRGB",0x421acf50,"flixel.util._FlxColor.FlxColor_Impl_.setRGB","flixel/util/FlxColor.hx",460,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(461)
		{
			HX_STACK_LINE(461)
			hx::AndEq(this1,(int)-16711681);
			HX_STACK_LINE(461)
			hx::OrEq(this1,(int(((  (((Red > (int)255))) ? int((int)255) : int((  (((Red < (int)0))) ? int((int)0) : int(Red) )) ))) << int((int)16)));
			HX_STACK_LINE(461)
			Red;
		}
		HX_STACK_LINE(462)
		{
			HX_STACK_LINE(462)
			hx::AndEq(this1,(int)-65281);
			HX_STACK_LINE(462)
			hx::OrEq(this1,(int(((  (((Green > (int)255))) ? int((int)255) : int((  (((Green < (int)0))) ? int((int)0) : int(Green) )) ))) << int((int)8)));
			HX_STACK_LINE(462)
			Green;
		}
		HX_STACK_LINE(463)
		{
			HX_STACK_LINE(463)
			hx::AndEq(this1,(int)-256);
			HX_STACK_LINE(463)
			if (((Blue > (int)255))){
				HX_STACK_LINE(463)
				hx::OrEq(this1,(int)255);
			}
			else{
				HX_STACK_LINE(463)
				if (((Blue < (int)0))){
					HX_STACK_LINE(463)
					hx::OrEq(this1,(int)0);
				}
				else{
					HX_STACK_LINE(463)
					hx::OrEq(this1,Blue);
				}
			}
			HX_STACK_LINE(463)
			Blue;
		}
		HX_STACK_LINE(464)
		{
			HX_STACK_LINE(464)
			hx::AndEq(this1,(int)16777215);
			HX_STACK_LINE(464)
			hx::OrEq(this1,(int(((  (((Alpha > (int)255))) ? int((int)255) : int((  (((Alpha < (int)0))) ? int((int)0) : int(Alpha) )) ))) << int((int)24)));
			HX_STACK_LINE(464)
			Alpha;
		}
		HX_STACK_LINE(465)
		return this1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setRGB,return )

int FlxColor_Impl__obj::setRGBFloat( int this1,Float Red,Float Green,Float Blue,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setRGBFloat",0x51a7e42c,"flixel.util._FlxColor.FlxColor_Impl_.setRGBFloat","flixel/util/FlxColor.hx",478,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Red,"Red")
	HX_STACK_ARG(Green,"Green")
	HX_STACK_ARG(Blue,"Blue")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(479)
		{
			HX_STACK_LINE(479)
			{
				HX_STACK_LINE(479)
				int Value = ::Math_obj::round((Red * (int)255));		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(479)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(479)
				hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
				HX_STACK_LINE(479)
				Value;
			}
			HX_STACK_LINE(479)
			Red;
		}
		HX_STACK_LINE(480)
		{
			HX_STACK_LINE(480)
			{
				HX_STACK_LINE(480)
				int Value = ::Math_obj::round((Green * (int)255));		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(480)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(480)
				hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
				HX_STACK_LINE(480)
				Value;
			}
			HX_STACK_LINE(480)
			Green;
		}
		HX_STACK_LINE(481)
		{
			HX_STACK_LINE(481)
			{
				HX_STACK_LINE(481)
				int Value = ::Math_obj::round((Blue * (int)255));		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(481)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(481)
				if (((Value > (int)255))){
					HX_STACK_LINE(481)
					hx::OrEq(this1,(int)255);
				}
				else{
					HX_STACK_LINE(481)
					if (((Value < (int)0))){
						HX_STACK_LINE(481)
						hx::OrEq(this1,(int)0);
					}
					else{
						HX_STACK_LINE(481)
						hx::OrEq(this1,Value);
					}
				}
				HX_STACK_LINE(481)
				Value;
			}
			HX_STACK_LINE(481)
			Blue;
		}
		HX_STACK_LINE(482)
		{
			HX_STACK_LINE(482)
			{
				HX_STACK_LINE(482)
				int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(482)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(482)
				hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
				HX_STACK_LINE(482)
				Value;
			}
			HX_STACK_LINE(482)
			Alpha;
		}
		HX_STACK_LINE(483)
		return this1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setRGBFloat,return )

int FlxColor_Impl__obj::setCMYK( int this1,Float Cyan,Float Magenta,Float Yellow,Float Black,hx::Null< Float >  __o_Alpha){
Float Alpha = __o_Alpha.Default(1);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setCMYK",0x8b750539,"flixel.util._FlxColor.FlxColor_Impl_.setCMYK","flixel/util/FlxColor.hx",497,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Cyan,"Cyan")
	HX_STACK_ARG(Magenta,"Magenta")
	HX_STACK_ARG(Yellow,"Yellow")
	HX_STACK_ARG(Black,"Black")
	HX_STACK_ARG(Alpha,"Alpha")
{
		HX_STACK_LINE(498)
		{
			HX_STACK_LINE(498)
			Float Value = ((((int)1 - Cyan)) * (((int)1 - Black)));		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(498)
			{
				HX_STACK_LINE(498)
				int Value1 = ::Math_obj::round((Value * (int)255));		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(498)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(498)
				hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
				HX_STACK_LINE(498)
				Value1;
			}
			HX_STACK_LINE(498)
			Value;
		}
		HX_STACK_LINE(499)
		{
			HX_STACK_LINE(499)
			Float Value = ((((int)1 - Magenta)) * (((int)1 - Black)));		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(499)
			{
				HX_STACK_LINE(499)
				int Value1 = ::Math_obj::round((Value * (int)255));		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(499)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(499)
				hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
				HX_STACK_LINE(499)
				Value1;
			}
			HX_STACK_LINE(499)
			Value;
		}
		HX_STACK_LINE(500)
		{
			HX_STACK_LINE(500)
			Float Value = ((((int)1 - Yellow)) * (((int)1 - Black)));		HX_STACK_VAR(Value,"Value");
			HX_STACK_LINE(500)
			{
				HX_STACK_LINE(500)
				int Value1 = ::Math_obj::round((Value * (int)255));		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(500)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(500)
				if (((Value1 > (int)255))){
					HX_STACK_LINE(500)
					hx::OrEq(this1,(int)255);
				}
				else{
					HX_STACK_LINE(500)
					if (((Value1 < (int)0))){
						HX_STACK_LINE(500)
						hx::OrEq(this1,(int)0);
					}
					else{
						HX_STACK_LINE(500)
						hx::OrEq(this1,Value1);
					}
				}
				HX_STACK_LINE(500)
				Value1;
			}
			HX_STACK_LINE(500)
			Value;
		}
		HX_STACK_LINE(501)
		{
			HX_STACK_LINE(501)
			{
				HX_STACK_LINE(501)
				int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
				HX_STACK_LINE(501)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(501)
				hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
				HX_STACK_LINE(501)
				Value;
			}
			HX_STACK_LINE(501)
			Alpha;
		}
		HX_STACK_LINE(502)
		return this1;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColor_Impl__obj,setCMYK,return )

int FlxColor_Impl__obj::setHSB( int this1,Float Hue,Float Saturation,Float Brightness,Float Alpha){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setHSB",0x4213433a,"flixel.util._FlxColor.FlxColor_Impl_.setHSB","flixel/util/FlxColor.hx",515,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Brightness,"Brightness")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(516)
	Float chroma = (Brightness * Saturation);		HX_STACK_VAR(chroma,"chroma");
	HX_STACK_LINE(517)
	Float match = (Brightness - chroma);		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(518)
	Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
	HX_STACK_LINE(518)
	Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
	HX_STACK_LINE(518)
	hx::ModEq(Hue1,(int)360);
	HX_STACK_LINE(518)
	Float hueD = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(hueD,"hueD");
	HX_STACK_LINE(518)
	Float _g = ::Math_obj::abs((hx::Mod(hueD,(int)2) - (int)1));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(518)
	Float _g1 = ((int)1 - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(518)
	Float _g2 = (Chroma * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(518)
	Float mid = (_g2 + match);		HX_STACK_VAR(mid,"mid");
	HX_STACK_LINE(518)
	hx::AddEq(Chroma,match);
	HX_STACK_LINE(518)
	{
		HX_STACK_LINE(518)
		int _g3 = ::Std_obj::_int(hueD);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(518)
		switch( (int)(_g3)){
			case (int)0: {
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Chroma;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						mid;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(518)
							if (((Value > (int)255))){
								HX_STACK_LINE(518)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(518)
								if (((Value < (int)0))){
									HX_STACK_LINE(518)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(518)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						match;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Alpha;
					}
					HX_STACK_LINE(518)
					this1;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						mid;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Chroma;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(518)
							if (((Value > (int)255))){
								HX_STACK_LINE(518)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(518)
								if (((Value < (int)0))){
									HX_STACK_LINE(518)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(518)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						match;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Alpha;
					}
					HX_STACK_LINE(518)
					this1;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						match;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Chroma;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(518)
							if (((Value > (int)255))){
								HX_STACK_LINE(518)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(518)
								if (((Value < (int)0))){
									HX_STACK_LINE(518)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(518)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						mid;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Alpha;
					}
					HX_STACK_LINE(518)
					this1;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						match;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						mid;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(518)
							if (((Value > (int)255))){
								HX_STACK_LINE(518)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(518)
								if (((Value < (int)0))){
									HX_STACK_LINE(518)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(518)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Chroma;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Alpha;
					}
					HX_STACK_LINE(518)
					this1;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						mid;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						match;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(518)
							if (((Value > (int)255))){
								HX_STACK_LINE(518)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(518)
								if (((Value < (int)0))){
									HX_STACK_LINE(518)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(518)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Chroma;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Alpha;
					}
					HX_STACK_LINE(518)
					this1;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(518)
				{
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Chroma;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						match;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(518)
							if (((Value > (int)255))){
								HX_STACK_LINE(518)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(518)
								if (((Value < (int)0))){
									HX_STACK_LINE(518)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(518)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						mid;
					}
					HX_STACK_LINE(518)
					{
						HX_STACK_LINE(518)
						{
							HX_STACK_LINE(518)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(518)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(518)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(518)
							Value;
						}
						HX_STACK_LINE(518)
						Alpha;
					}
					HX_STACK_LINE(518)
					this1;
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(518)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setHSB,return )

int FlxColor_Impl__obj::setHSL( int this1,Float Hue,Float Saturation,Float Lightness,Float Alpha){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setHSL",0x42134344,"flixel.util._FlxColor.FlxColor_Impl_.setHSL","flixel/util/FlxColor.hx",531,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Lightness,"Lightness")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(532)
	Float _g = ::Math_obj::abs((((int)2 * Lightness) - (int)1));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(532)
	Float _g1 = ((int)1 - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(532)
	Float chroma = (_g1 * Saturation);		HX_STACK_VAR(chroma,"chroma");
	HX_STACK_LINE(533)
	Float match = (Lightness - (Float(chroma) / Float((int)2)));		HX_STACK_VAR(match,"match");
	HX_STACK_LINE(534)
	Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
	HX_STACK_LINE(534)
	Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
	HX_STACK_LINE(534)
	hx::ModEq(Hue1,(int)360);
	HX_STACK_LINE(534)
	Float hueD = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(hueD,"hueD");
	HX_STACK_LINE(534)
	Float _g2 = ::Math_obj::abs((hx::Mod(hueD,(int)2) - (int)1));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(534)
	Float _g3 = ((int)1 - _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(534)
	Float _g4 = (Chroma * _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(534)
	Float mid = (_g4 + match);		HX_STACK_VAR(mid,"mid");
	HX_STACK_LINE(534)
	hx::AddEq(Chroma,match);
	HX_STACK_LINE(534)
	{
		HX_STACK_LINE(534)
		int _g5 = ::Std_obj::_int(hueD);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(534)
		switch( (int)(_g5)){
			case (int)0: {
				HX_STACK_LINE(534)
				{
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Chroma;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						mid;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(534)
							if (((Value > (int)255))){
								HX_STACK_LINE(534)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(534)
								if (((Value < (int)0))){
									HX_STACK_LINE(534)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(534)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						match;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Alpha;
					}
					HX_STACK_LINE(534)
					this1;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(534)
				{
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						mid;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Chroma;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(534)
							if (((Value > (int)255))){
								HX_STACK_LINE(534)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(534)
								if (((Value < (int)0))){
									HX_STACK_LINE(534)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(534)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						match;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Alpha;
					}
					HX_STACK_LINE(534)
					this1;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(534)
				{
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						match;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Chroma;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(534)
							if (((Value > (int)255))){
								HX_STACK_LINE(534)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(534)
								if (((Value < (int)0))){
									HX_STACK_LINE(534)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(534)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						mid;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Alpha;
					}
					HX_STACK_LINE(534)
					this1;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(534)
				{
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						match;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						mid;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(534)
							if (((Value > (int)255))){
								HX_STACK_LINE(534)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(534)
								if (((Value < (int)0))){
									HX_STACK_LINE(534)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(534)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Chroma;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Alpha;
					}
					HX_STACK_LINE(534)
					this1;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(534)
				{
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						mid;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						match;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(534)
							if (((Value > (int)255))){
								HX_STACK_LINE(534)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(534)
								if (((Value < (int)0))){
									HX_STACK_LINE(534)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(534)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Chroma;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Alpha;
					}
					HX_STACK_LINE(534)
					this1;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(534)
				{
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Chroma;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						match;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(534)
							if (((Value > (int)255))){
								HX_STACK_LINE(534)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(534)
								if (((Value < (int)0))){
									HX_STACK_LINE(534)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(534)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						mid;
					}
					HX_STACK_LINE(534)
					{
						HX_STACK_LINE(534)
						{
							HX_STACK_LINE(534)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(534)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(534)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(534)
							Value;
						}
						HX_STACK_LINE(534)
						Alpha;
					}
					HX_STACK_LINE(534)
					this1;
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(534)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(FlxColor_Impl__obj,setHSL,return )

int FlxColor_Impl__obj::setHSChromaMatch( int this1,Float Hue,Float Saturation,Float Chroma,Float Match,Float Alpha){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","setHSChromaMatch",0x8f5af4c7,"flixel.util._FlxColor.FlxColor_Impl_.setHSChromaMatch","flixel/util/FlxColor.hx",541,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Hue,"Hue")
	HX_STACK_ARG(Saturation,"Saturation")
	HX_STACK_ARG(Chroma,"Chroma")
	HX_STACK_ARG(Match,"Match")
	HX_STACK_ARG(Alpha,"Alpha")
	HX_STACK_LINE(542)
	hx::ModEq(Hue,(int)360);
	HX_STACK_LINE(543)
	Float hueD = (Float(Hue) / Float((int)60));		HX_STACK_VAR(hueD,"hueD");
	HX_STACK_LINE(544)
	Float _g = ::Math_obj::abs((hx::Mod(hueD,(int)2) - (int)1));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(544)
	Float _g1 = ((int)1 - _g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(544)
	Float _g2 = (Chroma * _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(544)
	Float mid = (_g2 + Match);		HX_STACK_VAR(mid,"mid");
	HX_STACK_LINE(545)
	hx::AddEq(Chroma,Match);
	HX_STACK_LINE(547)
	{
		HX_STACK_LINE(547)
		int _g3 = ::Std_obj::_int(hueD);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(547)
		switch( (int)(_g3)){
			case (int)0: {
				HX_STACK_LINE(549)
				{
					HX_STACK_LINE(549)
					{
						HX_STACK_LINE(549)
						{
							HX_STACK_LINE(549)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(549)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(549)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(549)
							Value;
						}
						HX_STACK_LINE(549)
						Chroma;
					}
					HX_STACK_LINE(549)
					{
						HX_STACK_LINE(549)
						{
							HX_STACK_LINE(549)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(549)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(549)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(549)
							Value;
						}
						HX_STACK_LINE(549)
						mid;
					}
					HX_STACK_LINE(549)
					{
						HX_STACK_LINE(549)
						{
							HX_STACK_LINE(549)
							int Value = ::Math_obj::round((Match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(549)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(549)
							if (((Value > (int)255))){
								HX_STACK_LINE(549)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(549)
								if (((Value < (int)0))){
									HX_STACK_LINE(549)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(549)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(549)
							Value;
						}
						HX_STACK_LINE(549)
						Match;
					}
					HX_STACK_LINE(549)
					{
						HX_STACK_LINE(549)
						{
							HX_STACK_LINE(549)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(549)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(549)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(549)
							Value;
						}
						HX_STACK_LINE(549)
						Alpha;
					}
					HX_STACK_LINE(549)
					this1;
				}
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(550)
				{
					HX_STACK_LINE(550)
					{
						HX_STACK_LINE(550)
						{
							HX_STACK_LINE(550)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(550)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(550)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(550)
							Value;
						}
						HX_STACK_LINE(550)
						mid;
					}
					HX_STACK_LINE(550)
					{
						HX_STACK_LINE(550)
						{
							HX_STACK_LINE(550)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(550)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(550)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(550)
							Value;
						}
						HX_STACK_LINE(550)
						Chroma;
					}
					HX_STACK_LINE(550)
					{
						HX_STACK_LINE(550)
						{
							HX_STACK_LINE(550)
							int Value = ::Math_obj::round((Match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(550)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(550)
							if (((Value > (int)255))){
								HX_STACK_LINE(550)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(550)
								if (((Value < (int)0))){
									HX_STACK_LINE(550)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(550)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(550)
							Value;
						}
						HX_STACK_LINE(550)
						Match;
					}
					HX_STACK_LINE(550)
					{
						HX_STACK_LINE(550)
						{
							HX_STACK_LINE(550)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(550)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(550)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(550)
							Value;
						}
						HX_STACK_LINE(550)
						Alpha;
					}
					HX_STACK_LINE(550)
					this1;
				}
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(551)
				{
					HX_STACK_LINE(551)
					{
						HX_STACK_LINE(551)
						{
							HX_STACK_LINE(551)
							int Value = ::Math_obj::round((Match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(551)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(551)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(551)
							Value;
						}
						HX_STACK_LINE(551)
						Match;
					}
					HX_STACK_LINE(551)
					{
						HX_STACK_LINE(551)
						{
							HX_STACK_LINE(551)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(551)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(551)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(551)
							Value;
						}
						HX_STACK_LINE(551)
						Chroma;
					}
					HX_STACK_LINE(551)
					{
						HX_STACK_LINE(551)
						{
							HX_STACK_LINE(551)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(551)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(551)
							if (((Value > (int)255))){
								HX_STACK_LINE(551)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(551)
								if (((Value < (int)0))){
									HX_STACK_LINE(551)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(551)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(551)
							Value;
						}
						HX_STACK_LINE(551)
						mid;
					}
					HX_STACK_LINE(551)
					{
						HX_STACK_LINE(551)
						{
							HX_STACK_LINE(551)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(551)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(551)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(551)
							Value;
						}
						HX_STACK_LINE(551)
						Alpha;
					}
					HX_STACK_LINE(551)
					this1;
				}
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(552)
				{
					HX_STACK_LINE(552)
					{
						HX_STACK_LINE(552)
						{
							HX_STACK_LINE(552)
							int Value = ::Math_obj::round((Match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(552)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(552)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(552)
							Value;
						}
						HX_STACK_LINE(552)
						Match;
					}
					HX_STACK_LINE(552)
					{
						HX_STACK_LINE(552)
						{
							HX_STACK_LINE(552)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(552)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(552)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(552)
							Value;
						}
						HX_STACK_LINE(552)
						mid;
					}
					HX_STACK_LINE(552)
					{
						HX_STACK_LINE(552)
						{
							HX_STACK_LINE(552)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(552)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(552)
							if (((Value > (int)255))){
								HX_STACK_LINE(552)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(552)
								if (((Value < (int)0))){
									HX_STACK_LINE(552)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(552)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(552)
							Value;
						}
						HX_STACK_LINE(552)
						Chroma;
					}
					HX_STACK_LINE(552)
					{
						HX_STACK_LINE(552)
						{
							HX_STACK_LINE(552)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(552)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(552)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(552)
							Value;
						}
						HX_STACK_LINE(552)
						Alpha;
					}
					HX_STACK_LINE(552)
					this1;
				}
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(553)
				{
					HX_STACK_LINE(553)
					{
						HX_STACK_LINE(553)
						{
							HX_STACK_LINE(553)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(553)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(553)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(553)
							Value;
						}
						HX_STACK_LINE(553)
						mid;
					}
					HX_STACK_LINE(553)
					{
						HX_STACK_LINE(553)
						{
							HX_STACK_LINE(553)
							int Value = ::Math_obj::round((Match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(553)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(553)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(553)
							Value;
						}
						HX_STACK_LINE(553)
						Match;
					}
					HX_STACK_LINE(553)
					{
						HX_STACK_LINE(553)
						{
							HX_STACK_LINE(553)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(553)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(553)
							if (((Value > (int)255))){
								HX_STACK_LINE(553)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(553)
								if (((Value < (int)0))){
									HX_STACK_LINE(553)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(553)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(553)
							Value;
						}
						HX_STACK_LINE(553)
						Chroma;
					}
					HX_STACK_LINE(553)
					{
						HX_STACK_LINE(553)
						{
							HX_STACK_LINE(553)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(553)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(553)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(553)
							Value;
						}
						HX_STACK_LINE(553)
						Alpha;
					}
					HX_STACK_LINE(553)
					this1;
				}
			}
			;break;
			case (int)5: {
				HX_STACK_LINE(554)
				{
					HX_STACK_LINE(554)
					{
						HX_STACK_LINE(554)
						{
							HX_STACK_LINE(554)
							int Value = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(554)
							hx::AndEq(this1,(int)-16711681);
							HX_STACK_LINE(554)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
							HX_STACK_LINE(554)
							Value;
						}
						HX_STACK_LINE(554)
						Chroma;
					}
					HX_STACK_LINE(554)
					{
						HX_STACK_LINE(554)
						{
							HX_STACK_LINE(554)
							int Value = ::Math_obj::round((Match * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(554)
							hx::AndEq(this1,(int)-65281);
							HX_STACK_LINE(554)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
							HX_STACK_LINE(554)
							Value;
						}
						HX_STACK_LINE(554)
						Match;
					}
					HX_STACK_LINE(554)
					{
						HX_STACK_LINE(554)
						{
							HX_STACK_LINE(554)
							int Value = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(554)
							hx::AndEq(this1,(int)-256);
							HX_STACK_LINE(554)
							if (((Value > (int)255))){
								HX_STACK_LINE(554)
								hx::OrEq(this1,(int)255);
							}
							else{
								HX_STACK_LINE(554)
								if (((Value < (int)0))){
									HX_STACK_LINE(554)
									hx::OrEq(this1,(int)0);
								}
								else{
									HX_STACK_LINE(554)
									hx::OrEq(this1,Value);
								}
							}
							HX_STACK_LINE(554)
							Value;
						}
						HX_STACK_LINE(554)
						mid;
					}
					HX_STACK_LINE(554)
					{
						HX_STACK_LINE(554)
						{
							HX_STACK_LINE(554)
							int Value = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value,"Value");
							HX_STACK_LINE(554)
							hx::AndEq(this1,(int)16777215);
							HX_STACK_LINE(554)
							hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
							HX_STACK_LINE(554)
							Value;
						}
						HX_STACK_LINE(554)
						Alpha;
					}
					HX_STACK_LINE(554)
					this1;
				}
			}
			;break;
		}
	}
	HX_STACK_LINE(557)
	return this1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(FlxColor_Impl__obj,setHSChromaMatch,return )

int FlxColor_Impl__obj::_new( hx::Null< int >  __o_Value){
int Value = __o_Value.Default(0);
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","_new",0x4f82ece6,"flixel.util._FlxColor.FlxColor_Impl_._new","flixel/util/FlxColor.hx",562,0x9335c333)
	HX_STACK_ARG(Value,"Value")
{
		HX_STACK_LINE(562)
		return Value;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,_new,return )

int FlxColor_Impl__obj::get_red( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_red",0xab118b83,"flixel.util._FlxColor.FlxColor_Impl_.get_red","flixel/util/FlxColor.hx",567,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(567)
	return (int((int(this1) >> int((int)16))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_red,return )

int FlxColor_Impl__obj::get_green( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_green",0x6e5e3175,"flixel.util._FlxColor.FlxColor_Impl_.get_green","flixel/util/FlxColor.hx",572,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(572)
	return (int((int(this1) >> int((int)8))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_green,return )

int FlxColor_Impl__obj::get_blue( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_blue",0xf9ba7c28,"flixel.util._FlxColor.FlxColor_Impl_.get_blue","flixel/util/FlxColor.hx",577,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(577)
	return (int(this1) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_blue,return )

int FlxColor_Impl__obj::get_alpha( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_alpha",0xf607ca10,"flixel.util._FlxColor.FlxColor_Impl_.get_alpha","flixel/util/FlxColor.hx",582,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(582)
	return (int((int(this1) >> int((int)24))) & int((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_alpha,return )

Float FlxColor_Impl__obj::get_redFloat( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_redFloat",0x28fb0f19,"flixel.util._FlxColor.FlxColor_Impl_.get_redFloat","flixel/util/FlxColor.hx",587,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(587)
	return (Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_redFloat,return )

Float FlxColor_Impl__obj::get_greenFloat( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_greenFloat",0x97159be7,"flixel.util._FlxColor.FlxColor_Impl_.get_greenFloat","flixel/util/FlxColor.hx",592,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(592)
	return (Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_greenFloat,return )

Float FlxColor_Impl__obj::get_blueFloat( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_blueFloat",0x58cea854,"flixel.util._FlxColor.FlxColor_Impl_.get_blueFloat","flixel/util/FlxColor.hx",597,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(597)
	return (Float(((int(this1) & int((int)255)))) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_blueFloat,return )

Float FlxColor_Impl__obj::get_alphaFloat( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_alphaFloat",0xe2f5f16c,"flixel.util._FlxColor.FlxColor_Impl_.get_alphaFloat","flixel/util/FlxColor.hx",602,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(602)
	return (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_alphaFloat,return )

int FlxColor_Impl__obj::set_red( int this1,int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_red",0x9e131c8f,"flixel.util._FlxColor.FlxColor_Impl_.set_red","flixel/util/FlxColor.hx",606,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(607)
	hx::AndEq(this1,(int)-16711681);
	HX_STACK_LINE(608)
	hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)16)));
	HX_STACK_LINE(609)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_red,return )

int FlxColor_Impl__obj::set_green( int this1,int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_green",0x51af1d81,"flixel.util._FlxColor.FlxColor_Impl_.set_green","flixel/util/FlxColor.hx",613,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(614)
	hx::AndEq(this1,(int)-65281);
	HX_STACK_LINE(615)
	hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)8)));
	HX_STACK_LINE(616)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_green,return )

int FlxColor_Impl__obj::set_blue( int this1,int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_blue",0xa817d59c,"flixel.util._FlxColor.FlxColor_Impl_.set_blue","flixel/util/FlxColor.hx",620,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(621)
	hx::AndEq(this1,(int)-256);
	HX_STACK_LINE(622)
	if (((Value > (int)255))){
		HX_STACK_LINE(622)
		hx::OrEq(this1,(int)255);
	}
	else{
		HX_STACK_LINE(622)
		if (((Value < (int)0))){
			HX_STACK_LINE(622)
			hx::OrEq(this1,(int)0);
		}
		else{
			HX_STACK_LINE(622)
			hx::OrEq(this1,Value);
		}
	}
	HX_STACK_LINE(623)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_blue,return )

int FlxColor_Impl__obj::set_alpha( int this1,int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_alpha",0xd958b61c,"flixel.util._FlxColor.FlxColor_Impl_.set_alpha","flixel/util/FlxColor.hx",627,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(628)
	hx::AndEq(this1,(int)16777215);
	HX_STACK_LINE(629)
	hx::OrEq(this1,(int(((  (((Value > (int)255))) ? int((int)255) : int((  (((Value < (int)0))) ? int((int)0) : int(Value) )) ))) << int((int)24)));
	HX_STACK_LINE(630)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_alpha,return )

Float FlxColor_Impl__obj::set_redFloat( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_redFloat",0x3df4328d,"flixel.util._FlxColor.FlxColor_Impl_.set_redFloat","flixel/util/FlxColor.hx",634,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(635)
	{
		HX_STACK_LINE(635)
		int Value1 = ::Math_obj::round((Value * (int)255));		HX_STACK_VAR(Value1,"Value1");
		HX_STACK_LINE(635)
		hx::AndEq(this1,(int)-16711681);
		HX_STACK_LINE(635)
		hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
		HX_STACK_LINE(635)
		Value1;
	}
	HX_STACK_LINE(636)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_redFloat,return )

Float FlxColor_Impl__obj::set_greenFloat( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_greenFloat",0xb735845b,"flixel.util._FlxColor.FlxColor_Impl_.set_greenFloat","flixel/util/FlxColor.hx",640,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(641)
	{
		HX_STACK_LINE(641)
		int Value1 = ::Math_obj::round((Value * (int)255));		HX_STACK_VAR(Value1,"Value1");
		HX_STACK_LINE(641)
		hx::AndEq(this1,(int)-65281);
		HX_STACK_LINE(641)
		hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
		HX_STACK_LINE(641)
		Value1;
	}
	HX_STACK_LINE(642)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_greenFloat,return )

Float FlxColor_Impl__obj::set_blueFloat( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_blueFloat",0x9dd48a60,"flixel.util._FlxColor.FlxColor_Impl_.set_blueFloat","flixel/util/FlxColor.hx",646,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(647)
	{
		HX_STACK_LINE(647)
		int Value1 = ::Math_obj::round((Value * (int)255));		HX_STACK_VAR(Value1,"Value1");
		HX_STACK_LINE(647)
		hx::AndEq(this1,(int)-256);
		HX_STACK_LINE(647)
		if (((Value1 > (int)255))){
			HX_STACK_LINE(647)
			hx::OrEq(this1,(int)255);
		}
		else{
			HX_STACK_LINE(647)
			if (((Value1 < (int)0))){
				HX_STACK_LINE(647)
				hx::OrEq(this1,(int)0);
			}
			else{
				HX_STACK_LINE(647)
				hx::OrEq(this1,Value1);
			}
		}
		HX_STACK_LINE(647)
		Value1;
	}
	HX_STACK_LINE(648)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_blueFloat,return )

Float FlxColor_Impl__obj::set_alphaFloat( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_alphaFloat",0x0315d9e0,"flixel.util._FlxColor.FlxColor_Impl_.set_alphaFloat","flixel/util/FlxColor.hx",652,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(653)
	{
		HX_STACK_LINE(653)
		int Value1 = ::Math_obj::round((Value * (int)255));		HX_STACK_VAR(Value1,"Value1");
		HX_STACK_LINE(653)
		hx::AndEq(this1,(int)16777215);
		HX_STACK_LINE(653)
		hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
		HX_STACK_LINE(653)
		Value1;
	}
	HX_STACK_LINE(654)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_alphaFloat,return )

Float FlxColor_Impl__obj::get_cyan( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_cyan",0xfa6d7eb1,"flixel.util._FlxColor.FlxColor_Impl_.get_cyan","flixel/util/FlxColor.hx",658,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(659)
	Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(659)
	Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(659)
	Float _g2 = ((int)1 - _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(659)
	Float _g3 = (((int)1 - (Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255))) - _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(659)
	Float _g4 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(659)
	Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(659)
	return (Float(_g3) / Float(_g5));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_cyan,return )

Float FlxColor_Impl__obj::get_magenta( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_magenta",0xbba26d5b,"flixel.util._FlxColor.FlxColor_Impl_.get_magenta","flixel/util/FlxColor.hx",663,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(664)
	Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(664)
	Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(664)
	Float _g2 = ((int)1 - _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(664)
	Float _g3 = (((int)1 - (Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255))) - _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(664)
	Float _g4 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(664)
	Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(664)
	return (Float(_g3) / Float(_g5));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_magenta,return )

Float FlxColor_Impl__obj::get_yellow( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_yellow",0xdee9d882,"flixel.util._FlxColor.FlxColor_Impl_.get_yellow","flixel/util/FlxColor.hx",668,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(669)
	Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(669)
	Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(669)
	Float _g2 = ((int)1 - _g1);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(669)
	Float _g3 = (((int)1 - (Float(((int(this1) & int((int)255)))) / Float((int)255))) - _g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(669)
	Float _g4 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(669)
	Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g4);		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(669)
	return (Float(_g3) / Float(_g5));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_yellow,return )

Float FlxColor_Impl__obj::get_black( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_black",0x8962f871,"flixel.util._FlxColor.FlxColor_Impl_.get_black","flixel/util/FlxColor.hx",673,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(674)
	Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(674)
	Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(674)
	return ((int)1 - _g1);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_black,return )

Float FlxColor_Impl__obj::set_cyan( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_cyan",0xa8cad825,"flixel.util._FlxColor.FlxColor_Impl_.set_cyan","flixel/util/FlxColor.hx",678,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(679)
	{
		HX_STACK_LINE(679)
		Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(679)
		Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(679)
		Float _g2 = ((int)1 - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(679)
		Float _g3 = (((int)1 - (Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255))) - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(679)
		Float _g4 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(679)
		Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(679)
		Float Magenta = (Float(_g3) / Float(_g5));		HX_STACK_VAR(Magenta,"Magenta");
		HX_STACK_LINE(679)
		Float _g6 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(679)
		Float _g7 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(679)
		Float _g8 = ((int)1 - _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(679)
		Float _g9 = (((int)1 - (Float(((int(this1) & int((int)255)))) / Float((int)255))) - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(679)
		Float _g10 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(679)
		Float _g11 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(679)
		Float Yellow = (Float(_g9) / Float(_g11));		HX_STACK_VAR(Yellow,"Yellow");
		HX_STACK_LINE(679)
		Float _g12 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(679)
		Float _g13 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(679)
		Float Black = ((int)1 - _g13);		HX_STACK_VAR(Black,"Black");
		HX_STACK_LINE(679)
		Float Alpha = (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(679)
		{
			HX_STACK_LINE(679)
			Float Value1 = ((((int)1 - Value)) * (((int)1 - Black)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(679)
			{
				HX_STACK_LINE(679)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(679)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(679)
				hx::OrEq(this1,(int(((  (((Value2 > (int)255))) ? int((int)255) : int((  (((Value2 < (int)0))) ? int((int)0) : int(Value2) )) ))) << int((int)16)));
				HX_STACK_LINE(679)
				Value2;
			}
			HX_STACK_LINE(679)
			Value1;
		}
		HX_STACK_LINE(679)
		{
			HX_STACK_LINE(679)
			Float Value1 = ((((int)1 - Magenta)) * (((int)1 - Black)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(679)
			{
				HX_STACK_LINE(679)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(679)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(679)
				hx::OrEq(this1,(int(((  (((Value2 > (int)255))) ? int((int)255) : int((  (((Value2 < (int)0))) ? int((int)0) : int(Value2) )) ))) << int((int)8)));
				HX_STACK_LINE(679)
				Value2;
			}
			HX_STACK_LINE(679)
			Value1;
		}
		HX_STACK_LINE(679)
		{
			HX_STACK_LINE(679)
			Float Value1 = ((((int)1 - Yellow)) * (((int)1 - Black)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(679)
			{
				HX_STACK_LINE(679)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(679)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(679)
				if (((Value2 > (int)255))){
					HX_STACK_LINE(679)
					hx::OrEq(this1,(int)255);
				}
				else{
					HX_STACK_LINE(679)
					if (((Value2 < (int)0))){
						HX_STACK_LINE(679)
						hx::OrEq(this1,(int)0);
					}
					else{
						HX_STACK_LINE(679)
						hx::OrEq(this1,Value2);
					}
				}
				HX_STACK_LINE(679)
				Value2;
			}
			HX_STACK_LINE(679)
			Value1;
		}
		HX_STACK_LINE(679)
		{
			HX_STACK_LINE(679)
			{
				HX_STACK_LINE(679)
				int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(679)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(679)
				hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
				HX_STACK_LINE(679)
				Value1;
			}
			HX_STACK_LINE(679)
			Alpha;
		}
		HX_STACK_LINE(679)
		this1;
	}
	HX_STACK_LINE(680)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_cyan,return )

Float FlxColor_Impl__obj::set_magenta( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_magenta",0xc60f7467,"flixel.util._FlxColor.FlxColor_Impl_.set_magenta","flixel/util/FlxColor.hx",684,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(685)
	{
		HX_STACK_LINE(685)
		Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(685)
		Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(685)
		Float _g2 = ((int)1 - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(685)
		Float _g3 = (((int)1 - (Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255))) - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(685)
		Float _g4 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(685)
		Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(685)
		Float Cyan = (Float(_g3) / Float(_g5));		HX_STACK_VAR(Cyan,"Cyan");
		HX_STACK_LINE(685)
		Float _g6 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(685)
		Float _g7 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(685)
		Float _g8 = ((int)1 - _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(685)
		Float _g9 = (((int)1 - (Float(((int(this1) & int((int)255)))) / Float((int)255))) - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(685)
		Float _g10 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(685)
		Float _g11 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(685)
		Float Yellow = (Float(_g9) / Float(_g11));		HX_STACK_VAR(Yellow,"Yellow");
		HX_STACK_LINE(685)
		Float _g12 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(685)
		Float _g13 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(685)
		Float Black = ((int)1 - _g13);		HX_STACK_VAR(Black,"Black");
		HX_STACK_LINE(685)
		Float Alpha = (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(685)
		{
			HX_STACK_LINE(685)
			Float Value1 = ((((int)1 - Cyan)) * (((int)1 - Black)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(685)
			{
				HX_STACK_LINE(685)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(685)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(685)
				hx::OrEq(this1,(int(((  (((Value2 > (int)255))) ? int((int)255) : int((  (((Value2 < (int)0))) ? int((int)0) : int(Value2) )) ))) << int((int)16)));
				HX_STACK_LINE(685)
				Value2;
			}
			HX_STACK_LINE(685)
			Value1;
		}
		HX_STACK_LINE(685)
		{
			HX_STACK_LINE(685)
			Float Value1 = ((((int)1 - Value)) * (((int)1 - Black)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(685)
			{
				HX_STACK_LINE(685)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(685)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(685)
				hx::OrEq(this1,(int(((  (((Value2 > (int)255))) ? int((int)255) : int((  (((Value2 < (int)0))) ? int((int)0) : int(Value2) )) ))) << int((int)8)));
				HX_STACK_LINE(685)
				Value2;
			}
			HX_STACK_LINE(685)
			Value1;
		}
		HX_STACK_LINE(685)
		{
			HX_STACK_LINE(685)
			Float Value1 = ((((int)1 - Yellow)) * (((int)1 - Black)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(685)
			{
				HX_STACK_LINE(685)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(685)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(685)
				if (((Value2 > (int)255))){
					HX_STACK_LINE(685)
					hx::OrEq(this1,(int)255);
				}
				else{
					HX_STACK_LINE(685)
					if (((Value2 < (int)0))){
						HX_STACK_LINE(685)
						hx::OrEq(this1,(int)0);
					}
					else{
						HX_STACK_LINE(685)
						hx::OrEq(this1,Value2);
					}
				}
				HX_STACK_LINE(685)
				Value2;
			}
			HX_STACK_LINE(685)
			Value1;
		}
		HX_STACK_LINE(685)
		{
			HX_STACK_LINE(685)
			{
				HX_STACK_LINE(685)
				int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(685)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(685)
				hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
				HX_STACK_LINE(685)
				Value1;
			}
			HX_STACK_LINE(685)
			Alpha;
		}
		HX_STACK_LINE(685)
		this1;
	}
	HX_STACK_LINE(686)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_magenta,return )

Float FlxColor_Impl__obj::set_yellow( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_yellow",0xe26776f6,"flixel.util._FlxColor.FlxColor_Impl_.set_yellow","flixel/util/FlxColor.hx",690,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(691)
	{
		HX_STACK_LINE(691)
		Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(691)
		Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(691)
		Float _g2 = ((int)1 - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(691)
		Float _g3 = (((int)1 - (Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255))) - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(691)
		Float _g4 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(691)
		Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(691)
		Float Cyan = (Float(_g3) / Float(_g5));		HX_STACK_VAR(Cyan,"Cyan");
		HX_STACK_LINE(691)
		Float _g6 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(691)
		Float _g7 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(691)
		Float _g8 = ((int)1 - _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(691)
		Float _g9 = (((int)1 - (Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255))) - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(691)
		Float _g10 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(691)
		Float _g11 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(691)
		Float Magenta = (Float(_g9) / Float(_g11));		HX_STACK_VAR(Magenta,"Magenta");
		HX_STACK_LINE(691)
		Float _g12 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(691)
		Float _g13 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(691)
		Float Black = ((int)1 - _g13);		HX_STACK_VAR(Black,"Black");
		HX_STACK_LINE(691)
		Float Alpha = (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(691)
		{
			HX_STACK_LINE(691)
			Float Value1 = ((((int)1 - Cyan)) * (((int)1 - Black)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(691)
			{
				HX_STACK_LINE(691)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(691)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(691)
				hx::OrEq(this1,(int(((  (((Value2 > (int)255))) ? int((int)255) : int((  (((Value2 < (int)0))) ? int((int)0) : int(Value2) )) ))) << int((int)16)));
				HX_STACK_LINE(691)
				Value2;
			}
			HX_STACK_LINE(691)
			Value1;
		}
		HX_STACK_LINE(691)
		{
			HX_STACK_LINE(691)
			Float Value1 = ((((int)1 - Magenta)) * (((int)1 - Black)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(691)
			{
				HX_STACK_LINE(691)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(691)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(691)
				hx::OrEq(this1,(int(((  (((Value2 > (int)255))) ? int((int)255) : int((  (((Value2 < (int)0))) ? int((int)0) : int(Value2) )) ))) << int((int)8)));
				HX_STACK_LINE(691)
				Value2;
			}
			HX_STACK_LINE(691)
			Value1;
		}
		HX_STACK_LINE(691)
		{
			HX_STACK_LINE(691)
			Float Value1 = ((((int)1 - Value)) * (((int)1 - Black)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(691)
			{
				HX_STACK_LINE(691)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(691)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(691)
				if (((Value2 > (int)255))){
					HX_STACK_LINE(691)
					hx::OrEq(this1,(int)255);
				}
				else{
					HX_STACK_LINE(691)
					if (((Value2 < (int)0))){
						HX_STACK_LINE(691)
						hx::OrEq(this1,(int)0);
					}
					else{
						HX_STACK_LINE(691)
						hx::OrEq(this1,Value2);
					}
				}
				HX_STACK_LINE(691)
				Value2;
			}
			HX_STACK_LINE(691)
			Value1;
		}
		HX_STACK_LINE(691)
		{
			HX_STACK_LINE(691)
			{
				HX_STACK_LINE(691)
				int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(691)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(691)
				hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
				HX_STACK_LINE(691)
				Value1;
			}
			HX_STACK_LINE(691)
			Alpha;
		}
		HX_STACK_LINE(691)
		this1;
	}
	HX_STACK_LINE(692)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_yellow,return )

Float FlxColor_Impl__obj::set_black( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_black",0x6cb3e47d,"flixel.util._FlxColor.FlxColor_Impl_.set_black","flixel/util/FlxColor.hx",696,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(697)
	{
		HX_STACK_LINE(697)
		Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(697)
		Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(697)
		Float _g2 = ((int)1 - _g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(697)
		Float _g3 = (((int)1 - (Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255))) - _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(697)
		Float _g4 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(697)
		Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(697)
		Float Cyan = (Float(_g3) / Float(_g5));		HX_STACK_VAR(Cyan,"Cyan");
		HX_STACK_LINE(697)
		Float _g6 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(697)
		Float _g7 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(697)
		Float _g8 = ((int)1 - _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(697)
		Float _g9 = (((int)1 - (Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255))) - _g8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(697)
		Float _g10 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(697)
		Float _g11 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(697)
		Float Magenta = (Float(_g9) / Float(_g11));		HX_STACK_VAR(Magenta,"Magenta");
		HX_STACK_LINE(697)
		Float _g12 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(697)
		Float _g13 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(697)
		Float _g14 = ((int)1 - _g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(697)
		Float _g15 = (((int)1 - (Float(((int(this1) & int((int)255)))) / Float((int)255))) - _g14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(697)
		Float _g16 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(697)
		Float _g17 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g16);		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(697)
		Float Yellow = (Float(_g15) / Float(_g17));		HX_STACK_VAR(Yellow,"Yellow");
		HX_STACK_LINE(697)
		Float Alpha = (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(697)
		{
			HX_STACK_LINE(697)
			Float Value1 = ((((int)1 - Cyan)) * (((int)1 - Value)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(697)
			{
				HX_STACK_LINE(697)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(697)
				hx::AndEq(this1,(int)-16711681);
				HX_STACK_LINE(697)
				hx::OrEq(this1,(int(((  (((Value2 > (int)255))) ? int((int)255) : int((  (((Value2 < (int)0))) ? int((int)0) : int(Value2) )) ))) << int((int)16)));
				HX_STACK_LINE(697)
				Value2;
			}
			HX_STACK_LINE(697)
			Value1;
		}
		HX_STACK_LINE(697)
		{
			HX_STACK_LINE(697)
			Float Value1 = ((((int)1 - Magenta)) * (((int)1 - Value)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(697)
			{
				HX_STACK_LINE(697)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(697)
				hx::AndEq(this1,(int)-65281);
				HX_STACK_LINE(697)
				hx::OrEq(this1,(int(((  (((Value2 > (int)255))) ? int((int)255) : int((  (((Value2 < (int)0))) ? int((int)0) : int(Value2) )) ))) << int((int)8)));
				HX_STACK_LINE(697)
				Value2;
			}
			HX_STACK_LINE(697)
			Value1;
		}
		HX_STACK_LINE(697)
		{
			HX_STACK_LINE(697)
			Float Value1 = ((((int)1 - Yellow)) * (((int)1 - Value)));		HX_STACK_VAR(Value1,"Value1");
			HX_STACK_LINE(697)
			{
				HX_STACK_LINE(697)
				int Value2 = ::Math_obj::round((Value1 * (int)255));		HX_STACK_VAR(Value2,"Value2");
				HX_STACK_LINE(697)
				hx::AndEq(this1,(int)-256);
				HX_STACK_LINE(697)
				if (((Value2 > (int)255))){
					HX_STACK_LINE(697)
					hx::OrEq(this1,(int)255);
				}
				else{
					HX_STACK_LINE(697)
					if (((Value2 < (int)0))){
						HX_STACK_LINE(697)
						hx::OrEq(this1,(int)0);
					}
					else{
						HX_STACK_LINE(697)
						hx::OrEq(this1,Value2);
					}
				}
				HX_STACK_LINE(697)
				Value2;
			}
			HX_STACK_LINE(697)
			Value1;
		}
		HX_STACK_LINE(697)
		{
			HX_STACK_LINE(697)
			{
				HX_STACK_LINE(697)
				int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
				HX_STACK_LINE(697)
				hx::AndEq(this1,(int)16777215);
				HX_STACK_LINE(697)
				hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
				HX_STACK_LINE(697)
				Value1;
			}
			HX_STACK_LINE(697)
			Alpha;
		}
		HX_STACK_LINE(697)
		this1;
	}
	HX_STACK_LINE(698)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_black,return )

Float FlxColor_Impl__obj::get_hue( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_hue",0xab0a02ea,"flixel.util._FlxColor.FlxColor_Impl_.get_hue","flixel/util/FlxColor.hx",702,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(703)
	Float _g = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(703)
	Float _g1 = (_g * (((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)) - (Float(((int(this1) & int((int)255)))) / Float((int)255)))));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(703)
	Float hueRad = ::Math_obj::atan2(_g1,((((int)2 * ((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)))) - (Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255))) - (Float(((int(this1) & int((int)255)))) / Float((int)255))));		HX_STACK_VAR(hueRad,"hueRad");
	HX_STACK_LINE(704)
	Float hue = (int)0;		HX_STACK_VAR(hue,"hue");
	HX_STACK_LINE(705)
	if (((hueRad != (int)0))){
		HX_STACK_LINE(707)
		Float _g2 = ::Math_obj::sqrt((int)3);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(707)
		Float _g3 = (_g2 * (((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)) - (Float(((int(this1) & int((int)255)))) / Float((int)255)))));		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(707)
		Float _g4 = ::Math_obj::atan2(_g3,((((int)2 * ((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)))) - (Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255))) - (Float(((int(this1) & int((int)255)))) / Float((int)255))));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(707)
		Float _g5 = ((Float((int)180) / Float(::Math_obj::PI)) * _g4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(707)
		hue = _g5;
	}
	HX_STACK_LINE(710)
	if (((hue < (int)0))){
		HX_STACK_LINE(710)
		return (hue + (int)360);
	}
	else{
		HX_STACK_LINE(710)
		return hue;
	}
	HX_STACK_LINE(710)
	return 0.;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_hue,return )

Float FlxColor_Impl__obj::get_brightness( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_brightness",0x252b65df,"flixel.util._FlxColor.FlxColor_Impl_.get_brightness","flixel/util/FlxColor.hx",714,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(715)
	Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(715)
	return ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_brightness,return )

Float FlxColor_Impl__obj::get_saturation( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_saturation",0xb65babe0,"flixel.util._FlxColor.FlxColor_Impl_.get_saturation","flixel/util/FlxColor.hx",719,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(720)
	Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(720)
	Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(720)
	Float _g2 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(720)
	Float _g3 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(720)
	Float _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(720)
	Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(720)
	Float _g6 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(720)
	return (Float(_g4) / Float(_g6));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_saturation,return )

Float FlxColor_Impl__obj::get_lightness( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","get_lightness",0x5544981f,"flixel.util._FlxColor.FlxColor_Impl_.get_lightness","flixel/util/FlxColor.hx",724,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(725)
	Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(725)
	Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(725)
	Float _g2 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(725)
	Float _g3 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g2);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(725)
	Float _g4 = (_g1 + _g3);		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(725)
	return (Float(_g4) / Float((int)2));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,get_lightness,return )

Float FlxColor_Impl__obj::set_hue( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_hue",0x9e0b93f6,"flixel.util._FlxColor.FlxColor_Impl_.set_hue","flixel/util/FlxColor.hx",729,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(730)
	{
		HX_STACK_LINE(730)
		Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(730)
		Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(730)
		Float _g2 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(730)
		Float _g3 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(730)
		Float _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(730)
		Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(730)
		Float _g6 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(730)
		Float Saturation = (Float(_g4) / Float(_g6));		HX_STACK_VAR(Saturation,"Saturation");
		HX_STACK_LINE(730)
		Float _g7 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(730)
		Float Brightness = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g7);		HX_STACK_VAR(Brightness,"Brightness");
		HX_STACK_LINE(730)
		Float Alpha = (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(730)
		Float chroma = (Brightness * Saturation);		HX_STACK_VAR(chroma,"chroma");
		HX_STACK_LINE(730)
		Float match = (Brightness - chroma);		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(730)
		{
			HX_STACK_LINE(730)
			Float Hue = Value;		HX_STACK_VAR(Hue,"Hue");
			HX_STACK_LINE(730)
			Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
			HX_STACK_LINE(730)
			hx::ModEq(Hue,(int)360);
			HX_STACK_LINE(730)
			Float hueD = (Float(Hue) / Float((int)60));		HX_STACK_VAR(hueD,"hueD");
			HX_STACK_LINE(730)
			Float _g8 = ::Math_obj::abs((hx::Mod(hueD,(int)2) - (int)1));		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(730)
			Float _g9 = ((int)1 - _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(730)
			Float _g10 = (Chroma * _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(730)
			Float mid = (_g10 + match);		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(730)
			hx::AddEq(Chroma,match);
			HX_STACK_LINE(730)
			{
				HX_STACK_LINE(730)
				int _g11 = ::Std_obj::_int(hueD);		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(730)
				switch( (int)(_g11)){
					case (int)0: {
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Chroma;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								mid;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(730)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(730)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(730)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(730)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(730)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								match;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Alpha;
							}
							HX_STACK_LINE(730)
							this1;
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								mid;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Chroma;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(730)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(730)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(730)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(730)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(730)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								match;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Alpha;
							}
							HX_STACK_LINE(730)
							this1;
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								match;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Chroma;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(730)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(730)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(730)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(730)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(730)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								mid;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Alpha;
							}
							HX_STACK_LINE(730)
							this1;
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								match;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								mid;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(730)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(730)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(730)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(730)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(730)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Chroma;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Alpha;
							}
							HX_STACK_LINE(730)
							this1;
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								mid;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								match;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(730)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(730)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(730)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(730)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(730)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Chroma;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Alpha;
							}
							HX_STACK_LINE(730)
							this1;
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(730)
						{
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Chroma;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								match;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(730)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(730)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(730)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(730)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(730)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								mid;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								{
									HX_STACK_LINE(730)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(730)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(730)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(730)
									Value1;
								}
								HX_STACK_LINE(730)
								Alpha;
							}
							HX_STACK_LINE(730)
							this1;
						}
					}
					;break;
				}
			}
			HX_STACK_LINE(730)
			this1;
		}
	}
	HX_STACK_LINE(731)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_hue,return )

Float FlxColor_Impl__obj::set_saturation( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_saturation",0xd67b9454,"flixel.util._FlxColor.FlxColor_Impl_.set_saturation","flixel/util/FlxColor.hx",735,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(736)
	{
		HX_STACK_LINE(736)
		Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);		HX_STACK_VAR(Hue,"Hue");
		HX_STACK_LINE(736)
		Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(736)
		Float Brightness = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(Brightness,"Brightness");
		HX_STACK_LINE(736)
		Float Alpha = (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(736)
		Float chroma = (Brightness * Value);		HX_STACK_VAR(chroma,"chroma");
		HX_STACK_LINE(736)
		Float match = (Brightness - chroma);		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(736)
		{
			HX_STACK_LINE(736)
			Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
			HX_STACK_LINE(736)
			Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
			HX_STACK_LINE(736)
			hx::ModEq(Hue1,(int)360);
			HX_STACK_LINE(736)
			Float hueD = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(hueD,"hueD");
			HX_STACK_LINE(736)
			Float _g1 = ::Math_obj::abs((hx::Mod(hueD,(int)2) - (int)1));		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(736)
			Float _g2 = ((int)1 - _g1);		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(736)
			Float _g3 = (Chroma * _g2);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(736)
			Float mid = (_g3 + match);		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(736)
			hx::AddEq(Chroma,match);
			HX_STACK_LINE(736)
			{
				HX_STACK_LINE(736)
				int _g4 = ::Std_obj::_int(hueD);		HX_STACK_VAR(_g4,"_g4");
				HX_STACK_LINE(736)
				switch( (int)(_g4)){
					case (int)0: {
						HX_STACK_LINE(736)
						{
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Chroma;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								mid;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(736)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(736)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(736)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(736)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(736)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								match;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Alpha;
							}
							HX_STACK_LINE(736)
							this1;
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(736)
						{
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								mid;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Chroma;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(736)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(736)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(736)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(736)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(736)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								match;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Alpha;
							}
							HX_STACK_LINE(736)
							this1;
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(736)
						{
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								match;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Chroma;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(736)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(736)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(736)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(736)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(736)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								mid;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Alpha;
							}
							HX_STACK_LINE(736)
							this1;
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(736)
						{
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								match;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								mid;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(736)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(736)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(736)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(736)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(736)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Chroma;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Alpha;
							}
							HX_STACK_LINE(736)
							this1;
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(736)
						{
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								mid;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								match;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(736)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(736)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(736)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(736)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(736)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Chroma;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Alpha;
							}
							HX_STACK_LINE(736)
							this1;
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(736)
						{
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Chroma;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								match;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(736)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(736)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(736)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(736)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(736)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								mid;
							}
							HX_STACK_LINE(736)
							{
								HX_STACK_LINE(736)
								{
									HX_STACK_LINE(736)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(736)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(736)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(736)
									Value1;
								}
								HX_STACK_LINE(736)
								Alpha;
							}
							HX_STACK_LINE(736)
							this1;
						}
					}
					;break;
				}
			}
			HX_STACK_LINE(736)
			this1;
		}
	}
	HX_STACK_LINE(737)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_saturation,return )

Float FlxColor_Impl__obj::set_brightness( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_brightness",0x454b4e53,"flixel.util._FlxColor.FlxColor_Impl_.set_brightness","flixel/util/FlxColor.hx",741,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(742)
	{
		HX_STACK_LINE(742)
		Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);		HX_STACK_VAR(Hue,"Hue");
		HX_STACK_LINE(742)
		Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(742)
		Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(742)
		Float _g2 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(742)
		Float _g3 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(742)
		Float _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(742)
		Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(742)
		Float _g6 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(742)
		Float Saturation = (Float(_g4) / Float(_g6));		HX_STACK_VAR(Saturation,"Saturation");
		HX_STACK_LINE(742)
		Float Alpha = (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(742)
		Float chroma = (Value * Saturation);		HX_STACK_VAR(chroma,"chroma");
		HX_STACK_LINE(742)
		Float match = (Value - chroma);		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(742)
		{
			HX_STACK_LINE(742)
			Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
			HX_STACK_LINE(742)
			Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
			HX_STACK_LINE(742)
			hx::ModEq(Hue1,(int)360);
			HX_STACK_LINE(742)
			Float hueD = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(hueD,"hueD");
			HX_STACK_LINE(742)
			Float _g7 = ::Math_obj::abs((hx::Mod(hueD,(int)2) - (int)1));		HX_STACK_VAR(_g7,"_g7");
			HX_STACK_LINE(742)
			Float _g8 = ((int)1 - _g7);		HX_STACK_VAR(_g8,"_g8");
			HX_STACK_LINE(742)
			Float _g9 = (Chroma * _g8);		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(742)
			Float mid = (_g9 + match);		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(742)
			hx::AddEq(Chroma,match);
			HX_STACK_LINE(742)
			{
				HX_STACK_LINE(742)
				int _g10 = ::Std_obj::_int(hueD);		HX_STACK_VAR(_g10,"_g10");
				HX_STACK_LINE(742)
				switch( (int)(_g10)){
					case (int)0: {
						HX_STACK_LINE(742)
						{
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Chroma;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								mid;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(742)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(742)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(742)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(742)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(742)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								match;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Alpha;
							}
							HX_STACK_LINE(742)
							this1;
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(742)
						{
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								mid;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Chroma;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(742)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(742)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(742)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(742)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(742)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								match;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Alpha;
							}
							HX_STACK_LINE(742)
							this1;
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(742)
						{
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								match;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Chroma;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(742)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(742)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(742)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(742)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(742)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								mid;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Alpha;
							}
							HX_STACK_LINE(742)
							this1;
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(742)
						{
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								match;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								mid;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(742)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(742)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(742)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(742)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(742)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Chroma;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Alpha;
							}
							HX_STACK_LINE(742)
							this1;
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(742)
						{
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								mid;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								match;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(742)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(742)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(742)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(742)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(742)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Chroma;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Alpha;
							}
							HX_STACK_LINE(742)
							this1;
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(742)
						{
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Chroma;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								match;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(742)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(742)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(742)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(742)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(742)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								mid;
							}
							HX_STACK_LINE(742)
							{
								HX_STACK_LINE(742)
								{
									HX_STACK_LINE(742)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(742)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(742)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(742)
									Value1;
								}
								HX_STACK_LINE(742)
								Alpha;
							}
							HX_STACK_LINE(742)
							this1;
						}
					}
					;break;
				}
			}
			HX_STACK_LINE(742)
			this1;
		}
	}
	HX_STACK_LINE(743)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_brightness,return )

Float FlxColor_Impl__obj::set_lightness( int this1,Float Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","set_lightness",0x9a4a7a2b,"flixel.util._FlxColor.FlxColor_Impl_.set_lightness","flixel/util/FlxColor.hx",747,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(748)
	{
		HX_STACK_LINE(748)
		Float Hue = ::flixel::util::_FlxColor::FlxColor_Impl__obj::get_hue(this1);		HX_STACK_VAR(Hue,"Hue");
		HX_STACK_LINE(748)
		Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(748)
		Float _g1 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(748)
		Float _g2 = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(748)
		Float _g3 = ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(748)
		Float _g4 = (_g1 - _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(748)
		Float _g5 = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(748)
		Float _g6 = ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(748)
		Float Saturation = (Float(_g4) / Float(_g6));		HX_STACK_VAR(Saturation,"Saturation");
		HX_STACK_LINE(748)
		Float Alpha = (Float(((int((int(this1) >> int((int)24))) & int((int)255)))) / Float((int)255));		HX_STACK_VAR(Alpha,"Alpha");
		HX_STACK_LINE(748)
		Float _g7 = ::Math_obj::abs((((int)2 * Value) - (int)1));		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(748)
		Float _g8 = ((int)1 - _g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(748)
		Float chroma = (_g8 * Saturation);		HX_STACK_VAR(chroma,"chroma");
		HX_STACK_LINE(748)
		Float match = (Value - (Float(chroma) / Float((int)2)));		HX_STACK_VAR(match,"match");
		HX_STACK_LINE(748)
		{
			HX_STACK_LINE(748)
			Float Hue1 = Hue;		HX_STACK_VAR(Hue1,"Hue1");
			HX_STACK_LINE(748)
			Float Chroma = chroma;		HX_STACK_VAR(Chroma,"Chroma");
			HX_STACK_LINE(748)
			hx::ModEq(Hue1,(int)360);
			HX_STACK_LINE(748)
			Float hueD = (Float(Hue1) / Float((int)60));		HX_STACK_VAR(hueD,"hueD");
			HX_STACK_LINE(748)
			Float _g9 = ::Math_obj::abs((hx::Mod(hueD,(int)2) - (int)1));		HX_STACK_VAR(_g9,"_g9");
			HX_STACK_LINE(748)
			Float _g10 = ((int)1 - _g9);		HX_STACK_VAR(_g10,"_g10");
			HX_STACK_LINE(748)
			Float _g11 = (Chroma * _g10);		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(748)
			Float mid = (_g11 + match);		HX_STACK_VAR(mid,"mid");
			HX_STACK_LINE(748)
			hx::AddEq(Chroma,match);
			HX_STACK_LINE(748)
			{
				HX_STACK_LINE(748)
				int _g12 = ::Std_obj::_int(hueD);		HX_STACK_VAR(_g12,"_g12");
				HX_STACK_LINE(748)
				switch( (int)(_g12)){
					case (int)0: {
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Chroma;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								mid;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(748)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(748)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(748)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(748)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(748)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								match;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Alpha;
							}
							HX_STACK_LINE(748)
							this1;
						}
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								mid;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Chroma;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(748)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(748)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(748)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(748)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(748)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								match;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Alpha;
							}
							HX_STACK_LINE(748)
							this1;
						}
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								match;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Chroma;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(748)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(748)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(748)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(748)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(748)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								mid;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Alpha;
							}
							HX_STACK_LINE(748)
							this1;
						}
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								match;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								mid;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(748)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(748)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(748)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(748)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(748)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Chroma;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Alpha;
							}
							HX_STACK_LINE(748)
							this1;
						}
					}
					;break;
					case (int)4: {
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								mid;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								match;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(748)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(748)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(748)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(748)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(748)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Chroma;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Alpha;
							}
							HX_STACK_LINE(748)
							this1;
						}
					}
					;break;
					case (int)5: {
						HX_STACK_LINE(748)
						{
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Chroma * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-16711681);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)16)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Chroma;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((match * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-65281);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)8)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								match;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((mid * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)-256);
									HX_STACK_LINE(748)
									if (((Value1 > (int)255))){
										HX_STACK_LINE(748)
										hx::OrEq(this1,(int)255);
									}
									else{
										HX_STACK_LINE(748)
										if (((Value1 < (int)0))){
											HX_STACK_LINE(748)
											hx::OrEq(this1,(int)0);
										}
										else{
											HX_STACK_LINE(748)
											hx::OrEq(this1,Value1);
										}
									}
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								mid;
							}
							HX_STACK_LINE(748)
							{
								HX_STACK_LINE(748)
								{
									HX_STACK_LINE(748)
									int Value1 = ::Math_obj::round((Alpha * (int)255));		HX_STACK_VAR(Value1,"Value1");
									HX_STACK_LINE(748)
									hx::AndEq(this1,(int)16777215);
									HX_STACK_LINE(748)
									hx::OrEq(this1,(int(((  (((Value1 > (int)255))) ? int((int)255) : int((  (((Value1 < (int)0))) ? int((int)0) : int(Value1) )) ))) << int((int)24)));
									HX_STACK_LINE(748)
									Value1;
								}
								HX_STACK_LINE(748)
								Alpha;
							}
							HX_STACK_LINE(748)
							this1;
						}
					}
					;break;
				}
			}
			HX_STACK_LINE(748)
			this1;
		}
	}
	HX_STACK_LINE(749)
	return Value;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,set_lightness,return )

Float FlxColor_Impl__obj::maxColor( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","maxColor",0x2d604224,"flixel.util._FlxColor.FlxColor_Impl_.maxColor","flixel/util/FlxColor.hx",753,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(754)
	Float _g = ::Math_obj::max((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(754)
	return ::Math_obj::max((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,maxColor,return )

Float FlxColor_Impl__obj::minColor( int this1){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","minColor",0x7a7a5c76,"flixel.util._FlxColor.FlxColor_Impl_.minColor","flixel/util/FlxColor.hx",758,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_LINE(759)
	Float _g = ::Math_obj::min((Float(((int((int(this1) >> int((int)8))) & int((int)255)))) / Float((int)255)),(Float(((int(this1) & int((int)255)))) / Float((int)255)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(759)
	return ::Math_obj::min((Float(((int((int(this1) >> int((int)16))) & int((int)255)))) / Float((int)255)),_g);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxColor_Impl__obj,minColor,return )

int FlxColor_Impl__obj::boundChannel( int this1,int Value){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","boundChannel",0x855280aa,"flixel.util._FlxColor.FlxColor_Impl_.boundChannel","flixel/util/FlxColor.hx",764,0x9335c333)
	HX_STACK_ARG(this1,"this1")
	HX_STACK_ARG(Value,"Value")
	HX_STACK_LINE(764)
	if (((Value > (int)255))){
		HX_STACK_LINE(764)
		return (int)255;
	}
	else{
		HX_STACK_LINE(764)
		if (((Value < (int)0))){
			HX_STACK_LINE(764)
			return (int)0;
		}
		else{
			HX_STACK_LINE(764)
			return Value;
		}
	}
	HX_STACK_LINE(764)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,boundChannel,return )

bool FlxColor_Impl__obj::equal( Dynamic lhs,Dynamic rhs){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","equal",0xb97b8c8f,"flixel.util._FlxColor.FlxColor_Impl_.equal","flixel/util/FlxColor.hx",771,0x9335c333)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(771)
	return (lhs == rhs);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,equal,return )

bool FlxColor_Impl__obj::notEqual( Dynamic lhs,Dynamic rhs){
	HX_STACK_FRAME("flixel.util._FlxColor.FlxColor_Impl_","notEqual",0x3b781fa6,"flixel.util._FlxColor.FlxColor_Impl_.notEqual","flixel/util/FlxColor.hx",778,0x9335c333)
	HX_STACK_ARG(lhs,"lhs")
	HX_STACK_ARG(rhs,"rhs")
	HX_STACK_LINE(778)
	return (lhs != rhs);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxColor_Impl__obj,notEqual,return )


FlxColor_Impl__obj::FlxColor_Impl__obj()
{
}

Dynamic FlxColor_Impl__obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return add_dyn(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { return _new_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"equal") ) { return equal_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"setRGB") ) { return setRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"setHSB") ) { return setHSB_dyn(); }
		if (HX_FIELD_EQ(inName,"setHSL") ) { return setHSL_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { return fromInt_dyn(); }
		if (HX_FIELD_EQ(inName,"fromRGB") ) { return fromRGB_dyn(); }
		if (HX_FIELD_EQ(inName,"fromHSB") ) { return fromHSB_dyn(); }
		if (HX_FIELD_EQ(inName,"fromHSL") ) { return fromHSL_dyn(); }
		if (HX_FIELD_EQ(inName,"to24Bit") ) { return to24Bit_dyn(); }
		if (HX_FIELD_EQ(inName,"setCMYK") ) { return setCMYK_dyn(); }
		if (HX_FIELD_EQ(inName,"get_red") ) { return get_red_dyn(); }
		if (HX_FIELD_EQ(inName,"set_red") ) { return set_red_dyn(); }
		if (HX_FIELD_EQ(inName,"get_hue") ) { return get_hue_dyn(); }
		if (HX_FIELD_EQ(inName,"set_hue") ) { return set_hue_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromCMYK") ) { return fromCMYK_dyn(); }
		if (HX_FIELD_EQ(inName,"gradient") ) { return gradient_dyn(); }
		if (HX_FIELD_EQ(inName,"multiply") ) { return multiply_dyn(); }
		if (HX_FIELD_EQ(inName,"subtract") ) { return subtract_dyn(); }
		if (HX_FIELD_EQ(inName,"get_blue") ) { return get_blue_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blue") ) { return set_blue_dyn(); }
		if (HX_FIELD_EQ(inName,"get_cyan") ) { return get_cyan_dyn(); }
		if (HX_FIELD_EQ(inName,"set_cyan") ) { return set_cyan_dyn(); }
		if (HX_FIELD_EQ(inName,"maxColor") ) { return maxColor_dyn(); }
		if (HX_FIELD_EQ(inName,"minColor") ) { return minColor_dyn(); }
		if (HX_FIELD_EQ(inName,"notEqual") ) { return notEqual_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_green") ) { return get_green_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alpha") ) { return get_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"set_green") ) { return set_green_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alpha") ) { return set_alpha_dyn(); }
		if (HX_FIELD_EQ(inName,"get_black") ) { return get_black_dyn(); }
		if (HX_FIELD_EQ(inName,"set_black") ) { return set_black_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { return fromString_dyn(); }
		if (HX_FIELD_EQ(inName,"get_yellow") ) { return get_yellow_dyn(); }
		if (HX_FIELD_EQ(inName,"set_yellow") ) { return set_yellow_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"interpolate") ) { return interpolate_dyn(); }
		if (HX_FIELD_EQ(inName,"toHexString") ) { return toHexString_dyn(); }
		if (HX_FIELD_EQ(inName,"toWebString") ) { return toWebString_dyn(); }
		if (HX_FIELD_EQ(inName,"getDarkened") ) { return getDarkened_dyn(); }
		if (HX_FIELD_EQ(inName,"getInverted") ) { return getInverted_dyn(); }
		if (HX_FIELD_EQ(inName,"setRGBFloat") ) { return setRGBFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_magenta") ) { return get_magenta_dyn(); }
		if (HX_FIELD_EQ(inName,"set_magenta") ) { return set_magenta_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"fromRGBFloat") ) { return fromRGBFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorInfo") ) { return getColorInfo_dyn(); }
		if (HX_FIELD_EQ(inName,"getLightened") ) { return getLightened_dyn(); }
		if (HX_FIELD_EQ(inName,"get_redFloat") ) { return get_redFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_redFloat") ) { return set_redFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"boundChannel") ) { return boundChannel_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"get_blueFloat") ) { return get_blueFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_blueFloat") ) { return set_blueFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_lightness") ) { return get_lightness_dyn(); }
		if (HX_FIELD_EQ(inName,"set_lightness") ) { return set_lightness_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"get_greenFloat") ) { return get_greenFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_alphaFloat") ) { return get_alphaFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_greenFloat") ) { return set_greenFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"set_alphaFloat") ) { return set_alphaFloat_dyn(); }
		if (HX_FIELD_EQ(inName,"get_brightness") ) { return get_brightness_dyn(); }
		if (HX_FIELD_EQ(inName,"get_saturation") ) { return get_saturation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_saturation") ) { return set_saturation_dyn(); }
		if (HX_FIELD_EQ(inName,"set_brightness") ) { return set_brightness_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getHSBColorWheel") ) { return getHSBColorWheel_dyn(); }
		if (HX_FIELD_EQ(inName,"setHSChromaMatch") ) { return setHSChromaMatch_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getTriadicHarmony") ) { return getTriadicHarmony_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getAnalogousHarmony") ) { return getAnalogousHarmony_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getComplementHarmony") ) { return getComplementHarmony_dyn(); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"getSplitComplementHarmony") ) { return getSplitComplementHarmony_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxColor_Impl__obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxColor_Impl__obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("TRANSPARENT"),
	HX_CSTRING("WHITE"),
	HX_CSTRING("GRAY"),
	HX_CSTRING("BLACK"),
	HX_CSTRING("GREEN"),
	HX_CSTRING("LIME"),
	HX_CSTRING("YELLOW"),
	HX_CSTRING("ORANGE"),
	HX_CSTRING("RED"),
	HX_CSTRING("PURPLE"),
	HX_CSTRING("BLUE"),
	HX_CSTRING("BROWN"),
	HX_CSTRING("PINK"),
	HX_CSTRING("MAGENTA"),
	HX_CSTRING("CYAN"),
	HX_CSTRING("colorLookup"),
	HX_CSTRING("COLOR_REGEX"),
	HX_CSTRING("fromInt"),
	HX_CSTRING("fromRGB"),
	HX_CSTRING("fromRGBFloat"),
	HX_CSTRING("fromCMYK"),
	HX_CSTRING("fromHSB"),
	HX_CSTRING("fromHSL"),
	HX_CSTRING("fromString"),
	HX_CSTRING("getHSBColorWheel"),
	HX_CSTRING("interpolate"),
	HX_CSTRING("gradient"),
	HX_CSTRING("multiply"),
	HX_CSTRING("add"),
	HX_CSTRING("subtract"),
	HX_CSTRING("getComplementHarmony"),
	HX_CSTRING("getAnalogousHarmony"),
	HX_CSTRING("getSplitComplementHarmony"),
	HX_CSTRING("getTriadicHarmony"),
	HX_CSTRING("to24Bit"),
	HX_CSTRING("toHexString"),
	HX_CSTRING("toWebString"),
	HX_CSTRING("getColorInfo"),
	HX_CSTRING("getDarkened"),
	HX_CSTRING("getLightened"),
	HX_CSTRING("getInverted"),
	HX_CSTRING("setRGB"),
	HX_CSTRING("setRGBFloat"),
	HX_CSTRING("setCMYK"),
	HX_CSTRING("setHSB"),
	HX_CSTRING("setHSL"),
	HX_CSTRING("setHSChromaMatch"),
	HX_CSTRING("_new"),
	HX_CSTRING("get_red"),
	HX_CSTRING("get_green"),
	HX_CSTRING("get_blue"),
	HX_CSTRING("get_alpha"),
	HX_CSTRING("get_redFloat"),
	HX_CSTRING("get_greenFloat"),
	HX_CSTRING("get_blueFloat"),
	HX_CSTRING("get_alphaFloat"),
	HX_CSTRING("set_red"),
	HX_CSTRING("set_green"),
	HX_CSTRING("set_blue"),
	HX_CSTRING("set_alpha"),
	HX_CSTRING("set_redFloat"),
	HX_CSTRING("set_greenFloat"),
	HX_CSTRING("set_blueFloat"),
	HX_CSTRING("set_alphaFloat"),
	HX_CSTRING("get_cyan"),
	HX_CSTRING("get_magenta"),
	HX_CSTRING("get_yellow"),
	HX_CSTRING("get_black"),
	HX_CSTRING("set_cyan"),
	HX_CSTRING("set_magenta"),
	HX_CSTRING("set_yellow"),
	HX_CSTRING("set_black"),
	HX_CSTRING("get_hue"),
	HX_CSTRING("get_brightness"),
	HX_CSTRING("get_saturation"),
	HX_CSTRING("get_lightness"),
	HX_CSTRING("set_hue"),
	HX_CSTRING("set_saturation"),
	HX_CSTRING("set_brightness"),
	HX_CSTRING("set_lightness"),
	HX_CSTRING("maxColor"),
	HX_CSTRING("minColor"),
	HX_CSTRING("boundChannel"),
	HX_CSTRING("equal"),
	HX_CSTRING("notEqual"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::TRANSPARENT,"TRANSPARENT");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::WHITE,"WHITE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::GRAY,"GRAY");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BLACK,"BLACK");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::GREEN,"GREEN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::LIME,"LIME");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::YELLOW,"YELLOW");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::ORANGE,"ORANGE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::RED,"RED");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::PURPLE,"PURPLE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BLUE,"BLUE");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::BROWN,"BROWN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::PINK,"PINK");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::MAGENTA,"MAGENTA");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::CYAN,"CYAN");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::colorLookup,"colorLookup");
	HX_MARK_MEMBER_NAME(FlxColor_Impl__obj::COLOR_REGEX,"COLOR_REGEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::TRANSPARENT,"TRANSPARENT");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::WHITE,"WHITE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::GRAY,"GRAY");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BLACK,"BLACK");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::GREEN,"GREEN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::LIME,"LIME");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::YELLOW,"YELLOW");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::ORANGE,"ORANGE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::RED,"RED");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::PURPLE,"PURPLE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BLUE,"BLUE");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::BROWN,"BROWN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::PINK,"PINK");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::MAGENTA,"MAGENTA");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::CYAN,"CYAN");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::colorLookup,"colorLookup");
	HX_VISIT_MEMBER_NAME(FlxColor_Impl__obj::COLOR_REGEX,"COLOR_REGEX");
};

#endif

Class FlxColor_Impl__obj::__mClass;

void FlxColor_Impl__obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.util._FlxColor.FlxColor_Impl_"), hx::TCanCast< FlxColor_Impl__obj> ,sStaticFields,sMemberFields,
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

void FlxColor_Impl__obj::__boot()
{
	TRANSPARENT= (int)0;
	WHITE= (int)-1;
	GRAY= (int)-8355712;
	BLACK= (int)-16777216;
	GREEN= (int)-16744448;
	LIME= (int)-16711936;
	YELLOW= (int)-256;
	ORANGE= (int)-23296;
	RED= (int)-65536;
	PURPLE= (int)-8388480;
	BLUE= (int)-16776961;
	BROWN= (int)-7650029;
	PINK= (int)-16181;
	MAGENTA= (int)-65281;
	CYAN= (int)-16711681;
struct _Function_0_1{
	inline static ::haxe::ds::StringMap Block( ){
		HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/system/macros/FlxMacroUtil.hx",52,0x8cc0f087)
		{
			HX_STACK_LINE(52)
			::haxe::ds::StringMap _g = ::haxe::ds::StringMap_obj::__new();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("TRANSPARENT"),(int)0);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("WHITE"),(int)-1);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("GRAY"),(int)-8355712);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("BLACK"),(int)-16777216);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("GREEN"),(int)-16744448);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("LIME"),(int)-16711936);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("YELLOW"),(int)-256);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("ORANGE"),(int)-23296);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("RED"),(int)-65536);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("PURPLE"),(int)-8388480);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("BLUE"),(int)-16776961);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("BROWN"),(int)-7650029);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("PINK"),(int)-16181);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("MAGENTA"),(int)-65281);
			HX_STACK_LINE(52)
			_g->set(HX_CSTRING("CYAN"),(int)-16711681);
			HX_STACK_LINE(52)
			return _g;
		}
		return null();
	}
};
	colorLookup= _Function_0_1::Block();
	COLOR_REGEX= ::EReg_obj::__new(HX_CSTRING("^(0x|#)(([A-F0-9]{2}){3,4})$"),HX_CSTRING("i"));
}

} // end namespace flixel
} // end namespace util
} // end namespace _FlxColor
