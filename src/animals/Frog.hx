package animals;
class Frog extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 18;

		loadGraphic("assets/fall/frog.png", true, true, 17,17);
		animation.add("sit", [0]);
		animation.add("idleside", [0]);
		animation.add("idledown", [4]);
		animation.add("idleup", [8]);
		animation.add("runside", [0, 1, 2, 3], 6);
		animation.add("rundown", [4, 5, 6, 7], 6);
		animation.add("runup", [8, 9, 10, 11], 6);


		animation.add("idlesides", [12]);
		animation.add("idledowns", [15]);
		animation.add("idleups", [18]);
		animation.add("runsides", [12, 13, 14], 6);
		animation.add("rundowns", [15, 16, 17], 6);
		animation.add("runups",   [18, 19, 20], 6);


		swimming = true;

		offset.y += height;
		offset.x += width * 0.5;

		width = 6;
		height = 6;

		if (Math.random() < 0.5)  {
			animation.play("idleside");
			afacing  = "side";
		}
		else {
		    animation.play("idledown");
			afacing  = "down";
		}

        soundTimer = 40;
        soundTime = 60;
        soundMoving = 40;
        soundArray = ["assets/sounds/e/e1.wav","assets/sounds/e/e2.wav","assets/sounds/e/e3.wav","assets/sounds/e/e4.wav","assets/sounds/e/e5.wav","assets/sounds/e/e6.wav","assets/sounds/e/e7.wav","assets/sounds/e/e8.wav","assets/sounds/e/e9.wav","assets/sounds/e/e10.wav"];
    }
}