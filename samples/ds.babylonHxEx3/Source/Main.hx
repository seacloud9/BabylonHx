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
import openfl.display.Shape;
import openfl.display.Sprite;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.geom.Rectangle;
import openfl.Lib;
import openfl.display.Graphics;
import openfl.display.GradientType;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
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
    var start_time = Date.now().getTime();
    inited = true;
    var engine = new Engine(this, true);     
    var scene = new Scene(engine);
    var background = new Layer("back0", null, scene);
    background.texture = new DynamicTexture("dynamic texture", {width:512, height:512}, scene, true);
    var size = background.texture.getSize();
    var shape:Shape = new Shape();
    var m:openfl.geom.Matrix = new openfl.geom.Matrix();
    var bounds:Rectangle = shape.getBounds(shape);
    m.translate(-bounds.left, -bounds.top);
    //m.createGradientBox(size.width, size.height,toRad(-90));
    shape.graphics.beginGradientFill(GradientType.LINEAR,[0x1e4877,0x4584b4],[1,1],[0,255],m);
    shape.graphics.drawRect( 0, 0, size.width, size.height);
    shape.graphics.endFill();
    background.texture._canvas.draw(shape, m);
    background.texture.update();
    
    



   // var camera = new FreeCamera("camera", new Vector3(0, 0, 0), scene);
   // 
   // 
   var camera = new ArcRotateCamera("Camera", 0, 0, 0, Vector3.Zero(), scene);
    camera.attachControl(this);

        camera.fov = 30;
        camera.minZ = 1;
        camera.maxZ = 3000;

        var light = new DirectionalLight("Dir0", new Vector3(1, -1, 0), scene);

        light.parent = camera;

       var cloudMaterial = new ShaderMaterial("cloud", scene, {
            vertex: "clouds",
            fragment: "clouds",
        },
        {
            needAlphaBlending: true,
            attributes: ["position", "uv"],
            uniforms: ["worldViewProjection"],
            samplers: ["textureSampler"]
        });
        cloudMaterial.setTexture("textureSampler", new Texture("assets/img/cloud.png", scene));
        cloudMaterial.setFloat("fogNear", -100);
        cloudMaterial.setFloat("fogFar", 3000);
        cloudMaterial.setColor3("fogColor", new Color3(69, 132, 180));
   
        // Create merged planes
        //var count = 8000;
        var count = 200;
        var globalVertexData = new VertexData();
        for (i in 0...count ){
            var planeVertexData = VertexData.CreatePlane(128);
            planeVertexData.normals = new Array<Float>(); 

            // Transform
            var randomScaling = Math.random() * Math.random() * 1.5 + 0.5;
            var transformMatrix = Matrix.Scaling(randomScaling, randomScaling, 1.0);
            //trace('rot--' + Math.random() * Math.PI);
            transformMatrix = transformMatrix.multiply(Matrix.RotationZ(Math.random() * Math.PI));
            transformMatrix = transformMatrix.multiply(Matrix.Translation(Math.random() * 1000 - 500, -Math.random() * Math.random() * 100, count - i));
            //trace(planeVertexData.positions);
            //trace('transformMatrix ===' +transformMatrix );
            planeVertexData.transform(transformMatrix);
            //trace(planeVertexData.positions);
            // Merge
            globalVertexData.merge(planeVertexData);
        }
        var clouds = new Mesh("Clouds", scene);

        globalVertexData.applyToMesh(clouds);
        clouds.material = cloudMaterial;
        clouds.position.z = camera.position.z + 10 ;

        //var clouds2 = clouds.clone("Clouds");
        //clouds2.position.z = -500;
        // 
        // 
        
        var skybox = Mesh.CreateBox("skyBox", 100.0, scene);
        var skyboxMaterial = new StandardMaterial("skyBox", scene);
        skyboxMaterial.backFaceCulling = false;
        skyboxMaterial.reflectionTexture = new CubeTexture("assets/img/skybox/skybox", scene);
        skyboxMaterial.reflectionTexture.coordinatesMode = Texture.SKYBOX_MODE;
        skyboxMaterial.diffuseColor = new Color3(0, 0, 0);
        skyboxMaterial.specularColor = new Color3(0, 0, 0);
        skybox.material = skyboxMaterial;

         scene.registerBeforeRender(function () {
            var cameraDepth = ((Date.now().getTime()  - start_time) * 0.03) % 8000;
           // camera.position.z = cameraDepth;
            //return scene.render;
        });

        scene.executeWhenReady(function() {
            engine.runRenderLoop(scene.render);
        });
        
  }

  public function toRad(a:Float):Float {
    return a*Math.PI/180;  
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
    Lib.current.stage.align = openfl.display.StageAlign.TOP_LEFT;
    Lib.current.stage.scaleMode = openfl.display.StageScaleMode.NO_SCALE;
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

            