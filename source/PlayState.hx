package;

import flixel.addons.ui.FlxUIState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;

class PlayState extends FlxState
{
	override public function update(elapsed:Float):Void 
	{
		
		super.update(elapsed);
		
		openSubState(new SubPlayer());
		
	}
	
}