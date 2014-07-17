package ;
import flixel.util.FlxPoint;
import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.tile.FlxTilemap;
//import flixel.addons.tile.FlxTilemapExt;

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

	static public var cMap:FlxTilemap;   // current level
	static public var waterTiles:Array<Int> = [];
	static public var waterEdges:Array<Int> = [];
	static public var groundSetA:Array<Int> = [];
    static public var iceTiles:Array<Int> = [];

	static public var move:FlxPoint = new FlxPoint(0,0);

	static public var UIopen:Bool = false;

    static public var levels:Array<String> = ["spring1","fall1","summer1","winter1"];

    static public var onIce:Bool = false;

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
