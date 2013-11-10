package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Tree extends FlxSprite
{
	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		var image:String = "assets/tree_green.png";
		if (Math.random()<0.5)
			image = "assets/tree_orange.png";

		loadGraphic(image, false, false, 28,52);

		scale= new FlxPoint(1.75,1.75);
		offset.y += height * 0.70 * scale.y;
		offset.x += width * 0.5 - 5.5;
		width = 8;
		height = 10;


		moves = false;
		immovable = true;
	}


	override public function update():Void
	{
		super.update();
	}
}