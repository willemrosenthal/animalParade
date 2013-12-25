package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class CollideShadow extends FlxSprite
{
	public function new(X:Float, Y:Float, Type:String)
	{
		super(X, Y);


		var image:String = "";
		if (Type == "summer") {
			image = "assets/tree_green.png";
			if (Math.random()<0.5)
				image = "assets/tree_orange.png";
			loadGraphic(image, false, false, 28,52);
		}
		if (Type == "cherry") {
			image = "assets/spring/tree_shadow.png";
			loadGraphic(image, false, false, 17,9);
		}
		if (Type == "cattail1" || Type == "cattail2") {
			image = "assets/fall/cattail_shadow_still.png";  //assets/fall/cattail_shadow.png
			loadGraphic(image, true, false, 6,4);
		    //animation.add("flow",   [0, 1], 1);
		    //animation.play("flow");
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