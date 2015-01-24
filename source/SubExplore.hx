package;

import flixel.addons.ui.FlxUISubState;
import flixel.util.FlxColor;


class SubExplore extends FlxUISubState
{

	public function new()
	{
		super(0xff000000);
	}
	
	override public function create():Void 
	{
		
		_xml_id = "sub_explore";
		super.create();
		
		// Reg.players[Reg.game.playerTurn].curFuel
		//Std.string(Reg.players[Reg.game.playerTurn].speed)
		//Std.string(Reg.players[Reg.game.playerTurn].speed * 2)
		
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
							Reg.players[Reg.game.playerTurn].curFuel++;
							// "End Turn" button
						case "button_1":
							// message to move one space
							// no change in fuel
							// "End Turn" button
						case "button_sp":
							// message to move ## spaces
							Reg.players[Reg.game.playerTurn].curFuel--;
							// "End Turn" button
						case "button_2sp":
							// message to move ## spaces
							Reg.players[Reg.game.playerTurn].curFuel -= 3;
							// "End Turn" button
						case "button_cancel":
							_ending = true;
							close();
					}
				}
		}
	}
	
}