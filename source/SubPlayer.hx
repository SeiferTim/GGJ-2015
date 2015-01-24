package;

import flixel.addons.ui.FlxUIGroup;
import flixel.addons.ui.FlxUISubState;
import flixel.addons.ui.FlxUIText;
import flixel.addons.ui.interfaces.IFlxUIWidget;
import flixel.util.FlxColor;

class SubPlayer extends FlxUISubState
{
	
	private var _grpNew:FlxUIGroup;
	private var _grpDisplay:FlxUIGroup;
	
	private var _hp:GameMeter;
	private var _fuel:GameMeter;
	
	private var _ending:Bool = false;
	
	override public function create():Void 
	{
		_xml_id = "sub_player";
		super.create();
		_ui.setMode("player_" + Std.string(Reg.players[Reg.game.playerTurn].race));
		cast( _ui.getAsset("title_text"), FlxUIText).text = "Pass Me to Player " + Std.string(Reg.game.playerTurn+1);
		_grpNew = _ui.getGroup("new_turn");
		_grpDisplay = _ui.getGroup("display");
		
		_hp = new GameMeter(_ui.getAsset("label_hp").x + _ui.getAsset("label_hp").width + 10, _ui.getAsset("label_hp").y, _ui.getAsset("label_hp").height, 0, Reg.game.playerTurn);
		_fuel = new GameMeter(_ui.getAsset("label_fuel").x + _ui.getAsset("label_fuel").width + 10, _ui.getAsset("label_fuel").y, _ui.getAsset("label_fuel").height, 1, Reg.game.playerTurn);
		_ui.addAsset(_hp, "hp_bar", "display");
		_ui.addAsset(_fuel, "fuel_bar", "display");
		
		_grpDisplay.visible = false;
	}
	
	override public function getEvent(id:String, sender:IFlxUIWidget, data:Dynamic, ?eventParams:Array<Dynamic>):Void 
	{
		if (_ending)
			return;
		switch(id)
		{
			case "click_button":
				if (eventParams != null && eventParams.length > 0)
				{
					var param:String = cast(eventParams[0], String);
					
					switch(param)
					{
						case "button_ready":
							_grpNew.visible = false;
							_grpDisplay.visible = true;
						case "button_end":
							_ending = true;
							Reg.endTurn();
							close();
							
							
					}
				}
		}
	}
	
}