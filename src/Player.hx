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

	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		#if cpp
			var data = Accelerometer.get();
			zeroPoint = new FlxPoint(data.x,data.y);
			Global.zeroPoint = zeroPoint;
		#end
	}

	override public function update():Void
	{
		super.update();
		#if cpp
		var data = Accelerometer.get();

		if (Math.abs(data.x - zeroPoint.x) > deadzone)
			x += (data.x - zeroPoint.x) * 8;
		if (Math.abs(data.y - zeroPoint.y) > deadzone * 0.7)
			y -= (data.y - zeroPoint.y) * 12;

		if (data.x < zeroPoint.x)
			facing = FlxObject.LEFT;
		else if (data.x > zeroPoint.x)
			facing = FlxObject.RIGHT;


		if (FlxG.mouse.justPressed) {
			zeroPoint = new FlxPoint(data.x,data.y);
			Global.zeroPoint = zeroPoint;
		}
		#end

		if (FlxG.keyboard.pressed("LEFT", "A"))
			x -= 5;
		else if (FlxG.keyboard.pressed("RIGHT", "D"))
			x += 5;

		if (FlxG.keyboard.pressed("UP", "W"))
			y -= 5;
		else if (FlxG.keyboard.pressed("DOWN", "S"))
			y += 5;
	}
}