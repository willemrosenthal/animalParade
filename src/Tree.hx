package ;

import flixel.FlxG;
import flixel.FlxSprite;

class Tree extends FlxSprite
{
	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		var image:String = "assets/tree_green.png";
		if (Math.random()<0.5)
			image = "assets/tree_orange.png";

		loadGraphic(image, false, false, 28,52);

		offset.y += height;
	}


	override public function update():Void
	{
		super.update();
	}
}