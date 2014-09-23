package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.group.FlxGroup;
import flash.Lib;

class MoreButton extends Button
{

    public var plusState:Bool = true;
    private var buttonGroup:FlxGroup;

	public function new(X:Float, Y:Float, Buttons:FlxGroup)
	{
		super(X, Y);

        buttonGroup = Buttons;

		loadGraphic("assets/more_button.png", true, false, 11,11);
		animation.add("plus", [0]);
		animation.add("x", [1]);
		animation.play("plus");


        offset.x -= width * 0.4;
        offset.y -= height * 0.4;
        x -= width * 0.4;
        y -= height * 0.4;
        width *= 1.8;
        height *= 1.8;
	}


	override public function update():Void
	{
		super.update();

        if (released && plusState) {
		    animation.play("x");
		    buttonGroup.visible = true;
		    plusState = !plusState;
            Global.UIopen = true;
            released = false;
        }

        if (released && !plusState) {
		    animation.play("plus");
		    buttonGroup.visible = false;
		    plusState = !plusState;
            Global.UIopen = false;
            released = false;
        }
	}
}