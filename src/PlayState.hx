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
//import flash.sensors.Accelerometer;

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

	private var _player:FlxSprite;

	private var zeroPoint:FlxPoint;

	public var gameObjects:FlxGroup;



	override public function create():Void
	{
		buildMap();
		gameObjects = new FlxGroup();
		add(gameObjects);
		setupPlayer();
		_levelMap.x = _player.x - _levelMap.width * 0.5;
		_levelMap.y = _player.y - _levelMap.height * 0.5;

		//FlxG.camera.zoom = 3;
		FlxG.camera.follow(_player, 2);
		FlxG.camera.bounds = _levelMap.getBounds();
		FlxG.worldBounds.copyFrom(_levelMap.getBounds());
		//MakeMap.newMap(30,30,40,50,10);
	}

	private function buildMap():Void {
		_levelMap = new FlxTilemap();
		_levelMap.tileScaleHack = 1.0;
		_levelMap.loadMap(MakeMap.newMap(200,100,40,100,15,.2), "assets/ground_full2.png", TILE_WIDTH, TILE_HEIGHT, FlxTilemap.OFF);
		add(_levelMap);
	}

	private function setupPlayer():Void
	{
		//_player = new FlxSprite(64, 220);
		_player = new FlxSprite(16, 16);
		_player.loadGraphic("assets/fox.png", true, true, 16);

		// Bounding box tweaks
		_player.setSize(14, 14);
		_player.offset.set(1, 1);

		// Basic player physics
		_player.maxVelocity.x = 200;
		_player.maxVelocity.y = 200;
		_player.drag.x = _player.maxVelocity.x * 4;
		//_player.drag.x = 640;
		//_player.maxVelocity.set(120, 120);

		// Animations
		//_player.animation.add("idle", [0]);
		//_player.animation.add("run", [1, 2, 3, 0], 12);
		//_player.animation.add("jump", [4]);

		gameObjects.add(_player);
		#if cpp
			var data = Accelerometer.get();
			zeroPoint = new FlxPoint(data.x,data.y);
		#end
	}

	override public function update():Void
	{
		#if cpp
		if (FlxG.mouse.justPressed) {
			var data = Accelerometer.get();
			zeroPoint = new FlxPoint(data.x,data.y);
		}
		#end
		updatePlayer();
		super.update();
	}

	private function updatePlayer():Void
	{
		//FlxSpriteUtil.screenWrap(_player);

		var data;
		var deadzone:Float = 0.13;

		// MOVEMENT
		#if cpp
			data = Accelerometer.get();

		if (Math.abs(data.x - zeroPoint.x) > deadzone)
			_player.x += (data.x - zeroPoint.x) * 8;
		if (Math.abs(data.y - zeroPoint.y) > deadzone * 0.7)
			_player.y -= (data.y - zeroPoint.y) * 12;

		//accText.text = data.x + " " + data.y + " :: " + zeroPoint.x + " " +zeroPoint.y;

		if (data.x < zeroPoint.x)
		{
			_player.facing = FlxObject.LEFT;
			//_player.x -= (zeroPoint.x - data.x) * 0.01;
		}
		else if (data.x > zeroPoint.x)
		{
			_player.facing = FlxObject.RIGHT;
			//_player.x += (zeroPoint.x - data.x) * 0.01;
		}
		#end

		//var data = Accelerometer.get();​
		//var data = Accelerometer.get();
		//trace (data.x);
		//trace (data.y);
		//trace (data.z);

		_player.acceleration.x = 0;
		_player.acceleration.y = 0;


		if (FlxG.keyboard.pressed("LEFT", "A"))
		{
			_player.facing = FlxObject.LEFT;
			_player.acceleration.x -= _player.drag.x;
		}
		else if (FlxG.keyboard.pressed("RIGHT", "D"))
		{
			_player.facing = FlxObject.RIGHT;
			_player.acceleration.x += _player.drag.x;
		}
		if (FlxG.keyboard.justPressed("UP", "W"))
		{
			_player.acceleration.y -= _player.drag.x;
		}
		if (FlxG.keyboard.justPressed("DOWN", "S"))
		{
			_player.acceleration.y += _player.drag.x;
		}

		//_player.animation.play("run");
	}

	override public function draw():Void
	{
		super.draw();
		#if !FLX_NO_DEBUG
                _highlightBox.drawDebugOnCamera(FlxG.camera);
		#end
	}
}