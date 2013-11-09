package ;
import nme.events.EventDispatcher;
import org.flixel.util.FlxPoint;
import org.flixel.FlxG;
import org.flixel.FlxSound;

class Global {

	static public var ini:Bool;

	static public var music:String = "";


	static public function playMusic(Music:String):Void
	{
		if (music != Music) {
			FlxG.playMusic(Music);
		}
		music = Music;
	}

	static public function levelStart():Void
	{
		ini = true;
	}


	public function new() {
	}
}
