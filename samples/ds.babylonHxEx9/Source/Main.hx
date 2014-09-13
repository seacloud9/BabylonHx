package;


import net.hires.debug.Stats;
import com.gamestudiohx.babylonhx.cameras.ArcRotateCamera;
import com.gamestudiohx.babylonhx.cameras.Camera;
import com.gamestudiohx.babylonhx.cameras.FreeCamera;
import com.gamestudiohx.babylonhx.lensflare.LensFlare;
import com.gamestudiohx.babylonhx.lensflare.LensFlareSystem;
import com.gamestudiohx.babylonhx.lights.DirectionalLight;
import com.gamestudiohx.babylonhx.lights.PointLight;
import com.gamestudiohx.babylonhx.materials.MultiMaterial;
import com.gamestudiohx.babylonhx.materials.StandardMaterial;
import com.gamestudiohx.babylonhx.materials.textures.CubeTexture;
import com.gamestudiohx.babylonhx.materials.textures.Texture;
import com.gamestudiohx.babylonhx.mesh.SubMesh;
import com.gamestudiohx.babylonhx.particles.ParticleSystem;
import com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess;
import com.gamestudiohx.babylonhx.tools.Tools;
import com.gamestudiohx.babylonhx.tools.math.Color4;
import com.gamestudiohx.babylonhx.tools.math.Vector3;
import com.gamestudiohx.babylonhx.tools.math.Color3;
import com.gamestudiohx.babylonhx.tools.SceneLoader;
import com.gamestudiohx.babylonhx.mesh.Mesh;
import com.gamestudiohx.babylonhx.Scene;
import com.gamestudiohx.babylonhx.Engine;
import openfl.Vector.Vector;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.geom.Rectangle;
import openfl.Lib;
import openfl.display.FPS;

/**
* ...
* @author Krtolica Vujadin
*/

class Main extends Sprite {

    var inited:Bool;
    var engine:Engine;
    var scene:Scene;
    var _c:FreeCamera;
    var currentId:Int = 0;


    function resize(e) {
        if (!inited) init();
        // else (resize or orientation change)
    }

    function init() {
        if (inited) return;
        inited = true;
        engine = new Engine(this, true);
        scene = new Scene(engine);
        //Tools.isDebug = true;
        SceneLoader.Load("assets/train/", "Train.babylon", engine, function(newScene:Scene) {
            this.scene = newScene;
            Lib.current.stage.addEventListener(KeyboardEvent.KEY_DOWN, keyDownHandler);
            this.scene.activeCameraByID('7c547589-5d01-4648-a56c-6ab03ecd29b5');
            _c = cast scene.activeCamera;
            scene.executeWhenReady(function() {
                this.addEventListener(Event.ENTER_FRAME, update);
                engine.runRenderLoop(scene.render);
                addStats();
            });
        });
    }

    public function keyDownHandler(event:KeyboardEvent) {

        if (event.keyCode == 32) {
            if (currentId < scene.cameras.length) {
                this.scene.activeCameraByID(scene.cameras[currentId++].id);
            } else {
                currentId = 0;
                this.scene.activeCameraByID(scene.cameras[0].id);
            }
        }
    }

    private function update(e:Event) {
        var wtf = scene.getMeshByID("3e82febf-36bb-4877-99ae-1d4e51dde48e");
        // var wtf2 = scene.getMeshByID(wtf.parentId);
        //  trace(wtf.parent.position);
    }

    /* SETUP */

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, added);
    }

    private function addStats() {
        engine._renderingCanvas.addChild(new Stats());
    }

    function added(e) {
        removeEventListener(Event.ADDED_TO_STAGE, added);
        stage.addEventListener(Event.RESIZE, resize);
        #if ios
            haxe.Timer.delay(init, 100); // iOS 6
            #else
        init();
        #end
    }

    public static function main() {
        // static entry point
        Lib.current.stage.align = flash.display.StageAlign.TOP_LEFT;
        Lib.current.stage.scaleMode = flash.display.StageScaleMode.NO_SCALE;
        Lib.current.addChild(new Main());
    }
}
