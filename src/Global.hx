package ;
import flixel.util.FlxPoint;
import flixel.FlxG;
import flixel.group.FlxGroup;

class Global {

	static public var ini:Bool;

	static public var zeroPoint:FlxPoint;

	static public var music:String = "";

	static public var paradeX:Array<Float> = [];
	static public var paradeY:Array<Float> = [];
	static public var linePlace:Array<Int> = [];

	static public var mouseEnabled:Bool;
	static public var firstTouchId:Int = -1;
	static public var secondTouchId:Int = -1;
	static public var moveTouched:Bool;
	static public var firstTouch:FlxPoint;
	static public var firstTouchTo:FlxPoint;

	static public var gameZoom:Float;
	static public var game:FlxGroup;

	static public var move:FlxPoint = new FlxPoint(0,0);

/*
	static public function playMusic(Music:String):Void
	{
		if (music != Music) {
			FlxG.playMusic(Music);
		}
		music = Music;
	}
	*/

	static public function levelStart():Void
	{
		ini = true;
	}


	public function new() {
	}
}
