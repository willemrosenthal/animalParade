package animals;
class Frog extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 10;

		loadGraphic("assets/frog.png", true, true, 17,17);
		animation.add("sit", [0]);
		animation.add("idleside", [0]);
		animation.add("idledown", [4]);
		animation.add("idleup", [8]);
		animation.add("runside", [0, 1, 2, 3], 6);
		animation.add("rundown", [4, 5, 6, 7], 6);
		animation.add("runup", [8, 9, 10, 11], 6);

		offset.y += height * 0.5;
		offset.x += width * 0.5 - 10;
		width = 6;
		height = 6;

		animation.play("sit");
	}
}