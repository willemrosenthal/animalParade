package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class AnimatedTile extends FlxSprite
{
	public function new(X:Float, Y:Float, Type:Int)
	{
		super(X, Y);

		var image:String = "";
		if (Type == 43) {
			image = "assets/fall/water/water_anim1.png";
			loadGraphic(image, true, false, 16,16);
		    animation.add("flow",   [0, 1, 2, 1], 2);
		}
		if (Type == 48) {
			image = "assets/fall/water/water_anim_lf_rt.png";
			loadGraphic(image, true, false, 16,16);
		    animation.add("flow",   [0, 2, 4, 2], 2);
		}
		if (Type == 49) {
			image = "assets/fall/water/water_anim_lf_rt.png";
			loadGraphic(image, true, false, 16,16);
		    animation.add("flow",   [1, 3, 5, 3], 2);
		}
		if (Type == 55) {
			image = "assets/fall/water/water_anim_ends.png";
			loadGraphic(image, true, false, 16,16);
		    animation.add("flow",   [0, 2, 4, 2], 2);
		}
		if (Type == 56) {
			image = "assets/fall/water/water_anim_ends.png";
			loadGraphic(image, true, false, 16,16);
		    animation.add("flow",   [1, 3, 5, 3], 2);
		}

		animation.play("flow");

		moves = false;
		immovable = true;
	}
}