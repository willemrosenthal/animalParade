package;

import flash.Lib;
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

import animals.Frog;
import animals.Fox;
import animals.Skunk;

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
	public var hud:FlxGroup;

	private var joystick:Joystick;

	private var player:Player;

	private var zoomControl:ZoomCamera;

	private var animals:Array<String>;

	override public function create():Void
	{
		buildMap();

		animals = ["Frog", "Skunk"];

		gameObjects = new ObjectsGroup();
		add(gameObjects);

		player = new Player(0,0);
		gameObjects.add(player);

		levelMap.x = player.x - levelMap.width * 0.5;
		levelMap.y = player.y - levelMap.height * 0.5;

		//FlxG.camera.follow(player, 1.3);
		FlxG.camera.bounds = levelMap.getBounds();
		FlxG.worldBounds.copyFrom(levelMap.getBounds());

		placeTrees(300);
		placeAnimals(40);

		setupHud();
	}

	private function setupHud():Void {
		hud = new FlxGroup();
		add(hud);

		joystick = new Joystick(Lib.current.stage.stageWidth * 0.5, Lib.current.stage.stageHeight * 0.8);
		joystick.scale = new FlxPoint(1,1);
		hud.add(joystick);

		zoomControl = new ZoomCamera(player);
		add(zoomControl);
		//zoomControl.setZoom()

		hud.setAll("scrollFactor", new FlxPoint(0, 0));
		hud.setAll("cameras", [FlxG.camera]);
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

		var animal:Animal;

		for (n in 0...NumAnimals) {
			animal = Type.createInstance(Type.resolveClass(chooseAnimal()),[Math.random()*lr.width + lr.x,Math.random()*lr.height + lr.y]);
			animalGroup.add(animal);
			gameObjects.add(animal);
		}

		animal = new Frog(player.x, player.y);
		animalGroup.add(animal);
		gameObjects.add(animal);
	}

	private function chooseAnimal():String {
		return "animals." + animals[Math.round(Math.random() * (animals.length - 1))];
	}


	var wait:Int = 0;
	override public function update():Void {
		super.update();
		gameObjects.zSort();
		FlxG.collide(player, treeGroup);
		FlxG.overlap(player, animalGroup, getAnimal);

		wait ++;
		if (wait < 5)
			return;
		if (wait == 5) {
			FlxG.camera.zoom = 2;
			FlxG.camera.width = Math.ceil(Lib.current.stage.stageWidth/FlxG.camera.zoom);
			FlxG.camera.height = Math.ceil(Lib.current.stage.stageHeight/FlxG.camera.zoom);
		}

	}

	private function getAnimal(Player:Player,Animal:Animal):Void {
		if (Animal.pickedUp)
			return;

		animalGroup.remove(Animal);

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

		zoomControl.setZoom(zoomControl.nextZoom * 0.95, 0.001);
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