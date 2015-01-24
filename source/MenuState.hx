package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
using flixel.util.FlxSpriteUtil;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	
	private var _btnStartGame:FlxButton;
	private var _btnJoinGame:FlxButton;
	
	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		super.create();
		
		_btnStartGame = new FlxButton(0, 20, "Start Game", startGame);
		_btnStartGame.screenCenter(true, false);
		add(_btnStartGame);
		
		_btnJoinGame = new FlxButton(0, _btnStartGame.y + _btnStartGame.height + 20, "Join Game", joinGame);
		_btnJoinGame.screenCenter(true, false);
		add(_btnJoinGame);
		
		
		
	}
	
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		super.destroy();
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
	}	
	
	
	private function startGame():Void
	{
		
	}
	
	private function joinGame():Void
	{
		
	}
	
}