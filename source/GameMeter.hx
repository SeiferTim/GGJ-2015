package;

import flixel.addons.ui.FlxUIGroup;
import flixel.addons.ui.FlxUISprite;
import flixel.FlxSprite;
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
		_height = Height;
		_mode = Mode;
		_playerNo = PlayerNo;
		super(X, Y);
		_pips = [];
		var p:FlxUISprite;
		
		add(new FlxUISprite(0, 0).makeGraphic((10 * 12) + 2, Std.int(_height), 0xff111111));
		
		for (i in 0...10)
		{
			p = cast new FlxUISprite((i * 12)+2, 2).makeGraphic(10, Std.int(_height-4), getColor(i));
			_pips.push(p);
			add(p);
		}
		
	}
	
	private function getColor(Pos:Int):UInt
	{
		if (_mode == MODE_HP)
		{
			if (Pos < Reg.players[_playerNo].curHealth)
			{
				return FlxColor.GREEN;
				
			}
			else if (Pos >= Reg.players[_playerNo].maxHealth)
			{
				return 0xff333333;
				
			}
			else 
			{
				return 0xffcccccc;
			}
		}
		else
		{
			if (Pos < Reg.players[_playerNo].curFuel)
			{
				return FlxColor.ORANGE;
				
			}
			else if (Pos >= Reg.players[_playerNo].maxFuel)
			{
				return 0xff333333;
				
			}
			else
			{
				return 0xffcccccc;
			}
		}
	}
}