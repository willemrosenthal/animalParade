package animals;
class Skunk extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 18;

		loadGraphic("assets/skunk.png", true, true, 29,23);
		animation.add("idleside", [0, 3], 2);
		animation.add("idledown", [4, 7], 2);
		animation.add("idleup", [8, 11], 2);
		animation.add("runside", [1, 2], 6);
		animation.add("rundown", [5, 6], 6);
		animation.add("runup", [9, 10], 6);

		offset.y += height * 0.5;
		offset.x += width * 0.5 - 10;
		width = 12;
		height = 6;

		animation.play("idleside");
	}
}