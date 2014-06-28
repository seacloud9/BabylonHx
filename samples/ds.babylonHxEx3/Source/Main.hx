package;

import com.gamestudiohx.babylonhx.cameras.ArcRotateCamera;
import com.gamestudiohx.babylonhx.cameras.Camera;
import com.gamestudiohx.babylonhx.cameras.FreeCamera;
import com.gamestudiohx.babylonhx.lensflare.LensFlare;
import com.gamestudiohx.babylonhx.lensflare.LensFlareSystem;
import com.gamestudiohx.babylonhx.lights.DirectionalLight;
import com.gamestudiohx.babylonhx.lights.PointLight;
import com.gamestudiohx.babylonhx.layer.Layer;
import com.gamestudiohx.babylonhx.materials.MultiMaterial;
import com.gamestudiohx.babylonhx.materials.StandardMaterial;
import com.gamestudiohx.babylonhx.materials.ShaderMaterial;
import com.gamestudiohx.babylonhx.materials.textures.CubeTexture;
import com.gamestudiohx.babylonhx.materials.textures.DynamicTexture;
import com.gamestudiohx.babylonhx.materials.textures.Texture;
import com.gamestudiohx.babylonhx.particles.ParticleSystem;
import com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess;
import com.gamestudiohx.babylonhx.tools.math.Color4;
import com.gamestudiohx.babylonhx.tools.math.Vector3;
import com.gamestudiohx.babylonhx.tools.math.Color3;
import com.gamestudiohx.babylonhx.tools.math.Matrix;
import com.gamestudiohx.babylonhx.tools.SceneLoader;
import com.gamestudiohx.babylonhx.Scene;
import com.gamestudiohx.babylonhx.Engine;
import com.gamestudiohx.babylonhx.mesh.*;
import flash.Vector.Vector;
import flash.display.Shape;
import flash.display.Sprite;
import flash.events.Event;
import flash.events.KeyboardEvent;
import flash.geom.Rectangle;
import flash.Lib;
import flash.display.Graphics;
import flash.display.Bitmap;
import flash.display.BitmapData;
import openfl.display.FPS;

/**
* ...
* @author Brendon Smith
*/

class Main extends Sprite {

  var inited:Bool;
  var scene:Scene;
  
  
  function resize(e) {
    if (!inited) init();
    // else (resize or orientation change)
  }

  function init() {
    if (inited) return;
    var start_time = Date.now();
    inited = true;

    var engine = new Engine(this, true);     
    var scene = new Scene(engine);
    var background = new Layer("back0", null, scene);
    background.texture = new DynamicTexture("dynamic texture", {width:512, height:512}, scene, true);


    var size = background.texture.getSize();
    var shape:Shape = new Shape();
    shape.graphics.lineStyle( 4, 0x1e4877 );
    shape.graphics.beginFill( 0x4584b4 );
    shape.graphics.drawRect( 0, 0, size.width, size.height);
    shape.graphics.endFill();
    var bounds:Rectangle = shape.getBounds(shape);
    var m = new flash.geom.Matrix();
    m.translate(-bounds.left, -bounds.top);
    //var t:BitmapData = background.texture.getCanvas();

    background.texture._canvas.draw(shape, m);

    var camera = new FreeCamera("camera", new Vector3(0, -128, 0), scene);
        camera.fov = 30;
        camera.minZ = 1;
        camera.maxZ = 3000;

        var cloudMaterial = new ShaderMaterial("clouds", scene, {
            vertexElement: "vertexShaderCode",
            fragmentElement: "fragmentShaderCode",
        },
        {
            needAlphaBlending: true,
            attributes: ["position", "uv"],
            uniforms: ["worldViewProjection"],
            samplers: ["textureSampler"]
        });
        cloudMaterial.setTexture("Clouds", new Texture("Assets/img/cloud.png", scene));
        cloudMaterial.setFloat("fogNear", -100);
        cloudMaterial.setFloat("fogFar", 3000);
        cloudMaterial.setColor3("fogColor", new Color3(69, 132, 180));

        trace('1');
        // Create merged planes
        //size = 128;
        var count = 8000;

        var globalVertexData = new VertexData();
        for (i in 0...count ){
            var planeVertexData = VertexData.CreatePlane(128);
            //safeDestroy(planeVertexData.normals); 

            // Transform
            var randomScaling = Math.random() * Math.random() * 1.5 + 0.5;
            var transformMatrix = Matrix.Scaling(randomScaling, randomScaling, 1.0);
            transformMatrix = transformMatrix.multiply(Matrix.RotationZ(Math.random() * Math.PI));
            transformMatrix = transformMatrix.multiply(Matrix.Translation(Math.random() * 1000 - 500, -Math.random() * Math.random() * 100, count - i));
            planeVertexData.transform(transformMatrix);
            // Merge
            globalVertexData.merge(planeVertexData);
        }
        trace('2');
        var clouds = new Mesh("Clouds", scene);
        trace('3');
        globalVertexData.applyToMesh(clouds);
        trace('4');
        clouds.material = cloudMaterial;

        var clouds2 = clouds.clone("Clouds");
        clouds2.position.z = -500;

        /*var r = function () {
            var cameraDepth = ((Date.now() - start_time) * 0.03) % 8000;
            camera.position.z = cameraDepth;
            //scene.render;
            //return scene.render;
        }*/
        scene.executeWhenReady(function() {
            engine.runRenderLoop(scene.render);
        });
        

    /*SceneLoader.Load("assets/scenes/WCafe/", "WCafe.babylon", engine, function(newScene:Scene) {
      this.scene = newScene;

      scene.activeCamera = scene.cameras[0];
      if (scene.activeCamera != null) {
        scene.activeCamera.attachControl(this);

        var _c:FreeCamera = cast scene.activeCamera;

        _c.keysUp.push(87); // W
        _c.keysDown.push(83); // S
        _c.keysLeft.push(65); // A
        _c.keysRight.push(68); // D
      }

      scene.executeWhenReady(function() {
        engine.runRenderLoop(scene.render);
      });
    });*/
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

  public static function safeDestroy (obj:Dynamic, ?destroy:Bool=true) :Bool {
        if (obj == null) return false;
        var objs:Array<Dynamic> = Std.is(obj, Array) ? obj : [obj];
        for (o in objs) {
            if (o == null) continue;
            if (destroy)    
            try { o.destroy(); }
            catch (e:Dynamic) { trace("[Error on object: "+o+", {"+e+"}"); }
            
            var parent = null; try { parent = o.parent; } catch (e:Dynamic) { trace(e); }
            if (parent != null) parent.removeChild ( o );
        }
        return true;
    }
    
    public static function safeRemove (obj:Dynamic) :Bool {
        return safeDestroy (obj, false);
    }
}

            