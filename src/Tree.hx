package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;

class Tree extends FlxSprite
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
			image = "assets/spring/cherry_tree_big.png";
			loadGraphic(image, false, false, 65,74);
			//loadGraphic(image, false, false, 43,49);
		}



		//scale= new FlxPoint(1.5,1.5);
		offset.y += height;
		offset.x += width * 0.5;


		moves = false;
		immovable = true;
	}


	override public function update():Void
	{
		super.update();
	}
}