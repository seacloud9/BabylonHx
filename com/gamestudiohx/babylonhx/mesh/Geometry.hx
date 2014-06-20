package com.gamestudiohx.babylonhx.mesh;

import com.gamestudiohx.babylonhx.mesh.Mesh;
import com.gamestudiohx.babylonhx.Engine;
import com.gamestudiohx.babylonhx.mesh.VertexData;
import com.gamestudiohx.babylonhx.mesh.VertexBuffer;
import com.gamestudiohx.babylonhx.culling.BoundingInfo;
import com.gamestudiohx.babylonhx.mesh.Mesh.BabylonGLBuffer;
import openfl.utils.Float32Array;


    class Geometry {
        //
        //public var Members
        public var id:String;
        public var delayLoadState:Int = Engine.DELAYLOADSTATE_NONE;
        public var delayLoadingFile : String;

        //
        //public var Private
        private var _engine : Engine;
        private var _meshes : Array<Mesh>;
        private var _totalVertices:Int = 0;
        private var _indices:Array<Int> = new Array<Int>();
        private var _vertexBuffers:Array<VertexBuffer>;
        private var _delayInfo:Array<String>; //ANY
        private var _indexBuffer:BabylonGLBuffer;
        private var _boundingInfo:BoundingInfo;

        public function new(id:String, engine:Engine, ?vertexData:VertexData, ?updatable:Bool, ?mesh:Mesh ) {
            this.id = id;
            this._engine = engine;
            this._meshes = new Array<Mesh>();

            // vertexData
            if (vertexData) {
                this.setAllVerticesData(vertexData, updatable);
            }
            else {
                this._totalVertices = 0;
                this._indices = new Array<Int>();
            }

            // applyToMesh
            if (mesh) {
                this.applyToMesh(mesh);
            }
        }

        public function getEngine() : Engine {
            return this._engine;
        }

        public function isReady() : Bool {
            return this.delayLoadState == Engine.DELAYLOADSTATE_LOADED || this.delayLoadState == Engine.DELAYLOADSTATE_NONE;
        }

        public function setAllVerticesData(vertexData:VertexData, ?updatable:Bool ) : Void {
            vertexData.applyToGeometry(this, updatable);
        }

        public function setVerticesData(kind:String, data:Array<Float>, ?updatable:Bool ) : Void {
            if(this._vertexBuffers == null){
                this._vertexBuffers = new Array<VertexBuffer>();
            }

            if (this._vertexBuffers[kind]) {
                this._vertexBuffers[kind].dispose();
            }

            this._vertexBuffers[kind] = new VertexBuffer(this._engine, data, kind, updatable, this._meshes.length == 0);

            if (kind == VertexBuffer.PositionKind) {
                var stride = this._vertexBuffers[kind].getStrideSize();

                this._totalVertices = data.length / stride;

                var extend = Tools.ExtractMinAndMax(data, 0, this._totalVertices);

                var meshes = this._meshes;
                var numOfMeshes = meshes.length;
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var index = 0; index < numOfMeshes; index++)
                var index = 0;
                while( index < numOfMeshes)  {
                    var mesh = meshes[index];
                    mesh._resetPointsArrayCache();
                    mesh._boundingInfo = new BoundingInfo(extend.minimum, extend.maximum);
                    mesh._createGlobalSubMesh();
                    mesh.computeWorldMatrix(true);
                 index++;

            }
            }
        }

        public function updateVerticesData(kind:String, data:Array<Float>, ?updateExtends:Bool ) : Void {
            var vertexBuffer = this.getVertexBuffer(kind);

            if (!vertexBuffer) {
                return;
            }

            vertexBuffer.update(data);

            if (kind == VertexBuffer.PositionKind) {

                var extend;

                if (updateExtends) {
                    var stride = vertexBuffer.getStrideSize();
                    this._totalVertices = data.length / stride;
                    extend = Tools.ExtractMinAndMax(data, 0, this._totalVertices);
                }

                var meshes = this._meshes;
                var numOfMeshes = meshes.length;
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var index = 0; index < numOfMeshes; index++)
                var index = 0;
                while( index < numOfMeshes)  {
                    var mesh = meshes[index];
                    mesh._resetPointsArrayCache();
                    if (updateExtends) {
                        mesh._boundingInfo = new BoundingInfo(extend.minimum, extend.maximum);
                    }
                 index++;

            }
            }
        }

        public function getTotalVertices() : Float {
            if (!this.isReady()) {
                return 0;
            }

            return this._totalVertices;
        }

        public function getVerticesData(kind:String ) : Array<Float> {
            var vertexBuffer = this.getVertexBuffer(kind);
            if (!vertexBuffer) {
                return null;
            }
            return vertexBuffer.getData();
        }

        public function getVertexBuffer(kind:String ) : VertexBuffer {
            if (!this.isReady()) {
                return null;
            }
            return this._vertexBuffers[kind];
        }

        public function getVertexBuffers() : Array<VertexBuffer> {
            if (!this.isReady()) {
                return null;
            }
            return this._vertexBuffers;
        }

        public function isVerticesDataPresent(kind:String ) : Bool {
            if (!this._vertexBuffers) {
                if (this._delayInfo.indexOf(kind) != -1) {
                    return true;
                }
                return false;
            }
            return this._vertexBuffers[kind] != null;
        }

        public function getVerticesDataKinds():Array<String> {
            var result = new Array<String>();
            if (!this._vertexBuffers && this._delayInfo) {
                for (kind in this._delayInfo) {
                     result.push(kind);
                }
            } else {
                for (kind in this._vertexBuffers) {
                    result.push(kind);
                }
            }

            return result;
        }

        public function setIndices(indices:Array<Float> ) : Void {
            if (this._indexBuffer) {
                this._engine._releaseBuffer(this._indexBuffer);
            }

            this._indices = indices;
            if (this._meshes.length != 0 && this._indices) {
                this._indexBuffer = this._engine.createIndexBuffer(this._indices);
            }

            var meshes = this._meshes;
            var numOfMeshes = meshes.length;
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var index = 0; index < numOfMeshes; index++)
            var index = 0;
            while( index < numOfMeshes)  {
                meshes[index]._createGlobalSubMesh();
             index++;

            }
        }

        public function getTotalIndices() : Float {
            if (!this.isReady()) {
                return 0;
            }
            return this._indices.length;
        }

        public function getIndices() : Array<Float> {
            if (!this.isReady()) {
                return null;
            }
            return this._indices;
        }

        public function getIndexBuffer() : Dynamic {
            if (!this.isReady()) {
                return null;
            }
            return this._indexBuffer;
        }

        public function releaseForMesh(mesh:Mesh ) : Void {
            var meshes = this._meshes;
            var index = meshes.indexOf(mesh);

            if (index == -1) {
                return;
            }
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var kind in this._vertexBuffers)
            for(kind in this._vertexBuffers){
                this._vertexBuffers[kind].dispose();
            }

            if (this._indexBuffer && this._engine._releaseBuffer(this._indexBuffer)) {
                this._indexBuffer = null;
            }

            meshes.splice(index, 1);

            mesh._geometry = null;
        }

        public function applyToMesh(mesh:Mesh ) : Void {
            if (mesh._geometry == this) {
                return;
            }

            var previousGeometry = mesh._geometry;
            if (previousGeometry) {
                previousGeometry.releaseForMesh(mesh);
            }

            var meshes = this._meshes;

            // must be done before setting vertexBuffers because of mesh._createGlobalSubMesh()
            mesh._geometry = this;

            mesh.getScene().pushGeometry(this);

            meshes.push(mesh);

            if (this.isReady()) {
                this._applyToMesh(mesh);
            }
            else {
                mesh._boundingInfo = this._boundingInfo;
            }
        }

        private function _applyToMesh(mesh:Mesh ) : Void {
            var numOfMeshes = this._meshes.length;

            // vertexBuffers
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var kind in this._vertexBuffers)
            for(kind in this._vertexBuffers){
                if (numOfMeshes == 1) {
                    this._vertexBuffers[kind].create();
                }
                this._vertexBuffers[kind]._buffer.references = numOfMeshes;

                if (kind == VertexBuffer.PositionKind) {
                    mesh._resetPointsArrayCache();

                    var extend = Tools.ExtractMinAndMax(this._vertexBuffers[kind].getData(), 0, this._totalVertices);
                    mesh._boundingInfo = new BoundingInfo(extend.minimum, extend.maximum);

                    mesh._createGlobalSubMesh();
                }
            }

            // indexBuffer
            if (numOfMeshes == 1 && this._indices) {
                this._indexBuffer = this._engine.createIndexBuffer(this._indices);
            }
            if (this._indexBuffer) {
                this._indexBuffer.references = numOfMeshes;
            }
        }

        public function load(scene:Scene,  ?onLoaded:Dynamic):Void {
            if (this.delayLoadState == Engine.DELAYLOADSTATE_LOADING) {
                return;
            }

            if (this.isReady()) {
                if (onLoaded) {
                    onLoaded();
                }
                return;
            }

            this.delayLoadState = Engine.DELAYLOADSTATE_LOADING;

            scene._addPendingData(this);
            Tools.LoadFile(this.delayLoadingFile, function(data:Array<Float>){
                this._delayLoadingFunction(JSON.parse(data), this);

                this.delayLoadState = Engine.DELAYLOADSTATE_LOADED;
                this._delayInfo = new Array<String>();

                scene._removePendingData(this);

                var meshes = this._meshes;
                var numOfMeshes = meshes.length;
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var index = 0; index < numOfMeshes; index++)
                var index = 0;
                while( index < numOfMeshes)  {
                    this._applyToMesh(meshes[index]);
                 index++;

            }
                if (onLoaded) {
                    onLoaded();
                }
            }, function (){}, scene.database);
        }

        public function dispose() : Void {
            var meshes = this._meshes;
            var numOfMeshes = meshes.length;
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var index = 0; index < numOfMeshes; index++)
            var index = 0;
            while( index < numOfMeshes)  {
                this.releaseForMesh(meshes[index]);
             index++;

            }
            this._meshes = new Array<Mesh>();
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var kind in this._vertexBuffers)
            for(kind in this._vertexBuffers){
                this._vertexBuffers[kind].dispose();
            }
            this._vertexBuffers = new Array<VertexBuffer>();
            this._totalVertices = 0;

            if (this._indexBuffer) {
                this._engine._releaseBuffer(this._indexBuffer);
            }
            this._indexBuffer = null;
            this._indices = new Array<Int>();

            this.delayLoadState = Engine.DELAYLOADSTATE_NONE;
            this.delayLoadingFile = null;
            this._delayLoadingFunction = null;
            this._delayInfo = new Array<String>();

            this._boundingInfo = null; // todo: .dispose()
        }

        public function copy(id:String ) : Geometry {
            var vertexData = new VertexData();

            vertexData.indices = new Array<Int>();

            var indices = this.getIndices();
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var index = 0; index < indices.length; index++)
            var index = 0;
            while( index < indices.length)  {
                vertexData.indices.push(indices[index]);
             index++;

            }

            var updatable = false;
            var stopChecking = false;
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var kind in this._vertexBuffers)
            for(kind in this._vertexBuffers){
                vertexData.set(this.getVerticesData(kind), kind);
                if (!stopChecking) {
                    updatable = this.getVertexBuffer(kind).isUpdatable();
                    stopChecking = !updatable;
                }

            }

            var geometry = new Geometry(id, this._engine, vertexData, updatable, null);

            geometry.delayLoadState = this.delayLoadState;
            geometry.delayLoadingFile = this.delayLoadingFile;
            geometry._delayLoadingFunction = this._delayLoadingFunction;

            for (kind in this._delayInfo) {
                if(geometry._delayInfo == null){
                   geometry._delayInfo = new Array<String>();
                }
                geometry._delayInfo.push(kind);
            }

            // Bounding info
            var extend = Tools.ExtractMinAndMax(this.getVerticesData(VertexBuffer.PositionKind), 0, this.getTotalVertices());
            geometry._boundingInfo = new BoundingInfo(extend.minimum, extend.maximum);

            return geometry;
        }

        // Statics

        static function ExtractFromMesh(mesh:Mesh, id:String ) : Geometry {
            var geometry = mesh._geometry;

            if (!geometry) {
                return null;
            }

            return geometry.copy(id);
        }
    
        // from http://stackoverflow.com/questions/105034/how-to-create-a-guid-uuid-in-javascript/2117523#answer-2117523
        // be aware Math.

        public function RandomId():String {
            var CHARS:Array<String> = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz".split("");
            var chars = CHARS, uuid = new Array(), rnd = 0, r;
            for (i in 0...36) {
             if (i==8 || i==13 ||  i==18 || i==23) {
               uuid[i] = "-";
              } else if (i==14) {
                 uuid[i] = "4";
              } else {
              if (rnd <= 0x02) rnd = 0x2000000 + Std.parseInt( Std.string(Math.random() * Std.parseFloat(Std.string(0x1000000)))) | 0;
                r = rnd & 0xf;
                rnd = rnd >> 4;
               uuid[i] = chars[(i == 19) ? (r & 0x3) | 0x8 : r];
              }
             }
            return uuid.join("");
          }
    }

 