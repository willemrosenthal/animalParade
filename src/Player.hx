package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;
#if cpp
import openfl.ui.Accelerometer;
#end

class Player extends Animal
{
	private var deadzone:Float = 0.13;
	private var zeroPoint:FlxPoint;
	private var pfacing:String = "sit";

	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		//offset.y += height * 0.5;

		Global.paradeX.push(X);
		Global.paradeX.push(Y);

		// adds first animal's place in line
		Global.linePlace.push(followDistance);
		for(i in 0...followDistance)
		{
			Global.paradeX.push(last.x);
			Global.paradeY.push(last.y);
		}

		#if cpp
			var data = Accelerometer.get();
			zeroPoint = new FlxPoint(data.x,data.y);
			Global.zeroPoint = zeroPoint;
		#end
	}

	override public function update():Void
	{
		super.update();

		// removes last + adds new

	/*
		#if cpp
		var data = Accelerometer.get();

		if (Math.abs(data.x - zeroPoint.x) > deadzone)
			velocity.x += (data.x - zeroPoint.x) * 8;
		if (Math.abs(data.y - zeroPoint.y) > deadzone * 0.7)
			velocity.y -= (data.y - zeroPoint.y) * 12;

		if (FlxG.mouse.justPressed) {
			zeroPoint = new FlxPoint(data.x,data.y);
			Global.zeroPoint = zeroPoint;
		}
		#end

		if (FlxG.keyboard.pressed("LEFT", "A"))
			velocity.x -= 3;
		else if (FlxG.keyboard.pressed("RIGHT", "D"))
			velocity.x += 3;

		if (FlxG.keyboard.pressed("UP", "W"))
			velocity.y -= 3;
		else if (FlxG.keyboard.pressed("DOWN", "S"))
			velocity.y += 3;


		if (velocity.x > velocityMax)
			velocity.x = velocityMax;
		if (velocity.x < velocityMax * -1)
			velocity.x = velocityMax * -1;

		if (velocity.y > velocityMax)
			velocity.y = velocityMax;
		if (velocity.y < velocityMax * -1)
			velocity.y = velocityMax * -1;

		if (velocity.x < 2 && velocity.x > -2)
			velocity.x = 0;
		if (velocity.y < 2 && velocity.y > -2)
			velocity.y = 0;
		*/

		velocity.x = Global.move.x;
		velocity.y = Global.move.y;

		if (Math.abs(velocity.x) > Math.abs(velocity.y)) {
			if (velocity.x < 0)
				facing = FlxObject.RIGHT;
			if (velocity.x > 0)
				facing = FlxObject.LEFT;
			animation.play("runside");
			pfacing = "side";
		}
		else if (Math.abs(velocity.x) < Math.abs(velocity.y) && velocity.y > 0) {
			animation.play("rundown");
			pfacing = "down";
		}
		else if (Math.abs(velocity.x) < Math.abs(velocity.y) && velocity.y < 0) {
			animation.play("runup");
			pfacing = "up";
		}
		else if (pfacing == "side" && velocity.x == 0 && velocity.y == 0) animation.play("idleside");
		else if (pfacing == "down" && velocity.x == 0 && velocity.y == 0) animation.play("idledown");
		else if (pfacing == "up" && velocity.x == 0 && velocity.y == 0) animation.play("idleup");

		if (velocity.x != 0 || velocity.y != 0) {
			Global.paradeX.unshift(x);
			Global.paradeY.unshift(y);
			Global.paradeX.pop();
			Global.paradeY.pop();
		}

		x += velocity.x*FlxG.elapsed;
		y += velocity.y*FlxG.elapsed;

		velocity.x *= 0.9;
		velocity.y *= 0.9;
	}
}