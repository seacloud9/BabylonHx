package;


import net.hires.debug.Stats;
import com.gamestudiohx.babylonhx.cameras.ArcRotateCamera;
import com.gamestudiohx.babylonhx.cameras.Camera;
import com.gamestudiohx.babylonhx.cameras.FreeCamera;
import com.gamestudiohx.babylonhx.lensflare.LensFlare;
import com.gamestudiohx.babylonhx.lensflare.LensFlareSystem;
import com.gamestudiohx.babylonhx.lights.DirectionalLight;
import com.gamestudiohx.babylonhx.layer.Layer;
import com.gamestudiohx.babylonhx.lights.PointLight;
import com.gamestudiohx.babylonhx.materials.MultiMaterial;
import com.gamestudiohx.babylonhx.materials.StandardMaterial;
import com.gamestudiohx.babylonhx.materials.textures.CubeTexture;
import com.gamestudiohx.babylonhx.materials.textures.Texture;
import com.gamestudiohx.babylonhx.materials.textures.DynamicTexture;
import com.gamestudiohx.babylonhx.mesh.SubMesh;
import com.gamestudiohx.babylonhx.particles.ParticleSystem;
import com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess;
import com.gamestudiohx.babylonhx.tools.math.Color4;
import com.gamestudiohx.babylonhx.tools.math.Vector3;
import com.gamestudiohx.babylonhx.tools.math.Color3;
import com.gamestudiohx.babylonhx.tools.SceneLoader;
import com.gamestudiohx.babylonhx.mesh.Mesh;
import com.gamestudiohx.babylonhx.Scene;
import com.gamestudiohx.babylonhx.Engine;
import openfl.Vector.Vector;
import openfl.display.Shape;
import openfl.display.Graphics;
import openfl.display.GradientType;
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
    var background:Layer;

    function resize(e) {
        if (!inited) init();
        // else (resize or orientation change)
    }

    function init() {
        if (inited) return;
        inited = true;

        engine = new Engine(this, true);
        var scene = new Scene(engine);
        var camera = new ArcRotateCamera("Camera", 0, 0, 10, Vector3.Zero(), scene);
        camera.attachControl(this);
        background = new Layer("back0", null, scene);
        background.texture = new DynamicTexture("dynamic texture", {width:1024, height:1024}, scene, true);
        var size = background.texture.getSize();
        var shape:Shape = new Shape();
        var m:openfl.geom.Matrix = new openfl.geom.Matrix();
        var bounds:Rectangle = shape.getBounds(shape);
        m.translate(-bounds.left, -bounds.top);
        shape.graphics.beginFill(0x4584b4);
        shape.graphics.drawRect(0, 0, size.width, size.height);
        shape.graphics.endFill();
        background.texture._canvas.draw(shape, m);
        background.texture.update(0);

        var light = new PointLight("Omni", new Vector3(20, 100, 2), scene);
        var sphere = Mesh.CreateSphere("Sphere", 16, 3, scene);
        var material:StandardMaterial = new StandardMaterial("kosh", scene);
        material.bumpTexture = new Texture("assets/img/normalMap.jpg", scene);
        material.diffuseColor = new Color3(1, 0, 0);

        sphere.material = material;

        camera.setPosition(new Vector3(-5, 5, 0));

        // Animations
        scene.registerBeforeRender(function() {
            sphere.rotation.y += 0.02;
        });

        scene.executeWhenReady(function() {
            engine.runRenderLoop(scene.render);
            addStats();
        });
    }

    private function addStats() {
        engine._renderingCanvas.addChild(new Stats());
    }


    /* SETUP */

    public function new() {
        super();
        addEventListener(Event.ADDED_TO_STAGE, added);
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