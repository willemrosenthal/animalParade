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
	public var animalGroup:FlxGroup;
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

		placeTrees(300);
		placeAnimals(40);
	}

	private function buildMap():Void {
		levelMap = new FlxTilemap();
		levelMap.tileScaleHack = 1.0;
		levelMap.loadMap(SimpleMap.newMap(50,50), "assets/simple_tile.png", TILE_WIDTH, TILE_HEIGHT, FlxTilemap.OFF);
		//levelMap.loadMap(MakeMap.newMap(50,50,60,120,5,1), "assets/ground_full2.png", TILE_WIDTH, TILE_HEIGHT, FlxTilemap.OFF);
		add(levelMap);
	}

	private function placeTrees(NumTrees:Int) {
		var lr:FlxRect = levelMap.getBounds();
		treeGroup = new FlxGroup();

		for (n in 0...NumTrees) {
			var tree:Tree = new Tree(Math.random()*lr.width + lr.x, Math.random()*lr.height + lr.y);
			treeGroup.add(tree);
			gameObjects.add(tree);
		}
	}

	private function placeAnimals(NumAnimals:Int) {
		var lr:FlxRect = levelMap.getBounds();
		animalGroup = new FlxGroup();

		for (n in 0...NumAnimals) {
			var animal:Animal = new Animal(Math.random()*lr.width + lr.x, Math.random()*lr.height + lr.y);
			animalGroup.add(animal);
			gameObjects.add(animal);
		}
	}

	override public function update():Void {
		super.update();
		gameObjects.zSort();
		FlxG.collide(player, treeGroup);
		FlxG.overlap(player, animalGroup, getAnimal);
	}

	private function getAnimal(Player:Player,Animal:Animal):Void {
		if (Animal.pickedUp)
			return;

		var last:FlxPoint = new FlxPoint(Global.paradeX[Global.paradeX.length -1],Global.paradeY[Global.paradeY.length -1]);
		var followDistance = Animal.followDistance;

		for(i in 0...followDistance)
		{
			Global.paradeX.push(last.x);
			Global.paradeY.push(last.y);
		}

		Global.linePlace.push(followDistance);
		Animal.linePlace = Global.linePlace.length - 1;
		Animal.fd = getTotalFollowDistance(Animal.linePlace);
		Animal.pickedUp = true;
		trace(Global.linePlace);
	}

	private function getTotalFollowDistance(LinePos:Int):Int {
		var totalDistance:Int = 0;
		for(i in 0...LinePos)
		{
			totalDistance += Global.linePlace[i];
		}
		return totalDistance;
	}
}