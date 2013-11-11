package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;

class Joystick extends FlxSprite {

	public var maxDistance:Float = 60;
	public var moveIgnoreRange:Int = 3;
	public var moveSpeed:Float = 80;

	private var originPoint:FlxPoint;
	private var xDif:Float = 0;
	private var yDif:Float = 0;
	private var hyp:Float = 0;
	private var moveDirs:FlxPoint;
	private var mouseDown:Bool = false;

	public function new(X:Float, Y:Float) {
		super(X, Y);
		originPoint = new FlxPoint(X,Y);
		moveDirs = new FlxPoint(0,0);

		loadGraphic("assets/joystick.png", false, false, 130,130);
		offset.y = height * 0.5;
		offset.x = width * 0.5;
	}

	override public function update():Void {
		super.update();

		if (FlxG.mouse.justPressed && !mouseDown)
			mouseDown = true;
		if (FlxG.mouse.justReleased)
			mouseDown = false;

		if (!mouseDown) {
			x = originPoint.x;
			y = originPoint.y;
			Global.move.x = 0;
			Global.move.y = 0;
			return;
		}


		Global.move = calculateJoystick();
		positionJostick();
	}

	private function calculateJoystick():FlxPoint {
		xDif = originPoint.x - FlxG.stage.mouseX;
		yDif = originPoint.y - FlxG.stage.mouseY;

		moveDirs.x = 0;
		moveDirs.y = 0;

		if (xDif==0 || yDif==0) {
			moveDirs.x = xDif;
			moveDirs.y = yDif;
			return moveDirs;
		}

		hyp = Math.sqrt(Math.abs(xDif*xDif) + Math.abs(yDif*yDif));

		if (hyp < moveIgnoreRange)
			return moveDirs;

		if (Math.abs(hyp) < maxDistance) {
			moveDirs.x = hyp/maxDistance * (xDif * (moveSpeed/hyp) * -1);
			moveDirs.y = hyp/maxDistance * (yDif * (moveSpeed/hyp) * -1);
			return moveDirs;
		}

		moveDirs.x = xDif * (moveSpeed/hyp) * -1;
		moveDirs.y = yDif * (moveSpeed/hyp) * -1;


//		if (xDif < 0)
//			moveDirs.x * -1;
//		if (yDif < 0)
//			moveDirs.y * -1;
		return moveDirs;
	}

	private function positionJostick():Void {
		if (Math.abs(hyp) < maxDistance) {
			x = FlxG.stage.mouseX;
			y = FlxG.stage.mouseY;
		}
		else {
			x = maxDistance/hyp * xDif * -1 + originPoint.x;
			y = maxDistance/hyp * yDif * -1 + originPoint.y;
		}
	}
}