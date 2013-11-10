package;

import flixel.FlxG;
import flixel.group.FlxGroup;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxPoint;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxButton;
import flixel.util.FlxSpriteUtil;
import openfl.Assets;
#if cpp
import openfl.ui.Accelerometer;
#end

class PlayState extends FlxState
{
		/**
         * Some static constants for the size of the tilemap tiles
         */
	inline static private var TILE_WIDTH:Int = 32;
	inline static private var TILE_HEIGHT:Int = 32;

		/**
         * The FlxTilemap we're using
         */
	private var _levelMap:FlxTilemap;


	private var zeroPoint:FlxPoint;

	public var gameObjects:FlxGroup;

	private var player:Player;



	override public function create():Void
	{
		buildMap();

		gameObjects = new FlxGroup();
		add(gameObjects);

		player = new Player(0,0);
		gameObjects.add(player);

		_levelMap.x = player.x - _levelMap.width * 0.5;
		_levelMap.y = player.y - _levelMap.height * 0.5;

		FlxG.camera.follow(player, 2);
		FlxG.camera.bounds = _levelMap.getBounds();
		FlxG.worldBounds.copyFrom(_levelMap.getBounds());
	}

	private function buildMap():Void {
		_levelMap = new FlxTilemap();
		_levelMap.tileScaleHack = 1.0;
		_levelMap.loadMap(MakeMap.newMap(200,100,60,120,5,1), "assets/ground_full2.png", TILE_WIDTH, TILE_HEIGHT, FlxTilemap.OFF);
		add(_levelMap);
	}

	override public function update():Void
	{
		super.update();
	}

	override public function draw():Void
	{
		super.draw();
		#if !FLX_NO_DEBUG
                _highlightBox.drawDebugOnCamera(FlxG.camera);
		#end
	}
}