package;

import flixel.addons.ui.FlxUI9SliceSprite;
import flixel.addons.ui.FlxUIButton;
import flixel.addons.ui.FlxUIGroup;
import flixel.addons.ui.FlxUISprite;
import flixel.addons.ui.FlxUIText;
import flixel.FlxG;

class PlanetButton extends FlxUIGroup
{

	private var _planetNo:Int;
	private var _back:FlxUIButton;
	private var _parent:SubSurvey;
	private var _selected:Bool = false;
	
	public function new(X:Float=0, Y:Float=0, PlanetNo:Int, Parent:SubSurvey) 
	{
		_planetNo = PlanetNo;
		_parent = Parent;
		
		super(X, Y);
		
		_back = new FlxUIButton(10, 0, (Reg.game.planetsDiscovered[_planetNo] == -1 ? String.fromCharCode(65 + _planetNo) : Std.string(Reg.game.positions[_planetNo]+1)), SelectPlanet);
		//_back.loadGraphicSlice9(["", "", ""], FlxG.width - 32, 120, null, FlxUI9SliceSprite.TILE_NONE);
		
		_back.copyStyle(_parent.btnCancel);
		_back.resize(FlxG.width - 78, 100);
		
		add(_back);
		
		
		
	}
	
	private function SelectPlanet():Void
	{
		if (_selected)
			return;
		_selected = true;
		_parent.selectPlanet(_planetNo);
		
	}
	
}