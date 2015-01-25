package;

import flixel.addons.ui.FlxUISprite;
import flixel.FlxSprite;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.system.FlxAssets.FlxGraphicAsset;

class WeaponIcon extends FlxUISprite
{

	public function new()
	{
		super(0, 0);
		
		frames = FlxAtlasFrames.fromSparrow(AssetPaths.weapons__png, AssetPaths.weapons__xml);
		animation.addByNames("rocket", ["icon_rocket.png"]);
		animation.addByNames("shield", ["icon_shield.png"]);
		animation.addByNames("phaser", ["icon_phaser.png"]);
		
	}
	
	public function changeType(Which:Int):Void
	{
		switch(Which)
		{
			case 0:
				animation.play("rocket");
			case 1:
				animation.play("phaser");
			case 2:
				animation.play("shield");
		}
	}
	
}