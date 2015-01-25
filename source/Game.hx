package ;

using flixel.util.FlxArrayUtil;

class Game
{

	public var positions:Array<Int>;	// random planet locations
	public var players:Int;				// number of planets in the game
	public var playerTurn:Int; 			// who's turn it is now
	public var turn:Int;				// current turn
	public var maxTurns:Int;			// number of turns until game ends
	public var planetsDiscovered:Array<Int>;	// array of planets that have been discovered by players, and who discovered them
	
	
	public function new(Players:Int, MaxTurns:Int)
	{
		players = Players;
		maxTurns = MaxTurns;
		turn = 1;
		
		positions = [0, 1, 2, 3, 4, 5];
		
		positions = Reg.rnd.shuffleArray(positions, 10);
		planetsDiscovered = [ -1, -1, -1, -1, -1, -1];
		
		
		
	}
	
}