package ;

import flixel.FlxG;
import flixel.FlxSprite;

class Animal extends FlxSprite
{

	private var ImgPlayer:String = "sprites/ace.png";

	public var moveSpeed:Float = 300;

	private var baseSpeed:Int = 300;
	private var addAgression:Int = 400;

	private var moveChangeSpeed:Float= 1;

	private var currentDes:FlxPoint;
	private var moveDir:FlxPoint;
	private var slowRange:Float = 40;


	public function new(X:Int, Y:Int)
	{
		super(X, Y);

		loadGraphic("assets/spaceman.png", true, true, 8);
	}


	override public function update():Void
	{
		super.update();
	}

	override function updateMotion():Void
	{
		super.updateMotion();
	}
}