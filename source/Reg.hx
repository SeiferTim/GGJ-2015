package;

import flixel.FlxGame;
import flixel.math.FlxRandom;
import flixel.util.FlxSave;

/**
 * Handy, pre-built Registry class that can be used to store 
 * references to objects and other things for quick-access. Feel
 * free to simply ignore it or change it in any way you like.
 */
class Reg
{
	
	public static var rnd:FlxRandom;
	
	public static var game:Game;
	public static var players:Array<Player>;
	
	public static function startGame(Players:Int, Turns:Int):Void
	{
		rnd = new FlxRandom();
		
		game = new Game(Players + 1, Turns == 0 ? 15 : Turns == 1 ? 30 : 45);
		
		players = [];
		for (i in 0...Players + 1)
		{
			players.push(new Player());
		}
		
		
	}
}