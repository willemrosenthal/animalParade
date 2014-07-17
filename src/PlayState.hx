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
//import flixel.addons.tile.FlxTileSpecial;
import flixel.ui.FlxButton;
import flixel.util.FlxSpriteUtil;
import openfl.Assets;
import flixel.effects.particles.FlxEmitter;
import flixel.system.FlxSound;

import animals.Frog;
import animals.Fox;
import animals.Skunk;
import animals.Bunny;
import animals.Bee;
import animals.Turtle;
import animals.Monkey;
import animals.Bird;

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
	private var levelMap:FlxTilemap; //FlxTilemapExt;


	private var zeroPoint:FlxPoint;

	public var groundGroup:FlxGroup;
	public var treeGroup:FlxGroup;
	public var collidingObjects:FlxGroup;
	public var collideGroup:FlxGroup;
	public var animalGroup:FlxGroup;
	public var collectedAnimals:FlxGroup;
	public var weatherGroup:FlxGroup;
	public var gameObjects:ObjectsGroup;
	public var hud:FlxGroup;
	public var buttons:FlxGroup;

	private var joystickBG:FlxSprite;
	private var joystick:Joystick;
	private var more:MoreButton;

    private var animalCount:FlxText;

	private var player:Player;
	private var getter:FlxSprite;

	private var zoomControl:ZoomCamera;

    // level data
    public var level:String = "winter1";
	private var animals:Array<String>;
	private var levelMapData:String;
	private var tileSet:String;
	private var playerAnimal:String;
	private var treeNumber:Int;
	private var treeTypes:Array<String>;
	private var objectNumber:Int;
	private var objectTypes:Array<String>;

    private var levelButtons:Array<LevelButton>;

	private var gameZoom:Float = 5;

	private var animalTotal:Int = 13;
	private var animalsCollected:Int = -1;

	private var music:FlxEmitter;

    public function new(Level:String = "winter1") {
        super();
	    level = Level;
	    clearData();
        setMusic();
    }

    private function clearData():Void {
        Global.move = new FlxPoint(0,0);
	    Global.paradeX = [];
	    Global.paradeY = [];
	    Global.linePlace = [];
    }

	override public function create():Void
	{
	    levelPresets();
		buildMap();

        collidingObjects = new FlxGroup();

		Global.game = this;
		Global.gameZoom = gameZoom;

        groundGroup = new FlxGroup();
        add(groundGroup);

        collideGroup = new FlxGroup();
        add(collideGroup);

		gameObjects = new ObjectsGroup();
		add(gameObjects);

		weatherGroup = new FlxGroup();
		add(weatherGroup);

		hud = new FlxGroup();
		add(hud);

		buttons = new FlxGroup();
        add(buttons);

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


        animatingTiles();

		setupHud();

		placeAnimals(animalTotal);
		placeTrees(treeNumber);
		placeObjects(objectNumber);
		setupWeather();
	}

	private function setupHud():Void {
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

        levelButtons = new Array<LevelButton>();
        var ba:Array<FlxPoint> = [new FlxPoint(7,33), new FlxPoint(68,33), new FlxPoint(7,93)];
        for (n in 0...Global.levels.length) {
            levelButtons.push(new LevelButton(ba[n].x,ba[n].y,Global.levels[n]));
            buttons.add(levelButtons[n]);
        }
        buttons.visible = false;

        more = new MoreButton(113,4,buttons);
        hud.add(more);

        //_status = new FlxText(FlxG.width - 160 - 2, 2, 160, "Collect coins.");
        //_status.setFormat(null, 8, FlxColor.WHITE, "right", FlxText.BORDER_NONE, FlxColor.BLACK);

		zoomControl = new ZoomCamera(player);
		add(zoomControl);
		//zoomControl.setZoom()

		hud.setAll("scrollFactor", new FlxPoint(0, 0));
		hud.setAll("cameras", [FlxG.camera]);


		buttons.setAll("scrollFactor", new FlxPoint(0, 0));
		buttons.setAll("cameras", [FlxG.camera]);
	}


	private function setupWeather():Void {
		var lr:FlxRect = levelMap.getBounds();

        if (level == "spring1") {
            for (n in 0...60) {
                //var pollen:Pollen = new Pollen(Math.random()* FlxG.width, Math.random()* FlxG.height);
                var pollen:Pollen = new Pollen(Math.random()*lr.width + lr.x, Math.random()*lr.height + lr.y);
                weatherGroup.add(pollen);
            }
        }

        if (level == "fall1") {

            for (n in 0...180) {
                var rain:Rain = new Rain(Math.random()*lr.width + lr.x, Math.random()*lr.height + lr.y, Math.random() * 30 + 60);
                weatherGroup.add(rain);
            }
            for (n in 0...2) {
                var cloud:Clouds = new Clouds(Math.random()*(lr.width * 0.25) + lr.x, Math.random()*(lr.height * 0.25) + lr.y, 5);
                cloud.x += (lr.width * 0.5) * n ;
                cloud.y += (lr.height * 0.5) * n;
                weatherGroup.add(cloud);
            }
            for (n in 0...50) {
                var rainDrop:RainDrop = new RainDrop(Math.random()*lr.width + lr.x, Math.random()*lr.height + lr.y);
                rainDrop.alpha = 0.8;
                gameObjects.add(rainDrop);
            }
        }



        if (level == "summer1") {
            var ray:LightRays = new LightRays(0,0);
            weatherGroup.add(ray);
            ray = new LightRays(0,0,1);
            weatherGroup.add(ray);
            weatherGroup.setAll("scrollFactor", new FlxPoint(0.25, .1));
            weatherGroup.setAll("cameras", [FlxG.camera]);
        }

		//weatherGroup.setAll("scrollFactor", new FlxPoint(0, 0));
		//weatherGroup.setAll("cameras", [FlxG.camera]);
	}


	private function buildMap():Void {
		levelMap = new FlxTilemap();
		levelMap.tileScaleHack = 1.0;

		levelMap.loadMap(Assets.getText(levelMapData), tileSet, TILE_WIDTH, TILE_HEIGHT, FlxTilemap.OFF,0);
		add(levelMap);

		//specialTiles();
		Global.cMap = levelMap;
	}

	private function animatingTiles() {
        var tile:AnimatedTile;
        var loc:Array<FlxPoint>;
        var tiles:Array<Int> = [];

        if (level == "fall1")
            tiles = [43,48,49,55,56];
        if (level == "summer1")
            tiles = [38,40,41,42,43,44,45,46,47,48,49,51,52,53,54,55,56,57,58,59,60,61,62,63,64];

        if (tiles.length > 0) {
            for (n in 0...tiles.length) {
                if (levelMap.getTileInstances(tiles[n]) != null) {
                    loc = levelMap.getTileCoords(tiles[n],false);
                    for (i in 0...loc.length) {
                        tile = new AnimatedTile(loc[i].x + 1,loc[i].y + 1,tiles[n],level);
                        groundGroup.add(tile);
                    }
                }
            }
        }

	}

    /*
	private function specialTiles() {
	    var sa:Array<FlxTileSpecial> = new Array<FlxTileSpecial>();
        if (level == "fall1") {
            var s:FlxTileSpecial = new FlxTileSpecial(43,false,false,0);
            s.addAnimation([43,44,45,44],4);
            sa.push(s);
            var s:FlxTileSpecial = new FlxTileSpecial(48,false,false,0);
            s.addAnimation([48,50,52,50],4);
            sa.push(s);
            var s:FlxTileSpecial = new FlxTileSpecial(49,false,false,0);
            s.addAnimation([49,51,53,51],4);
            sa.push(s);
            var s:FlxTileSpecial = new FlxTileSpecial(54,false,false,0);
            s.addAnimation([55,57,59,57],4);
            sa.push(s);
            var s:FlxTileSpecial = new FlxTileSpecial(56,false,false,0);
            s.addAnimation([56,58,60,58],4);
            sa.push(s);
            //levelMap.setSpecialTiles(sa);
        }
	}
	*/


	private function placeTrees(NumTrees:Int) {
		var lr:FlxRect = levelMap.getBounds();
		treeGroup = new FlxGroup();

		for (n in 0...NumTrees) {
			var tree:Tree = new Tree(Math.random()*lr.width + lr.x, Math.random()*lr.height + lr.y, treeTypes);
			//treeGroup.add(tree);
			gameObjects.add(tree);
			var treeShadow:CollideShadow = new CollideShadow(tree.x, tree.y, tree.tree);
			collideGroup.add(treeShadow);
		}
	}

	private function placeObjects(NumObjects:Int) {
		var lr:FlxRect = levelMap.getBounds();
        var nextObj:String;
        var object:WorldObject = new WorldObject(0,0);

        if (objectTypes != null) {
            for (n in 0...NumObjects) {
                nextObj = objectTypes[Math.round(Math.random() * (objectTypes.length - 1))];
                if (nextObj == "innerTube")
                    object = new InnerTube(Math.random()*lr.width + lr.x, Math.random()*lr.height + lr.y);
                //gameObjects.add(object);
                collidingObjects.add(object);
                collideGroup.add(object);
            }
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
		FlxG.collide(collidingObjects,collideGroup, bounce);
		FlxG.collide(player,collidingObjects, bounce);
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

	private function bounce(Obj1:FlxSprite,Obj2:FlxSprite):Void {
	    if ((Std.is(Obj1, InnerTube) || (Std.is(Obj1, Player))) && Std.is(Obj2, InnerTube)) {
            if (Obj1.x < Obj2.x && Obj1.velocity.x > 0)
                Obj1.velocity.x *= -1;
            if (Obj1.x < Obj2.x && Obj2.velocity.x < 0)
                Obj2.velocity.x *= -1;

            if (Obj1.x > Obj2.x && Obj1.velocity.x < 0)
                Obj1.velocity.x *= -1;
            if (Obj1.x > Obj2.x && Obj2.velocity.x > 0)
                Obj2.velocity.x *= -1;

            if (Obj1.y < Obj2.y && Obj1.velocity.y > 0)
                Obj1.velocity.y *= -1;
            if (Obj1.y < Obj2.y && Obj2.velocity.y < 0)
                Obj2.velocity.y *= -1;

            if (Obj1.y > Obj2.y && Obj1.velocity.y < 0)
                Obj1.velocity.y *= -1;
            if (Obj1.y > Obj2.y && Obj2.velocity.y > 0)
                Obj2.velocity.y *= -1;
        }
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

    private function setMusic():Void
    {
        if (level == "summer1") {                       // ["spring1","fall1","summer1"]
            playMusic("assets/sounds/ambiant/beach.mp3",1.4);
            playMusic("assets/sounds/ambiant/beach2.mp3",1.4);
        }
        if (level == "fall1")
            playMusic("assets/sounds/ambiant/rain4_l.mp3",0.5);

         if (level == "spring1") {
             playMusic("assets/sounds/ambiant/spring1.wav",0.8);
             playMusic("assets/sounds/ambiant/spring3.mp3",0.8);
        }

    }

    private var bgmusic:FlxSound;
    private function playMusic(Music:String, Vol:Float = 1):Void
    {
        bgmusic = new FlxSound();
        add(bgmusic);

        bgmusic.loadEmbedded(Music, true);
        bgmusic.survive = true;
        bgmusic.fadeIn(0.5);
        bgmusic.play();
        bgmusic.volume = Vol;
    }

	private function levelPresets():Void {
        if (level == "spring1") {
            animals = ["Bunny","Bee"];
            levelMapData = "assets/spring/spring_map1.txt";
            tileSet = "assets/spring/spring_tiles.png";
            playerAnimal = "Bunny";
            treeNumber = 15;
            animalTotal = 13;
            Global.waterTiles = [];
            Global.waterEdges = [];
            Global.groundSetA = [];
            treeTypes = ["cherry"];
        }
        if (level == "fall1") {
            animals = ["Turtle","Frog","Skunk"]; //"Skunk"
            levelMapData = "assets/fall/fall_map1.txt";
            tileSet = "assets/fall/fall_tiles.png";
            playerAnimal = "Frog";
            treeNumber = 25;
            animalTotal = 13;
            Global.waterTiles = [41,42,43,46,48,49,55,56];
            Global.waterEdges = [29,30,35,36];
            Global.groundSetA = [];
            treeTypes = ["cattail1","cattail2"];
        }
        if (level == "summer1") {
            animals = ["Bird","Monkey"];
            levelMapData = "assets/summer/summer_map1.txt";
            tileSet = "assets/summer/summer_tiles.png";
            playerAnimal = "Monkey";
            treeNumber = 30;
            objectNumber = 9;
            animalTotal = 13;
            Global.waterTiles = [39,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64];
            Global.waterEdges = [];
            Global.groundSetA = [1,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36];
            treeTypes = ["palm"];
            objectTypes = ["innerTube"];
        }
        if (level == "winter1") {
            animals = ["Bird","Monkey"];
            levelMapData = "assets/winter/winter.txt";
            tileSet = "assets/winter/winterset.png";
            playerAnimal = "Monkey";
            treeNumber = 30;
            objectNumber = 9;
            animalTotal = 13;
            Global.waterTiles = [];
            Global.waterEdges = [];
            Global.groundSetA = [1,3,4,5];
            treeTypes = ["evergreen"];
        }
    }
}