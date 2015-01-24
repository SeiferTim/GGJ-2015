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
		
		for (i in 0...12)
		{
			_grpList.add(new PlanetButton(0, _sprBack.height + (i * 110), i, this));
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
						case "button_down":
							_grpList.y -= 60;
							if (_grpList.y < FlxG.height - (11 * 110) - _sprBack.height)
								_grpList.y = FlxG.height - (11 * 110) - _sprBack.height;
							
						case "button_up":
							_grpList.y += 60;
							if (_grpList.y > 0)
								_grpList.y = 0;
							
					}
				}
		}
	}
	
	
	public function selectPlanet(PlanetNo:Int):Void
	{
		_showingPlanet = true;
		if (Reg.game.planetsDiscovered[PlanetNo] == -1)
		{
			Reg.players[Reg.game.playerTurn].credits += 100;
			Reg.game.planetsDiscovered[PlanetNo] = Reg.game.playerTurn;
			var otherWormHole:Int = -1;
			if ( Reg.game.positions[PlanetNo] >= 10)
			{
				
				for (i in 0...12)
				{
					if (( Reg.game.positions[PlanetNo] == 10 && Reg.game.positions[i] == 11) || ( Reg.game.positions[PlanetNo] == 11 && Reg.game.positions[i] == 10) )
					{
						otherWormHole = i;
						
					}
				}
				Reg.game.planetsDiscovered[otherWormHole] = Reg.game.playerTurn;
			}
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