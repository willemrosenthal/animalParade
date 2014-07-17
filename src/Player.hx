package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;
#if cpp
import openfl.ui.Accelerometer;
#end

class Player extends Animal
{
	private var deadzone:Float = 0.13;
	private var zeroPoint:FlxPoint;
	private var pfacing:String = "sit";
	private var vMax:Float = 100;

	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		Global.paradeX.push(X);
		Global.paradeY.push(Y);

		width = 4;
		height = 2;
		offset.y += height * 0.5;

		wander = false;
		visible = false;

		#if cpp
			var data = Accelerometer.get();
			zeroPoint = new FlxPoint(data.x,data.y);
			Global.zeroPoint = zeroPoint;
		#end
	}

    function playerSwimming():Void {
        if (Global.waterTiles.length == 0)
            return;

        loc = Global.cMap.getTile(Math.floor(x/16),Math.floor(y/16));

        for (t in Global.waterTiles) {
            if( t == loc ) {
                sink = true;
                break;
            }
            sink = false;
        }
        if (!sink) {
            if (loc == Global.waterEdges[0]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) > 0.5 && Math.abs(Math.floor(y/16) - (y/16)) > 0.5)
                sink = true;
            }
            if (loc == Global.waterEdges[1]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) < 0.5 && Math.abs(Math.floor(y/16) - (y/16)) > 0.5)
                sink = true;
            }
            if (loc == Global.waterEdges[2]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) > 0.4 && Math.abs(Math.floor(y/16) - (y/16)) < 0.6)
                sink = true;
            }
            if (loc == Global.waterEdges[3]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) < 0.6 && Math.abs(Math.floor(y/16) - (y/16)) < 0.5)
                sink = true;
            }
        }
        if (sink) {
           velocity.x *= 0.6;
           velocity.y *= 0.6;
        }
    }

	override public function update():Void
	{
		super.update();

		// removes last + adds new
		offset.y += height * 0.5;

	/*
		#if cpp
		var data = Accelerometer.get();

		if (Math.abs(data.x - zeroPoint.x) > deadzone)
			velocity.x += (data.x - zeroPoint.x) * 8;
		if (Math.abs(data.y - zeroPoint.y) > deadzone * 0.7)
			velocity.y -= (data.y - zeroPoint.y) * 12;

		if (FlxG.mouse.justPressed) {
			zeroPoint = new FlxPoint(data.x,data.y);
			Global.zeroPoint = zeroPoint;
		}
		#end

		if (FlxG.keyboard.pressed("LEFT", "A"))
			velocity.x -= 3;
		else if (FlxG.keyboard.pressed("RIGHT", "D"))
			velocity.x += 3;

		if (FlxG.keyboard.pressed("UP", "W"))
			velocity.y -= 3;
		else if (FlxG.keyboard.pressed("DOWN", "S"))
			velocity.y += 3;

		if (velocity.x > velocityMax)
			velocity.x = velocityMax;
		if (velocity.x < velocityMax * -1)
			velocity.x = velocityMax * -1;

		if (velocity.y > velocityMax)
			velocity.y = velocityMax;
		if (velocity.y < velocityMax * -1)
			velocity.y = velocityMax * -1;

		if (velocity.x < 2 && velocity.x > -2)
			velocity.x = 0;
		if (velocity.y < 2 && velocity.y > -2)
			velocity.y = 0;
		*/


        if (Global.iceTiles.length == 0) {
            if (Math.abs(Global.move.x) > 0 || Math.abs(Global.move.y) > 0) {
                velocity.x = Global.move.x;
                velocity.y = Global.move.y;
            }
            else if (Math.abs(Global.move.x) == 0 && Math.abs(Global.move.y) == 0) {
                velocity.x *= 0.65;
                velocity.y *= 0.65;
                if (Math.abs(velocity.x) < 0.1 &&  Math.abs(velocity.x) > -0.1 && Math.abs(velocity.y) < 0.1 &&  Math.abs(velocity.y) > -0.1) {
                    velocity.x = 0;
                    velocity.y = 0;
                }
            }
        }
        else { // winter controlls
            iceCheck();
            if ((Math.abs(Global.move.x) > 0 || Math.abs(Global.move.y) > 0) && !Global.onIce) {
                velocity.x += Global.move.x * 0.1;
                velocity.y += Global.move.y * 0.1;
                if (velocity.x > 50)
                    velocity.x = 50;
                if (velocity.x < -50)
                    velocity.x = -50;
                if (velocity.y > 50)
                    velocity.y = 50;
                if (velocity.y < -50)
                    velocity.y = -50;
            }
            else if (Math.abs(Global.move.x) == 0 && Math.abs(Global.move.y) == 0 && !Global.onIce) {
                velocity.x *= 0.65;
                velocity.y *= 0.65;
                if (Math.abs(velocity.x) < 0.1 &&  Math.abs(velocity.x) > -0.1 && Math.abs(velocity.y) < 0.1 &&  Math.abs(velocity.y) > -0.1) {
                    velocity.x = 0;
                    velocity.y = 0;
                }
            }
            if ((Math.abs(Global.move.x) > 0 || Math.abs(Global.move.y) > 0) && Global.onIce) {
                velocity.x += Global.move.x * 0.025;
                velocity.y += Global.move.y * 0.025;
                if (velocity.x > 50)
                    velocity.x = 50;
                if (velocity.x < -50)
                    velocity.x = -50;
                if (velocity.y > 50)
                    velocity.y = 50;
                if (velocity.y < -50)
                    velocity.y = -50;
            }
            else if (Math.abs(Global.move.x) == 0 && Math.abs(Global.move.y) == 0 && Global.onIce) {
                velocity.x *= 0.98;
                velocity.y *= 0.98;
                if (Math.abs(velocity.x) < 0.1 &&  Math.abs(velocity.x) > -0.1 && Math.abs(velocity.y) < 0.1 &&  Math.abs(velocity.y) > -0.1) {
                    velocity.x = 0;
                    velocity.y = 0;
                }
            }
        }

        playerSwimming();

        /*
		if (Math.abs(velocity.x) > Math.abs(velocity.y)) {
			if (velocity.x < 0)
				facing = FlxObject.RIGHT;
			if (velocity.x > 0)
				facing = FlxObject.LEFT;
			animation.play("runside");
			pfacing = "side";
		}
		else if (Math.abs(velocity.x) < Math.abs(velocity.y) && velocity.y > 0) {
			animation.play("rundown");
			pfacing = "down";
		}
		else if (Math.abs(velocity.x) < Math.abs(velocity.y) && velocity.y < 0) {
			animation.play("runup");
			pfacing = "up";
		}
		else if (pfacing == "side" && velocity.x == 0 && velocity.y == 0) animation.play("idleside");
		else if (pfacing == "down" && velocity.x == 0 && velocity.y == 0) animation.play("idledown");
		else if (pfacing == "up" && velocity.x == 0 && velocity.y == 0) animation.play("idleup");
		*/

		if (velocity.x != 0 || velocity.y != 0) {
			Global.paradeX.unshift(x);
			Global.paradeY.unshift(y);
			Global.paradeX.pop();
			Global.paradeY.pop();
		}



        if ((x < 5 && velocity.x < 0) || (x > FlxG.worldBounds.width - 5 && velocity.x > 0))
            velocity.x = 0;
        if ((y < 5 && velocity.y < 0) || (y > FlxG.worldBounds.height - 5 && velocity.y > 0))
            velocity.y = 0;
        /*
		if (x + velocity.x*FlxG.elapsed < 5 || x + velocity.x*FlxG.elapsed > FlxG.worldBounds.width - 5)
		      velocity.x = 0;
		if (y + velocity.y*FlxG.elapsed < 5 || y + velocity.y*FlxG.elapsed > FlxG.worldBounds.height - 5)
		      velocity.y = 0;
		*/

		x += velocity.x*FlxG.elapsed;
		y += velocity.y*FlxG.elapsed;
	}




    override function iceCheck():Void {
        if (Global.iceTiles.length == 0)
            return;

        loc = Global.cMap.getTile(Math.floor(x/16),Math.floor(y/16));

        for (t in Global.iceTiles) {
            if( t == loc ) {
                Global.onIce = true;
                break;
            }
            Global.onIce = false;
        }
        /*
        if (!sink) {
            if (loc == Global.waterEdges[0]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) > 0.5 && Math.abs(Math.floor(y/16) - (y/16)) > 0.5)
                    sink = true;
            }
            if (loc == Global.waterEdges[1]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) < 0.5 && Math.abs(Math.floor(y/16) - (y/16)) > 0.5)
                    sink = true;
            }
            if (loc == Global.waterEdges[2]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) > 0.4 && Math.abs(Math.floor(y/16) - (y/16)) < 0.6)
                    sink = true;
            }
            if (loc == Global.waterEdges[3]) {
                if (Math.abs(Math.floor(x/16) - (x/16)) < 0.6 && Math.abs(Math.floor(y/16) - (y/16)) < 0.5)
                    sink = true;
            }
        }
        if (sink) {
            velocity.x *= 0.6;
            velocity.y *= 0.6;
        }
        */
    }


}