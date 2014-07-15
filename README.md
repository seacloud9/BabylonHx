BabylonHx
=========
WIP
Update this version BabylonHx is under rapid development so if you download this and want to use it as a lib for one of the examples it will break. 
But all Examples except Ex3 have a stable version of BabylonHx.  That being said if you want to help please do.

I am trying to get this version to catch up to the new version of BabylonJS.  Complete with PostProcessing Rendering, Shader Materials, Geometry Class etc...

=========

BabylonHx is a direct port of BabylonJs engine to Haxe/OpenFL. 
It supports (almost) all features of the original.

**IMPORTANT:** Use this settings in your application.xml file for mobile targets to work (thanks @labe-me):<br/>
***&lt;window require-shaders="true" hardware="true" depth-buffer="true" /&gt;***

*Not supported features:*


  * Video textures
  * Image flipping (images have to be flipped by 'hand')
  * Incremental loading (because of OpenFL and its way of handling assets)
  * Support for drag'n'drop
  * Physics


And probably a few more things ...

Visit http://babylonjs.com/ for more info about the engine.

**Known bugs (major ones):**

  * Currently works with <a href="https://github.com/seacloud9/BabylonHx/tree/master/samples/ds.babylonHxEx1">Example 1</a> targets Mac, Neko, HTML5 is broken most likely due to an float array 32 issue.

  <br /><a href="https://github.com/seacloud9/BabylonHx/tree/master/samples/ds.babylonHxEx1">
  <img src="https://raw.githubusercontent.com/seacloud9/BabylonHx/master/samples/ds.babylonHxEx1/screenshot1.jpg" style="max-width:100%" /></a>
  * Currently works with <a href="https://github.com/seacloud9/BabylonHx/tree/master/samples/ds.babylonHxEx2">Example 2</a> targets Mac, Neko, HTML5 is broken most likely due to an float array 32 issue.

  <br />
<br /><a href="https://github.com/seacloud9/BabylonHx/tree/master/samples/ds.babylonHxEx2">
<img src="/seacloud9/BabylonHx/raw/master/samples/ds.babylonHxEx2/screenshot1.jpg" style="max-width:100%"/>
</a>
**TODO:**

  * Fix all mesh classes starting with AbstractMesh
  * Remove debugging info / trace
  * Speedup the code and Optimize 
  * Add the vertex class aka babylon.csg.ts
  * Instanced Material Rendering
  * Double check new draw calls for platforms
  * Double check vertexBuffer class
  * Fix various scene and engine bugs
  * Mesh.clone() fix deep copy in tools as it does not work properly
  * Fix bug with lights
  * ~~Update 'Matrix' class to use Float32Array for JavaScript target~~
  * Code refactor - remove reflections from critical places and general code cleanup ***
  * Keep up with BabylonJs! 


