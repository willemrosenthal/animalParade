package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Snow extends WeatherParticle
{
    var timer:Int = 0;
    var timerMax:Int = 0;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		loadGraphic("assets/winter/snow.png", true, false, 5,5);


        animation.add("1",  [0]);
        animation.add("2",  [1]);
        animation.add("3",  [2]);
        animation.add("4",  [3]);
        animation.add("5",  [4]);

        animation.add("6",  [5]);
        animation.add("7",  [6]);
        animation.add("8",  [7]);
        animation.add("9",  [8]);
        animation.add("10",  [9]);

        animation.play(Std.string(Math.ceil(Math.random() * 9.9 + 0.05)));



        acceleration.y = 300;
        acceleration.x = -50;
        maxVelocity.y = Math.random() * 25 + 10;
        maxVelocity.x = Math.random() * 15 + 10;

        timerMax = Math.round(Math.random() * 200 + 100);

		moves = true;
	}


	override public function update():Void
	{
		super.update();

		if (acceleration.y < 10)
		    acceleration.y +=  Math.random() * 20;

        timer ++;
        if (timer == timerMax) {
           acceleration.y = Math.random() * -200 - 200;
           acceleration.x = Calcs.plusOrMinus(Math.random() * 80);
           timerMax = Math.round(Math.random() * 200 + 100);
           timer = 0;
        }
	}
}