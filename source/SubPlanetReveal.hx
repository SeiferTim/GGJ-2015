package;

import flixel.addons.ui.FlxUIState;
import flixel.addons.ui.FlxUISubState;
import flixel.addons.ui.FlxUIText;
import flixel.addons.ui.interfaces.IFlxUIWidget;

class SubPlanetReveal extends FlxUISubState
{

	private var _ending:Bool = false;
	private var _planetNo:Int;
	private var _whichPlanet:Int;
	
	public function new(PlanetNo:Int, WhichPlanet:Int) 
	{
		_planetNo = PlanetNo;
		_whichPlanet = WhichPlanet;
		
		super(0xff000000);
	}
	
	override public function create():Void 
	{
		_xml_id = "sub_planet";
		super.create();
		
		if (_whichPlanet > 9)
		{
			_ui.getFlxText("text_planet").text = "Wormhole";
		}
		else
		{
			_ui.getFlxText("text_planet").text = "Planet " + Std.string(_whichPlanet+1);
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
						case "button_done":
							_ending = true;
							close();
							
							
							
					}
				}
		}
	}
	
	
}