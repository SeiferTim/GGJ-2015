package;

import flixel.addons.ui.FlxUIGroup;
import flixel.addons.ui.FlxUIButton;
import flixel.addons.ui.interfaces.IFlxUIWidget;
import flixel.addons.ui.FlxUISubState;

class SubCombatFire extends FlxUISubState
{
	
	private var _grpNew:FlxUIGroup;
	private var _grpDisplay:FlxUIGroup;
	
	private var _ending:Bool = false;
	
	// private var playerspresent:Array<Int> = [0, 0, 0, 0];

	public function new()
	{
		super(0xff000000);
	}
	
	override public function create():Void 
	{
		
		_xml_id = "sub_combatfire";
		super.create();
		
		_grpDisplay = _ui.getGroup("display");
		
		_hp = new GameMeter(_ui.getAsset("label_hp").x + _ui.getAsset("label_hp").width + 10, _ui.getAsset("label_hp").y, _ui.getAsset("label_hp").height, 0, Reg.game.playerTurn);
		_ui.addAsset(_hp, "hp_bar", "display");
		
		// Do any buttons need to be loaded and pre-disabled?
		
		cast(_ui.getAsset("button_cancel"), FlxUIButton); // always an option to cancel
		
		for (i in 0...Reg.game.players)
		{
			switch(Reg.players[i].race)
			{
				case 0:
					// display red button
					cast(_ui.getAsset("button_red"), FlxUIButton);
					// Future: Display Red Player's fuel and weapons stock.
				case 1:
					cast(_ui.getAsset("button_purple"), FlxUIButton);
				case 2:
					cast(_ui.getAsset("button_blue"), FlxUIButton);
				case 3:
					cast(_ui.getAsset("button_yellow"), FlxUIButton);
			}
		}
		
		if (Reg.players[Reg.game.playerTurn].race == 0)
		{
			cast(_ui.getAsset("button_red"), FlxUIButton).toggled = true;
			cast(_ui.getAsset("button_red"), FlxUIButton).skipButtonUpdate = true;
		}
		if (Reg.players[Reg.game.playerTurn].race == 1)
		{
			cast(_ui.getAsset("button_purple"), FlxUIButton).toggled = true;
			cast(_ui.getAsset("button_purple"), FlxUIButton).skipButtonUpdate = true;
		}
		if (Reg.players[Reg.game.playerTurn].race == 2)
		{
			cast(_ui.getAsset("button_blue"), FlxUIButton).toggled = true;
			cast(_ui.getAsset("button_blue"), FlxUIButton).skipButtonUpdate = true;
		}
		if (Reg.players[Reg.game.playerTurn].race == 3)
		{
			cast(_ui.getAsset("button_yellow"), FlxUIButton).toggled = true;
			cast(_ui.getAsset("button_yellow"), FlxUIButton).skipButtonUpdate = true;
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
						case "button_red":
							_ending = true;
							close();
							// Or don't actually "close"? Instead should open SubCombatFire from here?
						case "button_purple":
							_ending = true;
							close();
						case "button_blue":
							_ending = true;
							close();
						case "button_yellow":
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