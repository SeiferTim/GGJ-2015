package;

import flixel.addons.ui.FlxUIButton;
import flixel.addons.ui.FlxUIState;
import flixel.addons.ui.interfaces.IFlxUIWidget;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
using flixel.util.FlxSpriteUtil;
import flixel.group.FlxGroup;


/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxUIState
{
	private var _starting:Bool = false;
	private var _players:Int = 2;
	private var _turns:Int = 1;
	private var _btnsPlayers:Array<FlxUIButton>;
	private var _btnsTurns:Array<FlxUIButton>;
	
	
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		
		_xml_id = "state_menu";
		
		super.create();
		
		_btnsPlayers = [];
		_btnsPlayers.push(cast _ui.getAsset("players_2"));
		_btnsPlayers.push(cast _ui.getAsset("players_3"));
		_btnsPlayers.push(cast _ui.getAsset("players_4"));
		
		
		_btnsTurns = [];
		_btnsTurns.push(cast _ui.getAsset("turns_short"));
		_btnsTurns.push(cast _ui.getAsset("turns_med"));
		_btnsTurns.push(cast _ui.getAsset("turns_long"));
		
		_btnsPlayers[_players].toggled = true;
		_btnsTurns[_turns].toggled = true;
	}
	
	
	override public function getEvent(id:String, sender:IFlxUIWidget, data:Dynamic, ?eventParams:Array<Dynamic>):Void 
	{
		if (_starting)
			return;
		switch(id)
		{
			case "click_button":
				if (eventParams != null && eventParams.length > 0)
				{
					var param:String = cast(eventParams[0], String);
					
					switch(param)
					{
						case "players_2":
							_players = 0;
							_btnsPlayers[0].toggled = true;
							_btnsPlayers[1].toggled = false;
							_btnsPlayers[2].toggled = false;
						case "players_3":
							_players = 1;
							_btnsPlayers[1].toggled = true;
							_btnsPlayers[0].toggled = false;
							_btnsPlayers[2].toggled = false;
						case "players_4":
							_players = 2;
							_btnsPlayers[2].toggled = true;
							_btnsPlayers[0].toggled = false;
							_btnsPlayers[1].toggled = false;
						case "turns_short":
							_turns = 0;
							_btnsTurns[0].toggled = true;
							_btnsTurns[1].toggled = false;
							_btnsTurns[2].toggled = false;
						case "turns_med":
							_turns = 1;
							_btnsTurns[1].toggled = true;
							_btnsTurns[0].toggled = false;
							_btnsTurns[2].toggled = false;
						case "turns_long":
							_turns = 2;
							_btnsTurns[2].toggled = true;
							_btnsTurns[0].toggled = false;
							_btnsTurns[1].toggled = false;
						case "button_start":
							// STart the game....?
							_starting = true;
							Reg.startGame(_players, _turns);
							FlxG.switchState(new PlayState());
							
					}
				}
		}
	}
	
}