package;

import flash.Lib;
import flixel.FlxG;
import flixel.util.FlxRect;
import flixel.group.FlxGroup;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxPoint;
import flixel.text.FlxText;
import flixel.tile.FlxTilemap;
import flixel.ui.FlxButton;
import flixel.util.FlxSpriteUtil;
import openfl.Assets;
import flixel.effects.particles.FlxEmitter;

import animals.Frog;
import animals.Fox;
import animals.Skunk;
import animals.Bunny;
import animals.Bee;

#if cpp
import openfl.ui.Accelerometer;
#end

class PlayState extends FlxState
{
		/**
         * Some static constants for the size of the tilemap tiles
         */
	inline static private var TILE_WIDTH:Int = 16;
	inline static private var TILE_HEIGHT:Int = 16;

		/**
         * The FlxTilemap we're using
         */
	private var levelMap:FlxTilemap;


	private var zeroPoint:FlxPoint;

	public var treeGroup:FlxGroup;
	public var collideGroup:FlxGroup;
	public var animalGroup:FlxGroup;
	public var collectedAnimals:FlxGroup;
	public var weatherGroup:FlxGroup;
	public var gameObjects:ObjectsGroup;
	public var hud:FlxGroup;

	private var joystickBG:FlxSprite;
	private var joystick:Joystick;

    private var animalCount:FlxText;

	private var player:Player;
	private var getter:FlxSprite;

	private var zoomControl:ZoomCamera;

    // level data
    public var level:String = "spring1";
	private var animals:Array<String>;
	private var levelMapData:String;
	private var tileSet:String;
	private var playerAnimal:String;
	private var treeNumber:Int;


	private var gameZoom:Float = 5;

	private var animalTotal:Int = 13;
	private var animalsCollected:Int = -1;

	private var music:FlxEmitter;

	override public function create():Void
	{
	    levelPresets();
		buildMap();

		Global.game = this;
		Global.gameZoom = gameZoom;

        collideGroup = new FlxGroup();
        add(collideGroup);

		gameObjects = new ObjectsGroup();
		add(gameObjects);

		player = new Player(levelMap.width * 0.5,levelMap.height * 0.5);
		gameObjects.add(player);

		getter = new FlxSprite(player.x, player.y,"assets/getter.png");
        getter.visible = false;
        add(getter);

		//levelMap.x = player.x - levelMap.width * 0.5;
		//levelMap.y = player.y - levelMap.height * 0.5;

		//FlxG.camera.follow(player, 1.3);
		FlxG.camera.bounds = levelMap.getBounds();
		FlxG.worldBounds.copyFrom(levelMap.getBounds());


		setupHud();

		placeAnimals(animalTotal);
		placeTrees(treeNumber);
		setupWeather();
	}

	private function setupHud():Void {
		hud = new FlxGroup();
		add(hud);

		var stageMidX:Float = Lib.current.stage.stageWidth * 0.5 / gameZoom;
		var stageMidY:Float = Lib.current.stage.stageHeight * 0.5 / gameZoom;

        joystickBG = new FlxSprite(stageMidX, stageMidY * 1.6,"assets/joystick_ring_small.png");   //"assets/joystick_ring_big.png"
        joystickBG.x -=  joystickBG.width * 0.5;
        joystickBG.y -=  joystickBG.height * 0.5;
        hud.add(joystickBG);

		joystick = new Joystick(stageMidX, stageMidY * 1.6, gameZoom);
		joystick.scale = new FlxPoint(1,1);
		hud.add(joystick);

		animalCount = new FlxText(0, 2, 128, "0/" + animalTotal);
        animalCount.setFormat(null, 8, FlxColor.WHITE, "center", FlxText.BORDER_NONE, FlxColor.BLACK);
        hud.add(animalCount);

        //_status = new FlxText(FlxG.width - 160 - 2, 2, 160, "Collect coins.");
        //_status.setFormat(null, 8, FlxColor.WHITE, "right", FlxText.BORDER_NONE, FlxColor.BLACK);

		zoomControl = new ZoomCamera(player);
		add(zoomControl);
		//zoomControl.setZoom()

		hud.setAll("scrollFactor", new FlxPoint(0, 0));
		hud.setAll("cameras", [FlxG.camera]);
	}


	private function setupWeather():Void {
		var lr:FlxRect = levelMap.getBounds();

		weatherGroup = new FlxGroup();
		add(weatherGroup);

        if (level == "spring1") {
            for (n in 0...60) {
                //var pollen:Pollen = new Pollen(Math.random()* FlxG.width, Math.random()* FlxG.height);
                var pollen:Pollen = new Pollen(Math.random()*lr.width + lr.x, Math.random()*lr.height + lr.y);
                weatherGroup.add(pollen);
            }
        }

		//weatherGroup.setAll("scrollFactor", new FlxPoint(0, 0));
		//weatherGroup.setAll("cameras", [FlxG.camera]);
	}


	private function buildMap():Void {
		levelMap = new FlxTilemap();
		levelMap.tileScaleHack = 1.0;

		levelMap.loadMap(Assets.getText(levelMapData), tileSet, TILE_WIDTH, TILE_HEIGHT, FlxTilemap.OFF);
		//levelMap.loadMap(MakeMap.newMap(50,50,60,120,5,1), "assets/ground_full2.png", TILE_WIDTH, TILE_HEIGHT, FlxTilemap.OFF);
		add(levelMap);
	}

	private function placeTrees(NumTrees:Int) {
		var lr:FlxRect = levelMap.getBounds();
		treeGroup = new FlxGroup();

		for (n in 0...NumTrees) {
			var tree:Tree = new Tree(Math.random()*lr.width + lr.x, Math.random()*lr.height + lr.y, 1);
			treeGroup.add(tree);
			gameObjects.add(tree);
			var treeShadow:CollideShadow = new CollideShadow(tree.x, tree.y, 1);
			collideGroup.add(treeShadow);
		}
	}

	private function placeAnimals(NumAnimals:Int) {
		var lr:FlxRect = levelMap.getBounds();
		animalGroup = new FlxGroup();
		collectedAnimals = new FlxGroup();

		var animal:Animal;
		var margine:Float = 20;
		var widthRange:Float = lr.width + lr.x - margine;
		var heightRange:Float = lr.height + lr.y - margine;

		for (n in 0...NumAnimals) {
			animal = Type.createInstance(Type.resolveClass(chooseAnimal()),[Math.random()*widthRange + (margine*0.5),Math.random()*heightRange + (margine*0.5)]);
			animalGroup.add(animal);
			gameObjects.add(animal);
		}

        // player animal
		animal = Type.createInstance(Type.resolveClass("animals." + playerAnimal),[getter.x,getter.y]);
		animalGroup.add(animal);
		gameObjects.add(animal);
		getAnimal(getter,animal);
	}

	private function chooseAnimal():String {
		return "animals." + animals[Math.round(Math.random() * (animals.length - 1))];
	}


	var wait:Int = 0;
	override public function update():Void {
		super.update();
		gameObjects.zSort();


		getter.x = player.x - getter.width * 0.5;
		getter.y = player.y - getter.height * 0.5;

		//FlxG.collide(player, treeGroup);
		FlxG.collide(player, collideGroup);
		FlxG.overlap(getter, animalGroup, getAnimal);

        /*
		wait ++;
		if (wait < 5)
			return;
		if (wait == 5) {
			FlxG.camera.zoom = gameZoom;
			FlxG.camera.width = Math.ceil(Lib.current.stage.stageWidth/FlxG.camera.zoom);
			FlxG.camera.height = Math.ceil(Lib.current.stage.stageHeight/FlxG.camera.zoom);
		}
		*/

	}

	private function getAnimal(Player:FlxSprite,Animal:Animal):Void {
		if (Animal.pickedUp)
			return;

		animalGroup.remove(Animal);
		collectedAnimals.add(Animal);

        animalsCollected ++;
		animalCount.text =   animalsCollected + "/" + animalTotal;

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
		if (Animal.musicOn)
            Animal.music.start(false,0.6,0.6);

		//zoomControl.setZoom(zoomControl.nextZoom * 0.95, 0.001);
	}

	private function getTotalFollowDistance(LinePos:Int):Int {
		var totalDistance:Int = 0;
		for(i in 0...LinePos)
		{
			totalDistance += Global.linePlace[i];
		}
		return totalDistance;
	}


	private function levelPresets():Void {
        if (level == "spring1") {
            animals = ["Bunny","Bee"];
            levelMapData = "assets/spring/spring_map1.txt";
            tileSet = "assets/spring/spring_tiles.png";
            playerAnimal = "Bunny";
            treeNumber = 15;
            animalTotal = 13;
        }
    }
}