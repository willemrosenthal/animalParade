package ;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxPoint;
import flixel.FlxObject;

class Animal extends FlxSprite
{

	public var velocityMax:Float = 100;
	public var vx:Float = 50;
	public var vy:Float = 80;

	public var followDistance:Int = 23;
	public var pickedUp:Bool = false;
	public var inParade:Bool = false;
	public var linePlace:Int; // place in line (line number)
	public var fd:Int; // what point in the parade array to use as x,y

	private var lastPos:FlxPoint;

	private var goTo:FlxPoint;
	private var afacing:String = "sit";

	public function new(X:Float, Y:Float)
	{
		super(X, Y);

		loadGraphic("assets/fox.png", true, true, 40,30);
		animation.add("sit", [13]);
		animation.add("idleside", [0]);
		animation.add("idledown", [3]);
		animation.add("idleup", [8]);
		animation.add("runside", [1, 2, 0], 12);
		animation.add("rundown", [4, 5, 6, 7], 12);
		animation.add("runup", [9, 10, 11, 12], 12);

		lastPos = new FlxPoint(X,Y);

		offset.y += height * 0.5;
		offset.x += width * 0.5 - 10;
		width = 20;
		height = 12;

		animation.play("sit");
	}

	public function joinParade():Void {
		//pickedUp = true;
		//ln = Global.linePlace[linePlace];

	}

	private var moveDifX:Float;
	private var moveDifY:Float;
	override public function update():Void {
		super.update();

		if (pickedUp) {
		x = Global.paradeX[fd];
		y = Global.paradeY[fd];
		}

		//trace(lastPos.x + " x " + x);
		//trace(lastPos.y + " y " + y);

		moveDifX = x - lastPos.x;
		moveDifY = y - lastPos.y;

		if (Math.abs(moveDifX) > Math.abs(moveDifY)) {
			if (moveDifX < 0)
				facing = FlxObject.RIGHT;
			if (moveDifX > 0)
				facing = FlxObject.LEFT;
			animation.play("runside");
			afacing = "side";
		}
		else if (Math.abs(moveDifX) < Math.abs(moveDifY) && moveDifY > 0) {
			animation.play("rundown");
			afacing = "down";
		}
		else if (Math.abs(moveDifX) < Math.abs(moveDifY) && moveDifY < 0) {
			animation.play("runup");
			afacing = "up";
		}
		else if (afacing == "side" && moveDifX == 0 && moveDifY == 0) animation.play("idleside");
		else if (afacing == "down" && moveDifX == 0 && moveDifY == 0) animation.play("idledown");
		else if (afacing == "up" && moveDifX == 0 && moveDifY == 0) animation.play("idleup");

		lastPos.x = x;
		lastPos.y = y;

		//goTo = new FlxPoint(Global.paradeX[Global.linePlace[ln]],Global.paradeY[Global.linePlace[ln]])


		// get to your position in line.
		//if (pickedUp == true && inParade == false){
	}
}