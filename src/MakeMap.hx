package ;

class MakeMap {

	public static var map:Array<Array<Int>>;
	public static var baseInt:Int = 3;
	public static var seedInt:Int = 1;

	static public function newMap(Width:Int, Height:Int, MinPatches:Int = 0, MaxPatches:Int = 0, PatchDepth:Int = 1):String {
		map = new Array();

		// builds map with all 0s
		for (n in 0...Height) {
			map.push(new Array());
			for (q in 0...Width) {
				map[n].push(baseInt);
			}
		}

		// make ground patches
		if (MinPatches != 0 && MaxPatches != 0)
			makePatces(MinPatches,MaxPatches,PatchDepth);

		//trace(mapToString());
		return mapToString();
	}

	static function makePatces(MinPatches:Int, MaxPatches:Int, PatchDepth:Int):Void {
		var patchNo:Int = Math.round(Math.random() * (MaxPatches - MinPatches)) + MinPatches;

		var growthPercent:Float = 0;
		var percentArray:Array<Float> = new Array();
		for (s in 0...PatchDepth) {
			percentArray.push(1/(s + 1));
		}

		// places patch seeds on map
		dispersePatches(patchNo);

		// grows patches from there
		for (n in 0...PatchDepth) {
			growthPercent = 0;
			for (m in 0...percentArray.length - 1) {
				growthPercent += percentArray[m];
			}
			growthPercent = growthPercent/PatchDepth;
			//trace(growthPercent + " gp!!!!");
			patcheGrowth(growthPercent);
			percentArray.shift();
		}
	}

	static function patcheGrowth(GrowthAmount:Float):Void {
		var temp:Int = -1;
		for (n in 0...map.length) {
			for (q in 0...map[0].length) {
				if (map[n][q] == seedInt) {
					checkSurrounding(n,q,GrowthAmount,temp);
				}
			}
		}
		for (n in 0...map.length) {
			for (q in 0...map[0].length) {
				if (map[n][q] == temp) {
					map[n][q] = seedInt;
				}
			}
		}
	}


	static function checkSurrounding(N:Int, Q:Int, GrowthAmount:Float, temp:Int):Void {
		var up:Bool = false;
		var lf:Bool = false;
		var rt:Bool = false;
		var dn:Bool = false;

		if (N - 1 >= 0) up = true;
		if (N + 1 < map.length) dn = true;
		if (Q - 1 >= 0) lf = true;
		if (Q + 1 < map[0].length) rt = true;

		if (up && lf && map[N-1][Q-1] == baseInt && Math.random() < GrowthAmount) // top lf
			map[N-1][Q-1] = temp;

		if (up && map[N-1][Q] == baseInt && Math.random() < GrowthAmount) // top
			map[N-1][Q] = temp;

		if (up && rt && map[N-1][Q+1] == baseInt && Math.random() < GrowthAmount) // top rt
			map[N-1][Q+1] = temp;

		if (lf && map[N][Q-1] == baseInt && Math.random() < GrowthAmount) // lf
			map[N][Q-1] = temp;

		if (rt && map[N][Q+1] == baseInt && Math.random() < GrowthAmount) // rt
			map[N][Q+1] = temp;

		if (dn && lf && map[N+1][Q-1] == baseInt && Math.random() < GrowthAmount) // bot lf
			map[N+1][Q-1] = temp;

		if (dn && map[N+1][Q] == baseInt && Math.random() < GrowthAmount) // bot
			map[N+1][Q] = temp;

		if (dn && rt && map[N+1][Q+1] == baseInt && Math.random() < GrowthAmount) // bot rt
			map[N+1][Q+1] = temp;
	}

	static function dispersePatches(PatchNo:Int):Void {
		for (n in 0...PatchNo) {
			map[Std.int(Math.round(Math.random() * (map.length - 1)))][Std.int(Math.round(Math.random() * (map[0].length - 1)))] = seedInt;
		}
	}

	static function mapToString():String {
		var mapString:String = "";
		for (n in 0...map.length) {
			mapString += map[n].join(",");
			if (n < map.length - 1)
				mapString +='\n';
		}
		return mapString;
	}

	static public function plusOrMinus(Value:Float=1):Float {
		return ((Math.round(Math.random()) * 2) - 1) * Value;
	}

	public function new() {
	}
}
