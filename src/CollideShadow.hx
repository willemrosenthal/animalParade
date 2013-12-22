package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class CollideShadow extends FlxSprite
{
	public function new(X:Float, Y:Float, Type:Int = 0)
	{
		super(X, Y);


		var image:String = "";
		if (Type == 0) {
			image = "assets/tree_green.png";
			if (Math.random()<0.5)
				image = "assets/tree_orange.png";
			loadGraphic(image, false, false, 28,52);
		}
		if (Type == 1) {
			image = "assets/spring/tree_shadow.png";
			loadGraphic(image, false, false, 17,9);
		}

		x -= width * 0.5;
		y -= height * 0.5;

		moves = false;
		immovable = true;
	}


	override public function update():Void
	{
		super.update();
	}
}