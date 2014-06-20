package com.gamestudiohx.babylonhx.mesh;

import com.gamestudiohx.babylonhx.tools.math.Matrix;
import com.gamestudiohx.babylonhx.Engine;
import com.gamestudiohx.babylonhx.mesh.Mesh.BabylonGLBuffer;
import openfl.utils.ArrayBufferView;
import openfl.utils.Float32Array;
import openfl.utils.Int16Array;
import openfl.utils.Int32Array;
import openfl.utils.UInt8Array;



    /*
    class IGetSetVerticesData {
        isVerticesDataPresent(kind:String): Bool;
        getVerticesData(kind:String): Array<Float>;
        getIndices(): Array<Float>;
        setVerticesData(kind: String, data: Array<Float>, updatable?: Bool): void;
        updateVerticesData(kind: String, data: Array<Float>, updateExtends?: Bool, makeItUnique?: Bool): void;
        setIndices(indices: Array<Float>): void;
    }

    */

    class VertexData {
        public var positions : Array<Float>;
        public var normals : Array<Float>;
        public var uvs : Array<Float>;
        public var uv2s : Array<Float>;
        public var colors : Array<Float>;
        public var matricesIndices : Array<Float>;
        public var matricesWeights : Array<Float>;
        public var indices : Array<Float>;

        public function set(data:Array<Float>, kind:String ) {
            switch (kind) {
                case VertexBuffer.PositionKind:
                this.positions = data;
                case VertexBuffer.NormalKind:
                this.normals = data;
                case VertexBuffer.UVKind:
                this.uvs = data;
                case VertexBuffer.UV2Kind:
                this.uv2s = data;
                case VertexBuffer.ColorKind:
                this.colors = data;
                case VertexBuffer.MatricesIndicesKind:
                this.matricesIndices = data;
                case VertexBuffer.MatricesWeightsKind:
                this.matricesWeights = data;
            }
        }

        public function applyToMesh(mesh:Mesh, ?updatable:Bool ) : Void {
            this._applyTo(mesh, updatable);
        }

        public function applyToGeometry(geometry:Geometry, ?updatable:Bool ) : Void {
            this._applyTo(geometry, updatable);
        }

        public function updateMesh(mesh:Mesh, ?updateExtends:Bool, ?makeItUnique:Bool ) : Void {
            this._update(mesh);
        }

        public function updateGeometry(geometry:Geometry, ?updateExtends:Bool, ?makeItUnique:Bool ) : Void {
            this._update(geometry);
        }

        private function _applyTo(meshOrGeometry:Geometry, ?updatable:Bool ) {
            if (this.positions.length > 0) {
                meshOrGeometry.setVerticesData(VertexBuffer.PositionKind, this.positions, updatable);
            }

            if (this.normals.length > 0) {
                meshOrGeometry.setVerticesData(VertexBuffer.NormalKind, this.normals, updatable);
            }

            if (this.uvs.length > 0) {
                meshOrGeometry.setVerticesData(VertexBuffer.UVKind, this.uvs, updatable);
            }

            if (this.uv2s.length > 0) {
                meshOrGeometry.setVerticesData(VertexBuffer.UV2Kind, this.uv2s, updatable);
            }

            if (this.colors.length > 0) {
                meshOrGeometry.setVerticesData(VertexBuffer.ColorKind, this.colors, updatable);
            }

            if (this.matricesIndices.length > 0) {
                meshOrGeometry.setVerticesData(VertexBuffer.MatricesIndicesKind, this.matricesIndices, updatable);
            }

            if (this.matricesWeights.length > 0) {
                meshOrGeometry.setVerticesData(VertexBuffer.MatricesWeightsKind, this.matricesWeights, updatable);
            }

            if (this.indices.length > 0) {
                meshOrGeometry.setIndices(this.indices);
            }
        }

        private function _update(meshOrGeometry:Geometry, ?updateExtends:Bool, ?makeItUnique:Bool ) {
            if (this.positions.length > 0) {
                meshOrGeometry.updateVerticesData(VertexBuffer.PositionKind, this.positions, updateExtends, makeItUnique);
            }

            if (this.normals.length > 0) {
                meshOrGeometry.updateVerticesData(VertexBuffer.NormalKind, this.normals, updateExtends, makeItUnique);
            }

            if (this.uvs.length > 0) {
                meshOrGeometry.updateVerticesData(VertexBuffer.UVKind, this.uvs, updateExtends, makeItUnique);
            }

            if (this.uv2s.length > 0) {
                meshOrGeometry.updateVerticesData(VertexBuffer.UV2Kind, this.uv2s, updateExtends, makeItUnique);
            }

            if (this.colors.length > 0) {
                meshOrGeometry.updateVerticesData(VertexBuffer.ColorKind, this.colors, updateExtends, makeItUnique);
            }

            if (this.matricesIndices.length > 0) {
                meshOrGeometry.updateVerticesData(VertexBuffer.MatricesIndicesKind, this.matricesIndices, updateExtends, makeItUnique);
            }

            if (this.matricesWeights.length > 0) {
                meshOrGeometry.updateVerticesData(VertexBuffer.MatricesWeightsKind, this.matricesWeights, updateExtends, makeItUnique);
            }

            if (this.indices.length > 0) {
                meshOrGeometry.setIndices(this.indices);
            }
        }

        public function transform(matrix:Matrix ) : Void {
            var transformed = Vector3.Zero();

            if (this.positions.length > 0) {
                var position = Vector3.Zero();
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var index = 0; index < this.positions.length; index += 3)
                var index = 0;
                while( index < this.positions.length > 0)  {
                    Vector3.FromArrayToRef(this.positions, index, position);

                    Vector3.TransformCoordinatesToRef(position, matrix, transformed);
                    this.positions[index] = transformed.x;
                    this.positions[index + 1] = transformed.y;
                    this.positions[index + 2] = transformed.z;
                 index += 3;

                }
            }

            if (this.normals.length > 0) {
                var normal = Vector3.Zero();
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (index = 0; index < this.normals.length; index += 3)
                index = 0;
                while( index < this.normals.length > 0)  {
                    Vector3.FromArrayToRef(this.normals, index, normal);

                    Vector3.TransformNormalToRef(normal, matrix, transformed);
                    this.normals[index] = transformed.x;
                    this.normals[index + 1] = transformed.y;
                    this.normals[index + 2] = transformed.z;
                 index += 3;

                }
            }
        }

        public function merge(other:VertexData ) : Void {
            if (other.indices.length > 0) {
                if (!this.indices) {
                    this.indices = [];
                }

                //var offset = this.positions ? this.positions.length / 3  :  0;
                if(this.positions != null){
                    var offset = this.positions.length / 3;
                }else{
                    var offset = 0;
                }

                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var index = 0; index < other.indices.length; index++)
                var index = 0;
                while( index < other.indices.length)  {
                    this.indices.push(other.indices[index] + offset);
                 index++;

                }
            }

            if (other.positions.length > 0) {
                if (!this.positions) {
                    this.positions = [];
                }
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (index = 0; index < other.positions.length; index++)
                index = 0;
                while( index < other.positions.length)  {
                    this.positions.push(other.positions[index]);
                 index++;

                }
            }

            if (other.normals.length > 0) {
                if (!this.normals) {
                    this.normals = [];
                }
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (index = 0; index < other.normals.length; index++)
                index = 0;
                while( index < other.normals.length)  {
                    this.normals.push(other.normals[index]);
                 index++;

                }
            }

            if (other.uvs.length > 0) {
                if (!this.uvs) {
                    this.uvs = [];
                }
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (index = 0; index < other.uvs.length; index++)
                index = 0;
                while( index < other.uvs.length)  {
                    this.uvs.push(other.uvs[index]);
                 index++;

                }
            }

            if (other.uv2s.length > 0) {
                if (!this.uv2s) {
                    this.uv2s = [];
                }
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (index = 0; index < other.uv2s.length; index++)
                index = 0;
                while( index < other.uv2s.length)  {
                    this.uv2s.push(other.uv2s[index]);
                 index++;

                }
            }

            if (other.matricesIndices.length > 0) {
                if (!this.matricesIndices) {
                    this.matricesIndices = [];
                }
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (index = 0; index < other.matricesIndices.length; index++)
                index = 0;
                while( index < other.matricesIndices.length)  {
                    this.matricesIndices.push(other.matricesIndices[index]);
                 index++;

                }
            }

            if (other.matricesWeights.length > 0) {
                if (!this.matricesWeights) {
                    this.matricesWeights = [];
                }
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (index = 0; index < other.matricesWeights.length; index++)
                index = 0;
                while( index < other.matricesWeights.length)  {
                    this.matricesWeights.push(other.matricesWeights[index]);
                 index++;

                }
            }

            if (other.colors.length > 0) {
                if (!this.colors) {
                    this.colors = [];
                }
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (index = 0; index < other.colors.length; index++)
                index = 0;
                while( index < other.colors.length > 0)  {
                    this.colors.push(other.colors[index]);
                 index++;

                }
            }
        }

        // Statics

        static function ExtractFromMesh(mesh:Mesh ) : VertexData {
            return VertexData._ExtractFrom(mesh);
        }

        static function ExtractFromGeometry(geometry:Geometry ) : VertexData {
            return VertexData._ExtractFrom(geometry);
        }

        static function _ExtractFrom(meshOrGeometry:Geometry ) : VertexData {
            var result = new VertexData();

            if (meshOrGeometry.isVerticesDataPresent(VertexBuffer.PositionKind)) {
                result.positions = meshOrGeometry.getVerticesData(VertexBuffer.PositionKind);
            }

            if (meshOrGeometry.isVerticesDataPresent(VertexBuffer.NormalKind)) {
                result.normals = meshOrGeometry.getVerticesData(VertexBuffer.NormalKind);
            }

            if (meshOrGeometry.isVerticesDataPresent(VertexBuffer.UVKind)) {
                result.uvs = meshOrGeometry.getVerticesData(VertexBuffer.UVKind);
            }

            if (meshOrGeometry.isVerticesDataPresent(VertexBuffer.UV2Kind)) {
                result.uv2s = meshOrGeometry.getVerticesData(VertexBuffer.UV2Kind);
            }

            if (meshOrGeometry.isVerticesDataPresent(VertexBuffer.ColorKind)) {
                result.colors = meshOrGeometry.getVerticesData(VertexBuffer.ColorKind);
            }

            if (meshOrGeometry.isVerticesDataPresent(VertexBuffer.MatricesIndicesKind)) {
                result.matricesIndices = meshOrGeometry.getVerticesData(VertexBuffer.MatricesIndicesKind);
            }

            if (meshOrGeometry.isVerticesDataPresent(VertexBuffer.MatricesWeightsKind)) {
                result.matricesWeights = meshOrGeometry.getVerticesData(VertexBuffer.MatricesWeightsKind);
            }

            result.indices = meshOrGeometry.getIndices();

            return result;
        }

        static function CreateBox(size:Float ) : VertexData {
            var normalsSource = [
                new Vector3(0, 0, 1),
                new Vector3(0, 0, -1),
                new Vector3(1, 0, 0),
                new Vector3(-1, 0, 0),
                new Vector3(0, 1, 0),
                new Vector3(0, -1, 0)
            ];

            var indices = [];
            var positions = [];
            var normals = [];
            var uvs = [];

            size = size || 1;

            // Create each face in turn.
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var index = 0; index < normalsSource.length; index++)
            var index = 0;
            while( index < normalsSource.length > 0)  {
                var normal = normalsSource[index];

                // Get two vectors perpendicular to the face normal and to each other.
                var side1 = new Vector3(normal.y, normal.z, normal.x);
                var side2 = Vector3.Cross(normal, side1);

                // Six indices (two triangles) per face.
                var verticesLength = positions.length / 3;
                indices.push(verticesLength);
                indices.push(verticesLength + 1);
                indices.push(verticesLength + 2);

                indices.push(verticesLength);
                indices.push(verticesLength + 2);
                indices.push(verticesLength + 3);

                // Four vertices per face.
                var vertex = normal.subtract(side1).subtract(side2).scale(size / 2);
                positions.push(vertex.x, vertex.y, vertex.z);
                normals.push(normal.x, normal.y, normal.z);
                uvs.push(1.0, 1.0);

                vertex = normal.subtract(side1).add(side2).scale(size / 2);
                positions.push(vertex.x, vertex.y, vertex.z);
                normals.push(normal.x, normal.y, normal.z);
                uvs.push(0.0, 1.0);

                vertex = normal.add(side1).add(side2).scale(size / 2);
                positions.push(vertex.x, vertex.y, vertex.z);
                normals.push(normal.x, normal.y, normal.z);
                uvs.push(0.0, 0.0);

                vertex = normal.add(side1).subtract(side2).scale(size / 2);
                positions.push(vertex.x, vertex.y, vertex.z);
                normals.push(normal.x, normal.y, normal.z);
                uvs.push(1.0, 0.0);
             index++;

                }

            // Result
            var vertexData = new VertexData();

            vertexData.indices = indices;
            vertexData.positions = positions;
            vertexData.normals = normals;
            vertexData.uvs = uvs;

            return vertexData;
        }

        static function CreateSphere(segments:Float, diameter:Float ) : VertexData {

            segments = segments || 32;
            diameter = diameter || 1;

            var radius = diameter / 2;

            var totalZRotationSteps = 2 + segments;
            var totalYRotationSteps = 2 * totalZRotationSteps;

            var indices = [];
            var positions = [];
            var normals = [];
            var uvs = [];
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var zRotationStep = 0; zRotationStep <= totalZRotationSteps; zRotationStep++)
            var zRotationStep = 0;
            while( zRotationStep <= totalZRotationSteps)  {
                var normalizedZ = zRotationStep / totalZRotationSteps;
                var angleZ = (normalizedZ * Math.PI);
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var yRotationStep = 0; yRotationStep <= totalYRotationSteps; yRotationStep++)
                var yRotationStep = 0;
                while( yRotationStep <= totalYRotationSteps)  {
                    var normalizedY = yRotationStep / totalYRotationSteps;

                    var angleY = normalizedY * Math.PI * 2;

                    var rotationZ = Matrix.RotationZ(-angleZ);
                    var rotationY = Matrix.RotationY(angleY);
                    var afterRotZ = Vector3.TransformCoordinates(Vector3.Up(), rotationZ);
                    var complete = Vector3.TransformCoordinates(afterRotZ, rotationY);

                    var vertex = complete.scale(radius);
                    var normal = Vector3.Normalize(vertex);

                    positions.push(vertex.x, vertex.y, vertex.z);
                    normals.push(normal.x, normal.y, normal.z);
                    uvs.push(normalizedZ, normalizedY);
                 yRotationStep++;

                }

                if (zRotationStep > 0) {
                    var verticesCount = positions.length / 3;
                    // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                    //  for (var firstIndex = verticesCount - 2 * (totalYRotationSteps + 1); (firstIndex + totalYRotationSteps + 2) < verticesCount; firstIndex++)
                    var firstIndex = verticesCount - 2 * (totalYRotationSteps + 1);
                    while( (firstIndex + totalYRotationSteps + 2) < verticesCount)  {
                        indices.push((firstIndex));
                        indices.push((firstIndex + 1));
                        indices.push(firstIndex + totalYRotationSteps + 1);

                        indices.push((firstIndex + totalYRotationSteps + 1));
                        indices.push((firstIndex + 1));
                        indices.push((firstIndex + totalYRotationSteps + 2));
                     firstIndex++;

                }
                }
             zRotationStep++;

                }

            // Result
            var vertexData = new VertexData();

            vertexData.indices = indices;
            vertexData.positions = positions;
            vertexData.normals = normals;
            vertexData.uvs = uvs;

            return vertexData;
        }

        static function CreateCylinder(height:Float, diameterTop:Float, diameterBottom:Float, tessellation:Float ) : VertexData {
            var radiusTop = diameterTop / 2;
            var radiusBottom = diameterBottom / 2;
            var indices = [];
            var positions = [];
            var normals = [];
            var uvs = [];

            height = height || 1;
            diameterTop = diameterTop || 0.5;
            diameterBottom = diameterBottom || 1;
            tessellation = tessellation || 16;

            var getCircleVector = i => {
                var angle = (i * 2.0 * Math.PI / tessellation);
                var dx = Math.sin(angle);
                var dz = Math.cos(angle);

                return new Vector3(dx, 0, dz);
            };

            var createCylinderCap  = function (isTop:Bool) {
                if(isTop){
                    var radius = radiusTop;
                    }else{
                    var radius = radiusBottom;
                }

                if (radius == 0) {
                    return;
                }

                // Create cap indices.
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var i = 0; i < tessellation - 2; i++)
                var i = 0;
                while( i < tessellation - 2)  {
                    var i1 = (i + 1) % tessellation;
                    var i2 = (i + 2) % tessellation;

                    if (!isTop) {
                        var tmp = i1;
                        i1 = i2;
                        i2 = tmp;
                    }

                    var vbase = positions.length / 3;
                    indices.push(vbase);
                    indices.push(vbase + i1);
                    indices.push(vbase + i2);
                 i++;

                }

                // Which end of the cylinder is this?
                var normal = new Vector3(0, -1, 0);
                var textureScale = new Vector2(-0.5, -0.5);

                if (!isTop) {
                    normal = normal.scale(-1);
                    textureScale.x = -textureScale.x;
                }

                // Create cap vertices.
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (i = 0; i < tessellation; i++)
                i = 0;
                while( i < tessellation)  {
                    var circleVector = getCircleVector(i);
                    var position = circleVector.scale(radius).add(normal.scale(height));
                    var textureCoordinate = new Vector2(circleVector.x * textureScale.x + 0.5, circleVector.z * textureScale.y + 0.5);

                    positions.push(position.x, position.y, position.z);
                    normals.push(normal.x, normal.y, normal.z);
                    uvs.push(textureCoordinate.x, textureCoordinate.y);
                 i++;

                }
            };

            height /= 2;

            var topOffset = new Vector3(0, 1, 0).scale(height);

            var stride = tessellation + 1;

            // Create a ring of triangles around the outside of the cylinder.
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var i = 0; i <= tessellation; i++)
            var i = 0;
            while( i <= tessellation)  {
                var normal = getCircleVector(i);
                var sideOffsetBottom = normal.scale(radiusBottom);
                var sideOffsetTop = normal.scale(radiusTop);
                var textureCoordinate = new Vector2(i / tessellation, 0);

                var position = sideOffsetBottom.add(topOffset);
                positions.push(position.x, position.y, position.z);
                normals.push(normal.x, normal.y, normal.z);
                uvs.push(textureCoordinate.x, textureCoordinate.y);

                position = sideOffsetTop.subtract(topOffset);
                textureCoordinate.y += 1;
                positions.push(position.x, position.y, position.z);
                normals.push(normal.x, normal.y, normal.z);
                uvs.push(textureCoordinate.x, textureCoordinate.y);

                indices.push(i * 2);
                indices.push((i * 2 + 2) % (stride * 2));
                indices.push(i * 2 + 1);

                indices.push(i * 2 + 1);
                indices.push((i * 2 + 2) % (stride * 2));
                indices.push((i * 2 + 3) % (stride * 2));
             i++;

                }

            // Create flat triangle fan caps to seal the top and bottom.
            createCylinderCap(true);
            createCylinderCap(false);

            // Result
            var vertexData = new VertexData();

            vertexData.indices = indices;
            vertexData.positions = positions;
            vertexData.normals = normals;
            vertexData.uvs = uvs;

            return vertexData;
        }

        static function CreateTorus(diameter, thickness, tessellation) {
            var indices = [];
            var positions = [];
            var normals = [];
            var uvs = [];

            diameter = diameter || 1;
            thickness = thickness || 0.5;
            tessellation = tessellation || 16;

            var stride = tessellation + 1;
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var i = 0; i <= tessellation; i++)
            var i = 0;
            while( i <= tessellation)  {
                var u = i / tessellation;

                var outerAngle = i * Math.PI * 2.0 / tessellation - Math.PI / 2.0;

                var transform = Matrix.Translation(diameter / 2.0, 0, 0).multiply(Matrix.RotationY(outerAngle));
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var j = 0; j <= tessellation; j++)
                var j = 0;
                while( j <= tessellation)  {
                    var v = 1 - j / tessellation;

                    var innerAngle = j * Math.PI * 2.0 / tessellation + Math.PI;
                    var dx = Math.cos(innerAngle);
                    var dy = Math.sin(innerAngle);

                    // Create a vertex.
                    var normal = new Vector3(dx, dy, 0);
                    var position = normal.scale(thickness / 2);
                    var textureCoordinate = new Vector2(u, v);

                    position = Vector3.TransformCoordinates(position, transform);
                    normal = Vector3.TransformNormal(normal, transform);

                    positions.push(position.x, position.y, position.z);
                    normals.push(normal.x, normal.y, normal.z);
                    uvs.push(textureCoordinate.x, textureCoordinate.y);

                    // And create indices for two triangles.
                    var nextI = (i + 1) % stride;
                    var nextJ = (j + 1) % stride;

                    indices.push(i * stride + j);
                    indices.push(i * stride + nextJ);
                    indices.push(nextI * stride + j);

                    indices.push(i * stride + nextJ);
                    indices.push(nextI * stride + nextJ);
                    indices.push(nextI * stride + j);
                 j++;

                }
             i++;

                }

            // Result
            var vertexData = new VertexData();

            vertexData.indices = indices;
            vertexData.positions = positions;
            vertexData.normals = normals;
            vertexData.uvs = uvs;

            return vertexData;
        }

        static function CreateGround(width:Float, height:Float, subdivisions:Float ) : VertexData {
            var indices = [];
            var positions = [];
            var normals = [];
            var uvs = [];
            var row, col;

            width = width || 1;
            height = height || 1;
            subdivisions = subdivisions || 1;
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (row = 0; row <= subdivisions; row++)
            row = 0;
            while( row <= subdivisions)  {
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (col = 0; col <= subdivisions; col++)
                col = 0;
                while( col <= subdivisions)  {
                    var position = new Vector3((col * width) / subdivisions - (width / 2.0), 0, ((subdivisions - row) * height) / subdivisions - (height / 2.0));
                    var normal = new Vector3(0, 1.0, 0);

                    positions.push(position.x, position.y, position.z);
                    normals.push(normal.x, normal.y, normal.z);
                    uvs.push(col / subdivisions, 1.0 - row / subdivisions);
                 col++;

                }
             row++;

                }
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (row = 0; row < subdivisions; row++)
            row = 0;
            while( row < subdivisions)  {
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (col = 0; col < subdivisions; col++)
                col = 0;
                while( col < subdivisions)  {
                    indices.push(col + 1 + (row + 1) * (subdivisions + 1));
                    indices.push(col + 1 + row * (subdivisions + 1));
                    indices.push(col + row * (subdivisions + 1));

                    indices.push(col + (row + 1) * (subdivisions + 1));
                    indices.push(col + 1 + (row + 1) * (subdivisions + 1));
                    indices.push(col + row * (subdivisions + 1));
                 col++;

                }
             row++;

                }

            // Result
            var vertexData = new VertexData();

            vertexData.indices = indices;
            vertexData.positions = positions;
            vertexData.normals = normals;
            vertexData.uvs = uvs;

            return vertexData;
        }

        public function CreateGroundFromHeightMap(width:Float, height:Float, subdivisions:Float, minHeight:Float, maxHeight:Float, buffer:UInt8Array, bufferWidth:Float, bufferHeight:Float ) : VertexData {
            var indices = new Array<Float>();
            var positions = new Array<Float>();
            var normals = new Array<Float>();
            var uvs = new Array<Float>();
            var row:Float, col:Float;

            // Vertices
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (row = 0; row <= subdivisions; row++)
            row = 0;
            while( row <= subdivisions)  {
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (col = 0; col <= subdivisions; col++)
                col = 0;
                while( col <= subdivisions)  {
                    var position = new Vector3((col * width) / subdivisions - (width / 2.0), 0, ((subdivisions - row) * height) / subdivisions - (height / 2.0));

                    // Compute height
                    var heightMapX = (((position.x + width / 2) / width) * (bufferWidth - 1)) | 0;
                    var heightMapY = ((1.0 - (position.z + height / 2) / height) * (bufferHeight - 1)) | 0;

                    var pos = (heightMapX + heightMapY * bufferWidth) * 4;
                    var r = buffer[pos] / 255.0;
                    var g = buffer[pos + 1] / 255.0;
                    var b = buffer[pos + 2] / 255.0;

                    var gradient = r * 0.3 + g * 0.59 + b * 0.11;

                    position.y = minHeight + (maxHeight - minHeight) * gradient;

                    // Add  vertex
                    positions.push(position.x, position.y, position.z);
                    normals.push(0, 0, 0);
                    uvs.push(col / subdivisions, 1.0 - row / subdivisions);
                 col++;

                }
             row++;

                }

            // Indices
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (row = 0; row < subdivisions; row++)
            row = 0;
            while( row < subdivisions)  {
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (col = 0; col < subdivisions; col++)
                col = 0;
                while( col < subdivisions)  {
                    indices.push(col + 1 + (row + 1) * (subdivisions + 1));
                    indices.push(col + 1 + row * (subdivisions + 1));
                    indices.push(col + row * (subdivisions + 1));

                    indices.push(col + (row + 1) * (subdivisions + 1));
                    indices.push(col + 1 + (row + 1) * (subdivisions + 1));
                    indices.push(col + row * (subdivisions + 1));
                 col++;

                }
             row++;

                }

            // Normals
            VertexData.ComputeNormals(positions, indices, normals);

            // Result
            var vertexData = new VertexData();

            vertexData.indices = indices;
            vertexData.positions = positions;
            vertexData.normals = normals;
            vertexData.uvs = uvs;

            return vertexData;
        }

        static function CreatePlane(size:Float ) : VertexData {
            var indices = [];
            var positions = [];
            var normals = [];
            var uvs = [];

            size = size || 1;

            // Vertices
            var halfSize = size / 2.0;
            positions.push(-halfSize, -halfSize, 0);
            normals.push(0, 0, -1.0);
            uvs.push(0.0, 0.0);

            positions.push(halfSize, -halfSize, 0);
            normals.push(0, 0, -1.0);
            uvs.push(1.0, 0.0);

            positions.push(halfSize, halfSize, 0);
            normals.push(0, 0, -1.0);
            uvs.push(1.0, 1.0);

            positions.push(-halfSize, halfSize, 0);
            normals.push(0, 0, -1.0);
            uvs.push(0.0, 1.0);

            // Indices
            indices.push(0);
            indices.push(1);
            indices.push(2);

            indices.push(0);
            indices.push(2);
            indices.push(3);

            // Result
            var vertexData = new VertexData();

            vertexData.indices = indices;
            vertexData.positions = positions;
            vertexData.normals = normals;
            vertexData.uvs = uvs;

            return vertexData;
        }

        // based on http://code.google.com/p/away3d/source/browse/trunk/fp10/Away3D/src/away3d/primitives/TorusKnot.as?spec=svn2473&r=2473

        static function CreateTorusKnot(radius:Float, tube:Float, radialSegments:Float, tubularSegments:Float,  p:Float, q:Float ) : VertexData {
            var indices = [];
            var positions = [];
            var normals = [];
            var uvs = [];

            radius = radius || 2;
            tube = tube || 0.5;
            radialSegments = radialSegments || 32;
            tubularSegments = tubularSegments || 32;
            p = p || 2;
            q = q || 3;

            // Helper
            var getPos = (angle) => {

                var cu = Math.cos(angle);
                var su = Math.sin(angle);
                var quOverP = q / p * angle;
                var cs = Math.cos(quOverP);

                var tx = radius * (2 + cs) * 0.5 * cu;
                var ty = radius * (2 + cs) * su * 0.5;
                var tz = radius * Math.sin(quOverP) * 0.5;

                return new Vector3(tx, ty, tz);
            };

            // Vertices
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (var i = 0; i <= radialSegments; i++)
            var i = 0;
            while( i <= radialSegments)  {
                var modI = i % radialSegments;
                var u = modI / radialSegments * 2 * p * Math.PI;
                var p1 = getPos(u);
                var p2 = getPos(u + 0.01);
                var tang = p2.subtract(p1);
                var n = p2.add(p1);

                var bitan = Vector3.Cross(tang, n);
                n = Vector3.Cross(bitan, tang);

                bitan.normalize();
                n.normalize();
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var j = 0; j < tubularSegments; j++)
                var j = 0;
                while( j < tubularSegments)  {
                    var modJ = j % tubularSegments;
                    var v = modJ / tubularSegments * 2 * Math.PI;
                    var cx = -tube * Math.cos(v);
                    var cy = tube * Math.sin(v);

                    positions.push(p1.x + cx * n.x + cy * bitan.x);
                    positions.push(p1.y + cx * n.y + cy * bitan.y);
                    positions.push(p1.z + cx * n.z + cy * bitan.z);

                    uvs.push(i / radialSegments);
                    uvs.push(j / tubularSegments);
                 j++;

                }
             i++;

                }
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (i = 0; i < radialSegments; i++)
            i = 0;
            while( i < radialSegments)  {
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (j = 0; j < tubularSegments; j++)
                j = 0;
                while( j < tubularSegments)  {
                    var jNext = (j + 1) % tubularSegments;
                    var a = i * tubularSegments + j;
                    var b = (i + 1) * tubularSegments + j;
                    var c = (i + 1) * tubularSegments + jNext;
                    var d = i * tubularSegments + jNext;

                    indices.push(d); indices.push(b); indices.push(a);
                    indices.push(d); indices.push(c); indices.push(b);
                 j++;

                }
             i++;

                }

            // Normals
            VertexData.ComputeNormals(positions, indices, normals);

            // Result
            var vertexData = new VertexData();

            vertexData.indices = indices;
            vertexData.positions = positions;
            vertexData.normals = normals;
            vertexData.uvs = uvs;

            return vertexData;
        }

        // Tools

        static function ComputeNormals(positions:Array<Float>, indices:Array<Float>, normals:Array<Float> ) {
            var positionVectors = [];
            var facesOfVertices = [];
            var index;
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (index = 0; index < positions.length; index += 3)
            index = 0;
            while( index < positions.length)  {
                var vector3 = new Vector3(positions[index], positions[index + 1], positions[index + 2]);
                positionVectors.push(vector3);
                facesOfVertices.push([]);
             index += 3;

                }
            // Compute normals
            var facesNormals = [];
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (index = 0; index < indices.length / 3; index++)
            index = 0;
            while( index < indices.length / 3)  {
                var i1 = indices[index * 3];
                var i2 = indices[index * 3 + 1];
                var i3 = indices[index * 3 + 2];

                var p1 = positionVectors[i1];
                var p2 = positionVectors[i2];
                var p3 = positionVectors[i3];

                var p1p2 = p1.subtract(p2);
                var p3p2 = p3.subtract(p2);

                facesNormals[index] = Vector3.Normalize(Vector3.Cross(p1p2, p3p2));
                facesOfVertices[i1].push(index);
                facesOfVertices[i2].push(index);
                facesOfVertices[i3].push(index);
             index++;

                }
            // haxe does not support for loops with C/JS syntaxt ... unfolding : 
            //  for (index = 0; index < positionVectors.length; index++)
            index = 0;
            while( index < positionVectors.length)  {
                var faces = facesOfVertices[index];

                var normal = Vector3.Zero();
                // haxe does not support for loops with C/JS syntaxt ... unfolding : 
                //  for (var faceIndex = 0; faceIndex < faces.length; faceIndex++)
                var faceIndex = 0;
                while( faceIndex < faces.length)  {
                    normal.addInPlace(facesNormals[faces[faceIndex]]);
                 faceIndex++;

                }

                normal = Vector3.Normalize(normal.scale(1.0 / faces.length));

                normals[index * 3] = normal.x;
                normals[index * 3 + 1] = normal.y;
                normals[index * 3 + 2] = normal.z;
             index++;

                }
        }
    }
 