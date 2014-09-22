package animals;
import flixel.FlxG;
class Bee extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 14;

		loadGraphic("assets/spring/bee2.png", true, true, 9,18);
		animation.add("idleside", [0,1,2,1],6);
		animation.add("idledown", [3,4,5,4],6);
		animation.add("idleup", [6,7,8,7],6);
		animation.add("runside", [0,1,2,1],12);
		animation.add("rundown", [3,4,5,4],12);
		animation.add("runup", [6,7,8,7],12);

		offset.y += height;
		offset.x += width * 0.5;
		width = 4;
		height = 9;

		if (Math.random() < 0.5)
			animation.play("idleside");
		else animation.play("idledown");

        soundTimer = 500;
        soundTime = 500;
        soundMoving = 250;
        soundArray = ["assets/sounds/b/b3.wav","assets/sounds/b/b4.wav","assets/sounds/b/b5.wav","assets/sounds/b/b6.wav"];
        //soundArray = ["assets/sounds/spring/o1.ogg","assets/sounds/spring/o2.ogg","assets/sounds/spring/o3.ogg","assets/sounds/spring/o4.ogg","assets/sounds/spring/o5.ogg","assets/sounds/spring/o6.ogg"];
	}
}