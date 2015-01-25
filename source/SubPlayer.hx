package;

import flixel.addons.ui.FlxUIButton;
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
	
	private var _txtCredits:FlxUIText;
	
	private var _icons:Array<WeaponIcon>;
	
	override public function create():Void 
	{
		Reg.didAction = false;
		Reg.didMove = false;
		_xml_id = "sub_player";
		super.create();
		_ui.setMode("player_" + Std.string(Reg.players[Reg.game.playerTurn].race));
		cast( _ui.getAsset("title_text"), FlxUIText).text = "Pass Me to " + Reg.getColorName(Reg.players[Reg.game.playerTurn].race) + " Player";
		_grpNew = _ui.getGroup("new_turn");
		_grpDisplay = _ui.getGroup("display");
		
		_hp = new GameMeter(280, 170, 0, 0, Reg.game.playerTurn);
		_fuel = new GameMeter(280, 70,0, 1, Reg.game.playerTurn);
		_ui.addAsset(_hp, "hp_bar", "display");
		_ui.addAsset(_fuel, "fuel_bar", "display");
		
		cast(_ui.getAsset("value_turns"), FlxUIText).text = "Turns " + Std.string(Reg.game.turn) + "/" + Std.string(Reg.game.maxTurns);
		
		_grpDisplay.visible = false;
		
		_txtCredits = cast _ui.getAsset("value_credits");
		
		_icons = [];
		var wi:WeaponIcon;
		var wC:Int = 0;
		for (j in 0...3)
		{
			for (i in 0...Reg.players[Reg.game.playerTurn].items[j])
			{
				wi = new WeaponIcon();
				wi.x = 260 + (60 * wC);
				wi.y = 270;
				wC++;
				wi.changeType(j);
				_icons.push(wi);
				_ui.addAsset(wi, "icon-" + Std.string(wC), "display");
			}
		}
		refresh();
		
	}
	
	private function refresh():Void
	{
		
		cast(_ui.getAsset("button_explore"), FlxUIButton).has_toggle = false;
		cast(_ui.getAsset("button_survey"), FlxUIButton).has_toggle = false;
		cast(_ui.getAsset("button_combat"), FlxUIButton).has_toggle = false;
		
		_txtCredits.text = Std.string(Reg.players[Reg.game.playerTurn].credits);
		if (Reg.didMove || Reg.didAction)
		{
			cast(_ui.getAsset("button_explore"), FlxUIButton).has_toggle = true;
			cast(_ui.getAsset("button_explore"), FlxUIButton).toggled = true;
			cast(_ui.getAsset("button_explore"), FlxUIButton).skipButtonUpdate = true;
		}
		if (Reg.didAction)
		{
			cast(_ui.getAsset("button_survey"), FlxUIButton).has_toggle = true;
			cast(_ui.getAsset("button_survey"), FlxUIButton).toggled = true;
			cast(_ui.getAsset("button_survey"), FlxUIButton).skipButtonUpdate = true;
			cast(_ui.getAsset("button_combat"), FlxUIButton).has_toggle = true;
			cast(_ui.getAsset("button_combat"), FlxUIButton).toggled = true;
			cast(_ui.getAsset("button_combat"), FlxUIButton).skipButtonUpdate = true;
		}
		
		_hp.refresh();
		_fuel.refresh();
		var wi:WeaponIcon;
		var wC:Int = 0;
		for (j in 0...3)
		{
			for (i in 0...Reg.players[Reg.game.playerTurn].items[j])
			{
				wi = _icons[wC];
				wC++;
				wi.changeType(j);
			}
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
						case "button_ready":
							_grpNew.visible = false;
							_grpDisplay.visible = true;
						case "button_end":
							_ending = true;
							Reg.endTurn();
							close();
						case "button_survey":
							//_ending = true;
							var s:SubSurvey = new SubSurvey();
							s.closeCallback = refresh;
							openSubState(s);
						case "button_explore":
							var e:SubExplore = new SubExplore();
							e = new SubExplore();
							e.closeCallback = refresh;
							openSubState(e);
						case "button_combat":
							var c:SubCombatBegin = new SubCombatBegin();
							c = new SubCombatBegin();
							c.closeCallback = refresh;
							openSubState(c);
							
							
							
					}
				}
		}
	}
	
}