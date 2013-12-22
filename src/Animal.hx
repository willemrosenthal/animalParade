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

	public var wander:Bool = true;
	private var wTimer:Int = 0;
	private var wTimerMax:Int = 10;


	private var lastPos:FlxPoint;

	private var goTo:FlxPoint;
	private var afacing:String = "sit";

	public function new(X:Float, Y:Float)
	{
		super(X, Y);
		lastPos = new FlxPoint(X,Y);
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
        else if(wander)
            {
            wTimer ++;
            if (wTimer == wTimerMax)
                {
                wTimer = 0;
                wTimerMax = Math.round(Math.random() * 100 + 50);
                if (Math.random() < 0.5)
                    {
                    acceleration.x = 0;
                    acceleration.y = 0;
                    velocity.x = 0;
                    velocity.y = 0;
                    }
                else
                    {
                    velocity.x = Calcs.plusOrMinus(20) * Math.round(Math.random());
                    velocity.y = Calcs.plusOrMinus(19.5) * Math.round(Math.random());
                    }
                }
            if (x > FlxG.worldBounds.width - 5 && velocity.x > 0)
                velocity.x *= -1;
            if (x < 5 && velocity.x < 0)
                velocity.x *= -1;
            if (y > FlxG.worldBounds.height - 5 && velocity.y > 0)
                velocity.y *= -1;
            if (y < 10 && velocity.y < 0)
                velocity.y *= -1;

             }

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