package ;
import flixel.util.FlxPoint;
import flixel.FlxG;
import flixel.util.FlxPoint;

class Global {

	static public var ini:Bool;

	static public var zeroPoint:FlxPoint;

	static public var music:String = "";

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
