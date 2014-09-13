package;

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
import net.hires.debug.Stats;
/**
* ...
* @author Krtolica Vujadin
*/

class Main extends Sprite {
    var inited:Bool;


    function resize(e) {
        if (!inited) init();
        // else (resize or orientation change)
    }

    function init() {
        if (inited) return;
        inited = true;

        var engine = new Engine(this, true);
        var scene = new Scene(engine);
        var camera = new ArcRotateCamera("Camera", 0, 0, 100, Vector3.Zero(), scene);
        var light = new DirectionalLight("dir01", new Vector3(0, -1, -0.2), scene);
        var light2 = new DirectionalLight("dir02", new Vector3( -1, -2, -1), scene);
        var light3 = new PointLight("Omni0", new Vector3(21.84, 50, -28.26), scene);
        light.position = new Vector3(0, 30, 0);
        light2.position = new Vector3(10, 20, 10);

        light.intensity = 0.6;
        light2.intensity = 0.6;

        camera.setPosition(new Vector3(-60, 60, 0));
        camera.lowerBetaLimit = (Math.PI / 2) * 0.8;
        camera.attachControl(this);

        // Lens flares
        var lensFlareSystem = new LensFlareSystem("lensFlareSystem", light3, scene);
        var flare00 = new LensFlare(0.2, 0, new Color3(1, 1, 1), "assets/img/lens5.png", lensFlareSystem);
        var flare01 = new LensFlare(0.5, 0.2, new Color3(0.5, 0.5, 1), "assets/img/lens4.png", lensFlareSystem);
        var flare02 = new LensFlare(0.2, 1.0, new Color3(1, 1, 1), "assets/img/lens4.png", lensFlareSystem);
        var flare03 = new LensFlare(0.4, 0.4, new Color3(1, 0.5, 1), "assets/img/Flare.png", lensFlareSystem);
        var flare04 = new LensFlare(0.1, 0.6, new Color3(1, 1, 1), "assets/img/lens5.png", lensFlareSystem);

        // Skybox
        var skybox = Mesh.CreateBox("skyBox", 1000.0, scene);
        var skyboxMaterial = new StandardMaterial("skyBox", scene);
        skyboxMaterial.backFaceCulling = false;
        skyboxMaterial.reflectionTexture = new CubeTexture("assets/img/skybox/skybox", scene);
        skyboxMaterial.reflectionTexture.coordinatesMode = Texture.SKYBOX_MODE;
        skyboxMaterial.diffuseColor = new Color3(0, 0, 0);
        skyboxMaterial.specularColor = new Color3(0, 0, 0);
        skybox.material = skyboxMaterial;

        // Spheres
        var sphere0 = Mesh.CreateSphere("Sphere0", 16, 10, scene);
        var sphere1 = Mesh.CreateSphere("Sphere1", 16, 10, scene);
        var sphere2 = Mesh.CreateSphere("Sphere2", 16, 10, scene);

        sphere0.material = new StandardMaterial("red", scene);
        sphere0.material.specularColor = new Color3(0, 0, 0);
        sphere0.material.diffuseColor = new Color3(1.0, 0, 0);

        sphere1.material = new StandardMaterial("green", scene);
        sphere1.material.specularColor = new Color3(0, 0, 0);
        sphere1.material.diffuseColor = new Color3(0, 1.0, 0);

        sphere2.material = new StandardMaterial("blue", scene);
        sphere2.material.specularColor = new Color3(0, 0, 0);
        sphere2.material.diffuseColor = new Color3(0, 0, 1.0);

        // Post-process
        var postProcess = new RefractionPostProcess("Refraction", "assets/img/refMap.jpg", new Color3(1.0, 1.0, 1.0), 0.5, 0.5, 1.0, camera);

        // Animations
        var alpha = .0;
        scene.registerBeforeRender(function() {
            sphere0.position = new Vector3(20 * Math.sin(alpha), 0, 20 * Math.cos(alpha));
            sphere1.position = new Vector3(20 * Math.sin(alpha), 0, -20 * Math.cos(alpha));
            sphere2.position = new Vector3(20 * Math.cos(alpha), 0, 20 * Math.sin(alpha));

            alpha += 0.01;
        });

        scene.executeWhenReady(function() {
            engine.runRenderLoop(scene.render);
            addChild(new Stats());
        });
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
