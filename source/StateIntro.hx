package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.text.FlxText;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import flixel.util.FlxColor;
using flixel.util.FlxSpriteUtil;

class StateIntro extends FlxState
{

	private var _black:FlxSprite;
	private var _text:FlxText;
	
	override public function create():Void 
	{
		
		
		super.create();
		
		var s:FlxSprite = new FlxSprite();
		s.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.station__png, AssetPaths.station__xml);
		s.animation.addByStringIndices("spin", "station.00", ["01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11"], ".png", 10);
		s.animation.play("spin");
		s.screenCenter(true, true);
		add(s);
		
		_text = new FlxText(0, 0, FlxG.width, "MADE IN ST LOUIS", 48);
		_text.setFormat(AssetPaths.kimberley__ttf, 48, FlxColor.WHITE, FlxTextAlign.CENTER, FlxTextBorderStyle.OUTLINE, 0xff666666);
		_text.screenCenter(true, true);
		_text.alpha = 0;
		add(_text);
		
		_black = new FlxSprite(0, 0).makeGraphic(FlxG.width, FlxG.height, FlxColor.BLACK);
		add(_black);
		
		FlxTween.num(1, 0, 1.33, { type:FlxTween.ONESHOT, ease:FlxEase.quadOut, onComplete:doneFadeIn }, function(A:Float) {
			_black.alpha = A;
		});
		
	}
	
	private function doneFadeIn(_):Void
	{
		FlxTween.num(0, 1, .66, { type:FlxTween.ONESHOT, ease:FlxEase.quartOut }, function(A:Float) {
			_text.alpha = A;
		});
		FlxG.sound.play(AssetPaths.madeinstl__wav, 1, false, true, doneSound);
	}
	
	private function doneSound():Void
	{
		FlxTween.num(0, 1, 1, { type:FlxTween.ONESHOT, ease:FlxEase.quadIn, startDelay:1, onComplete:doneFadeOut }, function(A:Float) {
			_black.alpha = A;
		});
	}
	
	private function doneFadeOut(_):Void
	{
		FlxG.switchState(new MenuState());
	}
	
}