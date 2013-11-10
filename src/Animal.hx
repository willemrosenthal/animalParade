package ;

import flixel.FlxG;
import flixel.FlxSprite;

class Animal extends FlxSprite
{

	public var velocityMax:Float = 100;
	public var vx:Float = 50;
	public var vy:Float = 80;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		loadGraphic("assets/fox.png", true, true, 40,30);
		animation.add("idleside", [0]);
		animation.add("idledown", [3]);
		animation.add("runside", [1, 2, 0], 12);
		animation.add("rundown", [4, 5, 6, 7], 12);
	}


	override public function update():Void
	{
		super.update();
	}
}