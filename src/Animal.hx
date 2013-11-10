package ;

import flixel.FlxG;
import flixel.FlxSprite;

class Animal extends FlxSprite
{
	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		loadGraphic("assets/spaceman.png", true, true, 16);
	}


	override public function update():Void
	{
		super.update();
	}
}