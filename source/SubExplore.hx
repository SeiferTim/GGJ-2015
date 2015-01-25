package;

import flixel.addons.ui.FlxUIButton;
import flixel.addons.ui.FlxUISubState;
import flixel.addons.ui.interfaces.IFlxUIWidget;
import flixel.util.FlxColor;
import flixel.addons.ui.FlxUIGroup;


class SubExplore extends FlxUISubState
{
	
	private var _grpNew:FlxUIGroup;
	private var _grpDisplay:FlxUIGroup;
	
	private var _fuel:GameMeter;
	
	private var _ending:Bool = false;

	public function new()
	{
		super(0xff000000);
	}
	
	override public function create():Void 
	{
		
		_xml_id = "sub_explore";
		super.create();
		
		_grpDisplay = _ui.getGroup("display");
		
		_fuel = new GameMeter(_ui.getAsset("label_fuel").x + _ui.getAsset("label_fuel").width + 10, _ui.getAsset("label_fuel").y, _ui.getAsset("label_fuel").height, 1, Reg.game.playerTurn);
		_ui.addAsset(_fuel, "fuel_bar", "display");
		
		if (Reg.players[Reg.game.playerTurn].curFuel < 3)
		{
			cast(_ui.getAsset("button_2sp"), FlxUIButton).toggled = true;
			cast(_ui.getAsset("button_2sp"), FlxUIButton).skipButtonUpdate = true;
		}
		if (Reg.players[Reg.game.playerTurn].curFuel < 1)
		{
			cast(_ui.getAsset("button_2sp"), FlxUIButton).toggled = true;
			cast(_ui.getAsset("button_2sp"), FlxUIButton).skipButtonUpdate = true;
			cast(_ui.getAsset("button_sp"), FlxUIButton).toggled = true;
			cast(_ui.getAsset("button_sp"), FlxUIButton).skipButtonUpdate = true;
		}
		
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