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
import com.gamestudiohx.babylonhx.tools.Tools;
import com.gamestudiohx.babylonhx.tools.math.Color4;
import com.gamestudiohx.babylonhx.tools.math.Vector3;
import com.gamestudiohx.babylonhx.tools.math.Color3;
import com.gamestudiohx.babylonhx.tools.SceneLoader;
import com.gamestudiohx.babylonhx.mesh.Mesh;
import com.gamestudiohx.babylonhx.Scene;
import com.gamestudiohx.babylonhx.Engine;
import flash.Vector.Vector;
import flash.display.Sprite;
import flash.events.Event;
import flash.events.KeyboardEvent;
import flash.geom.Rectangle;
import flash.Lib;
import openfl.display.FPS;

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
        var camera = new ArcRotateCamera("Camera", 0, 0, 10, Vector3.Zero(), scene);
        Tools.isDebug = true;
        camera.attachControl(this);
        var light0 = new PointLight("Omni0", new Vector3(0, 10, 0), scene);
        var light1 = new PointLight("Omni1", new Vector3(0, -10, 0), scene);
        var light2 = new PointLight("Omni2", new Vector3(10, 0, 0), scene);
        var light3 = new DirectionalLight("Dir0", new Vector3(1, -1, 0), scene);
        var material = new StandardMaterial("kosh", scene);
        var sphere = Mesh.CreateSphere("Sphere", 16, 3, scene);

        camera.setPosition(new Vector3(-10, 10, 0));

        light3.parent = camera;

        // Creating light sphere
        var lightSphere0 = Mesh.CreateSphere("Sphere0", 16, 0.5, scene);
        var lightSphere1 = Mesh.CreateSphere("Sphere1", 16, 0.5, scene);
        var lightSphere2 = Mesh.CreateSphere("Sphere2", 16, 0.5, scene);

        lightSphere0.material = new StandardMaterial("red", scene);
        lightSphere0.material.diffuseColor = new Color3(0, 0, 0);
        lightSphere0.material.specularColor = new Color3(0, 0, 0);
        lightSphere0.material.emissiveColor = new Color3(1, 0, 0);

        lightSphere1.material = new StandardMaterial("green", scene);
        lightSphere1.material.diffuseColor = new Color3(0, 0, 0);
        lightSphere1.material.specularColor = new Color3(0, 0, 0);
        lightSphere1.material.emissiveColor = new Color3(0, 1, 0);

        lightSphere2.material = new StandardMaterial("blue", scene);
        lightSphere2.material.diffuseColor = new Color3(0, 0, 0);
        lightSphere2.material.specularColor = new Color3(0, 0, 0);
        lightSphere2.material.emissiveColor = new Color3(0, 0, 1);

        // Sphere material
        material.diffuseColor = new Color3(1, 1, 1);
        sphere.material = material;

        // Lights colors
        light0.diffuse = new Color3(1, 0, 0);
        light0.specular = new Color3(1, 0, 0);

        light1.diffuse = new Color3(0, 1, 0);
        light1.specular = new Color3(0, 1, 0);

        light2.diffuse = new Color3(0, 0, 1);
        light2.specular = new Color3(0, 0, 1);

        light3.diffuse = new Color3(1, 1, 1);
        light3.specular = new Color3(1, 1, 1);

        // Skybox
        var skybox = Mesh.CreateBox("skyBox", 100.0, scene);
        var skyboxMaterial = new StandardMaterial("skyBox", scene);
        skyboxMaterial.backFaceCulling = false;
        skyboxMaterial.reflectionTexture = new CubeTexture("assets/img/skybox/skybox", scene);
        skyboxMaterial.reflectionTexture.coordinatesMode = Texture.SKYBOX_MODE;
        skyboxMaterial.diffuseColor = new Color3(0, 0, 0);
        skyboxMaterial.specularColor = new Color3(0, 0, 0);
        skybox.material = skyboxMaterial;
        trace('--sky material' + Reflect.fields(skybox.material));
        //trace(Reflect.fields(skyboxMaterial));
        // for( ff in Reflect.fields(skyboxMaterial) )
        //  trace("  skyboxMaterial." + ff + " = " + Reflect.field(skyboxMaterial, ff));

        // Animations
        var alpha = .0;
        scene.registerBeforeRender(function() {

            light0.position = new Vector3(10 * Math.sin(alpha), 0, 10 * Math.cos(alpha));
            light1.position = new Vector3(10 * Math.sin(alpha), 0, -10 * Math.cos(alpha));
            light2.position = new Vector3(10 * Math.cos(alpha), 0, 10 * Math.sin(alpha));

            lightSphere0.position = light0.position;
            lightSphere1.position = light1.position;
            lightSphere2.position = light2.position;

            alpha += 0.01;
        });

        scene.executeWhenReady(function() {
            engine.runRenderLoop(scene.render);
        });
        addChild(new openfl.display.FPS(20, 20));
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
