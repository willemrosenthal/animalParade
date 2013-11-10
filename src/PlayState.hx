package;

import flixel.FlxG;
import flixel.util.FlxRect;
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
	private var levelMap:FlxTilemap;


	private var zeroPoint:FlxPoint;

	public var treeGroup:FlxGroup;
	public var gameObjects:ObjectsGroup;

	private var player:Player;



	override public function create():Void
	{
		buildMap();

		gameObjects = new ObjectsGroup();
		add(gameObjects);

		player = new Player(0,0);
		gameObjects.add(player);

		levelMap.x = player.x - levelMap.width * 0.5;
		levelMap.y = player.y - levelMap.height * 0.5;

		FlxG.camera.follow(player, 1.3);
		FlxG.camera.bounds = levelMap.getBounds();
		FlxG.worldBounds.copyFrom(levelMap.getBounds());

		placeTrees(600);
	}

	private function buildMap():Void {
		levelMap = new FlxTilemap();
		levelMap.tileScaleHack = 1.0;
		levelMap.loadMap(SimpleMap.newMap(50,50), "assets/simple_tile.png", TILE_WIDTH, TILE_HEIGHT, FlxTilemap.OFF);
		//levelMap.loadMap(MakeMap.newMap(50,50,60,120,5,1), "assets/ground_full2.png", TILE_WIDTH, TILE_HEIGHT, FlxTilemap.OFF);
		add(levelMap);
	}

	private function placeTrees(NumTrees:Int){
		var lr:FlxRect = levelMap.getBounds();
		treeGroup = new FlxGroup();

		for (n in 0...NumTrees) {
			var tree:Tree = new Tree(Math.random()*lr.width + lr.x, Math.random()*lr.height + lr.y);
			treeGroup.add(tree);
			gameObjects.add(tree);
		}
	}

	override public function update():Void
	{
		super.update();
		gameObjects.zSort();
		FlxG.collide(player, treeGroup);
	}
}