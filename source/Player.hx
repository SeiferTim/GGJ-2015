package;

class Player
{

	public var race:Int; // Player's race (encoded 0-3)
	public var curHealth:Int; // Player's current health
	public var maxHealth:Int; // Player's maximum health
	public var curFuel:Int; // Player's current fuel
	public var maxFuel:Int; // Player's maximum fuel
	public var credits:Int; // Player's credits (money)
	public var vp:Int; // Player's Victory Points
	public var items:Array<Int>; // Player's items (encoded 0 to some number)
	
	
	public function new() 
	{
		Reg.availableRaces = Reg.rnd.shuffleArray(Reg.availableRaces, 10);
		race = Reg.availableRaces.pop();
		
		curHealth = maxHealth = 5;
		curFuel = maxFuel = 5;
		credits = vp = 0;
		items = [];
		
	}
	
}