#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
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
#ifndef INCLUDED_openfl__v2_display_BitmapData
#include <openfl/_v2/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__v2_display_BlendMode
#include <openfl/_v2/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_ColorTransform
#include <openfl/_v2/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Matrix
#include <openfl/_v2/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Point
#include <openfl/_v2/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__v2_geom_Rectangle
#include <openfl/_v2/geom/Rectangle.h>
#endif
namespace flixel{
namespace graphics{
namespace frames{

Void FlxFrame_obj::__construct(::flixel::graphics::FlxGraphic parent)
{
HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","new",0x06ad24e4,"flixel.graphics.frames.FlxFrame.new","flixel/graphics/frames/FlxFrame.hx",20,0x6c7f608b)
HX_STACK_THIS(this)
HX_STACK_ARG(parent,"parent")
{
	HX_STACK_LINE(44)
	this->tileID = (int)-1;
	HX_STACK_LINE(82)
	this->parent = parent;
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
	this->sourceSize = _g;
	HX_STACK_LINE(85)
	::flixel::math::FlxPoint _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(85)
	{
		HX_STACK_LINE(85)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(85)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(85)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(85)
		point->_inPool = false;
		HX_STACK_LINE(85)
		_g1 = point;
	}
	HX_STACK_LINE(85)
	this->offset = _g1;
	HX_STACK_LINE(86)
	::flixel::math::FlxPoint _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(86)
	{
		HX_STACK_LINE(86)
		Float X = (int)0;		HX_STACK_VAR(X,"X");
		HX_STACK_LINE(86)
		Float Y = (int)0;		HX_STACK_VAR(Y,"Y");
		HX_STACK_LINE(86)
		::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,Y);		HX_STACK_VAR(point,"point");
		HX_STACK_LINE(86)
		point->_inPool = false;
		HX_STACK_LINE(86)
		_g2 = point;
	}
	HX_STACK_LINE(86)
	this->center = _g2;
	HX_STACK_LINE(88)
	this->type = (int)0;
	HX_STACK_LINE(89)
	this->angle = (int)0;
}
;
	return null();
}

//FlxFrame_obj::~FlxFrame_obj() { }

Dynamic FlxFrame_obj::__CreateEmpty() { return  new FlxFrame_obj; }
hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__new(::flixel::graphics::FlxGraphic parent)
{  hx::ObjectPtr< FlxFrame_obj > result = new FlxFrame_obj();
	result->__construct(parent);
	return result;}

Dynamic FlxFrame_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxFrame_obj > result = new FlxFrame_obj();
	result->__construct(inArgs[0]);
	return result;}

hx::Object *FlxFrame_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::flixel::util::IFlxDestroyable_obj)) return operator ::flixel::util::IFlxDestroyable_obj *();
	return super::__ToInterface(inType);
}

::flixel::math::FlxMatrix FlxFrame_obj::prepareFrameMatrix( ::flixel::math::FlxMatrix mat){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","prepareFrameMatrix",0xeaa9d803,"flixel.graphics.frames.FlxFrame.prepareFrameMatrix","flixel/graphics/frames/FlxFrame.hx",101,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mat,"mat")
	HX_STACK_LINE(101)
	return mat;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,prepareFrameMatrix,return )

::openfl::_v2::display::BitmapData FlxFrame_obj::paintOnBitmap( ::openfl::_v2::display::BitmapData bmd){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","paintOnBitmap",0x6640e9b0,"flixel.graphics.frames.FlxFrame.paintOnBitmap","flixel/graphics/frames/FlxFrame.hx",111,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_ARG(bmd,"bmd")
	HX_STACK_LINE(112)
	::openfl::_v2::display::BitmapData result = null();		HX_STACK_VAR(result,"result");
	struct _Function_1_1{
		inline static bool Block( hx::ObjectPtr< ::flixel::graphics::frames::FlxFrame_obj > __this,::openfl::_v2::display::BitmapData &bmd){
			HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxFrame.hx",114,0x6c7f608b)
			{
				HX_STACK_LINE(114)
				int _g = bmd->get_width();		HX_STACK_VAR(_g,"_g");
				struct _Function_2_1{
					inline static bool Block( hx::ObjectPtr< ::flixel::graphics::frames::FlxFrame_obj > __this,::openfl::_v2::display::BitmapData &bmd){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","flixel/graphics/frames/FlxFrame.hx",114,0x6c7f608b)
						{
							HX_STACK_LINE(114)
							int _g1 = bmd->get_height();		HX_STACK_VAR(_g1,"_g1");
							HX_STACK_LINE(114)
							return (_g1 == __this->sourceSize->y);
						}
						return null();
					}
				};
				HX_STACK_LINE(114)
				return (  (((_g == __this->sourceSize->x))) ? bool(_Function_2_1::Block(__this,bmd)) : bool(false) );
			}
			return null();
		}
	};
	HX_STACK_LINE(114)
	if (((  (((bmd != null()))) ? bool(_Function_1_1::Block(this,bmd)) : bool(false) ))){
		HX_STACK_LINE(116)
		result = bmd;
		HX_STACK_LINE(118)
		int w = bmd->get_width();		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(119)
		int h = bmd->get_height();		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(121)
		if (((bool((w > this->frame->width)) || bool((h > this->frame->height))))){
			HX_STACK_LINE(123)
			::openfl::_v2::geom::Rectangle rect = ::flixel::math::FlxRect_obj::rect;		HX_STACK_VAR(rect,"rect");
			HX_STACK_LINE(124)
			rect->setTo((int)0,(int)0,w,h);
			HX_STACK_LINE(125)
			bmd->fillRect(rect,(int)0);
		}
	}
	else{
		HX_STACK_LINE(128)
		if (((bmd != null()))){
			HX_STACK_LINE(130)
			bmd->dispose();
		}
	}
	HX_STACK_LINE(133)
	if (((result == null()))){
		HX_STACK_LINE(135)
		int _g2 = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(135)
		int _g3 = ::Std_obj::_int(this->sourceSize->y);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(135)
		::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::display::BitmapData_obj::__new(_g2,_g3,true,(int)0,null());		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(135)
		result = _g4;
	}
	HX_STACK_LINE(138)
	{
		HX_STACK_LINE(138)
		::flixel::math::FlxPoint _this = this->offset;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(138)
		::openfl::_v2::geom::Point FlashPoint = ::flixel::math::FlxPoint_obj::point;		HX_STACK_VAR(FlashPoint,"FlashPoint");
		HX_STACK_LINE(138)
		if (((FlashPoint == null()))){
			HX_STACK_LINE(138)
			::openfl::_v2::geom::Point _g5 = ::openfl::_v2::geom::Point_obj::__new(null(),null());		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(138)
			FlashPoint = _g5;
		}
		HX_STACK_LINE(138)
		FlashPoint->x = _this->x;
		HX_STACK_LINE(138)
		FlashPoint->y = _this->y;
		HX_STACK_LINE(138)
		FlashPoint;
	}
	HX_STACK_LINE(139)
	::openfl::_v2::geom::Rectangle _g7;		HX_STACK_VAR(_g7,"_g7");
	HX_STACK_LINE(139)
	{
		HX_STACK_LINE(139)
		::flixel::math::FlxRect _this = this->frame;		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(139)
		::openfl::_v2::geom::Rectangle FlashRect = ::flixel::math::FlxRect_obj::rect;		HX_STACK_VAR(FlashRect,"FlashRect");
		HX_STACK_LINE(139)
		if (((FlashRect == null()))){
			HX_STACK_LINE(139)
			::openfl::_v2::geom::Rectangle _g6 = ::openfl::_v2::geom::Rectangle_obj::__new(null(),null(),null(),null());		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(139)
			FlashRect = _g6;
		}
		HX_STACK_LINE(139)
		FlashRect->x = _this->x;
		HX_STACK_LINE(139)
		FlashRect->y = _this->y;
		HX_STACK_LINE(139)
		FlashRect->width = _this->width;
		HX_STACK_LINE(139)
		FlashRect->height = _this->height;
		HX_STACK_LINE(139)
		_g7 = FlashRect;
	}
	HX_STACK_LINE(139)
	result->copyPixels(this->parent->bitmap,_g7,::flixel::math::FlxPoint_obj::point,null(),null(),null());
	HX_STACK_LINE(140)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,paintOnBitmap,return )

::openfl::_v2::display::BitmapData FlxFrame_obj::getBitmap( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","getBitmap",0xb88428a9,"flixel.graphics.frames.FlxFrame.getBitmap","flixel/graphics/frames/FlxFrame.hx",147,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(148)
	if (((this->_bitmapData != null()))){
		HX_STACK_LINE(150)
		return this->_bitmapData;
	}
	HX_STACK_LINE(153)
	::openfl::_v2::display::BitmapData _g = this->paintOnBitmap(null());		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(153)
	return this->_bitmapData = _g;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,getBitmap,return )

::openfl::_v2::display::BitmapData FlxFrame_obj::getHReversedBitmap( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","getHReversedBitmap",0x2011711f,"flixel.graphics.frames.FlxFrame.getHReversedBitmap","flixel/graphics/frames/FlxFrame.hx",160,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(161)
	if (((this->_hReversedBitmapData != null()))){
		HX_STACK_LINE(163)
		return this->_hReversedBitmapData;
	}
	HX_STACK_LINE(166)
	::openfl::_v2::display::BitmapData normalFrame = this->getBitmap();		HX_STACK_VAR(normalFrame,"normalFrame");
	HX_STACK_LINE(167)
	::openfl::_v2::geom::Matrix matrix = ::flixel::math::FlxMatrix_obj::matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(168)
	matrix->identity();
	HX_STACK_LINE(169)
	matrix->scale((int)-1,(int)1);
	HX_STACK_LINE(170)
	int _g = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(170)
	matrix->translate(_g,(int)0);
	HX_STACK_LINE(171)
	int _g1 = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(171)
	int _g2 = ::Std_obj::_int(this->sourceSize->y);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(171)
	::openfl::_v2::display::BitmapData _g3 = ::openfl::_v2::display::BitmapData_obj::__new(_g1,_g2,true,(int)0,null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(171)
	this->_hReversedBitmapData = _g3;
	HX_STACK_LINE(172)
	this->_hReversedBitmapData->draw(normalFrame,matrix,null(),null(),null(),null());
	HX_STACK_LINE(173)
	return this->_hReversedBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,getHReversedBitmap,return )

::openfl::_v2::display::BitmapData FlxFrame_obj::getVReversedBitmap( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","getVReversedBitmap",0x45d42dad,"flixel.graphics.frames.FlxFrame.getVReversedBitmap","flixel/graphics/frames/FlxFrame.hx",180,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(181)
	if (((this->_vReversedBitmapData != null()))){
		HX_STACK_LINE(183)
		return this->_vReversedBitmapData;
	}
	HX_STACK_LINE(186)
	::openfl::_v2::display::BitmapData normalFrame = this->getBitmap();		HX_STACK_VAR(normalFrame,"normalFrame");
	HX_STACK_LINE(187)
	::openfl::_v2::geom::Matrix matrix = ::flixel::math::FlxMatrix_obj::matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(188)
	matrix->identity();
	HX_STACK_LINE(189)
	matrix->scale((int)1,(int)-1);
	HX_STACK_LINE(190)
	int _g = ::Std_obj::_int(this->sourceSize->y);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(190)
	matrix->translate((int)0,_g);
	HX_STACK_LINE(191)
	int _g1 = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(191)
	int _g2 = ::Std_obj::_int(this->sourceSize->y);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(191)
	::openfl::_v2::display::BitmapData _g3 = ::openfl::_v2::display::BitmapData_obj::__new(_g1,_g2,true,(int)0,null());		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(191)
	this->_vReversedBitmapData = _g3;
	HX_STACK_LINE(192)
	this->_vReversedBitmapData->draw(normalFrame,matrix,null(),null(),null(),null());
	HX_STACK_LINE(193)
	return this->_vReversedBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,getVReversedBitmap,return )

::openfl::_v2::display::BitmapData FlxFrame_obj::getHVReversedBitmap( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","getHVReversedBitmap",0xa030ef59,"flixel.graphics.frames.FlxFrame.getHVReversedBitmap","flixel/graphics/frames/FlxFrame.hx",200,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(201)
	if (((this->_hvReversedBitmapData != null()))){
		HX_STACK_LINE(203)
		return this->_hvReversedBitmapData;
	}
	HX_STACK_LINE(206)
	::openfl::_v2::display::BitmapData normalFrame = this->getBitmap();		HX_STACK_VAR(normalFrame,"normalFrame");
	HX_STACK_LINE(207)
	::openfl::_v2::geom::Matrix matrix = ::flixel::math::FlxMatrix_obj::matrix;		HX_STACK_VAR(matrix,"matrix");
	HX_STACK_LINE(208)
	matrix->identity();
	HX_STACK_LINE(209)
	matrix->scale((int)-1,(int)-1);
	HX_STACK_LINE(210)
	int _g = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(210)
	int _g1 = ::Std_obj::_int(this->sourceSize->y);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(210)
	matrix->translate(_g,_g1);
	HX_STACK_LINE(211)
	int _g2 = ::Std_obj::_int(this->sourceSize->x);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(211)
	int _g3 = ::Std_obj::_int(this->sourceSize->y);		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(211)
	::openfl::_v2::display::BitmapData _g4 = ::openfl::_v2::display::BitmapData_obj::__new(_g2,_g3,true,(int)0,null());		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(211)
	this->_hvReversedBitmapData = _g4;
	HX_STACK_LINE(212)
	this->_hvReversedBitmapData->draw(normalFrame,matrix,null(),null(),null(),null());
	HX_STACK_LINE(213)
	return this->_hvReversedBitmapData;
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,getHVReversedBitmap,return )

Void FlxFrame_obj::destroyBitmaps( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","destroyBitmaps",0xf2e181c6,"flixel.graphics.frames.FlxFrame.destroyBitmaps","flixel/graphics/frames/FlxFrame.hx",220,0x6c7f608b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(221)
		::openfl::_v2::display::BitmapData _g = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_bitmapData);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(221)
		this->_bitmapData = _g;
		HX_STACK_LINE(222)
		::openfl::_v2::display::BitmapData _g1 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_hReversedBitmapData);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(222)
		this->_hReversedBitmapData = _g1;
		HX_STACK_LINE(223)
		::openfl::_v2::display::BitmapData _g2 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_vReversedBitmapData);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(223)
		this->_vReversedBitmapData = _g2;
		HX_STACK_LINE(224)
		::openfl::_v2::display::BitmapData _g3 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_hvReversedBitmapData);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(224)
		this->_hvReversedBitmapData = _g3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroyBitmaps,(void))

Void FlxFrame_obj::destroy( ){
{
		HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","destroy",0x74fe137e,"flixel.graphics.frames.FlxFrame.destroy","flixel/graphics/frames/FlxFrame.hx",228,0x6c7f608b)
		HX_STACK_THIS(this)
		HX_STACK_LINE(229)
		this->name = null();
		HX_STACK_LINE(230)
		this->frame = null();
		HX_STACK_LINE(231)
		this->parent = null();
		HX_STACK_LINE(232)
		::flixel::math::FlxPoint _g = ::flixel::util::FlxDestroyUtil_obj::put(this->sourceSize);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(232)
		this->sourceSize = _g;
		HX_STACK_LINE(233)
		::flixel::math::FlxPoint _g1 = ::flixel::util::FlxDestroyUtil_obj::put(this->offset);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(233)
		this->offset = _g1;
		HX_STACK_LINE(234)
		::flixel::math::FlxPoint _g2 = ::flixel::util::FlxDestroyUtil_obj::put(this->center);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(234)
		this->center = _g2;
		HX_STACK_LINE(235)
		{
			HX_STACK_LINE(235)
			::openfl::_v2::display::BitmapData _g3 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_bitmapData);		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(235)
			this->_bitmapData = _g3;
			HX_STACK_LINE(235)
			::openfl::_v2::display::BitmapData _g4 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_hReversedBitmapData);		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(235)
			this->_hReversedBitmapData = _g4;
			HX_STACK_LINE(235)
			::openfl::_v2::display::BitmapData _g5 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_vReversedBitmapData);		HX_STACK_VAR(_g5,"_g5");
			HX_STACK_LINE(235)
			this->_vReversedBitmapData = _g5;
			HX_STACK_LINE(235)
			::openfl::_v2::display::BitmapData _g6 = ::flixel::util::FlxDestroyUtil_obj::dispose(this->_hvReversedBitmapData);		HX_STACK_VAR(_g6,"_g6");
			HX_STACK_LINE(235)
			this->_hvReversedBitmapData = _g6;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroy,(void))

::String FlxFrame_obj::toString( ){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","toString",0x50e09da8,"flixel.graphics.frames.FlxFrame.toString","flixel/graphics/frames/FlxFrame.hx",239,0x6c7f608b)
	HX_STACK_THIS(this)
	HX_STACK_LINE(241)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(241)
	{
		HX_STACK_LINE(241)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(241)
		_this->label = HX_CSTRING("name");
		HX_STACK_LINE(241)
		_this->value = this->name;
		HX_STACK_LINE(241)
		_g = _this;
	}
	HX_STACK_LINE(240)
	Array< ::Dynamic > _g1 = Array_obj< ::Dynamic >::__new().Add(_g);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(240)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g1);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,toString,return )

int FlxFrame_obj::sortByName( ::flixel::graphics::frames::FlxFrame frame1,::flixel::graphics::frames::FlxFrame frame2,int prefixLength,int postfixLength){
	HX_STACK_FRAME("flixel.graphics.frames.FlxFrame","sortByName",0xdd6fa5bc,"flixel.graphics.frames.FlxFrame.sortByName","flixel/graphics/frames/FlxFrame.hx",27,0x6c7f608b)
	HX_STACK_ARG(frame1,"frame1")
	HX_STACK_ARG(frame2,"frame2")
	HX_STACK_ARG(prefixLength,"prefixLength")
	HX_STACK_ARG(postfixLength,"postfixLength")
	HX_STACK_LINE(28)
	::String name1 = frame1->name;		HX_STACK_VAR(name1,"name1");
	HX_STACK_LINE(29)
	::String name2 = frame2->name;		HX_STACK_VAR(name2,"name2");
	HX_STACK_LINE(31)
	::String _g = name1.substring(prefixLength,(name1.length - postfixLength));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(31)
	int num1 = ::Std_obj::parseInt(_g);		HX_STACK_VAR(num1,"num1");
	HX_STACK_LINE(32)
	::String _g1 = name2.substring(prefixLength,(name2.length - postfixLength));		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(32)
	int num2 = ::Std_obj::parseInt(_g1);		HX_STACK_VAR(num2,"num2");
	HX_STACK_LINE(34)
	return (num1 - num2);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,sortByName,return )


FlxFrame_obj::FlxFrame_obj()
{
}

void FlxFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFrame);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(tileID,"tileID");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(center,"center");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_MARK_MEMBER_NAME(_hReversedBitmapData,"_hReversedBitmapData");
	HX_MARK_MEMBER_NAME(_vReversedBitmapData,"_vReversedBitmapData");
	HX_MARK_MEMBER_NAME(_hvReversedBitmapData,"_hvReversedBitmapData");
	HX_MARK_END_CLASS();
}

void FlxFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(tileID,"tileID");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(center,"center");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(_bitmapData,"_bitmapData");
	HX_VISIT_MEMBER_NAME(_hReversedBitmapData,"_hReversedBitmapData");
	HX_VISIT_MEMBER_NAME(_vReversedBitmapData,"_vReversedBitmapData");
	HX_VISIT_MEMBER_NAME(_hvReversedBitmapData,"_hvReversedBitmapData");
}

Dynamic FlxFrame_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return frame; }
		if (HX_FIELD_EQ(inName,"angle") ) { return angle; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return parent; }
		if (HX_FIELD_EQ(inName,"tileID") ) { return tileID; }
		if (HX_FIELD_EQ(inName,"offset") ) { return offset; }
		if (HX_FIELD_EQ(inName,"center") ) { return center; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getBitmap") ) { return getBitmap_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortByName") ) { return sortByName_dyn(); }
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return sourceSize; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { return _bitmapData; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"paintOnBitmap") ) { return paintOnBitmap_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"destroyBitmaps") ) { return destroyBitmaps_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"prepareFrameMatrix") ) { return prepareFrameMatrix_dyn(); }
		if (HX_FIELD_EQ(inName,"getHReversedBitmap") ) { return getHReversedBitmap_dyn(); }
		if (HX_FIELD_EQ(inName,"getVReversedBitmap") ) { return getVReversedBitmap_dyn(); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getHVReversedBitmap") ) { return getHVReversedBitmap_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_hReversedBitmapData") ) { return _hReversedBitmapData; }
		if (HX_FIELD_EQ(inName,"_vReversedBitmapData") ) { return _vReversedBitmapData; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_hvReversedBitmapData") ) { return _hvReversedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxFrame_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { frame=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast< ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileID") ) { tileID=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"center") ) { center=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_bitmapData") ) { _bitmapData=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_hReversedBitmapData") ) { _hReversedBitmapData=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vReversedBitmapData") ) { _vReversedBitmapData=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"_hvReversedBitmapData") ) { _hvReversedBitmapData=inValue.Cast< ::openfl::_v2::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("name"));
	outFields->push(HX_CSTRING("frame"));
	outFields->push(HX_CSTRING("parent"));
	outFields->push(HX_CSTRING("tileID"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("sourceSize"));
	outFields->push(HX_CSTRING("offset"));
	outFields->push(HX_CSTRING("center"));
	outFields->push(HX_CSTRING("type"));
	outFields->push(HX_CSTRING("_bitmapData"));
	outFields->push(HX_CSTRING("_hReversedBitmapData"));
	outFields->push(HX_CSTRING("_vReversedBitmapData"));
	outFields->push(HX_CSTRING("_hvReversedBitmapData"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("sortByName"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(FlxFrame_obj,name),HX_CSTRING("name")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(FlxFrame_obj,frame),HX_CSTRING("frame")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxFrame_obj,parent),HX_CSTRING("parent")},
	{hx::fsInt,(int)offsetof(FlxFrame_obj,tileID),HX_CSTRING("tileID")},
	{hx::fsInt,(int)offsetof(FlxFrame_obj,angle),HX_CSTRING("angle")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxFrame_obj,sourceSize),HX_CSTRING("sourceSize")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxFrame_obj,offset),HX_CSTRING("offset")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxFrame_obj,center),HX_CSTRING("center")},
	{hx::fsInt,(int)offsetof(FlxFrame_obj,type),HX_CSTRING("type")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxFrame_obj,_bitmapData),HX_CSTRING("_bitmapData")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxFrame_obj,_hReversedBitmapData),HX_CSTRING("_hReversedBitmapData")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxFrame_obj,_vReversedBitmapData),HX_CSTRING("_vReversedBitmapData")},
	{hx::fsObject /*::openfl::_v2::display::BitmapData*/ ,(int)offsetof(FlxFrame_obj,_hvReversedBitmapData),HX_CSTRING("_hvReversedBitmapData")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("name"),
	HX_CSTRING("frame"),
	HX_CSTRING("parent"),
	HX_CSTRING("tileID"),
	HX_CSTRING("angle"),
	HX_CSTRING("sourceSize"),
	HX_CSTRING("offset"),
	HX_CSTRING("center"),
	HX_CSTRING("type"),
	HX_CSTRING("_bitmapData"),
	HX_CSTRING("_hReversedBitmapData"),
	HX_CSTRING("_vReversedBitmapData"),
	HX_CSTRING("_hvReversedBitmapData"),
	HX_CSTRING("prepareFrameMatrix"),
	HX_CSTRING("paintOnBitmap"),
	HX_CSTRING("getBitmap"),
	HX_CSTRING("getHReversedBitmap"),
	HX_CSTRING("getVReversedBitmap"),
	HX_CSTRING("getHVReversedBitmap"),
	HX_CSTRING("destroyBitmaps"),
	HX_CSTRING("destroy"),
	HX_CSTRING("toString"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrame_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::__mClass,"__mClass");
};

#endif

Class FlxFrame_obj::__mClass;

void FlxFrame_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.graphics.frames.FlxFrame"), hx::TCanCast< FlxFrame_obj> ,sStaticFields,sMemberFields,
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

void FlxFrame_obj::__boot()
{
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames