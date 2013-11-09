package;

import flash.Lib;
import flixel.FlxGame;
import flixel.FlxG;

class GameClass extends FlxGame
{
	public function new()
	{
		var stageWidth:Int = Lib.current.stage.stageWidth;
		var stageHeight:Int = Lib.current.stage.stageHeight;

		var ratioX:Float = stageWidth / 640;
		var ratioY:Float = stageHeight / 1136;
		var ratio:Float = Math.min(ratioX, ratioY);

		var fps:Int = 60;

		super(Math.ceil(stageWidth / ratio), Math.ceil(stageHeight / ratio), PlayState, 1, fps, fps);
	}
}