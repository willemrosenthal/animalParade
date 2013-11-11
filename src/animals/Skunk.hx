package animals;
class Skunk extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 18;

		loadGraphic("assets/skunk.png", true, true, 24,9);
		animation.add("sit", [0]);
		animation.add("idleside", [0]);
		animation.add("idledown", [0]);
		animation.add("idleup", [0]);
		animation.add("runside", [0, 1, 2, 3], 6);

		offset.y += height * 0.5;
		offset.x += width * 0.5 - 10;
		width = 12;
		height = 6;

		animation.play("sit");
	}
}