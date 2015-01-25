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
	public static var availableRaces:Array<Int>;
	public static var items:Array<Item>;
	
	public static function startGame(Players:Int, Turns:Int):Void
	{
		rnd = new FlxRandom();
		
		defineItems();
		
		game = new Game(Players + 2, Turns == 0 ? 15 : Turns == 1 ? 30 : 45);
		
		availableRaces = [0, 1, 2, 3];
		
		players = [];
		for (i in 0...Players + 2)
		{
			players.push(new Player());
		}
		
		players = rnd.shuffleArray(players, 10);
		
		
	}
	
	
	public static function endTurn():Void
	{
		game.playerTurn++;
		if (game.playerTurn >= game.players)
		{
			game.playerTurn = 0;
		}
	}
	
	private static function defineItems():Void
	{
		
	}
}