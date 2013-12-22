package;

import flash.Lib;
import flixel.FlxGame;
import flixel.FlxG;
import flixel.FlxCamera;

class GameClass extends FlxGame
{
	public function new()
	{
		var stageWidth:Int = Lib.current.stage.stageWidth;
		var stageHeight:Int = Lib.current.stage.stageHeight;

		var zoom:Float = 5;
		var ratioX:Float = stageWidth / zoom;
		var ratioY:Float = stageHeight / zoom;
		var ratio:Float = Math.min(ratioX, ratioY);

		var fps:Int = 60;

		super(Std.int(Math.ceil(ratioX)), Std.int(Math.ceil(ratioY)), PlayState, zoom, fps, fps);
		//FlxG.debugger.visualDebug = true;   // dont forget to turn debugging on in the nmml file!!!
	}
}