package ;

import flash.display.Sprite;
import flash.events.MouseEvent;
import flash.events.TouchEvent;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;

class Joystick extends Sprite {

	public var maxDistance:Float = 60;
	public var moveIgnoreRange:Int = 3;
	public var moveSpeed:Float = 80;

	private var originPoint:FlxPoint;
	private var xDif:Float = 0;
	private var yDif:Float = 0;
	private var hyp:Float = 0;
	private var moveDirs:FlxPoint;
	private var mouseDown:Bool = false;

	private var s:Sprite;

	public function new(X:Float, Y:Float) {
		super(X, Y);
		originPoint = new FlxPoint(X,Y);
		moveDirs = new FlxPoint(0,0);


		s = new Sprite();
		s.graphics.beginFill(0x000ff0,1);
		s.graphics.drawCircle(0,0,130);
		//s.graphics.drawRect(0,0,FlxG.width * FlxCamera.defaultZoom,FlxG.height * FlxCamera.defaultZoom);
		s.graphics.endFill();
		addChild(s);

		s.addEventListener(TouchEvent.TOUCH_BEGIN, onBegin);
		s.addEventListener(TouchEvent.TOUCH_MOVE, onMove);
		s.addEventListener(TouchEvent.TOUCH_END, onEnd);
		s.alpha = 0;
	}

	private function onBegin(e:TouchEvent):Void
	{
		if (Global.firstTouchId != -1 && Global.secondTouchId != -1)
			return;

		if (Global.firstTouchId == -1)
		{
			Global.firstTouchId = e.touchPointID;
			Global.moveTouched = true;
			Global.firstTouch = new FlxPoint(e.stageX,e.stageY);
			Global.firstTouchTo = new FlxPoint(e.stageX,e.stageY);
		}
		else if (Global.firstTouchId != -1 && e.touchPointID != Global.firstTouchId && Global.secondTouchId == -1)
		{
			if (e.stageX < Global.firstTouchTo.x + ignoreRange && e.stageX > Global.firstTouchTo.x - ignoreRange && e.stageY < Global.firstTouchTo.y + ignoreRange && e.stageY > Global.firstTouchTo.y - ignoreRange)
				return;
			Global.secondTouchId = e.touchPointID;
			Global.dash = true;
		}
	}


	private function onMove(e:TouchEvent):Void
	{
		if (e.touchPointID != Global.firstTouchId)
			return;

		Global.firstTouchTo.x = e.stageX;
		Global.firstTouchTo.y = e.stageY;
	}

	private function onEnd(e:TouchEvent):Void
	{
		if (e.touchPointID == Global.firstTouchId)
		{
			Global.firstTouchId = -1;
			Global.moveTouched = false;
			Global.firstTouch = new FlxPoint(-10,-10);
		}
		else if (e.touchPointID == Global.secondTouchId)
		{
			Global.secondTouchId = -1;
			Global.dash = false;
		}
	}

	public function kill():Void
	{
		s.removeEventListener(TouchEvent.TOUCH_BEGIN, onBegin);
		s.removeEventListener(TouchEvent.TOUCH_MOVE, onMove);
		s.removeEventListener(TouchEvent.TOUCH_END, onEnd);

		removeChild(s);
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