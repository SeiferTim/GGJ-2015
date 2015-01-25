package;

import flixel.addons.ui.FlxUISubState;
import flixel.addons.ui.FlxUIText;
import flixel.util.FlxColor;

class SubGameEnd extends FlxUISubState
{

	override public function create():Void 
	{
		
		_xml_id = "sub_gameend";
		super.create();
		var winner:Int;
		winner = 0;
		for (i in 1...Reg.game.players)
		{
			if (Reg.players[i].credits > Reg.players[winner].credits)
			{
				winner = i;
			}
		}
		
		_ui.setMode("player_" + Std.string(Reg.players[winner].race));
		
		cast(_ui.getAsset("winner_text"), FlxUIText).text = Reg.getColorName(Reg.players[winner].race) + " Player!";
		
		
		
	}
}