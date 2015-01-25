package;

import flixel.addons.ui.FlxUIGroup;
import flixel.addons.ui.FlxUIButton;
import flixel.addons.ui.interfaces.IFlxUIWidget;
import flixel.addons.ui.FlxUISubState;

class SubCombatBegin extends FlxUISubState
{
	
	private var _grpNew:FlxUIGroup;
	private var _grpDisplay:FlxUIGroup;
	
	private var _ending:Bool = false;
	
	private var _hp:GameMeter;
	
	// private var playerspresent:Array<Int> = [0, 0, 0, 0];

	public function new()
	{
		super(0xff000000);
	}
	
	override public function create():Void 
	{
		
		_xml_id = "sub_combatbegin";
		super.create();
		
		//_hp = new GameMeter(_ui.getAsset("label_hp").x + _ui.getAsset("label_hp").width + 10, _ui.getAsset("label_hp").y, _ui.getAsset("label_hp").height, 0, Reg.game.playerTurn);
		//_ui.addAsset(_hp, "hp_bar", "display");
		
		cast(_ui.getAsset("button_red"), FlxUIButton).visible = false;
		cast(_ui.getAsset("button_purple"), FlxUIButton).visible = false;
		cast(_ui.getAsset("button_blue"), FlxUIButton).visible = false;
		cast(_ui.getAsset("button_yellow"), FlxUIButton).visible = false;
		
		
		for (i in 0...Reg.game.players)
		{
			trace(i);
			trace(Reg.players[Reg.game.playerTurn].race);
			if (i != Reg.players[Reg.game.playerTurn].race)
			{
				switch(Reg.players[i].race)
				{
					case 0:
						cast(_ui.getAsset("button_red"), FlxUIButton).visible = true;
					case 1:
						cast(_ui.getAsset("button_purple"), FlxUIButton).visible = true;
					case 2:
						cast(_ui.getAsset("button_blue"), FlxUIButton).visible = true;
					case 3:
						cast(_ui.getAsset("button_yellow"), FlxUIButton).visible = true;
				}
			}
		}
		
		// cast(_ui.getAsset("button_cancel"), FlxUIButton).visible = true; // always an option to cancel
		
		/*
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
		*/
		
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
							// Or don't actually "close"? Instead should SubCombatFire be run from here?
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