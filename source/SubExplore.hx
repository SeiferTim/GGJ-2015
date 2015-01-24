package;

import flixel.addons.ui.FlxUISubState;
import flixel.util.FlxColor;


class SubExplore extends FlxUISubState
{

	override public function create():Void 
	{
		
		_xml_id = "sub_player";
		super.create();
		
		Reg.players[Reg.game.playerTurn].curFuel
		
	}
	
}