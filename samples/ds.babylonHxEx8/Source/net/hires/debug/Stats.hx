/**
 * stats.hx
 * http://github.com/mrdoob/stats.as
 * 
 * Released under MIT license:
 * http://www.opensource.org/licenses/mit-license.php
 *
 * How to use:
 * 
 *	addChild( new Stats() );
 *
 **/

package net.hires.debug;

import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.display.Stage;
import openfl.display.Graphics;
import openfl.events.Event;
import openfl.events.MouseEvent;
import openfl.geom.Matrix;
import openfl.geom.Rectangle;
import openfl.system.System;
import openfl.text.TextField;
import openfl.text.TextFormat;
import openfl.Assets;
import openfl.gl.GL;
import haxe.Timer;


import Xml;


class Stats extends Sprite {

    static inline var GRAPH_WIDTH:Int = 100;
    static inline var XPOS:Int = 98;//width - 1
    #if html5
	static inline var GRAPH_HEIGHT : Int = 30;
	static inline var TEXT_HEIGHT : Int = 30;
	#else
    static inline var GRAPH_HEIGHT:Int = 50;
    static inline var TEXT_HEIGHT:Int = 50;
    #end

    public var xml:Xml;

    private var text:TextField;
    //private var style : StyleSheet;

    private var timer:Int;
    private var fps:Int;
    private var ms:Int;
    private var ms_prev:Int;
    private var mem:Float;
    private var mem_max:Float;

    private var graph:BitmapData;
    private var _rectangle:Rectangle;

    private var fps_graph:Int;
    private var mem_graph:Int;
    private var ms_graph:Int;
    private var mem_max_graph:Int;
    private var _stage:Stage;
    public var currentFPS (default, null):Float;
    private var cacheCount:Int;
    private var times:Array <Float>;

    /**
	 * <b>Stats</b> FPS, MS and MEM, all in one.
	 */

    public function new() {

        super();
        mem_max = 0;
        fps = 0;
        cacheCount = 0;
        times = [];
        var format = new TextFormat ( '_sans', 10, 0xdbf043);

        text = new TextField();
        //text.width = GRAPH_WIDTH;
        //text.height = TEXT_HEIGHT;
        text.defaultTextFormat = format;
        text.selectable = false;
        //text.mouseEnabled = false;
        text.background = false;
        text.multiline = true;
        _rectangle = new Rectangle(0, 0, GRAPH_WIDTH, GRAPH_HEIGHT);

        this.addEventListener(Event.ADDED_TO_STAGE, init);
        this.addEventListener(Event.REMOVED_FROM_STAGE, destroy);

    }

    private function init(e:Event) {

        _stage = openfl.Lib.current.stage;
        graphics.beginFill(Colors.bg);
        graphics.drawRect(0, 0, GRAPH_WIDTH, TEXT_HEIGHT);
        graphics.endFill();

        this.addChild(text);

        graph = new BitmapData(GRAPH_WIDTH, GRAPH_HEIGHT, false, Colors.bg);
        graphics.beginBitmapFill(graph, new Matrix(1, 0, 0, 1, 0, GRAPH_HEIGHT));
        //graphics.beginBitmapFill(graph, new Matrix(1, 0, 0, 1, 0, GRAPH_HEIGHT), false, true);
        graphics.drawRect(0, TEXT_HEIGHT, GRAPH_WIDTH, GRAPH_HEIGHT);
        graphics.endFill();
        this.addEventListener(Event.ENTER_FRAME, update);

    }

    private function destroy(e:Event) {

        graphics.clear();

        while (numChildren > 0)
            removeChildAt(0);

        graph.dispose();

        removeEventListener(Event.ENTER_FRAME, update);

    }

    private function update(e:Event) {
        var currentTime = Timer.stamp();
        times.push(currentTime);

        while (times[0] < currentTime - 1) {

            times.shift();

        }

        var currentCount = times.length;
        currentFPS = Math.round((currentCount + cacheCount) / 2);

        timer = openfl.Lib.getTimer();

        //after a second has passed
        if (timer - 1000 > ms_prev) {
            #if html5
			fps_graph = GRAPH_HEIGHT - Std.int( Math.min(GRAPH_HEIGHT, ( fps / _stage.frameRate ) * GRAPH_HEIGHT) );
			#else
            mem = System.totalMemory * 0.000000954;
            mem_max = mem_max > mem ? mem_max : mem;

            fps_graph = GRAPH_HEIGHT - Std.int(Math.min(GRAPH_HEIGHT, ( fps / _stage.frameRate ) * GRAPH_HEIGHT));

            mem_graph = GRAPH_HEIGHT - normalizeMem(mem);
            mem_max_graph = GRAPH_HEIGHT - normalizeMem(mem_max);
            ms_graph = Std.int(GRAPH_HEIGHT - ( ( timer - ms ) >> 1 ));
            #end

            graph.scroll(-1, 0);
            graph.fillRect(_rectangle, Colors.bg);
            graph.lock();
            #if html5
			graph.setPixel(XPOS, fps_graph, Colors.fps);
			#else
            graph.setPixel(XPOS, fps_graph, Colors.fps);
            graph.setPixel(XPOS, mem_graph, Colors.mem);
            graph.setPixel(XPOS, mem_max_graph, Colors.memmax);
            graph.setPixel(XPOS, ms_graph, Colors.ms);
            #end
            graph.unlock();

            //reset frame and time counters
            fps = 0;
            ms_prev = timer;

            return;
        }
        //increment number of frames which have occurred in current second
        fps++;
        ms = timer;
        #if html5
		text.text= ("FPS: " + fps + " / " + currentFPS);
		#else
        text.htmlText = ("FPS: " + fps + " / " + currentFPS) + ("<br />MEM: " + Math.round(mem)) + ( "<br />MAX: " + Math.round(mem_max)) + "<br />MS: " + (timer - ms);
        #end
        cacheCount = currentCount;
    }


    function normalizeMem(_mem:Float):Int {
        return Std.int(Math.min(GRAPH_HEIGHT, Math.sqrt(Math.sqrt(_mem * 5000))) - 2);
    }

}

class Colors {

    public static inline var bg:Int = 0x000033;
    public static inline var fps:Int = 0xffff00;
    public static inline var ms:Int = 0x00ff00;
    public static inline var mem:Int = 0x00ffff;
    public static inline var memmax:Int = 0xff0070;
    public static inline var bgCSS:String = "#000033";
    public static inline var fpsCSS:String = "#ffff00";
    public static inline var msCSS:String = "#00ff00";
    public static inline var memCSS:String = "#00ffff";
    public static inline var memmaxCSS:String = "#ff0070";

}
