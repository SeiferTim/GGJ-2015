package;

import flixel.addons.ui.FlxUISprite;
import flixel.addons.ui.FlxUIState;
import flixel.addons.ui.FlxUISubState;
import flixel.addons.ui.FlxUIText;
import flixel.addons.ui.interfaces.IFlxUIWidget;
import flixel.FlxG;
import flixel.graphics.FlxGraphic;
import flixel.graphics.frames.FlxAtlasFrames;
using flixel.util.FlxSpriteUtil;

class SubPlanetReveal extends FlxUISubState
{

	private var _ending:Bool = false;
	private var _planetNo:Int;
	private var _whichPlanet:Int;
	private var _otherWormHole:Int;
	
	public function new(PlanetNo:Int, WhichPlanet:Int, OtherWormHole:Int) 
	{
		_planetNo = PlanetNo;
		_whichPlanet = WhichPlanet;
		_otherWormHole = OtherWormHole;
		super(0xff000000);
	}
	
	override public function create():Void 
	{
		
		
		_xml_id = "sub_planet";
		super.create();
		
		if (_whichPlanet > 9)
		{
			_ui.getFlxText("text_planet").text = "Wormholes at " + String.fromCharCode(65 + _planetNo) + " and " + String.fromCharCode(65 + _otherWormHole);
		}
		else
		{
			_ui.getFlxText("text_planet").text = "Planet " + Std.string(_whichPlanet+1);
		}
		
		var p:FlxUISprite;
		if (_whichPlanet < 10 && _whichPlanet >=0)
		{
			p = new FlxUISprite(0, 0);
			switch (_whichPlanet) 
			{
				case 0:
					p.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet1__png, AssetPaths.Planet1__xml);
				case 1:
					p.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet2__png, AssetPaths.Planet2__xml);
				case 2:
					p.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet3__png, AssetPaths.Planet3__xml);
				case 3:
					p.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet4__png, AssetPaths.Planet4__xml);
				case 4:
					p.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet5__png, AssetPaths.Planet5__xml);
				case 5:
					p.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet6__png, AssetPaths.Planet6__xml);
				case 6:
					p.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet7__png, AssetPaths.Planet7__xml);
				case 7:
					p.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet8__png, AssetPaths.Planet8__xml);
				case 8:
					p.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet9__png, AssetPaths.Planet9__xml);
				case 9:
					p.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet10__png, AssetPaths.Planet10__xml);
				
					
			}
			
			p.animation.addByStringIndices("planet", "Planet" + Std.string(_whichPlanet+1) +  ".00", ["01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11"], ".png", 24);
			p.animation.play("planet");
			p.screenCenter(true, false);
			_ui.addAsset(p, "planet", "back");
		}
			
			
			//, Definition);
		//var tmpGraphic:FlxGraphic = FlxGraphic.fromFrames(t);
		
		
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