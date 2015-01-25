package;

import flixel.addons.ui.FlxUIGroup;
import flixel.addons.ui.FlxUISprite;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.util.FlxColor;

class GameMeter extends FlxUIGroup
{

	private var _height:Float;
	private var _playerNo:Int;
	private var _mode:Int;
	
	private var MODE_HP:Int = 0;
	private var MODE_FUEL:Int = 1;
	
	private var _pips:Array<FlxUISprite>;
	
	public function new(X:Float=0, Y:Float=0, Height:Float, Mode:Int, PlayerNo:Int) 
	{
		_height = 40;
		_mode = Mode;
		_playerNo = PlayerNo;
		super(X, Y);
		_pips = [];
		var p:FlxUISprite;
		
		//add(new FlxUISprite(0, 0).makeGraphic((5 * 22) + 2, Std.int(_height), 0xff111111));
		
		for (i in 0...5)
		{
			p = cast new FlxUISprite((i * 22), 0);
			p.frames = FlxAtlasFrames.fromSparrow(AssetPaths.bars__png, AssetPaths.bars__xml);
			p.animation.addByNames("fuel-full", ["fuel_full.png"]);
			p.animation.addByNames("fuel-empty", ["fuel_empty.png"]);
			p.animation.addByNames("health-full", ["HP_full.png"]);
			p.animation.addByNames("health-empty", ["HP_empty.png"]);
			if (_mode == MODE_HP)
			{
				if (i < Reg.players[_playerNo].curHealth)
				{
					p.animation.play("health-full");
				}
				else
				{
					p.animation.play("health-empty");
				}
			}
			else 
			{
				if (i < Reg.players[_playerNo].curFuel)
				{
					p.animation.play("fuel-full");
				}
				else
				{
					p.animation.play("fuel-empty");
				}
			}
			_pips.push(p);
			add(p);
		}
		
	}
	
	public function refresh():Void
	{
		var p:FlxUISprite;
		for (i in 0...5)
		{
			p = _pips[i];
			if (_mode == MODE_HP)
			{
				if (i < Reg.players[_playerNo].curHealth)
				{
					p.animation.play("health-full");
				}
				else
				{
					p.animation.play("health-empty");
				}
			}
			else 
			{
				if (i < Reg.players[_playerNo].curFuel)
				{
					p.animation.play("fuel-full");
				}
				else
				{
					p.animation.play("fuel-empty");
				}
			}
		}
	}
	
}