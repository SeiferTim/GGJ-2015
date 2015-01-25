package;

import flixel.addons.ui.FlxUI9SliceSprite;
import flixel.addons.ui.FlxUIButton;
import flixel.addons.ui.FlxUIGroup;
import flixel.addons.ui.FlxUISprite;
import flixel.addons.ui.FlxUIText;
import flixel.FlxG;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.text.FlxText.FlxTextBorderStyle;

class PlanetButton extends FlxUIGroup
{

	private var _planetNo:Int;
	private var _back:FlxUIButton;
	private var _parent:SubSurvey;
	private var _selected:Bool = false;
	private var _icon:FlxUISprite;
	
	public function new(X:Float=0, Y:Float=0, PlanetNo:Int, Parent:SubSurvey) 
	{
		_planetNo = PlanetNo;
		_parent = Parent;
		
		super(X, Y);
		
		_back = new FlxUIButton(PlanetNo  % 2 == 0 ? 20 : (FlxG.width /2) + 10 , 0,  "     " + (Reg.game.planetsDiscovered[_planetNo] == -1 ? "?????" : Std.string(Reg.points[Reg.game.positions[_planetNo]]) + " Credits" ) + " [" + String.fromCharCode(65 + _planetNo) + "]", SelectPlanet);
		//_back.loadGraphicSlice9(["", "", ""], FlxG.width - 32, 120, null, FlxUI9SliceSprite.TILE_NONE);
		//_back.loadGraphicSlice9([AssetPaths.my_button_toggle__png],FlxG.width - 78
		_back.copyStyle(_parent.btnCancel);
		
		_back.label.color = 0x303030;
		_back.label.setBorderStyle(FlxTextBorderStyle.OUTLINE, 0xf6f6f6, 2);
		
		//_back.label.setFormat(AssetPaths.kimberley__ttf);
		_back.label.font = AssetPaths.kimberley__ttf;
		
		_back.resize((FlxG.width /2) - 30, 100);
		
		
		
		
		_icon = new FlxUISprite(0, 0);
		if (Reg.game.planetsDiscovered[_planetNo] > -1)
		{
			switch (Reg.game.positions[_planetNo]) 
			{
				case 0:
					_icon.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet1_small__png, AssetPaths.Planet1_small__xml);
				case 1:
					_icon.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet2_small__png, AssetPaths.Planet2_small__xml);
				case 2:
					_icon.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet3_small__png, AssetPaths.Planet3_small__xml);
				case 3:
					_icon.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet4_small__png, AssetPaths.Planet4_small__xml);
				case 4:
					_icon.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet5_small__png, AssetPaths.Planet5_small__xml);
				case 5:
					_icon.frames =  FlxAtlasFrames.fromSparrow(AssetPaths.Planet6_small__png, AssetPaths.Planet6_small__xml);
				
					
			}
			_icon.animation.addByStringIndices("planet", "Planet" + Std.string(Reg.game.positions[_planetNo]+1) +  ".00", ["01", "02", "03", "04", "05", "06", "07", "08", "09", "10", "11"], ".png", 24);
			_icon.animation.play("planet");
		}
		else
		{
			_icon.loadGraphic(AssetPaths.Planetquest__png);
		}
		
		_icon.x = _back.x + 20;
		_icon.y = _back.y + (_back.height / 2) - (_icon.height / 2);
		
		if (Reg.game.planetsDiscovered[_planetNo] > -1)
		{
			_back.has_toggle = true;
			_back.toggled = true;
			_back.skipButtonUpdate = true;
		}
		
		add(_back);
		
		add(_icon);
		
		
		
	}
	
	private function SelectPlanet():Void
	{
		if (_selected)
			return;
		_selected = true;
		_parent.selectPlanet(_planetNo);
		
	}
	
}