package;
import flixel.addons.ui.FlxSlider;
import flixel.addons.ui.FlxUIButton;
import flixel.addons.ui.FlxUIGroup;
import flixel.addons.ui.FlxUISlider;
import flixel.addons.ui.FlxUISprite;
import flixel.addons.ui.FlxUISubState;
import flixel.addons.ui.FlxUITypedButton;
import flixel.addons.ui.interfaces.IFlxUIWidget;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxSignal.IFlxSignal;

class SubSurvey extends FlxUISubState
{

	private var _ending:Bool = false;
	public var btnCancel:FlxUITypedButton<FlxSprite>;
	private var _grpList:FlxUIGroup;
	private var _sprBack:FlxUISprite;
	private var _showingPlanet:Bool = false;
	
	
	public function new()
	{
		super(0xff000000);
	}
	
	override public function create():Void 
	{
		_xml_id = "sub_survey";
		
		super.create();
	
		_grpList = _ui.getGroup("list");
		
		btnCancel = cast _ui.getAsset("button_cancel");
		_sprBack = cast _ui.getAsset("sprite_back");
		
		for (i in 0...6)
		{
			_grpList.add(new PlanetButton(0, 20 +  (Math.floor(i /2 ) * 110), i, this));
		}
		
		
		
	}
	
	override public function getEvent(id:String, sender:IFlxUIWidget, data:Dynamic, ?eventParams:Array<Dynamic>):Void 
	{
		if (_ending || _showingPlanet)
			return;
		switch(id)
		{
			case "click_button":
				if (eventParams != null && eventParams.length > 0)
				{
					var param:String = cast(eventParams[0], String);
					
					switch(param)
					{
						case "button_cancel":
							_ending = true;
							close();
						
							
					}
				}
		}
	}
	
	
	public function selectPlanet(PlanetNo:Int):Void
	{
		_showingPlanet = true;
		if (Reg.game.planetsDiscovered[PlanetNo] == -1)
		{
			Reg.didAction = true;
			
			Reg.game.planetsDiscovered[PlanetNo] = Reg.game.playerTurn;
			var otherWormHole:Int = -1;
			
			var s:SubPlanetReveal = new SubPlanetReveal(PlanetNo, Reg.game.positions[PlanetNo], otherWormHole);
			
			
			
			s.closeCallback = function() { close(); }
			openSubState(s);
			

		}
		else
			close();
	}
	
	override public function update(elapsed:Float):Void 
	{
		super.update(elapsed);
		
	}
}