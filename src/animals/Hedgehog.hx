package animals;
class Hedgehog extends Animal
{
	public function new(X:Float = 0, Y:Float = 0)
	{
		super(X, Y);

		followDistance = 12;

		loadGraphic("assets/winter/hedgehog.png", true, true, 14,9);
		animation.add("idleside", [12]);
		animation.add("idledown", [13]);
		animation.add("idleup",   [14]);
		animation.add("runside", [0,1,2,3], 15);
		animation.add("rundown", [4,5,6,7], 15);
		animation.add("runup",   [8,9,10,11], 15);


		swimming = false;

		offset.y += height;
		offset.x += width * 0.5;

		//width = 9;
		//height = 6;

		if (Math.random() < 0.5)  {
			animation.play("idleside");
			afacing  = "side";
		}
		else {
		    animation.play("idledown");
			afacing  = "down";
		}
        soundTimer = 200;
        soundTime = 200;
        soundMoving = 120;
        soundArray = ["assets/sounds/f/f1.wav","assets/sounds/f/f2.wav","assets/sounds/f/f3.wav","assets/sounds/f/f4.wav"];
        soundArray = ["assets/sounds/winter/hogg1.ogg","assets/sounds/winter/hogg2.ogg","assets/sounds/winter/hogg3.ogg","assets/sounds/winter/hogg4.ogg"];
    }
}