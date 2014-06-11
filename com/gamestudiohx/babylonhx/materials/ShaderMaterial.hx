package com.gamestudiohx.babylonhx.materials;

import com.gamestudiohx.babylonhx.lights.Light;
import com.gamestudiohx.babylonhx.lights.PointLight;
import com.gamestudiohx.babylonhx.lights.HemisphericLight;
import com.gamestudiohx.babylonhx.lights.DirectionalLight;
import com.gamestudiohx.babylonhx.lights.SpotLight;
import com.gamestudiohx.babylonhx.mesh.Mesh;
import com.gamestudiohx.babylonhx.mesh.VertexBuffer;
import com.gamestudiohx.babylonhx.Scene;
import com.gamestudiohx.babylonhx.Engine;
import com.gamestudiohx.babylonhx.tools.math.Color3;
import com.gamestudiohx.babylonhx.tools.math.Color4;
import com.gamestudiohx.babylonhx.tools.math.Vector2;
import com.gamestudiohx.babylonhx.tools.math.Vector3;
import com.gamestudiohx.babylonhx.tools.math.Matrix;
import com.gamestudiohx.babylonhx.tools.SmartArray;
import com.gamestudiohx.babylonhx.tools.Tools;
import com.gamestudiohx.babylonhx.materials.textures.Texture;
import com.gamestudiohx.babylonhx.materials.textures.CubeTexture;

/**
 * Port of BabylonJs project - http://www.babylonjs.com/
 * ...
 * @author Brendon Smith
 */

class ShaderMaterial extends Material {

		private var _shaderPath:String;
        private var _options:Dynamic;
        private var _textures:Array<Texture> = [];
        private var _floats:Array<Float> = [];
        private var _floatsArrays:Dynamic = {};
        private var _colors3:Array<Color3> = [];
        private var _colors4:Array<Color4> = [];
        private var _vectors2:Array<Vector2> = [];
        private var _vectors3:Array<Vector3> = [];
        private var _matrices:Array<Matrix> = [];
        private var _cachedWorldViewMatrix:Matrix = new Matrix();

	public function new(name:String, scene:Scene, shaderPath:String, options:Dynamic) {
		super(name, scene);
            this._shaderPath = shaderPath;

            options.needAlphaBlending = options.needAlphaBlending || false;
            options.needAlphaTesting = options.needAlphaTesting || false;
            options.attributes = options.attributes || ["position", "normal", "uv"];
            options.uniforms = options.uniforms || ["worldViewProjection"];
            options.samplers = options.samplers || [];

            this._options = options;
	}

	
        public function needAlphaBlending() : boolean {
            return this._options.needAlphaBlending;
        }

        public function needAlphaTesting() : boolean {
            return this._options.needAlphaTesting;
        }

           private function _checkUniform(uniformName) : Void {
            if (this._options.uniforms.indexOf(uniformName) === -1) {
                this._options.uniforms.push(uniformName);
            }
        }

        public function setTexture(name:String, texture:Texture ) : ShaderMaterial {
            if (this._options.samplers.indexOf(name) === -1) {
                this._options.samplers.push(name);
            }
            this._textures[name] = texture;

            return this;
        }

        public function setFloat(name:String, value:Float ) : ShaderMaterial {
            this._checkUniform(name);
            this._floats[name] = value;

            return this;
        }

        public function setFloats(name:String, value:number[] ) : ShaderMaterial {
            this._checkUniform(name);
            this._floatsArrays[name] = value;

            return this;
        }

        public function setColor3(name:String, value:Color3 ) : ShaderMaterial {
            this._checkUniform(name);
            this._colors3[name] = value;

            return this;
        }

        public function setColor4(name:String, value:Color4 ) : ShaderMaterial {
            this._checkUniform(name);
            this._colors4[name] = value;

            return this;
        }

        public function setVector2(name:String, value:Vector2 ) : ShaderMaterial {
            this._checkUniform(name);
            this._vectors2[name] = value;

            return this;
        }

        public function setVector3(name:String, value:Vector3 ) : ShaderMaterial {
            this._checkUniform(name);
            this._vectors3[name] = value;

            return this;
        }

        public function setMatrix(name:String, value:Matrix ) : ShaderMaterial {
            this._checkUniform(name);
            this._matrices[name] = value;

            return this;
        }

        public function isReady() : boolean {
            var engine = this.getScene().getEngine();

            this._effect = engine.createEffect(this._shaderPath,
                this._options.attributes,
                this._options.uniforms,
                this._options.samplers,
                "", null, this.onCompiled, this.onError);

            if (!this._effect.isReady()) {
                return false;
            }

            return true;
        }

        public function bind(world:Matrix ) : Void {
            // Std values
            if (this._options.uniforms.indexOf("world") !== -1) {
                this._effect.setMatrix("world", world);
            }

            if (this._options.uniforms.indexOf("view") !== -1) {
                this._effect.setMatrix("view", this.getScene().getViewMatrix());
            }

            if (this._options.uniforms.indexOf("worldView") !== -1) {
                world.multiplyToRef(this.getScene().getViewMatrix(), this._cachedWorldViewMatrix);
                this._effect.setMatrix("worldView", this._cachedWorldViewMatrix);
            }

            if (this._options.uniforms.indexOf("projection") !== -1) {
                this._effect.setMatrix("projection", this.getScene().getProjectionMatrix());
            }

            if (this._options.uniforms.indexOf("worldViewProjection") !== -1) {
                this._effect.setMatrix("worldViewProjection", world.multiply(this.getScene().getTransformMatrix()));
            }

            // Texture
            for (var name in this._textures) {
                this._effect.setTexture(name, this._textures[name]);
            }

            // Float    
            for (name in this._floats) {
                this._effect.setFloat(name, this._floats[name]);
            }

            // Float s   
            for (name in this._floatsArrays) {
                this._effect.setArray(name, this._floatsArrays[name]);
            }

            // Color3        
            for (name in this._colors3) {
                this._effect.setColor3(name, this._colors3[name]);
            }

            // Color4      
            for (name in this._colors4) {
                var color = this._colors4[name];
                this._effect.setFloat4(name, color.r, color.g, color.b, color.a);
            }

            // Vector2        
            for (name in this._vectors2) {
                this._effect.setVector2(name, this._vectors2[name]);
            }

            // Vector3        
            for (name in this._vectors3) {
                this._effect.setVector3(name, this._vectors3[name]);
            }

            // Matrix      
            for (name in this._matrices) {
                this._effect.setMatrix(name, this._matrices[name]);
            }
        }

        public function dispose(?forceDisposeEffect:boolean ) : Void {
            for (var name in this._textures) {
                this._textures[name].dispose();
            }

            this._textures = [];

            super.dispose(forceDisposeEffect);
        }

}