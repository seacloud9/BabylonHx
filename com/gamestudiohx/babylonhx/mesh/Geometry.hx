package com.gamestudiohx.babylonhx.mesh;

import com.gamestudiohx.babylonhx.Engine;
import com.gamestudiohx.babylonhx.mesh.VertexData;
import com.gamestudiohx.babylonhx.mesh.Mesh.BabylonGLBuffer;
import openfl.utils.Float32Array;


    class Geometry {
        //
        //public var Members
        public id : String;
        public delayLoadState = BABYLON.Engine.DELAYLOADSTATE_NONE;
        public var delayLoadingFile : String;

        //
        //public var Private
        private _engine : Engine;
        private var _meshes : Mesh[];
        private _totalVertices = 0;
        private _indices = [];
        private _vertexBuffers;
        private _delayInfo; //ANY
        private _indexBuffer;
        private var _boundingInfo : BoundingInfo;
        private _delayLoadingFunction: (any, Geometry) => void;

        public function new(id:String, engine:Engine, ?vertexData:VertexData, ?updatable:boolean, ?mesh:Mesh ) {
            this.id = id;
            this._engine = engine;
            this._meshes = [];

            // vertexData
            if (vertexData) {
                this.setAllVerticesData(vertexData, updatable);
            }
            else {
                this._totalVertices = 0;
                this._indices = [];
            }

            // applyToMesh
            if (mesh) {
                this.applyToMesh(mesh);
            }
        }

        public function getEngine() : Engine {
            return this._engine;
        }

        public function isReady() : boolean {
            return this.delayLoadState == BABYLON.Engine.DELAYLOADSTATE_LOADED || this.delayLoadState == BABYLON.Engine.DELAYLOADSTATE_NONE;
        }

        public function setAllVerticesData(vertexData:VertexData, ?updatable:boolean ) : Void {
            vertexData.applyToGeometry(this, updatable);
        }

        public function setVerticesData(kind:String, data:Float[], ?updatable:boolean ) : Void {
            this._vertexBuffers = this._vertexBuffers || {};

            if (this._vertexBuffers[kind]) {
                this._vertexBuffers[kind].dispose();
            }

            this._vertexBuffers[kind] = new VertexBuffer(this._engine, data, kind, updatable, this._meshes.length == 0);

            if (kind == BABYLON.VertexBuffer.PositionKind) {
                var stride = this._vertexBuffers[kind].getStrideSize();

                this._totalVertices = data.length / stride;

                var extend = BABYLON.Tools.ExtractMinAndMax(data, 0, this._totalVertices);

                var meshes = this._meshes;
                var numOfMeshes = meshes.length;
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var index = 0; index < numOfMeshes; index++)
                var index = 0;
                while( index < numOfMeshes)  {
                    var mesh = meshes[index];
                    mesh._resetPointsArrayCache();
                    mesh._boundingInfo = new BABYLON.BoundingInfo(extend.minimum, extend.maximum);
                    mesh._createGlobalSubMesh();
                    mesh.computeWorldMatrix(true);
                 index++;

            }
            }
        }

        public function updateVerticesData(kind:String, data:Float[], ?updateExtends:boolean ) : Void {
            var vertexBuffer = this.getVertexBuffer(kind);

            if (!vertexBuffer) {
                return;
            }

            vertexBuffer.update(data);

            if (kind == BABYLON.VertexBuffer.PositionKind) {

                var extend;

                if (updateExtends) {
                    var stride = vertexBuffer.getStrideSize();
                    this._totalVertices = data.length / stride;
                    extend = BABYLON.Tools.ExtractMinAndMax(data, 0, this._totalVertices);
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
                        mesh._boundingInfo = new BABYLON.BoundingInfo(extend.minimum, extend.maximum);
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

        public function getVerticesData(kind:String ) : Float[] {
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

        public function getVertexBuffers() : VertexBuffer[] {
            if (!this.isReady()) {
                return null;
            }
            return this._vertexBuffers;
        }

        public function isVerticesDataPresent(kind:String ) : boolean {
            if (!this._vertexBuffers) {
                if (this._delayInfo) {
                    return this._delayInfo.indexOf(kind) !== -1;
                }
                return false;
            }
            return this._vertexBuffers[kind] !== undefined;
        }

        public function getVerticesDataKinds() : String[] {
            var result = [];
            if (!this._vertexBuffers && this._delayInfo) {
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var kind in this._delayInfo)
                var kind in this._delayInfo);
                while()  {
                    result.push(kind);
                ;

            }
            } else {
                for (kind in this._vertexBuffers) {
                    result.push(kind);
                }
            }

            return result;
        }

        public function setIndices(indices:Float[] ) : Void {
            if (this._indexBuffer) {
                this._engine._releaseBuffer(this._indexBuffer);
            }

            this._indices = indices;
            if (this._meshes.length !== 0 && this._indices) {
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

        public function getIndices() : Float[] {
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
            var kind in this._vertexBuffers);
            while()  {
                this._vertexBuffers[kind].dispose();
            ;

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
            var kind in this._vertexBuffers);
            while()  {
                if (numOfMeshes == 1) {
                    this._vertexBuffers[kind].create();
                }
                this._vertexBuffers[kind]._buffer.references = numOfMeshes;

                if (kind == BABYLON.VertexBuffer.PositionKind) {
                    mesh._resetPointsArrayCache();

                    var extend = BABYLON.Tools.ExtractMinAndMax(this._vertexBuffers[kind].getData(), 0, this._totalVertices);
                    mesh._boundingInfo = new BABYLON.BoundingInfo(extend.minimum, extend.maximum);

                    mesh._createGlobalSubMesh();
                }
            ;

            }

            // indexBuffer
            if (numOfMeshes == 1 && this._indices) {
                this._indexBuffer = this._engine.createIndexBuffer(this._indices);
            }
            if (this._indexBuffer) {
                this._indexBuffer.references = numOfMeshes;
            }
        }

        public function load(scene:Scene,  onLoaded?: () => void) : Void {
            if (this.delayLoadState == BABYLON.Engine.DELAYLOADSTATE_LOADING) {
                return;
            }

            if (this.isReady()) {
                if (onLoaded) {
                    onLoaded();
                }
                return;
            }

            this.delayLoadState = BABYLON.Engine.DELAYLOADSTATE_LOADING;

            scene._addPendingData(this);
            BABYLON.Tools.LoadFile(this.delayLoadingFile, data => {
                this._delayLoadingFunction(JSON.parse(data), this);

                this.delayLoadState = BABYLON.Engine.DELAYLOADSTATE_LOADED;
                this._delayInfo = [];

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
            }, () => { }, scene.database);
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
            this._meshes = [];
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var kind in this._vertexBuffers)
            var kind in this._vertexBuffers);
            while()  {
                this._vertexBuffers[kind].dispose();
            ;

            }
            this._vertexBuffers = [];
            this._totalVertices = 0;

            if (this._indexBuffer) {
                this._engine._releaseBuffer(this._indexBuffer);
            }
            this._indexBuffer = null;
            this._indices = [];

            this.delayLoadState = BABYLON.Engine.DELAYLOADSTATE_NONE;
            this.delayLoadingFile = null;
            this._delayLoadingFunction = null;
            this._delayInfo = [];

            this._boundingInfo = null; // todo: .dispose()
        }

        public function copy(id:String ) : Geometry {
            var vertexData = new BABYLON.VertexData();

            vertexData.indices = [];

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
            var kind in this._vertexBuffers);
            while()  {
                vertexData.set(this.getVerticesData(kind), kind);

                if (!stopChecking) {
                    updatable = this.getVertexBuffer(kind).isUpdatable();
                    stopChecking = !updatable;
                }
            ;

            }

            var geometry = new BABYLON.Geometry(id, this._engine, vertexData, updatable, null);

            geometry.delayLoadState = this.delayLoadState;
            geometry.delayLoadingFile = this.delayLoadingFile;
            geometry._delayLoadingFunction = this._delayLoadingFunction;

            for (kind in this._delayInfo) {
                geometry._delayInfo = geometry._delayInfo || [];
                geometry._delayInfo.push(kind);
            }

            // Bounding info
            var extend = BABYLON.Tools.ExtractMinAndMax(this.getVerticesData(BABYLON.VertexBuffer.PositionKind), 0, this.getTotalVertices());
            geometry._boundingInfo = new BABYLON.BoundingInfo(extend.minimum, extend.maximum);

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

        public function random() : couldcausecollisionspublicstaticRandomId()String {
            return 'xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx'.replace(/[xy]/g, c => {
                var r = Math.random() * 16 | 0, v = c == 'x' ? r : (r & 0x3 | 0x8);
                return v.toString(16);
            });
        }
    }

 