package animals;
class Bee extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 12;

		loadGraphic("assets/spring/bee2.png", true, true, 9,18);
		animation.add("idleside", [0,1,2,1],6);
		animation.add("idledown", [3,4,5,4],6);
		animation.add("idleup", [6,7,8,7],6);
		animation.add("runside", [0,1,2,1],12);
		animation.add("rundown", [3,4,5,4],12);
		animation.add("runup", [6,7,8,7],12);

		offset.y += height * 0.5;
		offset.x += width * 0.5 - 10;
		width = 4;
		height = 4;

		if (Math.random() < 0.5)
			animation.play("idleside");
		else animation.play("idledown");
	}
}