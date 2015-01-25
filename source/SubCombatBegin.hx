package;

import flixel.addons.ui.FlxUIGroup;
import flixel.addons.ui.FlxUIButton;
import flixel.addons.ui.interfaces.IFlxUIWidget;

class SubCombatBegin extends FlxUISubState
{
	
	private var _grpNew:FlxUIGroup;
	private var _grpDisplay:FlxUIGroup;
	
	private var _ending:Bool = false;

	public function new()
	{
		super(0xff000000);
	}
	
	override public function create():Void 
	{
		
		_xml_id = "sub_combatbegin";
		super.create();
		
		_grpDisplay = _ui.getGroup("display");
		
		_hp = new GameMeter(_ui.getAsset("label_hp").x + _ui.getAsset("label_hp").width + 10, _ui.getAsset("label_hp").y, _ui.getAsset("label_hp").height, 0, Reg.game.playerTurn);
		_ui.addAsset(_hp, "hp_bar", "display");
		
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
						case "button_0":
							// Future: explanatory message
							if (Reg.players[Reg.game.playerTurn].curFuel < Reg.players[Reg.game.playerTurn].maxFuel)
							{
								Reg.players[Reg.game.playerTurn].curFuel++;
							}
							_ending = true;
							close();
						case "button_1":
							// Future: message to move 2 spaces
							// no change in fuel
							_ending = true;
							close();
						case "button_sp":
							// Future: message to move ## spaces
							Reg.players[Reg.game.playerTurn].curFuel--;
							_ending = true;
							close();
						case "button_2sp":
							// Future: message to move ## spaces
							Reg.players[Reg.game.playerTurn].curFuel -= 3;
							_ending = true;
							close();
						case "button_cancel":
							_ending = true;
							close();
					}
				}
		}
	}
	
}