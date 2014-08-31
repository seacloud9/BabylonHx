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
  var engine:Engine;
  var scene:Scene;
  var _c:FreeCamera;
  
  
  function resize(e) {
    if (!inited) init();
    // else (resize or orientation change)
  }

  function init() {
    if (inited) return;
    inited = true;
    engine = new Engine(this, true); 
    scene = new Scene(engine);
    SceneLoader.Load("assets/train/", "Train.babylon", engine, function(newScene:Scene) {
      this.scene = newScene;
      scene.activeCamera = scene.cameras[0];
      _c = cast scene.activeCamera;
      //this.addEventListener(Event.ENTER_FRAME, update);
      //this.scene.activeCameraByID('b2406c53-ea2e-4ab6-ad7e-bf978596156e');
      //this.scene.activeCameraByID(scene.cameras[0].id);
     
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
        addStats();
      });
    });
  }

  public function update(e : Event){
    //trace('In camera - ' + Reflect.fields(_c.position.z));
  }

  /* SETUP */
  public function new() {
    super();  
    addEventListener(Event.ADDED_TO_STAGE, added);
  }

  private function addStats(){
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
