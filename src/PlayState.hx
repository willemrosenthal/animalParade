package;

import flixel.FlxG;
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
	inline static private var TILE_WIDTH:Int = 16;
	inline static private var TILE_HEIGHT:Int = 16;

		/**
         * The FlxTilemap we're using
         */
	private var _levelMap:FlxTilemap;

		/**
         * Box to show the user where they're placing stuff
         */
	private var _highlightBox:FlxObject;

		/**
         * Player modified from "Mode" demo
         */
	private var _player:FlxSprite;

	private var zeroPoint:FlxPoint;

		/**
         * Some interface buttons and text
         */
	private var _autoAltButton:FlxButton;
	private var _resetButton:FlxButton;
	private var _helperText:FlxText;

	override public function create():Void
	{
		_levelMap = new FlxTilemap();
		_levelMap.scaleX = 4;
		_levelMap.scaleY = 4;
		_levelMap.tileScaleHack = 1.03;
		_levelMap.loadMap(MakeMap.newMap(400,400,40,500,100), "assets/ground.png", TILE_WIDTH, TILE_HEIGHT, FlxTilemap.OFF);
		add(_levelMap);
		setupPlayer();
		_levelMap.x = _player.x - _levelMap.width * 0.5;
		_levelMap.y = _player.y - _levelMap.height * 0.5;

		//MakeMap.newMap(30,30,40,50,10);
	}


	private function setupPlayer():Void
	{
		_player = new FlxSprite(64, 220);
		_player.loadGraphic("assets/spaceman.png", true, true, 16);

		// Bounding box tweaks
		_player.setSize(14, 14);
		_player.offset.set(1, 1);
		_player.scale = new FlxPoint(4,4);

		// Basic player physics
		_player.maxVelocity.x = 200;
		_player.maxVelocity.y = 200;
		_player.drag.x = _player.maxVelocity.x * 4;
		//_player.drag.x = 640;
		//_player.maxVelocity.set(120, 120);

		// Animations
		_player.animation.add("idle", [0]);
		_player.animation.add("run", [1, 2, 3, 0], 12);
		_player.animation.add("jump", [4]);

		FlxG.camera.follow(_player);
		add(_player);
		#if cpp
			var data = Accelerometer.get();
			zeroPoint = new FlxPoint(data.x,data.y);
		#end
	}

	override public function update():Void
	{
		updatePlayer();
		super.update();
	}

	private function updatePlayer():Void
	{
		//FlxSpriteUtil.screenWrap(_player);

		var data;

		// MOVEMENT
		#if cpp
			data = Accelerometer.get();

		_player.x += (data.x - zeroPoint.x) * 10;
		_player.y -= (data.y - zeroPoint.y) * 10;

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



//	if (data.y<0)
//	{
//	player.acceleration.x = -player.maxVelocity.x *.5 ;
//	}
//	if (data.y>0)
//	{
//	player.acceleration.x = player.maxVelocity.x *.5;
//	}
//	if (data.x<0)
//	{
//	player.acceleration.y = -player.maxVelocity.y *.5 ;
//	}
//	if (data.x>0)
//	{
//	player.acceleration.y = player.maxVelocity.y *.5;
//	}

		// ANIMATION
		if (_player.velocity.y != 0)
		{
			_player.animation.play("jump");
		}
		else if (_player.velocity.x == 0)
		{
			_player.animation.play("idle");
		}
		else
		{
			_player.animation.play("run");
		}
	}

	override public function draw():Void
	{
		super.draw();
		#if !FLX_NO_DEBUG
                _highlightBox.drawDebugOnCamera(FlxG.camera);
		#end
	}
}