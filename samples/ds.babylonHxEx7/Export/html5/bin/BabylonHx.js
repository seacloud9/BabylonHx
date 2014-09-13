(function ($hx_exports) { "use strict";
$hx_exports.openfl = $hx_exports.openfl || {};
var $hxClasses = {},$estr = function() { return js.Boot.__string_rec(this,''); };
function $extend(from, fields) {
	function Inherit() {} Inherit.prototype = from; var proto = new Inherit();
	for (var name in fields) proto[name] = fields[name];
	if( fields.toString !== Object.prototype.toString ) proto.toString = fields.toString;
	return proto;
}
var ApplicationMain = function() { };
$hxClasses["ApplicationMain"] = ApplicationMain;
ApplicationMain.__name__ = ["ApplicationMain"];
ApplicationMain.preloader = null;
ApplicationMain.embed = $hx_exports.openfl.embed = function(elementName,width,height,background) {
	var element = null;
	if(elementName != null) element = window.document.getElementById(elementName);
	var color = null;
	if(background != null) {
		background = StringTools.replace(background,"#","");
		if(background.indexOf("0x") > -1) color = Std.parseInt(background); else color = Std.parseInt("0x" + background);
	}
	openfl.Lib.create(element,width,height,color);
	ApplicationMain.preloader = new NMEPreloader();
	openfl.Lib.current.addChild(ApplicationMain.preloader);
	ApplicationMain.preloader.onInit();
	var sounds = [];
	var id;
	var urlLoader = new openfl.net.URLLoader();
	urlLoader.set_dataFormat(openfl.net.URLLoaderDataFormat.BINARY);
	ApplicationMain.urlLoaders.set("assets/font/Aaargh.eot",urlLoader);
	ApplicationMain.total++;
	var urlLoader1 = new openfl.net.URLLoader();
	urlLoader1.set_dataFormat(openfl.net.URLLoaderDataFormat.BINARY);
	ApplicationMain.urlLoaders.set("assets/font/Aaargh.svg",urlLoader1);
	ApplicationMain.total++;
	var urlLoader2 = new openfl.net.URLLoader();
	urlLoader2.set_dataFormat(openfl.net.URLLoaderDataFormat.BINARY);
	ApplicationMain.urlLoaders.set("assets/font/Aaargh.woff",urlLoader2);
	ApplicationMain.total++;
	var urlLoader3 = new openfl.net.URLLoader();
	urlLoader3.set_dataFormat(openfl.net.URLLoaderDataFormat.BINARY);
	ApplicationMain.urlLoaders.set("assets/font/OpenSansRegular.eot",urlLoader3);
	ApplicationMain.total++;
	var urlLoader4 = new openfl.net.URLLoader();
	urlLoader4.set_dataFormat(openfl.net.URLLoaderDataFormat.BINARY);
	ApplicationMain.urlLoaders.set("assets/font/OpenSansRegular.svg",urlLoader4);
	ApplicationMain.total++;
	var urlLoader5 = new openfl.net.URLLoader();
	urlLoader5.set_dataFormat(openfl.net.URLLoaderDataFormat.BINARY);
	ApplicationMain.urlLoaders.set("assets/font/OpenSansRegular.woff",urlLoader5);
	ApplicationMain.total++;
	var urlLoader6 = new openfl.net.URLLoader();
	urlLoader6.set_dataFormat(openfl.net.URLLoaderDataFormat.BINARY);
	ApplicationMain.urlLoaders.set("assets/font/Tup Wanders Font License.txt",urlLoader6);
	ApplicationMain.total++;
	var image = new Image();
	id = "assets/img/Flare.png";
	ApplicationMain.images.set(id,image);
	image.onload = ApplicationMain.image_onLoad;
	image.src = id;
	ApplicationMain.total++;
	var image1 = new Image();
	id = "assets/img/grass.jpg";
	ApplicationMain.images.set(id,image1);
	image1.onload = ApplicationMain.image_onLoad;
	image1.src = id;
	ApplicationMain.total++;
	var image2 = new Image();
	id = "assets/img/lens4.png";
	ApplicationMain.images.set(id,image2);
	image2.onload = ApplicationMain.image_onLoad;
	image2.src = id;
	ApplicationMain.total++;
	var image3 = new Image();
	id = "assets/img/lens5.png";
	ApplicationMain.images.set(id,image3);
	image3.onload = ApplicationMain.image_onLoad;
	image3.src = id;
	ApplicationMain.total++;
	var image4 = new Image();
	id = "assets/img/normalMap.jpg";
	ApplicationMain.images.set(id,image4);
	image4.onload = ApplicationMain.image_onLoad;
	image4.src = id;
	ApplicationMain.total++;
	var image5 = new Image();
	id = "assets/img/refMap.jpg";
	ApplicationMain.images.set(id,image5);
	image5.onload = ApplicationMain.image_onLoad;
	image5.src = id;
	ApplicationMain.total++;
	var urlLoader7 = new openfl.net.URLLoader();
	urlLoader7.set_dataFormat(openfl.net.URLLoaderDataFormat.BINARY);
	ApplicationMain.urlLoaders.set("assets/img/skybox/README.TXT",urlLoader7);
	ApplicationMain.total++;
	var image6 = new Image();
	id = "assets/img/skybox/skybox_nx.jpg";
	ApplicationMain.images.set(id,image6);
	image6.onload = ApplicationMain.image_onLoad;
	image6.src = id;
	ApplicationMain.total++;
	var image7 = new Image();
	id = "assets/img/skybox/skybox_nx.png";
	ApplicationMain.images.set(id,image7);
	image7.onload = ApplicationMain.image_onLoad;
	image7.src = id;
	ApplicationMain.total++;
	var image8 = new Image();
	id = "assets/img/skybox/skybox_ny.jpg";
	ApplicationMain.images.set(id,image8);
	image8.onload = ApplicationMain.image_onLoad;
	image8.src = id;
	ApplicationMain.total++;
	var image9 = new Image();
	id = "assets/img/skybox/skybox_ny.png";
	ApplicationMain.images.set(id,image9);
	image9.onload = ApplicationMain.image_onLoad;
	image9.src = id;
	ApplicationMain.total++;
	var image10 = new Image();
	id = "assets/img/skybox/skybox_nz.jpg";
	ApplicationMain.images.set(id,image10);
	image10.onload = ApplicationMain.image_onLoad;
	image10.src = id;
	ApplicationMain.total++;
	var image11 = new Image();
	id = "assets/img/skybox/skybox_nz.png";
	ApplicationMain.images.set(id,image11);
	image11.onload = ApplicationMain.image_onLoad;
	image11.src = id;
	ApplicationMain.total++;
	var image12 = new Image();
	id = "assets/img/skybox/skybox_px.jpg";
	ApplicationMain.images.set(id,image12);
	image12.onload = ApplicationMain.image_onLoad;
	image12.src = id;
	ApplicationMain.total++;
	var image13 = new Image();
	id = "assets/img/skybox/skybox_px.png";
	ApplicationMain.images.set(id,image13);
	image13.onload = ApplicationMain.image_onLoad;
	image13.src = id;
	ApplicationMain.total++;
	var image14 = new Image();
	id = "assets/img/skybox/skybox_py.jpg";
	ApplicationMain.images.set(id,image14);
	image14.onload = ApplicationMain.image_onLoad;
	image14.src = id;
	ApplicationMain.total++;
	var image15 = new Image();
	id = "assets/img/skybox/skybox_py.png";
	ApplicationMain.images.set(id,image15);
	image15.onload = ApplicationMain.image_onLoad;
	image15.src = id;
	ApplicationMain.total++;
	var image16 = new Image();
	id = "assets/img/skybox/skybox_pz.jpg";
	ApplicationMain.images.set(id,image16);
	image16.onload = ApplicationMain.image_onLoad;
	image16.src = id;
	ApplicationMain.total++;
	var image17 = new Image();
	id = "assets/img/skybox/skybox_pz.png";
	ApplicationMain.images.set(id,image17);
	image17.onload = ApplicationMain.image_onLoad;
	image17.src = id;
	ApplicationMain.total++;
	if(ApplicationMain.total == 0) ApplicationMain.start(); else {
		var $it0 = ApplicationMain.urlLoaders.keys();
		while( $it0.hasNext() ) {
			var path = $it0.next();
			var urlLoader8 = ApplicationMain.urlLoaders.get(path);
			urlLoader8.addEventListener("complete",ApplicationMain.loader_onComplete);
			urlLoader8.load(new openfl.net.URLRequest(path));
		}
		var _g = 0;
		while(_g < sounds.length) {
			var soundName = sounds[_g];
			++_g;
			var sound = new openfl.media.Sound();
			sound.addEventListener(openfl.events.Event.COMPLETE,ApplicationMain.sound_onComplete);
			sound.addEventListener(openfl.events.IOErrorEvent.IO_ERROR,ApplicationMain.sound_onIOError);
			sound.load(new openfl.net.URLRequest(soundName + ".ogg"));
		}
	}
};
ApplicationMain.main = function() {
};
ApplicationMain.start = function() {
	ApplicationMain.preloader.addEventListener(openfl.events.Event.COMPLETE,ApplicationMain.preloader_onComplete);
	ApplicationMain.preloader.onLoaded();
};
ApplicationMain.image_onLoad = function(_) {
	ApplicationMain.assetsLoaded++;
	ApplicationMain.preloader.onUpdate(ApplicationMain.assetsLoaded,ApplicationMain.total);
	if(ApplicationMain.assetsLoaded == ApplicationMain.total) ApplicationMain.start();
};
ApplicationMain.loader_onComplete = function(event) {
	ApplicationMain.assetsLoaded++;
	ApplicationMain.preloader.onUpdate(ApplicationMain.assetsLoaded,ApplicationMain.total);
	if(ApplicationMain.assetsLoaded == ApplicationMain.total) ApplicationMain.start();
};
ApplicationMain.preloader_onComplete = function(event) {
	ApplicationMain.preloader.removeEventListener(openfl.events.Event.COMPLETE,ApplicationMain.preloader_onComplete);
	openfl.Lib.current.removeChild(ApplicationMain.preloader);
	ApplicationMain.preloader = null;
	var hasMain = false;
	var _g = 0;
	var _g1 = Type.getClassFields(Main);
	while(_g < _g1.length) {
		var methodName = _g1[_g];
		++_g;
		if(methodName == "main") {
			hasMain = true;
			break;
		}
	}
	if(hasMain) Reflect.callMethod(Main,Reflect.field(Main,"main"),[]); else {
		var instance = Type.createInstance(DocumentClass,[]);
		if(js.Boot.__instanceof(instance,openfl.display.DisplayObject)) openfl.Lib.current.addChild(instance); else {
			haxe.Log.trace("Error: No entry point found",{ fileName : "ApplicationMain.hx", lineNumber : 438, className : "ApplicationMain", methodName : "preloader_onComplete"});
			haxe.Log.trace("If you are using DCE with a static main, you may need to @:keep the function",{ fileName : "ApplicationMain.hx", lineNumber : 439, className : "ApplicationMain", methodName : "preloader_onComplete"});
		}
	}
};
ApplicationMain.sound_onComplete = function(event) {
	ApplicationMain.assetsLoaded++;
	ApplicationMain.preloader.onUpdate(ApplicationMain.assetsLoaded,ApplicationMain.total);
	if(ApplicationMain.assetsLoaded == ApplicationMain.total) ApplicationMain.start();
};
ApplicationMain.sound_onIOError = function(event) {
	ApplicationMain.assetsLoaded++;
	ApplicationMain.preloader.onUpdate(ApplicationMain.assetsLoaded,ApplicationMain.total);
	if(ApplicationMain.assetsLoaded == ApplicationMain.total) ApplicationMain.start();
};
var openfl = {};
openfl.events = {};
openfl.events.IEventDispatcher = function() { };
$hxClasses["openfl.events.IEventDispatcher"] = openfl.events.IEventDispatcher;
openfl.events.IEventDispatcher.__name__ = ["openfl","events","IEventDispatcher"];
openfl.events.IEventDispatcher.prototype = {
	__class__: openfl.events.IEventDispatcher
};
openfl.events.EventDispatcher = function(target) {
	if(target != null) this.__targetDispatcher = target;
};
$hxClasses["openfl.events.EventDispatcher"] = openfl.events.EventDispatcher;
openfl.events.EventDispatcher.__name__ = ["openfl","events","EventDispatcher"];
openfl.events.EventDispatcher.__interfaces__ = [openfl.events.IEventDispatcher];
openfl.events.EventDispatcher.__sortByPriority = function(l1,l2) {
	if(l1.priority == l2.priority) return 0; else if(l1.priority > l2.priority) return -1; else return 1;
};
openfl.events.EventDispatcher.prototype = {
	addEventListener: function(type,listener,useCapture,priority,useWeakReference) {
		if(useWeakReference == null) useWeakReference = false;
		if(priority == null) priority = 0;
		if(useCapture == null) useCapture = false;
		if(this.__eventMap == null) this.__eventMap = new haxe.ds.StringMap();
		if(!this.__eventMap.exists(type)) {
			var list = new Array();
			list.push(new openfl.events._EventDispatcher.Listener(listener,useCapture,priority));
			this.__eventMap.set(type,list);
		} else {
			var list1 = this.__eventMap.get(type);
			list1.push(new openfl.events._EventDispatcher.Listener(listener,useCapture,priority));
			list1.sort(openfl.events.EventDispatcher.__sortByPriority);
		}
	}
	,dispatchEvent: function(event) {
		if(this.__eventMap == null || event == null) return false;
		var list = this.__eventMap.get(event.type);
		if(list == null) return false;
		if(event.target == null) {
			if(this.__targetDispatcher != null) event.target = this.__targetDispatcher; else event.target = this;
		}
		event.currentTarget = this;
		var capture = event.eventPhase == 0;
		var index = 0;
		var listener;
		while(index < list.length) {
			listener = list[index];
			if(listener.useCapture == capture) {
				listener.callback(event);
				if(event.__isCancelledNow) return true;
			}
			if(listener == list[index]) index++;
		}
		return true;
	}
	,hasEventListener: function(type) {
		if(this.__eventMap == null) return false;
		return this.__eventMap.exists(type);
	}
	,removeEventListener: function(type,listener,capture) {
		if(capture == null) capture = false;
		if(this.__eventMap == null) return;
		var list = this.__eventMap.get(type);
		if(list == null) return;
		var _g1 = 0;
		var _g = list.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(list[i].match(listener,capture)) {
				list.splice(i,1);
				break;
			}
		}
		if(list.length == 0) this.__eventMap.remove(type);
		if(!this.__eventMap.iterator().hasNext()) this.__eventMap = null;
	}
	,toString: function() {
		var full = Type.getClassName(Type.getClass(this));
		var $short = full.split(".").pop();
		return "[object " + $short + "]";
	}
	,willTrigger: function(type) {
		return this.hasEventListener(type);
	}
	,__class__: openfl.events.EventDispatcher
};
openfl.display = {};
openfl.display.IBitmapDrawable = function() { };
$hxClasses["openfl.display.IBitmapDrawable"] = openfl.display.IBitmapDrawable;
openfl.display.IBitmapDrawable.__name__ = ["openfl","display","IBitmapDrawable"];
openfl.display.IBitmapDrawable.prototype = {
	__class__: openfl.display.IBitmapDrawable
};
openfl.display.DisplayObject = function() {
	openfl.events.EventDispatcher.call(this);
	this.set_alpha(1);
	this.set_rotation(0);
	this.set_scaleX(1);
	this.set_scaleY(1);
	this.set_visible(true);
	this.set_x(0);
	this.set_y(0);
	this.__worldAlpha = 1;
	this.__worldTransform = new openfl.geom.Matrix();
	this.__worldVisible = true;
	this.set_name("instance" + ++openfl.display.DisplayObject.__instanceCount);
};
$hxClasses["openfl.display.DisplayObject"] = openfl.display.DisplayObject;
openfl.display.DisplayObject.__name__ = ["openfl","display","DisplayObject"];
openfl.display.DisplayObject.__interfaces__ = [openfl.display.IBitmapDrawable];
openfl.display.DisplayObject.__super__ = openfl.events.EventDispatcher;
openfl.display.DisplayObject.prototype = $extend(openfl.events.EventDispatcher.prototype,{
	dispatchEvent: function(event) {
		var result = openfl.events.EventDispatcher.prototype.dispatchEvent.call(this,event);
		if(event.__isCancelled) return true;
		if(event.bubbles && this.parent != null && this.parent != this) {
			event.eventPhase = 2;
			this.parent.dispatchEvent(event);
		}
		return result;
	}
	,getBounds: function(targetCoordinateSpace) {
		var matrix = this.__getTransform();
		if(targetCoordinateSpace != null) {
			matrix = new openfl.geom.Matrix(matrix.a,matrix.b,matrix.c,matrix.d,matrix.tx,matrix.ty);
			matrix.concat(targetCoordinateSpace.__worldTransform.clone().invert());
		}
		var bounds = new openfl.geom.Rectangle();
		this.__getBounds(bounds,matrix);
		return bounds;
	}
	,getRect: function(targetCoordinateSpace) {
		return this.getBounds(targetCoordinateSpace);
	}
	,globalToLocal: function(pos) {
		return this.__getTransform().clone().invert().transformPoint(pos);
	}
	,hitTestObject: function(obj) {
		return false;
	}
	,hitTestPoint: function(x,y,shapeFlag) {
		if(shapeFlag == null) shapeFlag = false;
		return false;
	}
	,localToGlobal: function(point) {
		return this.__getTransform().transformPoint(point);
	}
	,__applyStyle: function(renderSession,setTransform,setAlpha,setClip) {
		if(setTransform && this.__worldTransformChanged) this.__style.setProperty(renderSession.transformProperty,this.__worldTransform.to3DString(renderSession.roundPixels),null);
		if(this.__worldZ != ++renderSession.z) {
			this.__worldZ = renderSession.z;
			this.__style.setProperty("z-index",Std.string(this.__worldZ),null);
		}
		if(setAlpha && this.__worldAlphaChanged) {
			if(this.__worldAlpha < 1) this.__style.setProperty("opacity",Std.string(this.__worldAlpha),null); else this.__style.removeProperty("opacity");
		}
		if(setClip && this.__worldClipChanged) {
			if(this.__worldClip == null) this.__style.removeProperty("clip"); else {
				var clip = this.__worldClip.transform(this.__worldTransform.clone().invert());
				this.__style.setProperty("clip","rect(" + clip.y + "px, " + clip.get_right() + "px, " + clip.get_bottom() + "px, " + clip.x + "px)",null);
			}
		}
	}
	,__broadcast: function(event,notifyChilden) {
		if(this.__eventMap != null && this.hasEventListener(event.type)) {
			var result = openfl.events.EventDispatcher.prototype.dispatchEvent.call(this,event);
			if(event.__isCancelled) return true;
			return result;
		}
		return false;
	}
	,__getBounds: function(rect,matrix) {
	}
	,__getInteractive: function(stack) {
	}
	,__getLocalBounds: function(rect) {
		this.__getTransform();
		this.__getBounds(rect,new openfl.geom.Matrix());
	}
	,__getTransform: function() {
		if(openfl.display.DisplayObject.__worldTransformDirty > 0) {
			var list = [];
			var current = this;
			var transformDirty = this.__transformDirty;
			while(current.parent != null) {
				list.push(current);
				current = current.parent;
				if(current.__transformDirty) transformDirty = true;
			}
			if(transformDirty) {
				var i = list.length;
				while(--i >= 0) list[i].__update(true,false);
			}
		}
		return this.__worldTransform;
	}
	,__hitTest: function(x,y,shapeFlag,stack,interactiveOnly) {
		return false;
	}
	,__initializeElement: function(element,renderSession) {
		this.__style = element.style;
		this.__style.setProperty("position","absolute",null);
		this.__style.setProperty("top","0",null);
		this.__style.setProperty("left","0",null);
		this.__style.setProperty(renderSession.transformOriginProperty,"0 0 0",null);
		renderSession.element.appendChild(element);
		this.__worldAlphaChanged = true;
		this.__worldClipChanged = true;
		this.__worldTransformChanged = true;
		this.__worldVisibleChanged = true;
		this.__worldZ = -1;
	}
	,__renderCanvas: function(renderSession) {
	}
	,__renderDOM: function(renderSession) {
	}
	,__renderGL: function(renderSession) {
	}
	,__renderMask: function(renderSession) {
	}
	,__setStageReference: function(stage) {
		if(this.stage != stage) {
			if(this.stage != null) this.dispatchEvent(new openfl.events.Event(openfl.events.Event.REMOVED_FROM_STAGE,false,false));
			this.stage = stage;
			if(stage != null) this.dispatchEvent(new openfl.events.Event(openfl.events.Event.ADDED_TO_STAGE,false,false));
		}
	}
	,__setRenderDirty: function() {
		if(!this.__renderDirty) {
			this.__renderDirty = true;
			openfl.display.DisplayObject.__worldRenderDirty++;
		}
	}
	,__setTransformDirty: function() {
		if(!this.__transformDirty) {
			this.__transformDirty = true;
			openfl.display.DisplayObject.__worldTransformDirty++;
		}
	}
	,__update: function(transformOnly,updateChildren) {
		this.__renderable = this.get_visible() && this.get_scaleX() != 0 && this.get_scaleY() != 0 && !this.__isMask;
		if(this.get_rotation() != this.__rotationCache) {
			this.__rotationCache = this.get_rotation();
			var radians = this.get_rotation() * (Math.PI / 180);
			this.__rotationSine = Math.sin(radians);
			this.__rotationCosine = Math.cos(radians);
		}
		if(this.parent != null) {
			var parentTransform = this.parent.__worldTransform;
			var a00 = this.__rotationCosine * this.get_scaleX();
			var a01 = this.__rotationSine * this.get_scaleX();
			var a10 = -this.__rotationSine * this.get_scaleY();
			var a11 = this.__rotationCosine * this.get_scaleY();
			var b00 = parentTransform.a;
			var b01 = parentTransform.b;
			var b10 = parentTransform.c;
			var b11 = parentTransform.d;
			this.__worldTransform.a = a00 * b00 + a01 * b10;
			this.__worldTransform.b = a00 * b01 + a01 * b11;
			this.__worldTransform.c = a10 * b00 + a11 * b10;
			this.__worldTransform.d = a10 * b01 + a11 * b11;
			if(this.get_scrollRect() == null) {
				this.__worldTransform.tx = this.get_x() * b00 + this.get_y() * b10 + parentTransform.tx;
				this.__worldTransform.ty = this.get_x() * b01 + this.get_y() * b11 + parentTransform.ty;
			} else {
				this.__worldTransform.tx = (this.get_x() - this.get_scrollRect().x) * b00 + (this.get_y() - this.get_scrollRect().y) * b10 + parentTransform.tx;
				this.__worldTransform.ty = (this.get_x() - this.get_scrollRect().x) * b01 + (this.get_y() - this.get_scrollRect().y) * b11 + parentTransform.ty;
			}
		} else {
			this.__worldTransform.a = this.__rotationCosine * this.get_scaleX();
			this.__worldTransform.c = -this.__rotationSine * this.get_scaleY();
			this.__worldTransform.b = this.__rotationSine * this.get_scaleX();
			this.__worldTransform.d = this.__rotationCosine * this.get_scaleY();
			if(this.get_scrollRect() == null) {
				this.__worldTransform.tx = this.get_x();
				this.__worldTransform.ty = this.get_y();
			} else {
				this.__worldTransform.tx = this.get_y() - this.get_scrollRect().x;
				this.__worldTransform.ty = this.get_y() - this.get_scrollRect().y;
			}
		}
		if(updateChildren && this.__transformDirty) {
			this.__transformDirty = false;
			openfl.display.DisplayObject.__worldTransformDirty--;
		}
		if(!transformOnly) {
			this.__worldTransformChanged = !this.__worldTransform.equals(this.__worldTransformCache);
			this.__worldTransformCache = this.__worldTransform.clone();
			var worldClip = null;
			if(this.parent != null) {
				var worldVisible = this.parent.__worldVisible && this.get_visible();
				this.__worldVisibleChanged = this.__worldVisible != worldVisible;
				this.__worldVisible = worldVisible;
				var worldAlpha = this.get_alpha() * this.parent.__worldAlpha;
				this.__worldAlphaChanged = this.__worldAlpha != worldAlpha;
				this.__worldAlpha = worldAlpha;
				if(this.parent.__worldClip != null) worldClip = this.parent.__worldClip.clone();
				if(this.get_scrollRect() != null) {
					var bounds = this.get_scrollRect().clone();
					bounds = bounds.transform(this.__worldTransform);
					if(worldClip != null) bounds.__contract(worldClip.x - this.get_scrollRect().x,worldClip.y - this.get_scrollRect().y,worldClip.width,worldClip.height);
					worldClip = bounds;
				}
			} else {
				this.__worldAlpha = this.get_alpha();
				this.__worldVisibleChanged = this.__worldVisible != this.get_visible();
				this.__worldVisible = this.get_visible();
				this.__worldAlphaChanged = this.__worldAlpha != this.get_alpha();
				if(this.get_scrollRect() != null) worldClip = this.get_scrollRect().clone().transform(this.__worldTransform);
			}
			this.__worldClipChanged = worldClip == null && this.__worldClip != null || worldClip != null && !worldClip.equals(this.__worldClip);
			this.__worldClip = worldClip;
			if(updateChildren && this.__renderDirty) this.__renderDirty = false;
		}
	}
	,__updateChildren: function(transformOnly) {
		this.__renderable = this.get_visible() && this.get_scaleX() != 0 && this.get_scaleY() != 0 && !this.__isMask;
		if(!this.__renderable && !this.__isMask) return;
		this.__worldAlpha = this.get_alpha();
		if(this.__transformDirty) {
			this.__transformDirty = false;
			openfl.display.DisplayObject.__worldTransformDirty--;
		}
	}
	,get_alpha: function() {
		return this.__alpha;
	}
	,set_alpha: function(value) {
		if(value != this.__alpha) {
			if(!this.__renderDirty) {
				this.__renderDirty = true;
				openfl.display.DisplayObject.__worldRenderDirty++;
			}
		}
		return this.__alpha = value;
	}
	,get_filters: function() {
		if(this.__filters == null) return new Array(); else return this.__filters.slice();
	}
	,set_filters: function(value) {
		return value;
	}
	,get_height: function() {
		var bounds = new openfl.geom.Rectangle();
		this.__getTransform();
		this.__getBounds(bounds,new openfl.geom.Matrix());
		return bounds.height * this.get_scaleY();
	}
	,set_height: function(value) {
		var bounds = new openfl.geom.Rectangle();
		this.__getTransform();
		this.__getBounds(bounds,new openfl.geom.Matrix());
		if(value != bounds.height) this.set_scaleY(value / bounds.height); else this.set_scaleY(1);
		return value;
	}
	,get_mask: function() {
		return this.__mask;
	}
	,set_mask: function(value) {
		if(value != this.__mask) {
			if(!this.__renderDirty) {
				this.__renderDirty = true;
				openfl.display.DisplayObject.__worldRenderDirty++;
			}
		}
		if(this.__mask != null) this.__mask.__isMask = false;
		if(value != null) value.__isMask = true;
		return this.__mask = value;
	}
	,get_mouseX: function() {
		if(this.stage != null) return this.globalToLocal(new openfl.geom.Point(this.stage.__mouseX,0)).x;
		return 0;
	}
	,get_mouseY: function() {
		if(this.stage != null) return this.globalToLocal(new openfl.geom.Point(0,this.stage.__mouseY)).y;
		return 0;
	}
	,get_name: function() {
		return this.__name;
	}
	,set_name: function(value) {
		return this.__name = value;
	}
	,get_root: function() {
		if(this.stage != null) return openfl.Lib.current;
		return null;
	}
	,get_rotation: function() {
		return this.__rotation;
	}
	,set_rotation: function(value) {
		if(value != this.__rotation) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty++;
			}
		}
		return this.__rotation = value;
	}
	,get_scaleX: function() {
		return this.__scaleX;
	}
	,set_scaleX: function(value) {
		if(value != this.__scaleX) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty++;
			}
		}
		return this.__scaleX = value;
	}
	,get_scaleY: function() {
		return this.__scaleY;
	}
	,set_scaleY: function(value) {
		if(this.__scaleY != value) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty++;
			}
		}
		return this.__scaleY = value;
	}
	,get_scrollRect: function() {
		return this.__scrollRect;
	}
	,set_scrollRect: function(value) {
		if(value != this.__scrollRect) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty++;
			}
			if(!this.__renderDirty) {
				this.__renderDirty = true;
				openfl.display.DisplayObject.__worldRenderDirty++;
			}
		}
		return this.__scrollRect = value;
	}
	,get_transform: function() {
		if(this.__transform == null) this.__transform = new openfl.geom.Transform(this);
		return this.__transform;
	}
	,set_transform: function(value) {
		if(value == null) throw new openfl.errors.TypeError("Parameter transform must be non-null.");
		if(this.__transform == null) this.__transform = new openfl.geom.Transform(this);
		if(!this.__transformDirty) {
			this.__transformDirty = true;
			openfl.display.DisplayObject.__worldTransformDirty++;
		}
		this.__transform.set_matrix(value.get_matrix().clone());
		this.__transform.colorTransform = new openfl.geom.ColorTransform(value.colorTransform.redMultiplier,value.colorTransform.greenMultiplier,value.colorTransform.blueMultiplier,value.colorTransform.alphaMultiplier,value.colorTransform.redOffset,value.colorTransform.greenOffset,value.colorTransform.blueOffset,value.colorTransform.alphaOffset);
		return this.__transform;
	}
	,get_visible: function() {
		return this.__visible;
	}
	,set_visible: function(value) {
		if(value != this.__visible) {
			if(!this.__renderDirty) {
				this.__renderDirty = true;
				openfl.display.DisplayObject.__worldRenderDirty++;
			}
		}
		return this.__visible = value;
	}
	,get_width: function() {
		var bounds = new openfl.geom.Rectangle();
		this.__getTransform();
		this.__getBounds(bounds,new openfl.geom.Matrix());
		return bounds.width * this.get_scaleX();
	}
	,set_width: function(value) {
		var bounds = new openfl.geom.Rectangle();
		this.__getTransform();
		this.__getBounds(bounds,new openfl.geom.Matrix());
		if(value != bounds.width) this.set_scaleX(value / bounds.width); else this.set_scaleX(1);
		return value;
	}
	,get_x: function() {
		return this.__x;
	}
	,set_x: function(value) {
		if(value != this.__x) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty++;
			}
		}
		return this.__x = value;
	}
	,get_y: function() {
		return this.__y;
	}
	,set_y: function(value) {
		if(value != this.__y) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty++;
			}
		}
		return this.__y = value;
	}
	,__class__: openfl.display.DisplayObject
	,__properties__: {set_y:"set_y",get_y:"get_y",set_x:"set_x",get_x:"get_x",set_width:"set_width",get_width:"get_width",set_visible:"set_visible",get_visible:"get_visible",set_transform:"set_transform",get_transform:"get_transform",set_scrollRect:"set_scrollRect",get_scrollRect:"get_scrollRect",set_scaleY:"set_scaleY",get_scaleY:"get_scaleY",set_scaleX:"set_scaleX",get_scaleX:"get_scaleX",set_rotation:"set_rotation",get_rotation:"get_rotation",get_root:"get_root",set_name:"set_name",get_name:"get_name",get_mouseY:"get_mouseY",get_mouseX:"get_mouseX",set_mask:"set_mask",get_mask:"get_mask",set_height:"set_height",get_height:"get_height",set_filters:"set_filters",get_filters:"get_filters",set_alpha:"set_alpha",get_alpha:"get_alpha"}
});
openfl.display.InteractiveObject = function() {
	openfl.display.DisplayObject.call(this);
	this.doubleClickEnabled = false;
	this.mouseEnabled = true;
	this.needsSoftKeyboard = false;
	this.tabEnabled = true;
	this.tabIndex = -1;
};
$hxClasses["openfl.display.InteractiveObject"] = openfl.display.InteractiveObject;
openfl.display.InteractiveObject.__name__ = ["openfl","display","InteractiveObject"];
openfl.display.InteractiveObject.__super__ = openfl.display.DisplayObject;
openfl.display.InteractiveObject.prototype = $extend(openfl.display.DisplayObject.prototype,{
	requestSoftKeyboard: function() {
		openfl.Lib.notImplemented("InteractiveObject.requestSoftKeyboard");
		return false;
	}
	,__getInteractive: function(stack) {
		stack.push(this);
		if(this.parent != null) this.parent.__getInteractive(stack);
	}
	,__class__: openfl.display.InteractiveObject
});
openfl.display.DisplayObjectContainer = function() {
	openfl.display.InteractiveObject.call(this);
	this.mouseChildren = true;
	this.__children = new Array();
	this.__removedChildren = new Array();
};
$hxClasses["openfl.display.DisplayObjectContainer"] = openfl.display.DisplayObjectContainer;
openfl.display.DisplayObjectContainer.__name__ = ["openfl","display","DisplayObjectContainer"];
openfl.display.DisplayObjectContainer.__super__ = openfl.display.InteractiveObject;
openfl.display.DisplayObjectContainer.prototype = $extend(openfl.display.InteractiveObject.prototype,{
	addChild: function(child) {
		if(child != null) {
			if(child.parent != null) child.parent.removeChild(child);
			this.__children.push(child);
			child.parent = this;
			if(this.stage != null) child.__setStageReference(this.stage);
			if(!child.__transformDirty) {
				child.__transformDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty++;
			}
			if(!child.__renderDirty) {
				child.__renderDirty = true;
				openfl.display.DisplayObject.__worldRenderDirty++;
			}
			child.dispatchEvent(new openfl.events.Event(openfl.events.Event.ADDED,true));
		}
		return child;
	}
	,addChildAt: function(child,index) {
		if(index > this.__children.length || index < 0) throw "Invalid index position " + index;
		if(child.parent == this) HxOverrides.remove(this.__children,child); else {
			if(child.parent != null) child.parent.removeChild(child);
			child.parent = this;
			if(this.stage != null) child.__setStageReference(this.stage);
			if(!child.__transformDirty) {
				child.__transformDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty++;
			}
			if(!child.__renderDirty) {
				child.__renderDirty = true;
				openfl.display.DisplayObject.__worldRenderDirty++;
			}
			child.dispatchEvent(new openfl.events.Event(openfl.events.Event.ADDED,true));
		}
		this.__children.splice(index,0,child);
		return child;
	}
	,areInaccessibleObjectsUnderPoint: function(point) {
		return false;
	}
	,contains: function(child) {
		return HxOverrides.indexOf(this.__children,child,0) > -1;
	}
	,getChildAt: function(index) {
		if(index >= 0 && index < this.__children.length) return this.__children[index];
		return null;
	}
	,getChildByName: function(name) {
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			if(child.get_name() == name) return child;
		}
		return null;
	}
	,getChildIndex: function(child) {
		var _g1 = 0;
		var _g = this.__children.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(this.__children[i] == child) return i;
		}
		return -1;
	}
	,getObjectsUnderPoint: function(point) {
		point = this.localToGlobal(point);
		var stack = new Array();
		this.__hitTest(point.x,point.y,false,stack,false);
		stack.shift();
		return stack;
	}
	,removeChild: function(child) {
		if(child != null && child.parent == this) {
			if(this.stage != null) child.__setStageReference(null);
			child.parent = null;
			HxOverrides.remove(this.__children,child);
			this.__removedChildren.push(child);
			if(!child.__transformDirty) {
				child.__transformDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty++;
			}
			if(!child.__renderDirty) {
				child.__renderDirty = true;
				openfl.display.DisplayObject.__worldRenderDirty++;
			}
			child.dispatchEvent(new openfl.events.Event(openfl.events.Event.REMOVED,true));
		}
		return child;
	}
	,removeChildAt: function(index) {
		if(index >= 0 && index < this.__children.length) return this.removeChild(this.__children[index]);
		return null;
	}
	,removeChildren: function(beginIndex,endIndex) {
		if(endIndex == null) endIndex = 2147483647;
		if(beginIndex == null) beginIndex = 0;
		if(endIndex == 2147483647) {
			endIndex = this.__children.length - 1;
			if(endIndex < 0) return;
		}
		if(beginIndex > this.__children.length - 1) return; else if(endIndex < beginIndex || beginIndex < 0 || endIndex > this.__children.length) throw new openfl.errors.RangeError("The supplied index is out of bounds.");
		var numRemovals = endIndex - beginIndex;
		while(numRemovals >= 0) {
			this.removeChildAt(beginIndex);
			numRemovals--;
		}
	}
	,setChildIndex: function(child,index) {
		if(index >= 0 && index <= this.__children.length && child.parent == this) {
			HxOverrides.remove(this.__children,child);
			this.__children.splice(index,0,child);
		}
	}
	,swapChildren: function(child1,child2) {
		if(child1.parent == this && child2.parent == this) {
			var index1 = HxOverrides.indexOf(this.__children,child1,0);
			var index2 = HxOverrides.indexOf(this.__children,child2,0);
			this.__children[index1] = child2;
			this.__children[index2] = child1;
		}
	}
	,swapChildrenAt: function(child1,child2) {
		var swap = this.__children[child1];
		this.__children[child1] = this.__children[child2];
		this.__children[child2] = swap;
		swap = null;
	}
	,__broadcast: function(event,notifyChilden) {
		if(event.target == null) event.target = this;
		if(notifyChilden) {
			var _g = 0;
			var _g1 = this.__children;
			while(_g < _g1.length) {
				var child = _g1[_g];
				++_g;
				child.__broadcast(event,true);
				if(event.__isCancelled) return true;
			}
		}
		return openfl.display.InteractiveObject.prototype.__broadcast.call(this,event,notifyChilden);
	}
	,__getBounds: function(rect,matrix) {
		if(this.__children.length == 0) return;
		var matrixCache = null;
		if(matrix != null) {
			matrixCache = this.__worldTransform;
			this.__worldTransform = matrix;
			this.__updateChildren(true);
		}
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			if(!child.__renderable) continue;
			child.__getBounds(rect,null);
		}
		if(matrix != null) {
			this.__worldTransform = matrixCache;
			this.__updateChildren(true);
		}
	}
	,__hitTest: function(x,y,shapeFlag,stack,interactiveOnly) {
		if(!this.get_visible() || interactiveOnly && !this.mouseEnabled) return false;
		var i = this.__children.length;
		if(interactiveOnly && (stack == null || !this.mouseChildren)) {
			while(--i >= 0) if(this.__children[i].__hitTest(x,y,shapeFlag,null,interactiveOnly)) {
				if(stack != null) stack.push(this);
				return true;
			}
		} else if(stack != null) {
			var length = stack.length;
			while(--i >= 0) if(this.__children[i].__hitTest(x,y,shapeFlag,stack,interactiveOnly)) {
				stack.splice(length,0,this);
				return true;
			}
		}
		return false;
	}
	,__renderCanvas: function(renderSession) {
		if(!this.__renderable || this.__worldAlpha <= 0) return;
		if(this.get_scrollRect() != null) renderSession.maskManager.pushRect(this.get_scrollRect(),this.__worldTransform);
		if(this.__mask != null) renderSession.maskManager.pushMask(this.__mask);
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			child.__renderCanvas(renderSession);
		}
		this.__removedChildren = [];
		if(this.__mask != null) renderSession.maskManager.popMask();
		if(this.get_scrollRect() != null) renderSession.maskManager.popMask();
	}
	,__renderDOM: function(renderSession) {
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			child.__renderDOM(renderSession);
		}
		var _g2 = 0;
		var _g11 = this.__removedChildren;
		while(_g2 < _g11.length) {
			var orphan = _g11[_g2];
			++_g2;
			if(orphan.stage == null) orphan.__renderDOM(renderSession);
		}
		this.__removedChildren = [];
	}
	,__renderGL: function(renderSession) {
		if(!this.__renderable || this.__worldAlpha <= 0) return;
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			child.__renderGL(renderSession);
		}
		this.__removedChildren = [];
	}
	,__renderMask: function(renderSession) {
		var bounds = new openfl.geom.Rectangle();
		this.__getTransform();
		this.__getBounds(bounds,new openfl.geom.Matrix());
		renderSession.context.rect(0,0,bounds.width,bounds.height);
	}
	,__setStageReference: function(stage) {
		if(this.stage != stage) {
			if(this.stage != null) this.dispatchEvent(new openfl.events.Event(openfl.events.Event.REMOVED_FROM_STAGE,false,false));
			this.stage = stage;
			if(stage != null) this.dispatchEvent(new openfl.events.Event(openfl.events.Event.ADDED_TO_STAGE,false,false));
			var _g = 0;
			var _g1 = this.__children;
			while(_g < _g1.length) {
				var child = _g1[_g];
				++_g;
				child.__setStageReference(stage);
			}
		}
	}
	,__update: function(transformOnly,updateChildren) {
		openfl.display.InteractiveObject.prototype.__update.call(this,transformOnly,updateChildren);
		if(!this.__renderable && !this.__worldAlphaChanged && !this.__worldClipChanged && !this.__worldTransformChanged && !this.__worldVisibleChanged) return;
		if(updateChildren) {
			var _g = 0;
			var _g1 = this.__children;
			while(_g < _g1.length) {
				var child = _g1[_g];
				++_g;
				child.__update(transformOnly,true);
			}
		}
	}
	,__updateChildren: function(transformOnly) {
		openfl.display.InteractiveObject.prototype.__updateChildren.call(this,transformOnly);
		var _g = 0;
		var _g1 = this.__children;
		while(_g < _g1.length) {
			var child = _g1[_g];
			++_g;
			child.__update(transformOnly,true);
		}
	}
	,get_numChildren: function() {
		return this.__children.length;
	}
	,__class__: openfl.display.DisplayObjectContainer
	,__properties__: $extend(openfl.display.InteractiveObject.prototype.__properties__,{get_numChildren:"get_numChildren"})
});
openfl.display.Sprite = function() {
	openfl.display.DisplayObjectContainer.call(this);
	this.buttonMode = false;
	this.useHandCursor = true;
};
$hxClasses["openfl.display.Sprite"] = openfl.display.Sprite;
openfl.display.Sprite.__name__ = ["openfl","display","Sprite"];
openfl.display.Sprite.__super__ = openfl.display.DisplayObjectContainer;
openfl.display.Sprite.prototype = $extend(openfl.display.DisplayObjectContainer.prototype,{
	startDrag: function(lockCenter,bounds) {
		if(lockCenter == null) lockCenter = false;
		if(this.stage != null) this.stage.__startDrag(this,lockCenter,bounds);
	}
	,stopDrag: function() {
		if(this.stage != null) this.stage.__stopDrag(this);
	}
	,__getBounds: function(rect,matrix) {
		openfl.display.DisplayObjectContainer.prototype.__getBounds.call(this,rect,matrix);
		if(this.__graphics != null) this.__graphics.__getBounds(rect,matrix != null?matrix:this.__worldTransform);
	}
	,__hitTest: function(x,y,shapeFlag,stack,interactiveOnly) {
		if(!this.get_visible() || interactiveOnly && !this.mouseEnabled) return false;
		var length = 0;
		if(stack != null) length = stack.length;
		if(openfl.display.DisplayObjectContainer.prototype.__hitTest.call(this,x,y,shapeFlag,stack,interactiveOnly)) return true; else if(this.__graphics != null && this.__graphics.__hitTest(x,y,shapeFlag,this.__worldTransform)) {
			if(stack != null) stack.splice(length,0,this);
			return true;
		}
		return false;
	}
	,__renderCanvas: function(renderSession) {
		if(!this.__renderable || this.__worldAlpha <= 0) return;
		if(this.__graphics != null) {
			this.__graphics.__render();
			if(this.__graphics.__canvas != null) {
				if(this.__mask != null) renderSession.maskManager.pushMask(this.__mask);
				var context = renderSession.context;
				context.globalAlpha = this.__worldAlpha;
				var transform = this.__worldTransform;
				if(renderSession.roundPixels) context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx | 0,transform.ty | 0); else context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx,transform.ty);
				if(this.get_scrollRect() == null) context.drawImage(this.__graphics.__canvas,this.__graphics.__bounds.x,this.__graphics.__bounds.y); else context.drawImage(this.__graphics.__canvas,this.get_scrollRect().x - this.__graphics.__bounds.x,this.get_scrollRect().y - this.__graphics.__bounds.y,this.get_scrollRect().width,this.get_scrollRect().height,this.__graphics.__bounds.x + this.get_scrollRect().x,this.__graphics.__bounds.y + this.get_scrollRect().y,this.get_scrollRect().width,this.get_scrollRect().height);
				if(this.__mask != null) renderSession.maskManager.popMask();
			}
		}
		openfl.display.DisplayObjectContainer.prototype.__renderCanvas.call(this,renderSession);
	}
	,__renderDOM: function(renderSession) {
		if(this.stage != null && this.__worldVisible && this.__renderable && this.__graphics != null) {
			if(this.__graphics.__dirty || this.__worldAlphaChanged || this.__canvas == null && this.__graphics.__canvas != null) {
				this.__graphics.__render();
				if(this.__graphics.__canvas != null) {
					if(this.__canvas == null) {
						this.__canvas = window.document.createElement("canvas");
						this.__canvasContext = this.__canvas.getContext("2d");
						this.__initializeElement(this.__canvas,renderSession);
					}
					this.__canvas.width = this.__graphics.__canvas.width;
					this.__canvas.height = this.__graphics.__canvas.height;
					this.__canvasContext.globalAlpha = this.__worldAlpha;
					this.__canvasContext.drawImage(this.__graphics.__canvas,0,0);
				} else if(this.__canvas != null) {
					renderSession.element.removeChild(this.__canvas);
					this.__canvas = null;
					this.__style = null;
				}
			}
			if(this.__canvas != null) {
				if(this.__worldTransformChanged) {
					var transform = new openfl.geom.Matrix();
					transform.translate(this.__graphics.__bounds.x,this.__graphics.__bounds.y);
					transform = transform.mult(this.__worldTransform);
					this.__style.setProperty(renderSession.transformProperty,renderSession.roundPixels?"matrix3d(" + transform.a + ", " + transform.b + ", " + "0, 0, " + transform.c + ", " + transform.d + ", " + "0, 0, 0, 0, 1, 0, " + (transform.tx | 0) + ", " + (transform.ty | 0) + ", 0, 1)":"matrix3d(" + transform.a + ", " + transform.b + ", " + "0, 0, " + transform.c + ", " + transform.d + ", " + "0, 0, 0, 0, 1, 0, " + transform.tx + ", " + transform.ty + ", 0, 1)",null);
				}
				this.__applyStyle(renderSession,false,false,true);
			}
		} else if(this.__canvas != null) {
			renderSession.element.removeChild(this.__canvas);
			this.__canvas = null;
			this.__style = null;
		}
		openfl.display.DisplayObjectContainer.prototype.__renderDOM.call(this,renderSession);
	}
	,__renderMask: function(renderSession) {
		if(this.__graphics != null) this.__graphics.__renderMask(renderSession); else openfl.display.DisplayObjectContainer.prototype.__renderMask.call(this,renderSession);
	}
	,get_graphics: function() {
		if(this.__graphics == null) this.__graphics = new openfl.display.Graphics();
		return this.__graphics;
	}
	,__class__: openfl.display.Sprite
	,__properties__: $extend(openfl.display.DisplayObjectContainer.prototype.__properties__,{get_graphics:"get_graphics"})
});
var Main = function() {
	openfl.display.Sprite.call(this);
	this.addEventListener(openfl.events.Event.ADDED_TO_STAGE,$bind(this,this.added));
};
$hxClasses["Main"] = Main;
Main.__name__ = ["Main"];
Main.main = function() {
	openfl.Lib.current.stage.align = openfl.display.StageAlign.TOP_LEFT;
	openfl.Lib.current.stage.scaleMode = openfl.display.StageScaleMode.NO_SCALE;
	openfl.Lib.current.addChild(new Main());
};
Main.__super__ = openfl.display.Sprite;
Main.prototype = $extend(openfl.display.Sprite.prototype,{
	resize: function(e) {
		if(!this.inited) this.init();
	}
	,init: function() {
		var _g = this;
		if(this.inited) return;
		this.inited = true;
		this.engine = new com.gamestudiohx.babylonhx.Engine(this,true);
		var scene = new com.gamestudiohx.babylonhx.Scene(this.engine);
		var camera = new com.gamestudiohx.babylonhx.cameras.ArcRotateCamera("Camera",0,0,10,com.gamestudiohx.babylonhx.tools.math.Vector3.Zero(),scene);
		camera.attachControl(this);
		this.background = new com.gamestudiohx.babylonhx.layer.Layer("back0",null,scene);
		this.background.texture = new com.gamestudiohx.babylonhx.materials.textures.DynamicTexture("dynamic texture",{ width : 1024, height : 1024},scene,true);
		var size = this.background.texture.getSize();
		var shape = new openfl.display.Shape();
		var m = new openfl.geom.Matrix();
		var bounds = shape.getBounds(shape);
		m.translate(-bounds.get_left(),-bounds.get_top());
		shape.get_graphics().beginFill(4555956);
		shape.get_graphics().drawRect(0,0,size.width,size.height);
		shape.get_graphics().endFill();
		this.background.texture._canvas.draw(shape,m);
		this.background.texture.update(0);
		var light = new com.gamestudiohx.babylonhx.lights.PointLight("Omni",new com.gamestudiohx.babylonhx.tools.math.Vector3(20,100,2),scene);
		var sphere = com.gamestudiohx.babylonhx.mesh.Mesh.CreateSphere("Sphere",16,3,scene);
		var material = new com.gamestudiohx.babylonhx.materials.StandardMaterial("kosh",scene);
		material.bumpTexture = new com.gamestudiohx.babylonhx.materials.textures.Texture("assets/img/normalMap.jpg",scene);
		material.diffuseColor = new com.gamestudiohx.babylonhx.tools.math.Color3(1,0,0);
		sphere.material = material;
		camera.setPosition(new com.gamestudiohx.babylonhx.tools.math.Vector3(-5,5,0));
		scene.registerBeforeRender(function() {
			sphere.rotation.y += 0.02;
		});
		scene.executeWhenReady(function() {
			_g.engine.runRenderLoop($bind(scene,scene.render));
			_g.addStats();
		});
	}
	,addStats: function() {
		this.engine._renderingCanvas.addChild(new net.hires.debug.Stats());
	}
	,added: function(e) {
		this.removeEventListener(openfl.events.Event.ADDED_TO_STAGE,$bind(this,this.added));
		this.stage.addEventListener(openfl.events.Event.RESIZE,$bind(this,this.resize));
		this.init();
	}
	,__class__: Main
});
var DocumentClass = function() {
	this.stage = openfl.Lib.current.stage;
	Main.call(this);
	this.dispatchEvent(new openfl.events.Event(openfl.events.Event.ADDED_TO_STAGE,false,false));
};
$hxClasses["DocumentClass"] = DocumentClass;
DocumentClass.__name__ = ["DocumentClass"];
DocumentClass.__super__ = Main;
DocumentClass.prototype = $extend(Main.prototype,{
	__class__: DocumentClass
});
openfl.AssetLibrary = function() {
};
$hxClasses["openfl.AssetLibrary"] = openfl.AssetLibrary;
openfl.AssetLibrary.__name__ = ["openfl","AssetLibrary"];
openfl.AssetLibrary.prototype = {
	exists: function(id,type) {
		return false;
	}
	,getBitmapData: function(id) {
		return null;
	}
	,getBytes: function(id) {
		return null;
	}
	,getFont: function(id) {
		return null;
	}
	,getMovieClip: function(id) {
		return null;
	}
	,getMusic: function(id) {
		return this.getSound(id);
	}
	,getPath: function(id) {
		return null;
	}
	,getSound: function(id) {
		return null;
	}
	,getText: function(id) {
		var bytes = this.getBytes(id);
		if(bytes == null) return null; else return bytes.readUTFBytes(bytes.length);
	}
	,isLocal: function(id,type) {
		return true;
	}
	,list: function(type) {
		return null;
	}
	,load: function(handler) {
		handler(this);
	}
	,loadBitmapData: function(id,handler) {
		handler(this.getBitmapData(id));
	}
	,loadBytes: function(id,handler) {
		handler(this.getBytes(id));
	}
	,loadFont: function(id,handler) {
		handler(this.getFont(id));
	}
	,loadMovieClip: function(id,handler) {
		handler(this.getMovieClip(id));
	}
	,loadMusic: function(id,handler) {
		handler(this.getMusic(id));
	}
	,loadSound: function(id,handler) {
		handler(this.getSound(id));
	}
	,loadText: function(id,handler) {
		var callback = function(bytes) {
			if(bytes == null) handler(null); else handler(bytes.readUTFBytes(bytes.length));
		};
		this.loadBytes(id,callback);
	}
	,__class__: openfl.AssetLibrary
};
var DefaultAssetLibrary = function() {
	this.type = new haxe.ds.StringMap();
	this.path = new haxe.ds.StringMap();
	this.className = new haxe.ds.StringMap();
	openfl.AssetLibrary.call(this);
	var id;
	id = "assets/font/Aaargh.eot";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.BINARY);
	id = "assets/font/Aaargh.svg";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.TEXT);
	id = "assets/font/Aaargh.ttf";
	this.className.set(id,__ASSET__assets_font_aaargh_ttf);
	this.type.set(id,openfl.AssetType.FONT);
	id = "assets/font/Aaargh.woff";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.BINARY);
	id = "assets/font/OpenSansRegular.eot";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.BINARY);
	id = "assets/font/OpenSansRegular.svg";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.TEXT);
	id = "assets/font/OpenSansRegular.ttf";
	this.className.set(id,__ASSET__assets_font_opensansregular_ttf);
	this.type.set(id,openfl.AssetType.FONT);
	id = "assets/font/OpenSansRegular.woff";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.BINARY);
	id = "assets/font/Tup Wanders Font License.txt";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.TEXT);
	id = "assets/img/Flare.png";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/grass.jpg";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/lens4.png";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/lens5.png";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/normalMap.jpg";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/refMap.jpg";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/README.TXT";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.TEXT);
	id = "assets/img/skybox/skybox_nx.jpg";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/skybox_nx.png";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/skybox_ny.jpg";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/skybox_ny.png";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/skybox_nz.jpg";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/skybox_nz.png";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/skybox_px.jpg";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/skybox_px.png";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/skybox_py.jpg";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/skybox_py.png";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/skybox_pz.jpg";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
	id = "assets/img/skybox/skybox_pz.png";
	this.path.set(id,id);
	this.type.set(id,openfl.AssetType.IMAGE);
};
$hxClasses["DefaultAssetLibrary"] = DefaultAssetLibrary;
DefaultAssetLibrary.__name__ = ["DefaultAssetLibrary"];
DefaultAssetLibrary.__super__ = openfl.AssetLibrary;
DefaultAssetLibrary.prototype = $extend(openfl.AssetLibrary.prototype,{
	exists: function(id,type) {
		var assetType = this.type.get(id);
		if(assetType != null) {
			if(assetType == type || (type == openfl.AssetType.SOUND || type == openfl.AssetType.MUSIC) && (assetType == openfl.AssetType.MUSIC || assetType == openfl.AssetType.SOUND)) return true;
			if(type == openfl.AssetType.BINARY || type == null) return true;
		}
		return false;
	}
	,getBitmapData: function(id) {
		return openfl.display.BitmapData.fromImage((function($this) {
			var $r;
			var key = $this.path.get(id);
			$r = ApplicationMain.images.get(key);
			return $r;
		}(this)));
	}
	,getBytes: function(id) {
		var bytes = null;
		var data = ((function($this) {
			var $r;
			var key = $this.path.get(id);
			$r = ApplicationMain.urlLoaders.get(key);
			return $r;
		}(this))).data;
		if(typeof(data) == "string") {
			bytes = new openfl.utils.ByteArray();
			bytes.writeUTFBytes(data);
		} else if(js.Boot.__instanceof(data,openfl.utils.ByteArray)) bytes = data; else bytes = null;
		if(bytes != null) {
			bytes.position = 0;
			return bytes;
		} else return null;
	}
	,getFont: function(id) {
		return js.Boot.__cast(Type.createInstance(this.className.get(id),[]) , openfl.text.Font);
	}
	,getMusic: function(id) {
		var sound = new openfl.media.Sound();
		sound.__buffer = true;
		sound.load(new openfl.net.URLRequest(this.path.get(id)));
		return sound;
	}
	,getPath: function(id) {
		return this.path.get(id);
	}
	,getSound: function(id) {
		return new openfl.media.Sound(new openfl.net.URLRequest(this.path.get(id)));
	}
	,getText: function(id) {
		var bytes = null;
		var data = ((function($this) {
			var $r;
			var key = $this.path.get(id);
			$r = ApplicationMain.urlLoaders.get(key);
			return $r;
		}(this))).data;
		if(typeof(data) == "string") return data; else if(js.Boot.__instanceof(data,openfl.utils.ByteArray)) bytes = data; else bytes = null;
		if(bytes != null) {
			bytes.position = 0;
			return bytes.readUTFBytes(bytes.length);
		} else return null;
	}
	,isLocal: function(id,type) {
		return true;
	}
	,list: function(type) {
		var items = [];
		var $it0 = this.type.keys();
		while( $it0.hasNext() ) {
			var id = $it0.next();
			if(type == null || this.exists(id,type)) items.push(id);
		}
		return items;
	}
	,loadBitmapData: function(id,handler) {
		if(this.path.exists(id)) {
			var loader = new openfl.display.Loader();
			loader.contentLoaderInfo.addEventListener(openfl.events.Event.COMPLETE,function(event) {
				handler((js.Boot.__cast(event.currentTarget.content , openfl.display.Bitmap)).bitmapData);
			});
			loader.load(new openfl.net.URLRequest(this.path.get(id)));
		} else handler(this.getBitmapData(id));
	}
	,loadBytes: function(id,handler) {
		if(this.path.exists(id)) {
			var loader = new openfl.net.URLLoader();
			loader.addEventListener(openfl.events.Event.COMPLETE,function(event) {
				var bytes = new openfl.utils.ByteArray();
				bytes.writeUTFBytes(event.currentTarget.data);
				bytes.position = 0;
				handler(bytes);
			});
			loader.load(new openfl.net.URLRequest(this.path.get(id)));
		} else handler(this.getBytes(id));
	}
	,loadFont: function(id,handler) {
		handler(this.getFont(id));
	}
	,loadMusic: function(id,handler) {
		handler(this.getMusic(id));
	}
	,loadSound: function(id,handler) {
		handler(this.getSound(id));
	}
	,loadText: function(id,handler) {
		if(this.path.exists(id)) {
			var loader = new openfl.net.URLLoader();
			loader.addEventListener(openfl.events.Event.COMPLETE,function(event) {
				handler(event.currentTarget.data);
			});
			loader.load(new openfl.net.URLRequest(this.path.get(id)));
		} else handler(this.getText(id));
	}
	,__class__: DefaultAssetLibrary
});
openfl.text = {};
openfl.text.Font = function() {
};
$hxClasses["openfl.text.Font"] = openfl.text.Font;
openfl.text.Font.__name__ = ["openfl","text","Font"];
openfl.text.Font.enumerateFonts = function(enumerateDeviceFonts) {
	if(enumerateDeviceFonts == null) enumerateDeviceFonts = false;
	return [];
};
openfl.text.Font.registerFont = function(font) {
};
openfl.text.Font.prototype = {
	__class__: openfl.text.Font
};
var __ASSET__assets_font_aaargh_ttf = function() {
	openfl.text.Font.call(this);
	this.fontName = "assets/font/Aaargh.ttf";
};
$hxClasses["__ASSET__assets_font_aaargh_ttf"] = __ASSET__assets_font_aaargh_ttf;
__ASSET__assets_font_aaargh_ttf.__name__ = ["__ASSET__assets_font_aaargh_ttf"];
__ASSET__assets_font_aaargh_ttf.__super__ = openfl.text.Font;
__ASSET__assets_font_aaargh_ttf.prototype = $extend(openfl.text.Font.prototype,{
	__class__: __ASSET__assets_font_aaargh_ttf
});
var __ASSET__assets_font_opensansregular_ttf = function() {
	openfl.text.Font.call(this);
	this.fontName = "assets/font/OpenSansRegular.ttf";
};
$hxClasses["__ASSET__assets_font_opensansregular_ttf"] = __ASSET__assets_font_opensansregular_ttf;
__ASSET__assets_font_opensansregular_ttf.__name__ = ["__ASSET__assets_font_opensansregular_ttf"];
__ASSET__assets_font_opensansregular_ttf.__super__ = openfl.text.Font;
__ASSET__assets_font_opensansregular_ttf.prototype = $extend(openfl.text.Font.prototype,{
	__class__: __ASSET__assets_font_opensansregular_ttf
});
var HxOverrides = function() { };
$hxClasses["HxOverrides"] = HxOverrides;
HxOverrides.__name__ = ["HxOverrides"];
HxOverrides.strDate = function(s) {
	var _g = s.length;
	switch(_g) {
	case 8:
		var k = s.split(":");
		var d = new Date();
		d.setTime(0);
		d.setUTCHours(k[0]);
		d.setUTCMinutes(k[1]);
		d.setUTCSeconds(k[2]);
		return d;
	case 10:
		var k1 = s.split("-");
		return new Date(k1[0],k1[1] - 1,k1[2],0,0,0);
	case 19:
		var k2 = s.split(" ");
		var y = k2[0].split("-");
		var t = k2[1].split(":");
		return new Date(y[0],y[1] - 1,y[2],t[0],t[1],t[2]);
	default:
		throw "Invalid date format : " + s;
	}
};
HxOverrides.cca = function(s,index) {
	var x = s.charCodeAt(index);
	if(x != x) return undefined;
	return x;
};
HxOverrides.substr = function(s,pos,len) {
	if(pos != null && pos != 0 && len != null && len < 0) return "";
	if(len == null) len = s.length;
	if(pos < 0) {
		pos = s.length + pos;
		if(pos < 0) pos = 0;
	} else if(len < 0) len = s.length + len - pos;
	return s.substr(pos,len);
};
HxOverrides.indexOf = function(a,obj,i) {
	var len = a.length;
	if(i < 0) {
		i += len;
		if(i < 0) i = 0;
	}
	while(i < len) {
		if(a[i] === obj) return i;
		i++;
	}
	return -1;
};
HxOverrides.remove = function(a,obj) {
	var i = HxOverrides.indexOf(a,obj,0);
	if(i == -1) return false;
	a.splice(i,1);
	return true;
};
HxOverrides.iter = function(a) {
	return { cur : 0, arr : a, hasNext : function() {
		return this.cur < this.arr.length;
	}, next : function() {
		return this.arr[this.cur++];
	}};
};
var Lambda = function() { };
$hxClasses["Lambda"] = Lambda;
Lambda.__name__ = ["Lambda"];
Lambda.count = function(it,pred) {
	var n = 0;
	if(pred == null) {
		var $it0 = $iterator(it)();
		while( $it0.hasNext() ) {
			var _ = $it0.next();
			n++;
		}
	} else {
		var $it1 = $iterator(it)();
		while( $it1.hasNext() ) {
			var x = $it1.next();
			if(pred(x)) n++;
		}
	}
	return n;
};
Lambda.indexOf = function(it,v) {
	var i = 0;
	var $it0 = $iterator(it)();
	while( $it0.hasNext() ) {
		var v2 = $it0.next();
		if(v == v2) return i;
		i++;
	}
	return -1;
};
var List = function() {
	this.length = 0;
};
$hxClasses["List"] = List;
List.__name__ = ["List"];
List.prototype = {
	add: function(item) {
		var x = [item];
		if(this.h == null) this.h = x; else this.q[1] = x;
		this.q = x;
		this.length++;
	}
	,__class__: List
};
var IMap = function() { };
$hxClasses["IMap"] = IMap;
IMap.__name__ = ["IMap"];
Math.__name__ = ["Math"];
var NMEPreloader = function() {
	openfl.display.Sprite.call(this);
	var backgroundColor = this.getBackgroundColor();
	var r = backgroundColor >> 16 & 255;
	var g = backgroundColor >> 8 & 255;
	var b = backgroundColor & 255;
	var perceivedLuminosity = 0.299 * r + 0.587 * g + 0.114 * b;
	var color = 0;
	if(perceivedLuminosity < 70) color = 16777215;
	var x = 30;
	var height = 9;
	var y = this.getHeight() / 2 - height / 2;
	var width = this.getWidth() - x * 2;
	var padding = 3;
	this.outline = new openfl.display.Sprite();
	this.outline.get_graphics().lineStyle(1,color,0.15,true);
	this.outline.get_graphics().drawRoundRect(0,0,width,height,padding * 2,padding * 2);
	this.outline.set_x(x);
	this.outline.set_y(y);
	this.addChild(this.outline);
	this.progress = new openfl.display.Sprite();
	this.progress.get_graphics().beginFill(color,0.35);
	this.progress.get_graphics().drawRect(0,0,width - padding * 2,height - padding * 2);
	this.progress.set_x(x + padding);
	this.progress.set_y(y + padding);
	this.progress.set_scaleX(0);
	this.addChild(this.progress);
};
$hxClasses["NMEPreloader"] = NMEPreloader;
NMEPreloader.__name__ = ["NMEPreloader"];
NMEPreloader.__super__ = openfl.display.Sprite;
NMEPreloader.prototype = $extend(openfl.display.Sprite.prototype,{
	getBackgroundColor: function() {
		return 16777215;
	}
	,getHeight: function() {
		var height = 0;
		if(height > 0) return height; else return openfl.Lib.current.stage.stageHeight;
	}
	,getWidth: function() {
		var width = 0;
		if(width > 0) return width; else return openfl.Lib.current.stage.stageWidth;
	}
	,onInit: function() {
	}
	,onLoaded: function() {
		this.dispatchEvent(new openfl.events.Event(openfl.events.Event.COMPLETE));
	}
	,onUpdate: function(bytesLoaded,bytesTotal) {
		var percentLoaded = bytesLoaded / bytesTotal;
		if(percentLoaded > 1) percentLoaded == 1;
		this.progress.set_scaleX(percentLoaded);
	}
	,__class__: NMEPreloader
});
var Reflect = function() { };
$hxClasses["Reflect"] = Reflect;
Reflect.__name__ = ["Reflect"];
Reflect.hasField = function(o,field) {
	return Object.prototype.hasOwnProperty.call(o,field);
};
Reflect.field = function(o,field) {
	try {
		return o[field];
	} catch( e ) {
		return null;
	}
};
Reflect.setField = function(o,field,value) {
	o[field] = value;
};
Reflect.getProperty = function(o,field) {
	var tmp;
	if(o == null) return null; else if(o.__properties__ && (tmp = o.__properties__["get_" + field])) return o[tmp](); else return o[field];
};
Reflect.setProperty = function(o,field,value) {
	var tmp;
	if(o.__properties__ && (tmp = o.__properties__["set_" + field])) o[tmp](value); else o[field] = value;
};
Reflect.callMethod = function(o,func,args) {
	return func.apply(o,args);
};
Reflect.fields = function(o) {
	var a = [];
	if(o != null) {
		var hasOwnProperty = Object.prototype.hasOwnProperty;
		for( var f in o ) {
		if(f != "__id__" && f != "hx__closures__" && hasOwnProperty.call(o,f)) a.push(f);
		}
	}
	return a;
};
Reflect.isFunction = function(f) {
	return typeof(f) == "function" && !(f.__name__ || f.__ename__);
};
Reflect.deleteField = function(o,field) {
	if(!Object.prototype.hasOwnProperty.call(o,field)) return false;
	delete(o[field]);
	return true;
};
var Std = function() { };
$hxClasses["Std"] = Std;
Std.__name__ = ["Std"];
Std.string = function(s) {
	return js.Boot.__string_rec(s,"");
};
Std["int"] = function(x) {
	return x | 0;
};
Std.parseInt = function(x) {
	var v = parseInt(x,10);
	if(v == 0 && (HxOverrides.cca(x,1) == 120 || HxOverrides.cca(x,1) == 88)) v = parseInt(x);
	if(isNaN(v)) return null;
	return v;
};
Std.parseFloat = function(x) {
	return parseFloat(x);
};
var StringBuf = function() {
	this.b = "";
};
$hxClasses["StringBuf"] = StringBuf;
StringBuf.__name__ = ["StringBuf"];
StringBuf.prototype = {
	__class__: StringBuf
};
var StringTools = function() { };
$hxClasses["StringTools"] = StringTools;
StringTools.__name__ = ["StringTools"];
StringTools.urlEncode = function(s) {
	return encodeURIComponent(s);
};
StringTools.urlDecode = function(s) {
	return decodeURIComponent(s.split("+").join(" "));
};
StringTools.startsWith = function(s,start) {
	return s.length >= start.length && HxOverrides.substr(s,0,start.length) == start;
};
StringTools.isSpace = function(s,pos) {
	var c = HxOverrides.cca(s,pos);
	return c > 8 && c < 14 || c == 32;
};
StringTools.ltrim = function(s) {
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,r)) r++;
	if(r > 0) return HxOverrides.substr(s,r,l - r); else return s;
};
StringTools.rtrim = function(s) {
	var l = s.length;
	var r = 0;
	while(r < l && StringTools.isSpace(s,l - r - 1)) r++;
	if(r > 0) return HxOverrides.substr(s,0,l - r); else return s;
};
StringTools.trim = function(s) {
	return StringTools.ltrim(StringTools.rtrim(s));
};
StringTools.replace = function(s,sub,by) {
	return s.split(sub).join(by);
};
StringTools.hex = function(n,digits) {
	var s = "";
	var hexChars = "0123456789ABCDEF";
	do {
		s = hexChars.charAt(n & 15) + s;
		n >>>= 4;
	} while(n > 0);
	if(digits != null) while(s.length < digits) s = "0" + s;
	return s;
};
StringTools.fastCodeAt = function(s,index) {
	return s.charCodeAt(index);
};
var ValueType = $hxClasses["ValueType"] = { __ename__ : true, __constructs__ : ["TNull","TInt","TFloat","TBool","TObject","TFunction","TClass","TEnum","TUnknown"] };
ValueType.TNull = ["TNull",0];
ValueType.TNull.toString = $estr;
ValueType.TNull.__enum__ = ValueType;
ValueType.TInt = ["TInt",1];
ValueType.TInt.toString = $estr;
ValueType.TInt.__enum__ = ValueType;
ValueType.TFloat = ["TFloat",2];
ValueType.TFloat.toString = $estr;
ValueType.TFloat.__enum__ = ValueType;
ValueType.TBool = ["TBool",3];
ValueType.TBool.toString = $estr;
ValueType.TBool.__enum__ = ValueType;
ValueType.TObject = ["TObject",4];
ValueType.TObject.toString = $estr;
ValueType.TObject.__enum__ = ValueType;
ValueType.TFunction = ["TFunction",5];
ValueType.TFunction.toString = $estr;
ValueType.TFunction.__enum__ = ValueType;
ValueType.TClass = function(c) { var $x = ["TClass",6,c]; $x.__enum__ = ValueType; $x.toString = $estr; return $x; };
ValueType.TEnum = function(e) { var $x = ["TEnum",7,e]; $x.__enum__ = ValueType; $x.toString = $estr; return $x; };
ValueType.TUnknown = ["TUnknown",8];
ValueType.TUnknown.toString = $estr;
ValueType.TUnknown.__enum__ = ValueType;
var Type = function() { };
$hxClasses["Type"] = Type;
Type.__name__ = ["Type"];
Type.getClass = function(o) {
	if(o == null) return null;
	if((o instanceof Array) && o.__enum__ == null) return Array; else return o.__class__;
};
Type.getClassName = function(c) {
	var a = c.__name__;
	return a.join(".");
};
Type.resolveClass = function(name) {
	var cl = $hxClasses[name];
	if(cl == null || !cl.__name__) return null;
	return cl;
};
Type.resolveEnum = function(name) {
	var e = $hxClasses[name];
	if(e == null || !e.__ename__) return null;
	return e;
};
Type.createInstance = function(cl,args) {
	var _g = args.length;
	switch(_g) {
	case 0:
		return new cl();
	case 1:
		return new cl(args[0]);
	case 2:
		return new cl(args[0],args[1]);
	case 3:
		return new cl(args[0],args[1],args[2]);
	case 4:
		return new cl(args[0],args[1],args[2],args[3]);
	case 5:
		return new cl(args[0],args[1],args[2],args[3],args[4]);
	case 6:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5]);
	case 7:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6]);
	case 8:
		return new cl(args[0],args[1],args[2],args[3],args[4],args[5],args[6],args[7]);
	default:
		throw "Too many arguments";
	}
	return null;
};
Type.createEmptyInstance = function(cl) {
	function empty() {}; empty.prototype = cl.prototype;
	return new empty();
};
Type.createEnum = function(e,constr,params) {
	var f = Reflect.field(e,constr);
	if(f == null) throw "No such constructor " + constr;
	if(Reflect.isFunction(f)) {
		if(params == null) throw "Constructor " + constr + " need parameters";
		return f.apply(e,params);
	}
	if(params != null && params.length != 0) throw "Constructor " + constr + " does not need parameters";
	return f;
};
Type.getClassFields = function(c) {
	var a = Reflect.fields(c);
	HxOverrides.remove(a,"__name__");
	HxOverrides.remove(a,"__interfaces__");
	HxOverrides.remove(a,"__properties__");
	HxOverrides.remove(a,"__super__");
	HxOverrides.remove(a,"prototype");
	return a;
};
Type.getEnumConstructs = function(e) {
	var a = e.__constructs__;
	return a.slice();
};
Type["typeof"] = function(v) {
	var _g = typeof(v);
	switch(_g) {
	case "boolean":
		return ValueType.TBool;
	case "string":
		return ValueType.TClass(String);
	case "number":
		if(Math.ceil(v) == v % 2147483648.0) return ValueType.TInt;
		return ValueType.TFloat;
	case "object":
		if(v == null) return ValueType.TNull;
		var e = v.__enum__;
		if(e != null) return ValueType.TEnum(e);
		var c;
		if((v instanceof Array) && v.__enum__ == null) c = Array; else c = v.__class__;
		if(c != null) return ValueType.TClass(c);
		return ValueType.TObject;
	case "function":
		if(v.__name__ || v.__ename__) return ValueType.TObject;
		return ValueType.TFunction;
	case "undefined":
		return ValueType.TNull;
	default:
		return ValueType.TUnknown;
	}
};
var XmlType = $hxClasses["XmlType"] = { __ename__ : true, __constructs__ : [] };
var Xml = function() { };
$hxClasses["Xml"] = Xml;
Xml.__name__ = ["Xml"];
Xml.Element = null;
Xml.PCData = null;
Xml.CData = null;
Xml.Comment = null;
Xml.DocType = null;
Xml.ProcessingInstruction = null;
Xml.Document = null;
var com = {};
com.gamestudiohx = {};
com.gamestudiohx.babylonhx = {};
com.gamestudiohx.babylonhx.Engine = function(canvas,antialias) {
	this._depthMask = false;
	this._renderingCanvas = canvas;
	if(!openfl.display.OpenGLView.get_isSupported()) throw "GL not supported";
	this.forceWireframe = false;
	this.cullBackFaces = true;
	this.scenes = [];
	this._runningLoop = false;
	this._workingContext = new openfl.display.OpenGLView();
	canvas.addChild(this._workingContext);
	this._hardwareScalingLevel = Std["int"](1.0 / openfl.system.Capabilities.get_pixelAspectRatio());
	this.resize();
	this._caps = { maxTexturesImageUnits : null, maxTextureSize : null, maxCubemapTextureSize : null, maxRenderTextureSize : null, standardDerivatives : null, textureFloat : null, textureAnisotropicFilterExtension : null, maxAnisotropy : null, instancedArrays : null};
	this._caps.maxTexturesImageUnits = openfl.gl.GL.getParameter(34930);
	this._caps.maxTextureSize = openfl.gl.GL.getParameter(3379);
	this._caps.maxCubemapTextureSize = openfl.gl.GL.getParameter(34076);
	this._caps.maxRenderTextureSize = 8192;
	this._caps.standardDerivatives = openfl.gl.GL.getExtension("OES_standard_derivatives") != null;
	this._caps.textureFloat = openfl.gl.GL.getExtension("OES_texture_float") != null;
	var get_EXT_texture_filter_anisotropic = function() {
		if(openfl.gl.GL.getExtension("EXT_texture_filter_anisotropic") != null) return openfl.gl.GL.getExtension("EXT_texture_filter_anisotropic");
		if(openfl.gl.GL.getExtension("GL_EXT_texture_filter_anisotropic") != null) return openfl.gl.GL.getExtension("GL_EXT_texture_filter_anisotropic");
		if(openfl.gl.GL.getExtension("WEBKIT_EXT_texture_filter_anisotropic") != null) return openfl.gl.GL.getExtension("WEBKIT_EXT_texture_filter_anisotropic");
		if(openfl.gl.GL.getExtension("MOZ_EXT_texture_filter_anisotropic") != null) return openfl.gl.GL.getExtension("MOZ_EXT_texture_filter_anisotropic");
		return null;
	};
	this._caps.textureAnisotropicFilterExtension = get_EXT_texture_filter_anisotropic();
	if(this._caps.textureAnisotropicFilterExtension != null) this._caps.maxAnisotropy = openfl.gl.GL.getParameter(this._caps.textureAnisotropicFilterExtension.MAX_TEXTURE_MAX_ANISOTROPY_EXT); else this._caps.maxAnisotropy = 1;
	this._loadedTexturesCache = [];
	this._activeTexturesCache = [];
	this._currentEffect = null;
	this._currentState = { culling : null};
	this._compiledEffects = new haxe.ds.StringMap();
	openfl.gl.GL.enable(2929);
	openfl.gl.GL.depthFunc(515);
	this.isFullscreen = false;
	this.isPointerLock = false;
};
$hxClasses["com.gamestudiohx.babylonhx.Engine"] = com.gamestudiohx.babylonhx.Engine;
com.gamestudiohx.babylonhx.Engine.__name__ = ["com","gamestudiohx","babylonhx","Engine"];
com.gamestudiohx.babylonhx.Engine.prototype = {
	getAspectRatio: function(camera) {
		return this._aspectRatio;
	}
	,getRenderWidth: function() {
		return openfl.Lib.current.stage.stageWidth;
	}
	,getRenderHeight: function() {
		return openfl.Lib.current.stage.stageHeight;
	}
	,getRenderingCanvas: function() {
		return this._renderingCanvas;
	}
	,setHardwareScalingLevel: function(level) {
		this._hardwareScalingLevel = level;
		this.resize();
	}
	,getHardwareScalingLevel: function() {
		return this._hardwareScalingLevel;
	}
	,getLoadedTexturesCache: function() {
		return this._loadedTexturesCache;
	}
	,setDepthFunctionToGreaterOrEqual: function() {
		openfl.gl.GL.depthFunc(518);
	}
	,setDepthFunctionToLessOrEqual: function() {
		openfl.gl.GL.depthFunc(515);
	}
	,setDepthFunctionToLess: function() {
		openfl.gl.GL.depthFunc(513);
	}
	,getCaps: function() {
		return this._caps;
	}
	,stopRenderLoop: function() {
		this._renderFunction = null;
		this._runningLoop = false;
	}
	,_renderLoop: function(rect) {
		this.beginFrame();
		if(this._renderFunction != null) this._renderFunction(new openfl.geom.Rectangle());
		this.endFrame();
	}
	,runRenderLoop: function(renderFunction) {
		this._runningLoop = true;
		this._renderFunction = renderFunction;
		this._workingContext.set_render($bind(this,this._renderLoop));
	}
	,switchFullscreen: function(requestPointerLock) {
	}
	,clear: function(color,backBuffer,depthStencil) {
		if(js.Boot.__instanceof(color,com.gamestudiohx.babylonhx.tools.math.Color4)) openfl.gl.GL.clearColor(color.r,color.g,color.b,color.a); else openfl.gl.GL.clearColor(color.r,color.g,color.b,1.0);
		if(this._depthMask) openfl.gl.GL.clearDepth(1.0);
		var mode = 0;
		if(backBuffer) mode |= 16384;
		if(depthStencil && this._depthMask) mode |= 256;
		openfl.gl.GL.clear(mode);
	}
	,setViewport: function(viewport,requiredWidth,requiredHeight) {
		if(requiredHeight == null) requiredHeight = 0;
		if(requiredWidth == null) requiredWidth = 0;
		var width;
		if(requiredWidth == 0) width = this.getRenderWidth(); else width = requiredWidth;
		var height;
		if(requiredHeight == 0) height = this.getRenderHeight(); else height = requiredHeight;
		var x = viewport.x;
		var y = viewport.y;
		this._cachedViewport = viewport;
		openfl.gl.GL.viewport(x * width | 0,y * height | 0,width * viewport.width | 0,height * viewport.height | 0);
		this._aspectRatio = width * viewport.width / (height * viewport.height);
	}
	,setDirectViewport: function(x,y,width,height) {
		this._cachedViewport = null;
		openfl.gl.GL.viewport(x,y,width,height);
		this._aspectRatio = width / height;
	}
	,beginFrame: function() {
		com.gamestudiohx.babylonhx.tools.Tools._MeasureFps();
	}
	,endFrame: function() {
		openfl.gl.GL.flush();
	}
	,resize: function() {
	}
	,bindFramebuffer: function(texture) {
		openfl.gl.GL.bindFramebuffer(36160,texture._framebuffer);
		openfl.gl.GL.viewport(0,0,texture._width | 0,texture._height | 0);
		this._aspectRatio = texture._width / texture._height;
		this.wipeCaches();
	}
	,unBindFramebuffer: function(texture) {
		if(texture.generateMipMaps) {
			openfl.gl.GL.bindTexture(3553,texture.data);
			openfl.gl.GL.generateMipmap(3553);
			openfl.gl.GL.bindTexture(3553,null);
		}
		openfl.gl.GL.bindFramebuffer(36160,null);
	}
	,flushFramebuffer: function() {
		openfl.gl.GL.flush();
	}
	,restoreDefaultFramebuffer: function() {
		openfl.gl.GL.bindFramebuffer(36160,null);
		this.setViewport(this._cachedViewport);
		this.wipeCaches();
	}
	,_resetVertexBufferBinding: function() {
		openfl.gl.GL.bindBuffer(34962,null);
		this._cachedVertexBuffers = null;
	}
	,createVertexBuffer: function(vertices) {
		var vbo = openfl.gl.GL.createBuffer();
		openfl.gl.GL.bindBuffer(34962,vbo);
		openfl.gl.GL.bufferData(34962,new Float32Array(vertices),35044);
		this._resetVertexBufferBinding();
		return new com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer(vbo);
	}
	,createDynamicVertexBuffer: function(capacity) {
		var vbo = openfl.gl.GL.createBuffer();
		openfl.gl.GL.bindBuffer(34962,vbo);
		openfl.gl.GL.bufferData(34962,new Float32Array(capacity),35048);
		this._resetVertexBufferBinding();
		return new com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer(vbo);
	}
	,updateDynamicVertexBuffer: function(vertexBuffer,vertices,length) {
		if(length == null) length = 0;
		openfl.gl.GL.bindBuffer(34962,vertexBuffer.buffer);
		if(js.Boot.__instanceof(vertices,Float32Array)) openfl.gl.GL.bufferSubData(34962,0,new Float32Array(vertices)); else openfl.gl.GL.bufferSubData(34962,0,new Float32Array(vertices,0,length));
		this._resetVertexBufferBinding();
	}
	,createIndexBuffer: function(indices) {
		var vbo = openfl.gl.GL.createBuffer();
		if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("createIndexBuffer - hit createBuffer",{ fileName : "Engine.hx", lineNumber : 463, className : "com.gamestudiohx.babylonhx.Engine", methodName : "createIndexBuffer"});
		openfl.gl.GL.bindBuffer(34963,vbo);
		openfl.gl.GL.bufferData(34963,new Int16Array(indices),35044);
		this._resetVertexBufferBinding();
		if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("createIndexBuffer - pre BabylonGLBuffer",{ fileName : "Engine.hx", lineNumber : 469, className : "com.gamestudiohx.babylonhx.Engine", methodName : "createIndexBuffer"});
		return new com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer(vbo);
	}
	,bindBuffers: function(vertexBuffer,indexBuffer,vertexDeclaration,vertexStrideSize,effect) {
		if(this._cachedVertexBuffers != vertexBuffer || this._cachedEffectForVertexBuffers != effect) {
			this._cachedVertexBuffers = vertexBuffer;
			this._cachedEffectForVertexBuffers = effect;
			openfl.gl.GL.bindBuffer(34962,vertexBuffer.buffer);
			var offset = 0;
			var _g1 = 0;
			var _g = vertexDeclaration.length;
			while(_g1 < _g) {
				var index = _g1++;
				var order = effect.getAttribute(index);
				if(order >= 0) openfl.gl.GL.vertexAttribPointer(order,vertexDeclaration[index],5126,false,vertexStrideSize,offset);
				offset += vertexDeclaration[index] * 4;
			}
		}
		if(this._cachedIndexBuffer != indexBuffer) {
			this._cachedIndexBuffer = indexBuffer;
			openfl.gl.GL.bindBuffer(34963,indexBuffer.buffer);
		}
	}
	,bindMultiBuffers: function(vertexBuffers,indexBuffer,effect) {
		if(this._cachedVertexBuffers != vertexBuffers || this._cachedEffectForVertexBuffers != effect) {
			this._cachedVertexBuffers = vertexBuffers;
			this._cachedEffectForVertexBuffers = effect;
			var attributes = effect.getAttributesNames();
			var _g1 = 0;
			var _g = attributes.length;
			while(_g1 < _g) {
				var index = _g1++;
				var order = effect.getAttribute(index);
				if(order >= 0) {
					var vertexBuffer = vertexBuffers.get(attributes[index]);
					if(vertexBuffer == null) continue;
					var stride = vertexBuffer.getStrideSize();
					openfl.gl.GL.bindBuffer(34962,vertexBuffer._buffer.buffer);
					openfl.gl.GL.vertexAttribPointer(order,stride,5126,false,stride * 4,0);
				}
			}
		}
		if(this._cachedIndexBuffer != indexBuffer) {
			this._cachedIndexBuffer = indexBuffer;
			openfl.gl.GL.bindBuffer(34963,indexBuffer.buffer);
		}
	}
	,_releaseBuffer: function(buffer) {
		buffer.references--;
		if(buffer.references == 0) {
			openfl.gl.GL.deleteBuffer(buffer.buffer);
			return true;
		}
		return false;
	}
	,deleteInstancesBuffer: function(buffer) {
		openfl.gl.GL.deleteBuffer(buffer.buffer);
	}
	,updateAndBindInstancesBuffer: function(instancesBuffer,data,offsetLocations) {
		openfl.gl.GL.bindBuffer(34962,instancesBuffer.buffer);
		openfl.gl.GL.bufferSubData(34962,0,data);
		var _g = 0;
		while(_g < 4) {
			var index = _g++;
			var offsetLocation = offsetLocations[index];
			openfl.gl.GL.enableVertexAttribArray(offsetLocation);
			openfl.gl.GL.vertexAttribPointer(offsetLocation,4,5126,false,64,index * 16);
		}
	}
	,unBindInstancesBuffer: function(instancesBuffer,offsetLocations) {
		openfl.gl.GL.bindBuffer(34962,instancesBuffer.buffer);
		var _g = 0;
		while(_g < 4) {
			var index = _g++;
			var offsetLocation = offsetLocations[index];
			openfl.gl.GL.disableVertexAttribArray(offsetLocation);
		}
	}
	,draw: function(useTriangles,indexStart,indexCount,instancesCount) {
		openfl.gl.GL.drawElements(useTriangles?4:1,indexCount,5123,indexStart * 2);
	}
	,_releaseEffect: function(effect) {
		if((function($this) {
			var $r;
			var key = effect.name;
			$r = $this._compiledEffects.exists(key);
			return $r;
		}(this))) {
			var key1 = effect.name;
			this._compiledEffects.remove(key1);
			if(effect.getProgram() != null) openfl.gl.GL.deleteProgram(effect.getProgram());
		}
	}
	,createEffect: function(baseName,attributesNames,uniformsNames,samplers,defines,optionalDefines) {
		var vertex;
		if(Reflect.field(baseName,"vertex") != null) vertex = baseName.vertex; else vertex = baseName;
		var fragment;
		if(Reflect.field(baseName,"fragment") != null) fragment = baseName.fragment; else fragment = baseName;
		var name = vertex + "+" + fragment + "@" + defines;
		if(this._compiledEffects.exists(name)) return this._compiledEffects.get(name);
		var effect = new com.gamestudiohx.babylonhx.materials.Effect(baseName,attributesNames,uniformsNames,samplers,this,defines,optionalDefines);
		this._compiledEffects.set(name,effect);
		return effect;
	}
	,compileShader: function(source,type,defines) {
		var shader = openfl.gl.GL.createShader(type == "vertex"?35633:35632);
		source = defines + "\n" + source;
		openfl.gl.GL.shaderSource(shader,source);
		openfl.gl.GL.compileShader(shader);
		if(openfl.gl.GL.getShaderParameter(shader,35713) == 0) throw openfl.gl.GL.getShaderInfoLog(shader);
		return shader;
	}
	,createShaderProgram: function(vertexCode,fragmentCode,defines) {
		var vertexShader = this.compileShader(vertexCode,"vertex",defines);
		var fragmentShader = this.compileShader(fragmentCode,"fragment",defines);
		var shaderProgram = openfl.gl.GL.createProgram();
		openfl.gl.GL.attachShader(shaderProgram,vertexShader);
		openfl.gl.GL.attachShader(shaderProgram,fragmentShader);
		openfl.gl.GL.linkProgram(shaderProgram);
		var error = openfl.gl.GL.getProgramInfoLog(shaderProgram);
		if(error != "") throw error;
		openfl.gl.GL.deleteShader(vertexShader);
		openfl.gl.GL.deleteShader(fragmentShader);
		return shaderProgram;
	}
	,getUniforms: function(shaderProgram,uniformsNames) {
		var results = [];
		var _g1 = 0;
		var _g = uniformsNames.length;
		while(_g1 < _g) {
			var index = _g1++;
			results.push(openfl.gl.GL.getUniformLocation(shaderProgram,uniformsNames[index]));
		}
		return results;
	}
	,getAttributes: function(shaderProgram,attributesNames) {
		var results = [];
		var _g1 = 0;
		var _g = attributesNames.length;
		while(_g1 < _g) {
			var index = _g1++;
			try {
				results.push(openfl.gl.GL.getAttribLocation(shaderProgram,attributesNames[index]));
			} catch( e ) {
				if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("getAttributes() -> ERROR: " + Std.string(e),{ fileName : "Engine.hx", lineNumber : 675, className : "com.gamestudiohx.babylonhx.Engine", methodName : "getAttributes"});
				results.push(-1);
			}
		}
		return results;
	}
	,enableEffect: function(effect) {
		if(effect == null || effect.getAttributesCount() == 0 || this._currentEffect == effect) return;
		openfl.gl.GL.useProgram(effect.getProgram());
		var _g1 = 0;
		var _g = effect.getAttributesCount();
		while(_g1 < _g) {
			var index = _g1++;
			var order = effect.getAttribute(index);
			if(order >= 0) openfl.gl.GL.enableVertexAttribArray(effect.getAttribute(index));
		}
		this._currentEffect = effect;
	}
	,setArray: function(uniform,array) {
		if(uniform != null) openfl.gl.GL.uniform1fv(uniform,array);
	}
	,setMatrices: function(uniform,matrices) {
		if(uniform != null) openfl.gl.GL.uniformMatrix4fv(uniform,false,matrices);
	}
	,setMatrix: function(uniform,matrix) {
		if(uniform != null) openfl.gl.GL.uniformMatrix4fv(uniform,false,matrix.m);
	}
	,setFloat: function(uniform,value) {
		if(uniform != null) openfl.gl.GL.uniform1f(uniform,value);
	}
	,setFloat2: function(uniform,x,y) {
		if(uniform != null) openfl.gl.GL.uniform2f(uniform,x,y);
	}
	,setFloat3: function(uniform,x,y,z) {
		if(uniform != null) openfl.gl.GL.uniform3f(uniform,x,y,z);
	}
	,setBool: function(uniform,bool) {
		if(uniform != null) openfl.gl.GL.uniform1i(uniform,bool?1:0);
	}
	,setFloat4: function(uniform,x,y,z,w) {
		if(uniform != null) openfl.gl.GL.uniform4f(uniform,x,y,z,w);
	}
	,setColor3: function(uniform,color3) {
		if(uniform != null) openfl.gl.GL.uniform3f(uniform,color3.r,color3.g,color3.b);
	}
	,setColor4: function(uniform,color3,alpha) {
		if(uniform != null) openfl.gl.GL.uniform4f(uniform,color3.r,color3.g,color3.b,alpha);
	}
	,setState: function(culling) {
		if(this._currentState.culling != culling) {
			if(culling) {
				openfl.gl.GL.cullFace(this.cullBackFaces?1029:1028);
				openfl.gl.GL.enable(2884);
			} else openfl.gl.GL.disable(2884);
			this._currentState.culling = culling;
		}
	}
	,setDepthBuffer: function(enable) {
		if(enable) openfl.gl.GL.enable(2929); else openfl.gl.GL.disable(2929);
	}
	,setDepthWrite: function(enable) {
		openfl.gl.GL.depthMask(enable);
		this._depthMask = enable;
	}
	,setColorWrite: function(enable) {
		openfl.gl.GL.colorMask(enable,enable,enable,enable);
	}
	,setAlphaMode: function(mode) {
		switch(mode) {
		case com.gamestudiohx.babylonhx.Engine.ALPHA_DISABLE:
			this.setDepthWrite(true);
			break;
		case com.gamestudiohx.babylonhx.Engine.ALPHA_COMBINE:
			this.setDepthWrite(false);
			openfl.gl.GL.blendFuncSeparate(770,771,0,1);
			openfl.gl.GL.enable(3042);
			break;
		case com.gamestudiohx.babylonhx.Engine.ALPHA_ADD:
			this.setDepthWrite(false);
			openfl.gl.GL.blendFuncSeparate(1,1,0,1);
			openfl.gl.GL.enable(3042);
			break;
		}
	}
	,setAlphaTesting: function(enable) {
		this._alphaTest = enable;
	}
	,getAlphaTesting: function() {
		return this._alphaTest;
	}
	,wipeCaches: function() {
		this._activeTexturesCache = [];
		this._currentEffect = null;
		this._currentState = { culling : null};
		this._cachedVertexBuffers = null;
		this._cachedIndexBuffer = null;
		this._cachedEffectForVertexBuffers = null;
	}
	,getExponantOfTwo: function(value,max) {
		var count = 1;
		do count *= 2; while(count < value);
		if(count > max) count = max;
		return count;
	}
	,getScaled: function(source,newWidth,newHeight) {
		var m = new openfl.geom.Matrix();
		m.scale(newWidth / source.width,newHeight / source.height);
		var bmp = new openfl.display.BitmapData(newWidth,newHeight,true);
		bmp.draw(source,m);
		return bmp;
	}
	,createTexture: function(url,noMipmap,invertY,scene) {
		var _g = this;
		var texture = new com.gamestudiohx.babylonhx.materials.textures.BabylonTexture(url,openfl.gl.GL.createTexture());
		var onload = function(img) {
			var potWidth = _g.getExponantOfTwo(img.width,_g._caps.maxTextureSize);
			var potHeight = _g.getExponantOfTwo(img.height,_g._caps.maxTextureSize);
			var isPot = img.width == potWidth && img.height == potHeight;
			_g._workingCanvas = img;
			if(!isPot) _g._workingCanvas = _g.getScaled(img,potWidth / 2 | 0,potHeight / 2 | 0);
			var pixelData = _g._workingCanvas.getPixels(_g._workingCanvas.rect).byteView;
			openfl.gl.GL.bindTexture(3553,texture.data);
			openfl.gl.GL.texImage2D(3553,0,6408,_g._workingCanvas.width,_g._workingCanvas.height,0,6408,5121,pixelData);
			openfl.gl.GL.texParameteri(3553,10240,9729);
			if(noMipmap != null && noMipmap == true) openfl.gl.GL.texParameteri(3553,10241,9729); else {
				openfl.gl.GL.texParameteri(3553,10241,9987);
				openfl.gl.GL.generateMipmap(3553);
			}
			openfl.gl.GL.bindTexture(3553,null);
			_g._activeTexturesCache = [];
			texture._baseWidth = img.width;
			texture._baseHeight = img.height;
			texture._width = potWidth;
			texture._height = potHeight;
			texture.isReady = true;
			scene._removePendingData(texture);
		};
		scene._addPendingData(texture);
		com.gamestudiohx.babylonhx.tools.Tools.LoadImage(url,onload);
		texture.url = url;
		texture.noMipmap = noMipmap;
		texture.references = 1;
		this._loadedTexturesCache.push(texture);
		return texture;
	}
	,createDynamicTexture: function(width,height,generateMipMaps) {
		var texture = new com.gamestudiohx.babylonhx.materials.textures.BabylonTexture("",openfl.gl.GL.createTexture());
		width = this.getExponantOfTwo(width,this._caps.maxTextureSize);
		height = this.getExponantOfTwo(height,this._caps.maxTextureSize);
		openfl.gl.GL.bindTexture(3553,texture.data);
		openfl.gl.GL.texParameteri(3553,10240,9729);
		if(!generateMipMaps) openfl.gl.GL.texParameteri(3553,10241,9729); else openfl.gl.GL.texParameteri(3553,10241,9987);
		openfl.gl.GL.bindTexture(3553,null);
		this._activeTexturesCache = [];
		texture._baseWidth = width | 0;
		texture._baseHeight = height | 0;
		texture._width = width;
		texture._height = height;
		texture.isReady = false;
		texture.generateMipMaps = generateMipMaps;
		texture.references = 1;
		this._loadedTexturesCache.push(texture);
		return texture;
	}
	,updateDynamicTexture: function(texture,canvas,invertY) {
		openfl.gl.GL.bindTexture(3553,texture.data);
		var pixelData = canvas.getPixels(canvas.rect).byteView;
		openfl.gl.GL.texImage2D(3553,0,6408,canvas.width,canvas.height,0,6408,5121,pixelData);
		if(texture.generateMipMaps) openfl.gl.GL.generateMipmap(3553);
		openfl.gl.GL.bindTexture(3553,null);
		this._activeTexturesCache = [];
		texture.isReady = true;
	}
	,updateVideoTexture: function(texture,video) {
	}
	,createRenderTargetTexture: function(size,options) {
		var generateMipMaps = false;
		var generateDepthBuffer = true;
		var samplingMode = com.gamestudiohx.babylonhx.materials.textures.Texture.TRILINEAR_SAMPLINGMODE;
		if(options != null) {
			if(Reflect.field(options,"generateMipMaps") != null) generateMipMaps = options.generateMipmaps; else generateMipMaps = options;
			if(Reflect.field(options,"generateDepthBuffer") != null) generateDepthBuffer = options.generateDepthBuffer; else generateDepthBuffer = true;
			if(Reflect.field(options,"samplingMode") != null) samplingMode = options.samplingMode;
		}
		var texture = new com.gamestudiohx.babylonhx.materials.textures.BabylonTexture("",openfl.gl.GL.createTexture());
		openfl.gl.GL.bindTexture(3553,texture.data);
		var width;
		if(Reflect.field(size,"width") != null) width = size.width; else width = size;
		var height;
		if(Reflect.field(size,"height") != null) height = size.height; else height = size;
		var magFilter = 9728;
		var minFilter = 9728;
		if(samplingMode == com.gamestudiohx.babylonhx.materials.textures.Texture.BILINEAR_SAMPLINGMODE) {
			magFilter = 9729;
			if(generateMipMaps) minFilter = 9985; else minFilter = 9729;
		} else if(samplingMode == com.gamestudiohx.babylonhx.materials.textures.Texture.TRILINEAR_SAMPLINGMODE) {
			magFilter = 9729;
			if(generateMipMaps) minFilter = 9987; else minFilter = 9729;
		}
		openfl.gl.GL.texParameteri(3553,10240,magFilter);
		openfl.gl.GL.texParameteri(3553,10241,minFilter);
		openfl.gl.GL.texParameteri(3553,10242,33071);
		openfl.gl.GL.texParameteri(3553,10243,33071);
		openfl.gl.GL.texImage2D(3553,0,6408,width,height,0,6408,5121,null);
		var depthBuffer = null;
		if(generateDepthBuffer) {
			depthBuffer = openfl.gl.GL.createRenderbuffer();
			openfl.gl.GL.bindRenderbuffer(36161,depthBuffer);
			openfl.gl.GL.renderbufferStorage(36161,33189,width,height);
		}
		var framebuffer = openfl.gl.GL.createFramebuffer();
		openfl.gl.GL.bindFramebuffer(36160,framebuffer);
		openfl.gl.GL.framebufferTexture2D(36160,36064,3553,texture.data,0);
		if(generateDepthBuffer) openfl.gl.GL.framebufferRenderbuffer(36160,36096,36161,depthBuffer);
		openfl.gl.GL.bindTexture(3553,null);
		openfl.gl.GL.bindRenderbuffer(36161,null);
		openfl.gl.GL.bindFramebuffer(36160,null);
		texture._framebuffer = framebuffer;
		if(generateDepthBuffer) texture._depthBuffer = depthBuffer;
		texture._width = width;
		texture._height = height;
		texture.isReady = true;
		texture.generateMipMaps = generateMipMaps;
		texture.references = 1;
		this._activeTexturesCache = [];
		this._loadedTexturesCache.push(texture);
		return texture;
	}
	,createCubeTexture: function(rootUrl,scene,extensions) {
		var _g = this;
		if(extensions == null) extensions = ["_px.jpg","_py.jpg","_pz.jpg","_nx.jpg","_ny.jpg","_nz.jpg"];
		var texture = new com.gamestudiohx.babylonhx.materials.textures.BabylonTexture(rootUrl,openfl.gl.GL.createTexture());
		texture.isCube = true;
		texture.url = rootUrl;
		texture.references = 1;
		var faces = [34069,34071,34073,34070,34072,34074];
		var _setTex = function(imagePath,index) {
			var img = openfl.Assets.getBitmapData(imagePath);
			var potWidth = _g.getExponantOfTwo(img.width,_g._caps.maxTextureSize);
			var potHeight = _g.getExponantOfTwo(img.height,_g._caps.maxTextureSize);
			var isPot = img.width == potWidth && img.height == potHeight;
			_g._workingCanvas = img;
			if(!isPot) _g._workingCanvas = _g.getScaled(img,potWidth / 2 | 0,potHeight / 2 | 0);
			var pixelData = _g._workingCanvas.getPixels(_g._workingCanvas.rect).byteView;
			openfl.gl.GL.texImage2D(faces[index],0,6408,_g._workingCanvas.width,_g._workingCanvas.height,0,6408,5121,pixelData);
		};
		openfl.gl.GL.bindTexture(34067,texture.data);
		openfl.gl.GL.texParameteri(34067,10242,33071);
		openfl.gl.GL.texParameteri(34067,10243,33071);
		var _g1 = 0;
		var _g2 = extensions.length;
		while(_g1 < _g2) {
			var i = _g1++;
			if(openfl.Assets.exists(rootUrl + extensions[i])) _setTex(rootUrl + extensions[i],i); else haxe.Log.trace("Image '" + rootUrl + extensions[i] + "' doesn't exist !",{ fileName : "Engine.hx", lineNumber : 1141, className : "com.gamestudiohx.babylonhx.Engine", methodName : "createCubeTexture"});
		}
		openfl.gl.GL.texParameteri(34067,10240,9729);
		openfl.gl.GL.texParameteri(34067,10241,9987);
		openfl.gl.GL.generateMipmap(34067);
		openfl.gl.GL.bindTexture(34067,null);
		this._activeTexturesCache = [];
		texture.isReady = true;
		this._loadedTexturesCache.push(texture);
		return texture;
	}
	,_releaseTexture: function(texture) {
		if(texture._framebuffer != null) openfl.gl.GL.deleteFramebuffer(texture._framebuffer);
		if(texture._depthBuffer != null) openfl.gl.GL.deleteRenderbuffer(texture._depthBuffer);
		openfl.gl.GL.deleteTexture(texture.data);
		var _g1 = 0;
		var _g = this._caps.maxTexturesImageUnits;
		while(_g1 < _g) {
			var channel = _g1++;
			openfl.gl.GL.activeTexture(this.getGLTexture(channel));
			openfl.gl.GL.bindTexture(3553,null);
			openfl.gl.GL.bindTexture(34067,null);
			this._activeTexturesCache[channel] = null;
		}
		var index = Lambda.indexOf(this._loadedTexturesCache,texture);
		if(index != -1) this._loadedTexturesCache.splice(index,1);
	}
	,bindSamplers: function(effect) {
		openfl.gl.GL.useProgram(effect.getProgram());
		var samplers = effect.getSamplers();
		var _g1 = 0;
		var _g = samplers.length;
		while(_g1 < _g) {
			var index = _g1++;
			var uniform = effect.getUniform(samplers[index]);
			openfl.gl.GL.uniform1i(uniform,index);
		}
		this._currentEffect = null;
	}
	,_bindTexture: function(channel,texture) {
		openfl.gl.GL.activeTexture(this.getGLTexture(channel));
		openfl.gl.GL.bindTexture(3553,texture.data);
		this._activeTexturesCache[channel] = null;
	}
	,setTextureFromPostProcess: function(channel,postProcess) {
		this._bindTexture(channel,postProcess._textures.data[postProcess._currentRenderTextureInd]);
	}
	,getGLTexture: function(channel) {
		return 33984 + channel;
	}
	,setTexture: function(channel,texture) {
		if(channel < 0) return;
		if(texture == null || !texture.isReady()) {
			if(this._activeTexturesCache[channel] != null) {
				openfl.gl.GL.activeTexture(this.getGLTexture(channel));
				openfl.gl.GL.bindTexture(3553,null);
				openfl.gl.GL.bindTexture(34067,null);
				this._activeTexturesCache[channel] = null;
			}
			return;
		}
		if(this._activeTexturesCache[channel] == texture) return;
		this._activeTexturesCache[channel] = texture;
		var internalTexture = texture.getInternalTexture();
		openfl.gl.GL.activeTexture(this.getGLTexture(channel));
		if(internalTexture.isCube) {
			openfl.gl.GL.bindTexture(34067,internalTexture.data);
			openfl.gl.GL.texParameteri(34067,10242,33071);
			openfl.gl.GL.texParameteri(34067,10243,33071);
			this._setAnisotropicLevel(34067,texture);
		} else {
			openfl.gl.GL.bindTexture(3553,internalTexture.data);
			if(internalTexture._cachedWrapU != texture.wrapU) {
				internalTexture._cachedWrapU = texture.wrapU;
				var _g = texture.wrapU;
				switch(_g) {
				case com.gamestudiohx.babylonhx.materials.textures.Texture.WRAP_ADDRESSMODE:
					openfl.gl.GL.texParameteri(3553,10242,10497);
					break;
				case com.gamestudiohx.babylonhx.materials.textures.Texture.CLAMP_ADDRESSMODE:
					openfl.gl.GL.texParameteri(3553,10242,33071);
					break;
				case com.gamestudiohx.babylonhx.materials.textures.Texture.MIRROR_ADDRESSMODE:
					openfl.gl.GL.texParameteri(3553,10242,33648);
					break;
				}
			}
			if(internalTexture._cachedWrapV != texture.wrapV) {
				internalTexture._cachedWrapV = texture.wrapV;
				var _g1 = texture.wrapV;
				switch(_g1) {
				case com.gamestudiohx.babylonhx.materials.textures.Texture.WRAP_ADDRESSMODE:
					openfl.gl.GL.texParameteri(3553,10243,10497);
					break;
				case com.gamestudiohx.babylonhx.materials.textures.Texture.CLAMP_ADDRESSMODE:
					openfl.gl.GL.texParameteri(3553,10243,33071);
					break;
				case com.gamestudiohx.babylonhx.materials.textures.Texture.MIRROR_ADDRESSMODE:
					openfl.gl.GL.texParameteri(3553,10243,33648);
					break;
				}
			}
			this._setAnisotropicLevel(3553,texture);
		}
	}
	,_setAnisotropicLevel: function(key,texture) {
		var anisotropicFilterExtension = this._caps.textureAnisotropicFilterExtension;
		if(anisotropicFilterExtension != null && texture._cachedAnisotropicFilteringLevel != texture.anisotropicFilteringLevel) {
			openfl.gl.GL.texParameterf(key,anisotropicFilterExtension.TEXTURE_MAX_ANISOTROPY_EXT,Math.min(texture.anisotropicFilteringLevel,this._caps.maxAnisotropy));
			texture._cachedAnisotropicFilteringLevel = texture.anisotropicFilteringLevel;
		}
	}
	,dispose: function() {
		while(this.scenes.length > 0) {
			this.scenes[0].dispose();
			this.scenes.shift();
		}
		var $it0 = this._compiledEffects.keys();
		while( $it0.hasNext() ) {
			var name = $it0.next();
			openfl.gl.GL.deleteProgram(this._compiledEffects.get(name)._program);
		}
	}
	,__class__: com.gamestudiohx.babylonhx.Engine
};
com.gamestudiohx.babylonhx.Node = function(scene) {
	this._scene = scene;
	this.parent = null;
	this._childrenFlag = -1;
	this._currentRenderId = -1;
	this._isReady = true;
	this._isEnabled = true;
};
$hxClasses["com.gamestudiohx.babylonhx.Node"] = com.gamestudiohx.babylonhx.Node;
com.gamestudiohx.babylonhx.Node.__name__ = ["com","gamestudiohx","babylonhx","Node"];
com.gamestudiohx.babylonhx.Node.prototype = {
	_initCache: function() {
		this._cache = { parent : null};
	}
	,updateCache: function(force) {
		if(force == null) force = false;
		if(!force && this.isSynchronized()) return;
		this._cache.parent = this.parent;
		this._updateCache();
	}
	,_updateCache: function(ignoreParentClass) {
		if(ignoreParentClass == null) ignoreParentClass = false;
	}
	,_isSynchronized: function() {
		return true;
	}
	,_syncChildFlag: function() {
		if(this.parent != null) this._childrenFlag = this.parent._childrenFlag; else this._childrenFlag = this._scene.getRenderId();
	}
	,isSynchronizedWithParent: function() {
		if(this.parent != null) return this.parent._currentRenderId <= this._currentRenderId; else return true;
	}
	,isSynchronized: function(updateCache) {
		if(updateCache == null) updateCache = false;
		var check = this.hasNewParent();
		check = check || !this.isSynchronizedWithParent();
		check = check || !this._isSynchronized();
		if(updateCache) this.updateCache(true);
		return !check;
	}
	,hasNewParent: function(update) {
		if(update == null) update = false;
		if(this._cache.parent == this.parent) return false;
		if(update) this._cache.parent = this.parent;
		return true;
	}
	,_needToSynchonizeChildren: function(childFlag) {
		return this._childrenFlag != childFlag;
	}
	,isReady: function() {
		return this._isReady;
	}
	,isEnabled: function() {
		if(!this.isReady() || !this._isEnabled) return false;
		if(this.parent != null) return this.parent.isEnabled();
		return true;
	}
	,setEnabled: function(value) {
		this._isEnabled = value;
	}
	,isDescendantOf: function(ancestor) {
		if(this.parent != null) {
			if(this.parent == ancestor) return true;
			return this.parent.isDescendantOf(ancestor);
		}
		return false;
	}
	,_getDescendants: function(list,results) {
		var _g1 = 0;
		var _g = list.length;
		while(_g1 < _g) {
			var index = _g1++;
			var item = list[index];
			if(item.isDescendantOf(this)) results.push(item);
		}
	}
	,getWorldMatrix: function() {
		return null;
	}
	,getDescendants: function() {
		var results = [];
		this._getDescendants(this._scene.meshes,results);
		this._getDescendants(this._scene.lights,results);
		this._getDescendants(this._scene.cameras,results);
		return results;
	}
	,__class__: com.gamestudiohx.babylonhx.Node
};
com.gamestudiohx.babylonhx.Scene = function(engine) {
	this._animationStartDate = -1;
	this._geometries = new Array();
	this._engine = engine;
	this.autoClear = true;
	this.clearColor = new com.gamestudiohx.babylonhx.tools.math.Color4(0.2,0.2,0.3);
	this.ambientColor = new com.gamestudiohx.babylonhx.tools.math.Color3(0,0,0);
	engine.scenes.push(this);
	this._totalVertices = 0;
	this._activeVertices = 0;
	this._activeParticles = 0;
	this._lastFrameDuration = 0;
	this._evaluateActiveMeshesDuration = 0;
	this._renderTargetsDuration = 0;
	this._renderDuration = 0;
	this._renderId = 0;
	this._executeWhenReadyTimeoutId = -1;
	this._toBeDisposed = new com.gamestudiohx.babylonhx.tools.SmartArray();
	this._onReadyCallbacks = [];
	this._pendingData = [];
	this._onBeforeRenderCallbacks = [];
	this.fogMode = com.gamestudiohx.babylonhx.Scene.FOGMODE_NONE;
	this.fogColor = new com.gamestudiohx.babylonhx.tools.math.Color3(0.2,0.2,0.3);
	this.fogDensity = 0.1;
	this.fogStart = 0;
	this.fogEnd = 1000.0;
	this.lightsEnabled = true;
	this.lights = new Array();
	this.cameras = new Array();
	this.activeCamera = null;
	this.meshes = new Array();
	this._activeMeshes = new com.gamestudiohx.babylonhx.tools.SmartArray();
	this._processedMaterials = new com.gamestudiohx.babylonhx.tools.SmartArray();
	this._renderTargets = new com.gamestudiohx.babylonhx.tools.SmartArray();
	this._activeParticleSystems = new com.gamestudiohx.babylonhx.tools.SmartArray();
	this._activeSkeletons = new com.gamestudiohx.babylonhx.tools.SmartArray();
	this._renderingManager = new com.gamestudiohx.babylonhx.rendering.RenderingManager(this);
	this.materials = new Array();
	this.multiMaterials = new Array();
	this.defaultMaterial = new com.gamestudiohx.babylonhx.materials.StandardMaterial("default material",this);
	this.texturesEnabled = true;
	this.textures = new Array();
	this.particlesEnabled = true;
	this.particleSystems = [];
	this.spriteManagers = [];
	this.layers = [];
	this.skeletons = [];
	this.lensFlareSystems = [];
	this.collisionsEnabled = true;
	this.gravity = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,-9.0,0);
	this._activeAnimatables = [];
	this._transformMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._scaledPosition = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._scaledVelocity = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this.postProcessesEnabled = true;
	this.postProcessManager = new com.gamestudiohx.babylonhx.postprocess.PostProcessManager(this);
	this._boundingBoxRenderer = new com.gamestudiohx.babylonhx.rendering.BoundingBoxRenderer(this);
	this.renderTargetsEnabled = true;
	this.customRenderTargets = [];
	this.activeCameras = [];
};
$hxClasses["com.gamestudiohx.babylonhx.Scene"] = com.gamestudiohx.babylonhx.Scene;
com.gamestudiohx.babylonhx.Scene.__name__ = ["com","gamestudiohx","babylonhx","Scene"];
com.gamestudiohx.babylonhx.Scene.prototype = {
	getEngine: function() {
		return this._engine;
	}
	,getTotalVertices: function() {
		return this._totalVertices;
	}
	,getBoundingBoxRenderer: function() {
		return this._boundingBoxRenderer;
	}
	,getActiveVertices: function() {
		return this._activeVertices;
	}
	,getActiveParticles: function() {
		return this._activeParticles;
	}
	,getLastFrameDuration: function() {
		return this._lastFrameDuration;
	}
	,getEvaluateActiveMeshesDuration: function() {
		return this._evaluateActiveMeshesDuration;
	}
	,getRenderTargetsDuration: function() {
		return this._renderTargetsDuration;
	}
	,getRenderDuration: function() {
		return this._renderDuration;
	}
	,getParticlesDuration: function() {
		return this._particlesDuration;
	}
	,getSpritesDuration: function() {
		return this._spritesDuration;
	}
	,getAnimationRatio: function() {
		return this._animationRatio;
	}
	,getRenderId: function() {
		return this._renderId;
	}
	,isReady: function() {
		if(this._pendingData.length > 0) {
			if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("isReady pending data - " + this._pendingData.length,{ fileName : "Scene.hx", lineNumber : 311, className : "com.gamestudiohx.babylonhx.Scene", methodName : "isReady"});
			return false;
		}
		var _g1 = 0;
		var _g = this.meshes.length;
		while(_g1 < _g) {
			var index = _g1++;
			var mesh = this.meshes[index];
			var mat = mesh.material;
			if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("isReady - " + index,{ fileName : "Scene.hx", lineNumber : 324, className : "com.gamestudiohx.babylonhx.Scene", methodName : "isReady"});
			if(mat != null) {
				if(!mat.isReady(mesh)) return false;
			}
		}
		return true;
	}
	,registerBeforeRender: function(func) {
		this._onBeforeRenderCallbacks.push(func);
	}
	,unregisterBeforeRender: function(func) {
		var index = Lambda.indexOf(this._onBeforeRenderCallbacks,func);
		if(index > -1) this._onBeforeRenderCallbacks.splice(index,1);
	}
	,_addPendingData: function(data) {
		if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("_addPendingData - " + Std.string(data),{ fileName : "Scene.hx", lineNumber : 350, className : "com.gamestudiohx.babylonhx.Scene", methodName : "_addPendingData"});
		this._pendingData.push(data);
	}
	,_removePendingData: function(data) {
		var index = Lambda.indexOf(this._pendingData,data);
		if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("_removePendingData - " + index,{ fileName : "Scene.hx", lineNumber : 359, className : "com.gamestudiohx.babylonhx.Scene", methodName : "_removePendingData"});
		if(index != -1) {
			if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("_removePendingData - " + Std.string(this._pendingData),{ fileName : "Scene.hx", lineNumber : 364, className : "com.gamestudiohx.babylonhx.Scene", methodName : "_removePendingData"});
			this._pendingData.splice(index,1);
			if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("_removePendingData - " + Std.string(this._pendingData),{ fileName : "Scene.hx", lineNumber : 369, className : "com.gamestudiohx.babylonhx.Scene", methodName : "_removePendingData"});
		}
	}
	,getWaitingItemsCount: function() {
		return this._pendingData.length;
	}
	,executeWhenReady: function(func) {
		this._onReadyCallbacks.push(func);
		if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) {
			haxe.Log.trace("executeWhenReady -" + Std.string(func),{ fileName : "Scene.hx", lineNumber : 381, className : "com.gamestudiohx.babylonhx.Scene", methodName : "executeWhenReady"});
			haxe.Log.trace("this._executeWhenReadyTimeoutId -" + this._executeWhenReadyTimeoutId,{ fileName : "Scene.hx", lineNumber : 382, className : "com.gamestudiohx.babylonhx.Scene", methodName : "executeWhenReady"});
		}
		if(this._executeWhenReadyTimeoutId != -1) return;
		this._checkIsReady();
	}
	,_checkIsReady: function() {
		if(this.isReady()) {
			var _g = 0;
			var _g1 = this._onReadyCallbacks;
			while(_g < _g1.length) {
				var func = _g1[_g];
				++_g;
				func();
			}
			this._onReadyCallbacks = [];
			this._executeWhenReadyTimeoutId = -1;
			return;
		}
	}
	,beginAnimation: function(target,from,to,loop,speedRatio,onAnimationEnd) {
		if(speedRatio == null) speedRatio = 1.0;
		if(target.animations != null) {
			this.stopAnimation(target);
			var animatable = new com.gamestudiohx.babylonhx.animations._Animatable(target,from,to,loop,speedRatio,onAnimationEnd);
			this._activeAnimatables.push(animatable);
		}
		if(Reflect.getProperty(target,"getAnimatables") != null) {
			var animatables = target.getAnimatables();
			var _g1 = 0;
			var _g = animatables.length;
			while(_g1 < _g) {
				var index = _g1++;
				if(animatables[index] != null) this.beginAnimation(animatables[index],from,to,loop,speedRatio,onAnimationEnd);
			}
		}
	}
	,stopAnimation: function(target) {
		var _g1 = 0;
		var _g = this._activeAnimatables.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(this._activeAnimatables[index].target == target) {
				this._activeAnimatables.splice(index,1);
				return;
			}
		}
	}
	,_animate: function() {
		if(this._animationStartDate == -1) this._animationStartDate = openfl.Lib.getTimer();
		var delay = openfl.Lib.getTimer() - this._animationStartDate;
		var index = 0;
		while(index < this._activeAnimatables.length) {
			if(!this._activeAnimatables[index]._animate(delay)) {
				this._activeAnimatables.splice(index,1);
				index--;
			}
			index++;
		}
	}
	,getViewMatrix: function() {
		return this._viewMatrix;
	}
	,getProjectionMatrix: function() {
		return this._projectionMatrix;
	}
	,getTransformMatrix: function() {
		return this._transformMatrix;
	}
	,updateTransformMatrix: function(force) {
		this.setTransformMatrix(this.activeCamera.getViewMatrix(),this.activeCamera.getProjectionMatrix(force));
	}
	,setTransformMatrix: function(view,projection) {
		this._viewMatrix = view;
		this._projectionMatrix = projection;
		this._viewMatrix.multiplyToArray(this._projectionMatrix,this._transformMatrix.m,0);
	}
	,activeCameraByID: function(id) {
		var _g1 = 0;
		var _g = this.cameras.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(this.cameras[index].id == id) {
				this.activeCamera = this.cameras[index];
				return;
			}
		}
	}
	,getMaterialByID: function(id) {
		var _g1 = 0;
		var _g = this.materials.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(this.materials[index].id == id) return this.materials[index];
		}
		return null;
	}
	,getMaterialByName: function(name) {
		var _g1 = 0;
		var _g = this.materials.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(this.materials[index].name == name) return this.materials[index];
		}
		return null;
	}
	,getLightByID: function(id) {
		var _g1 = 0;
		var _g = this.lights.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(this.lights[index].id == id) return this.lights[index];
		}
		return null;
	}
	,getMeshByID: function(id) {
		var _g1 = 0;
		var _g = this.meshes.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(this.meshes[index].id == id) return this.meshes[index];
		}
		return null;
	}
	,getLastMeshByID: function(id) {
		var index = this.meshes.length - 1;
		while(index >= 0) {
			if(this.meshes[index].id == id) return this.meshes[index];
			index--;
		}
		return null;
	}
	,getLastEntryByID: function(id) {
		var index = this.meshes.length - 1;
		while(index >= 0) {
			if(this.meshes[index].id == id) return this.meshes[index];
			index--;
		}
		index = this.cameras.length - 1;
		while(index >= 0) {
			if(this.cameras[index].id == id) return this.cameras[index];
			index--;
		}
		index = this.lights.length - 1;
		while(index >= 0) {
			if(this.lights[index].id == id) return this.lights[index];
			index--;
		}
		return null;
	}
	,getMeshByName: function(name) {
		var _g1 = 0;
		var _g = this.meshes.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(this.meshes[index].name == name) return this.meshes[index];
		}
		return null;
	}
	,isActiveMesh: function(mesh) {
		return this._activeMeshes.indexOf(mesh) != -1;
	}
	,getLastSkeletonByID: function(id) {
		var index = this.skeletons.length - 1;
		while(index >= 0) {
			if(this.skeletons[index].id == id) return this.skeletons[index];
			index--;
		}
		return null;
	}
	,getSkeletonByID: function(id) {
		var _g1 = 0;
		var _g = this.skeletons.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(this.skeletons[index].id == id) return this.skeletons[index];
		}
		return null;
	}
	,getSkeletonByName: function(name) {
		var _g1 = 0;
		var _g = this.skeletons.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(this.skeletons[index].name == name) return this.skeletons[index];
		}
		return null;
	}
	,_evaluateSubMesh: function(subMesh,mesh) {
		if(mesh.subMeshes.length == 1 || subMesh._boundingInfo.isInFrustrum(this._frustumPlanes)) {
			var material = subMesh.getMaterial();
			if(mesh.showSubMeshesBoundingBox) this._boundingBoxRenderer.renderList.push(subMesh.getBoundingInfo().boundingBox);
			if(material != null) {
				if(Reflect.field(material,"getRenderTargetTextures") != null) {
					if(this._processedMaterials.indexOf(material) == -1) {
						this._processedMaterials.push(material);
						this._renderTargets.concat(material.getRenderTargetTextures());
					}
				}
				this._activeVertices += subMesh.verticesCount;
				this._renderingManager.dispatch(subMesh);
			}
		}
	}
	,_evaluateActiveMeshes: function() {
		this._activeMeshes.reset();
		this._renderingManager.reset();
		this._processedMaterials.reset();
		this._activeParticleSystems.reset();
		this._activeSkeletons.reset();
		this._boundingBoxRenderer.reset();
		if(this._frustumPlanes == null) this._frustumPlanes = com.gamestudiohx.babylonhx.tools.math.Frustum.GetPlanes(this._transformMatrix); else this._frustumPlanes = com.gamestudiohx.babylonhx.tools.math.Frustum.GetPlanesToRef(this._transformMatrix,this._frustumPlanes);
		if(this._selectionOctree != null) {
			var selection = this._selectionOctree.select(this._frustumPlanes);
			var _g1 = 0;
			var _g = selection.length;
			while(_g1 < _g) {
				var blockIndex = _g1++;
				var block = selection[blockIndex];
				var _g3 = 0;
				var _g2 = block.meshes.length;
				while(_g3 < _g2) {
					var meshIndex = _g3++;
					var mesh = block.meshes[meshIndex];
					this._totalVertices += mesh.getTotalVertices();
					if(!mesh.isReady()) continue;
					mesh.computeWorldMatrix(null);
					mesh._preActivate();
					if(mesh._renderId == this._renderId || mesh._renderId == 0 && mesh.isEnabled() && mesh.isVisible && mesh.visibility > 0 && mesh.isInFrustum(this._frustumPlanes)) {
						if(mesh._renderId == 0) this._activeMeshes.push(mesh);
						mesh._renderId = this._renderId;
						if(mesh.skeleton != null) {
							if(this._activeSkeletons.indexOf(mesh.skeleton) != -1) this._activeSkeletons.pushNoDuplicate(mesh.skeleton);
						}
						var subMeshes = block.subMeshes[meshIndex];
						var _g5 = 0;
						var _g4 = subMeshes.length;
						while(_g5 < _g4) {
							var subIndex = _g5++;
							var subMesh = subMeshes[subIndex];
							if(subMesh._renderId == this._renderId) continue;
							subMesh._renderId = this._renderId;
							this._evaluateSubMesh(subMesh,mesh);
						}
					} else mesh._renderId = -this._renderId;
				}
			}
		} else {
			var _g11 = 0;
			var _g6 = this.meshes.length;
			while(_g11 < _g6) {
				var meshIndex1 = _g11++;
				var mesh1 = this.meshes[meshIndex1];
				this._totalVertices += mesh1.getTotalVertices();
				if(!mesh1.isReady()) continue;
				mesh1.computeWorldMatrix(null);
				if(mesh1.isEnabled() && mesh1.isVisible && mesh1.visibility > 0 && mesh1.isInFrustum(this._frustumPlanes)) {
					this._activeMeshes.push(mesh1);
					if(mesh1.skeleton != null) this._activeSkeletons.pushNoDuplicate(mesh1.skeleton);
					var _g31 = 0;
					var _g21 = mesh1.subMeshes.length;
					while(_g31 < _g21) {
						var subIndex1 = _g31++;
						var subMesh1 = mesh1.subMeshes[subIndex1];
						this._evaluateSubMesh(subMesh1,mesh1);
					}
				}
			}
		}
		var beforeParticlesDate = openfl.Lib.getTimer();
		if(this.particlesEnabled) {
			var _g12 = 0;
			var _g7 = this.particleSystems.length;
			while(_g12 < _g7) {
				var particleIndex = _g12++;
				var particleSystem = this.particleSystems[particleIndex];
				if(!particleSystem.emitter.position || particleSystem.emitter && particleSystem.emitter.isEnabled()) {
					this._activeParticleSystems.push(particleSystem);
					particleSystem.animate();
				}
			}
		}
		this._particlesDuration += openfl.Lib.getTimer() - beforeParticlesDate;
	}
	,_renderForCamera: function(camera,mustClearDepth) {
		if(mustClearDepth == null) mustClearDepth = false;
		var engine = this._engine;
		this.activeCamera = camera;
		if(this.activeCamera == null) throw "Active camera not set";
		engine.setViewport(this.activeCamera.viewport);
		this._renderId++;
		this.setTransformMatrix(this.activeCamera.getViewMatrix(),this.activeCamera.getProjectionMatrix(null));
		var beforeEvaluateActiveMeshesDate = openfl.Lib.getTimer();
		this._evaluateActiveMeshes();
		this._evaluateActiveMeshesDuration += openfl.Lib.getTimer() - beforeEvaluateActiveMeshesDate;
		var _g1 = 0;
		var _g = this._activeSkeletons.length;
		while(_g1 < _g) {
			var skeletonIndex = _g1++;
			var skeleton = this._activeSkeletons.data[skeletonIndex];
			skeleton.prepare();
		}
		var _g11 = 0;
		var _g2 = this.customRenderTargets.length;
		while(_g11 < _g2) {
			var customIndex = _g11++;
			this._renderTargets.push(this.customRenderTargets[customIndex]);
		}
		var beforeRenderTargetDate = openfl.Lib.getTimer();
		if(this.renderTargetsEnabled) {
			var _g12 = 0;
			var _g3 = this._renderTargets.length;
			while(_g12 < _g3) {
				var renderIndex = _g12++;
				var renderTarget = this._renderTargets.data[renderIndex];
				this._renderId++;
				renderTarget.render();
			}
		}
		if(this._renderTargets.length > 0) engine.restoreDefaultFramebuffer();
		this._renderTargetsDuration = openfl.Lib.getTimer() - beforeRenderTargetDate;
		this.postProcessManager._prepareFrame();
		var beforeRenderDate = openfl.Lib.getTimer();
		if(this.layers.length > 0) {
			engine.setDepthBuffer(false);
			var layer = null;
			var _g13 = 0;
			var _g4 = this.layers.length;
			while(_g13 < _g4) {
				var layerIndex = _g13++;
				layer = this.layers[layerIndex];
				if(layer.isBackground) layer.render();
			}
			engine.setDepthBuffer(true);
		}
		this._renderingManager.render(null,null,true,true);
		this._boundingBoxRenderer.render();
		var _g14 = 0;
		var _g5 = this.lensFlareSystems.length;
		while(_g14 < _g5) {
			var lensFlareSystemIndex = _g14++;
			this.lensFlareSystems[lensFlareSystemIndex].render();
		}
		if(this.layers.length > 0) {
			engine.setDepthBuffer(false);
			var _g15 = 0;
			var _g6 = this.layers.length;
			while(_g15 < _g6) {
				var layerIndex1 = _g15++;
				var layer1 = this.layers[layerIndex1];
				if(!layer1.isBackground) layer1.render();
			}
			engine.setDepthBuffer(true);
		}
		this._renderDuration += openfl.Lib.getTimer() - beforeRenderDate;
		this.postProcessManager._finalizeFrame();
		this.activeCamera._updateFromScene();
		this._renderTargets.reset();
	}
	,render: function(rect) {
		var startDate = openfl.Lib.getTimer();
		this._particlesDuration = 0;
		this._spritesDuration = 0;
		this._activeParticles = 0;
		this._renderDuration = 0;
		this._evaluateActiveMeshesDuration = 0;
		this._totalVertices = 0;
		this._activeVertices = 0;
		if(this.beforeRender != null) this.beforeRender();
		var _g1 = 0;
		var _g = this._onBeforeRenderCallbacks.length;
		while(_g1 < _g) {
			var callbackIndex = _g1++;
			this._onBeforeRenderCallbacks[callbackIndex]();
		}
		var deltaTime = com.gamestudiohx.babylonhx.tools.Tools.GetDeltaTime();
		this._animationRatio = deltaTime * 0.06;
		this._animate();
		if(this._physicsEngine != null) this._physicsEngine._runOneStep(deltaTime / 1000.0);
		this._engine.clear(this.clearColor,this.autoClear || this.forceWireframe,true);
		var _g11 = 0;
		var _g2 = this.lights.length;
		while(_g11 < _g2) {
			var lightIndex = _g11++;
			var light = this.lights[lightIndex];
			var shadowGenerator = light.getShadowGenerator();
			if(light.isEnabled() && shadowGenerator != null) this._renderTargets.push(shadowGenerator.getShadowMap());
		}
		if(this.activeCameras.length > 0) {
			var currentRenderId = this._renderId;
			var _g12 = 0;
			var _g3 = this.activeCameras.length;
			while(_g12 < _g3) {
				var cameraIndex = _g12++;
				this._renderId = currentRenderId;
				this._renderForCamera(this.activeCameras[cameraIndex],cameraIndex != 0);
			}
		} else this._renderForCamera(this.activeCamera,null);
		if(this.afterRender != null) this.afterRender();
		var _g13 = 0;
		var _g4 = this._toBeDisposed.length;
		while(_g13 < _g4) {
			var index = _g13++;
			this._toBeDisposed.data[index].dispose();
		}
		this._toBeDisposed.reset();
		openfl.gl.GL.disable(2884);
		openfl.gl.GL.bindBuffer(34962,null);
		this._lastFrameDuration = openfl.Lib.getTimer() - startDate;
	}
	,dispose: function() {
		this.beforeRender = null;
		this.afterRender = null;
		this.skeletons = [];
		this._boundingBoxRenderer.dispose();
		while(this.lights.length > 0) {
			this.lights[0].dispose();
			HxOverrides.remove(this.lights,this.lights[0]);
		}
		while(this.meshes.length > 0) {
			this.meshes[0].dispose(true);
			HxOverrides.remove(this.meshes,this.meshes[0]);
		}
		while(this.cameras.length > 0) {
			this.cameras[0].dispose();
			HxOverrides.remove(this.cameras,this.cameras[0]);
		}
		while(this.materials.length > 0) {
			this.materials[0].dispose();
			HxOverrides.remove(this.materials,this.materials[0]);
		}
		while(this.particleSystems.length > 0) {
			this.particleSystems[0].dispose();
			HxOverrides.remove(this.particleSystems,this.particleSystems[0]);
		}
		while(this.spriteManagers.length > 0) {
			this.spriteManagers[0].dispose();
			HxOverrides.remove(this.spriteManagers,this.spriteManagers[0]);
		}
		while(this.layers.length > 0) {
			this.layers[0].dispose();
			HxOverrides.remove(this.layers,this.layers[0]);
		}
		while(this.textures.length > 0) {
			this.textures[0].dispose();
			HxOverrides.remove(this.textures,this.textures[0]);
		}
		this.postProcessManager.dispose();
		HxOverrides.remove(this._engine.scenes,this);
		this._engine.wipeCaches();
	}
	,getGeometryByID: function(id) {
		var _g1 = 0;
		var _g = this._geometries.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(this._geometries[index].id == id) return this._geometries[index];
		}
		return null;
	}
	,pushGeometry: function(geometry,force) {
		if(force == null) force = false;
		if(!force && this.getGeometryByID(geometry.id) != null) return false;
		this._geometries.push(geometry);
		return true;
	}
	,_getNewPosition: function(position,velocity,collider,maximumRetry,finalPosition) {
		position.divideToRef(collider.radius,this._scaledPosition);
		velocity.divideToRef(collider.radius,this._scaledVelocity);
		collider.retry = 0;
		collider.initialVelocity = this._scaledVelocity;
		collider.initialPosition = this._scaledPosition;
		this._collideWithWorld(this._scaledPosition,this._scaledVelocity,collider,maximumRetry,finalPosition);
		finalPosition.multiplyInPlace(collider.radius);
	}
	,_collideWithWorld: function(position,velocity,collider,maximumRetry,finalPosition) {
		var closeDistance = com.gamestudiohx.babylonhx.Engine.collisionsEpsilon * 10.0;
		if(collider.retry >= maximumRetry) {
			finalPosition.x = position.x;
			finalPosition.y = position.y;
			finalPosition.z = position.z;
		} else {
			collider._initialize(position,velocity,closeDistance);
			var _g1 = 0;
			var _g = this.meshes.length;
			while(_g1 < _g) {
				var index = _g1++;
				var mesh = this.meshes[index];
				if(mesh.isEnabled() && mesh.checkCollisions) {
					if(mesh._boundingInfo._checkCollision(collider)) {
						com.gamestudiohx.babylonhx.tools.math.Matrix.ScalingToRef(1.0 / collider.radius.x,1.0 / collider.radius.y,1.0 / collider.radius.z,mesh._collisionsScalingMatrix);
						mesh._worldMatrix.multiplyToArray(mesh._collisionsScalingMatrix,mesh._collisionsTransformMatrix.m,0);
						mesh._processCollisionsForSubModels(collider,mesh._collisionsTransformMatrix);
					}
				}
			}
			if(!collider.collisionFound) {
				finalPosition.x = position.x + velocity.x;
				finalPosition.y = position.y + velocity.y;
				finalPosition.z = position.z + velocity.z;
				finalPosition;
			} else {
				if(velocity.x != 0 || velocity.y != 0 || velocity.z != 0) {
					position.addToRef(velocity,collider._destinationPoint);
					velocity.scaleInPlace(collider.nearestDistance / Math.sqrt(velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z));
					collider.basePoint.addToRef(velocity,position);
					position.subtractToRef(collider.intersectionPoint,collider._slidePlaneNormal);
					collider._slidePlaneNormal.normalize();
					collider._slidePlaneNormal.scaleToRef(collider.epsilon,collider._displacementVector);
					position.addInPlace(collider._displacementVector);
					collider.intersectionPoint.addInPlace(collider._displacementVector);
					collider._slidePlaneNormal.scaleInPlace(com.gamestudiohx.babylonhx.tools.math.Plane.SignedDistanceToPlaneFromPositionAndNormal(collider.intersectionPoint,collider._slidePlaneNormal,collider._destinationPoint));
					collider._destinationPoint.subtractInPlace(collider._slidePlaneNormal);
					collider._destinationPoint.subtractToRef(collider.intersectionPoint,velocity);
				}
				if(Math.sqrt(velocity.x * velocity.x + velocity.y * velocity.y + velocity.z * velocity.z) <= closeDistance) {
					finalPosition.x = position.x;
					finalPosition.y = position.y;
					finalPosition.z = position.z;
				} else {
					collider.retry++;
					this._collideWithWorld(position,velocity,collider,maximumRetry,finalPosition);
				}
			}
		}
	}
	,createOrUpdateSelectionOctree: function() {
		if(this._selectionOctree == null) this._selectionOctree = new com.gamestudiohx.babylonhx.culling.octrees.Octree();
		var checkExtends = function(v,min,max) {
			if(v.x < min.x) min.x = v.x;
			if(v.y < min.y) min.y = v.y;
			if(v.z < min.z) min.z = v.z;
			if(v.x > max.x) max.x = v.x;
			if(v.y > max.y) max.y = v.y;
			if(v.z > max.z) max.z = v.z;
		};
		var min1 = new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY);
		var max1 = new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.NEGATIVE_INFINITY,Math.NEGATIVE_INFINITY,Math.NEGATIVE_INFINITY);
		var _g1 = 0;
		var _g = this.meshes.length;
		while(_g1 < _g) {
			var index = _g1++;
			var mesh = this.meshes[index];
			mesh.computeWorldMatrix(null);
			var minBox = mesh.getBoundingInfo().boundingBox.minimumWorld;
			var maxBox = mesh.getBoundingInfo().boundingBox.maximumWorld;
			checkExtends(minBox,min1,max1);
			checkExtends(maxBox,min1,max1);
		}
		this._selectionOctree.update(min1,max1,this.meshes);
	}
	,createPickingRay: function(x,y,world,camera) {
		var engine = this._engine;
		if(camera == null) {
			if(this.activeCamera == null) throw "Active camera not set";
			camera = this.activeCamera;
		}
		var viewport = this.activeCamera.viewport.toGlobal(engine);
		var viewport1 = camera.viewport.toGlobal(engine);
		return com.gamestudiohx.babylonhx.tools.math.Ray.CreateNew(x,y,viewport1.width,viewport1.height,world != null?world:com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0),(function($this) {
			var $r;
			{
				if(!camera._isSynchronizedViewMatrix()) {
					camera._syncChildFlag();
					camera._computedViewMatrix = camera._getViewMatrix();
				}
				camera._computedViewMatrix = camera._computedViewMatrix;
			}
			if(!(camera.parent == null || camera.parent.getWorldMatrix() == null || !camera.hasNewParent() && camera.parent.isSynchronized())) {
				if(camera._worldMatrix == null) camera._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
				camera._computedViewMatrix.invertToRef(camera._worldMatrix);
				camera._worldMatrix.multiplyToRef(camera.parent.getWorldMatrix(),camera._computedViewMatrix);
				camera._computedViewMatrix.invert();
			}
			$r = camera._computedViewMatrix;
			return $r;
		}(this)),camera.getProjectionMatrix(null));
	}
	,_internalPick: function(rayFunction,predicate,fastCheck) {
		var pickingInfo = null;
		var _g1 = 0;
		var _g = this.meshes.length;
		while(_g1 < _g) {
			var meshIndex = _g1++;
			var mesh = this.meshes[meshIndex];
			if(predicate != null) {
				if(!predicate(mesh)) continue;
			} else if(!mesh.isEnabled() || !mesh.isVisible || !mesh.isPickable) continue;
			var world;
			if(mesh._currentRenderId != mesh._scene.getRenderId()) mesh.computeWorldMatrix(null);
			world = mesh._worldMatrix;
			var ray = rayFunction(world);
			var result = mesh.intersects(ray,fastCheck);
			if(!result.hit) continue;
			if(!fastCheck && pickingInfo != null && result.distance >= pickingInfo.distance) continue;
			pickingInfo = result;
			if(fastCheck) break;
		}
		if(pickingInfo == null) return new com.gamestudiohx.babylonhx.collisions.PickingInfo(); else return pickingInfo;
	}
	,pick: function(x,y,predicate,fastCheck,camera) {
		var _g = this;
		return this._internalPick(function(world) {
			return _g.createPickingRay(x,y,world,camera);
		},predicate,fastCheck);
	}
	,pickWithRay: function(ray,predicate,fastCheck) {
		var _g = this;
		var param = function(world) {
			if(_g._pickWithRayInverseMatrix == null) _g._pickWithRayInverseMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
			world.invertToRef(_g._pickWithRayInverseMatrix);
			return com.gamestudiohx.babylonhx.tools.math.Ray.Transform(ray,_g._pickWithRayInverseMatrix);
		};
		return this._internalPick(param,predicate,fastCheck);
	}
	,__class__: com.gamestudiohx.babylonhx.Scene
};
com.gamestudiohx.babylonhx.animations = {};
com.gamestudiohx.babylonhx.animations.Animation = function(name,targetProperty,framePerSecond,dataType,loopMode) {
	if(loopMode == null) loopMode = -1;
	this.name = name;
	this.targetProperty = targetProperty;
	this.targetPropertyPath = targetProperty.split(".");
	this.framePerSecond = framePerSecond;
	this.dataType = dataType;
	if(loopMode == -1) this.loopMode = com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CYCLE; else this.loopMode = loopMode;
	this._keys = [];
	this._offsetsCache = [];
	this._highLimitsCache = [];
};
$hxClasses["com.gamestudiohx.babylonhx.animations.Animation"] = com.gamestudiohx.babylonhx.animations.Animation;
com.gamestudiohx.babylonhx.animations.Animation.__name__ = ["com","gamestudiohx","babylonhx","animations","Animation"];
com.gamestudiohx.babylonhx.animations.Animation.prototype = {
	floatInterpolateFunction: function(startValue,endValue,gradient) {
		return startValue + (endValue - startValue) * gradient;
	}
	,quaternionInterpolateFunction: function(startValue,endValue,gradient) {
		return com.gamestudiohx.babylonhx.tools.math.Quaternion.Slerp(startValue,endValue,gradient);
	}
	,vector3InterpolateFunction: function(startValue,endValue,gradient) {
		return com.gamestudiohx.babylonhx.tools.math.Vector3.Lerp(startValue,endValue,gradient);
	}
	,clone: function() {
		var clone = new com.gamestudiohx.babylonhx.animations.Animation(this.name,this.targetPropertyPath.join("."),this.framePerSecond,this.dataType,this.loopMode);
		clone.setKeys(this._keys);
		return clone;
	}
	,setKeys: function(values) {
		this._keys = values.slice(0);
		this._offsetsCache = [];
		this._highLimitsCache = [];
	}
	,_interpolate: function(currentFrame,repeatCount,loopMode,offsetValue,highLimitValue) {
		if(loopMode == com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CONSTANT && repeatCount > 0) if(Reflect.field(highLimitValue,"clone") != null) return highLimitValue.clone(); else return highLimitValue;
		this.currentFrame = currentFrame;
		var _g1 = 0;
		var _g = this._keys.length - 1;
		while(_g1 < _g) {
			var key = _g1++;
			if(this._keys[key + 1].frame >= currentFrame) {
				var startValue = this._keys[key].value;
				var endValue = this._keys[key + 1].value;
				var gradient = (currentFrame - this._keys[key].frame) / (this._keys[key + 1].frame - this._keys[key].frame);
				var _g2 = this.dataType;
				switch(_g2) {
				case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_FLOAT:
					switch(loopMode) {
					case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CYCLE:case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CONSTANT:
						return this.floatInterpolateFunction(startValue,endValue,gradient);
					case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_RELATIVE:
						return offsetValue * repeatCount + this.floatInterpolateFunction(startValue,endValue,gradient);
					}
					break;
				case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_QUATERNION:
					var quaternion = null;
					switch(loopMode) {
					case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CYCLE:case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CONSTANT:
						quaternion = com.gamestudiohx.babylonhx.tools.math.Quaternion.Slerp(startValue,endValue,gradient);
						break;
					case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_RELATIVE:
						quaternion = com.gamestudiohx.babylonhx.tools.math.Quaternion.Slerp(startValue,endValue,gradient).add(offsetValue.scale(repeatCount));
						break;
					}
					return quaternion;
				case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_VECTOR3:
					switch(loopMode) {
					case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CYCLE:case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CONSTANT:
						return com.gamestudiohx.babylonhx.tools.math.Vector3.Lerp(startValue,endValue,gradient);
					case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_RELATIVE:
						return com.gamestudiohx.babylonhx.tools.math.Vector3.Lerp(startValue,endValue,gradient).add(offsetValue.scale(repeatCount));
					}
					break;
				case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_MATRIX:
					switch(loopMode) {
					case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CYCLE:case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CONSTANT:case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_RELATIVE:
						return startValue;
					}
					break;
				default:
				}
			}
		}
		return this._keys[this._keys.length - 1].value;
	}
	,animate: function(target,delay,from,to,loop,speedRatio) {
		var returnValue = true;
		if(this.targetPropertyPath == null || this.targetPropertyPath.length < 1) returnValue = false; else {
			if(this._keys.length == 0 || this._keys[0].frame != 0) {
				var newKey = { frame : 0, value : this._keys[0].value};
				this._keys.push(newKey);
			}
			if(from < this._keys[0].frame || from > this._keys[this._keys.length - 1].frame) from = this._keys[0].frame;
			if(to < this._keys[0].frame || to > this._keys[this._keys.length - 1].frame) to = this._keys[this._keys.length - 1].frame;
			var range = to - from;
			var ratio = delay * (this.framePerSecond * speedRatio) / 1000.0;
			var offsetValue = 0;
			var highLimitValue = 0;
			if(ratio > range && !loop) returnValue = false; else {
				var offsetValue1 = 0;
				if(this.loopMode != com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CYCLE) {
					var keyOffset = to + from | 0;
					if(keyOffset < this._offsetsCache.length) {
						var fromValue = this._interpolate(from,0,com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CYCLE);
						var toValue = this._interpolate(to,0,com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CYCLE);
						var _g = this.dataType;
						switch(_g) {
						case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_FLOAT:
							this._offsetsCache[keyOffset] = toValue - fromValue;
							break;
						case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_QUATERNION:
							this._offsetsCache[keyOffset] = (js.Boot.__cast(toValue , com.gamestudiohx.babylonhx.tools.math.Vector3)).subtract(js.Boot.__cast(fromValue , com.gamestudiohx.babylonhx.tools.math.Vector3));
							break;
						case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_VECTOR3:
							this._offsetsCache[keyOffset] = (js.Boot.__cast(toValue , com.gamestudiohx.babylonhx.tools.math.Vector3)).subtract(js.Boot.__cast(fromValue , com.gamestudiohx.babylonhx.tools.math.Vector3));
							break;
						default:
						}
						this._highLimitsCache[keyOffset] = toValue;
					}
					highLimitValue = this._highLimitsCache[keyOffset];
					offsetValue1 = this._offsetsCache[keyOffset];
				}
			}
			var repeatCount = ratio / range | 0;
			var currentFrame;
			if(returnValue) currentFrame = from + ratio % range; else currentFrame = to;
			var currentValue = this._interpolate(currentFrame,repeatCount,this.loopMode,offsetValue,highLimitValue);
			if(this.targetPropertyPath.length > 1) {
				var property = Reflect.getProperty(target,this.targetPropertyPath[0]);
				var _g1 = 1;
				var _g2 = this.targetPropertyPath.length - 1;
				while(_g1 < _g2) {
					var index = _g1++;
					property = Reflect.getProperty(property,this.targetPropertyPath[index]);
				}
				Reflect.setProperty(property,this.targetPropertyPath[this.targetPropertyPath.length - 1],currentValue);
			} else Reflect.setProperty(target,this.targetPropertyPath[0],currentValue);
			if(Reflect.field(target,"markAsDirty") != null) target.markAsDirty(this.targetProperty);
		}
		return returnValue;
	}
	,__class__: com.gamestudiohx.babylonhx.animations.Animation
};
com.gamestudiohx.babylonhx.animations._Animatable = function(target,from,to,loop,speedRatio,onAnimationEnd) {
	if(speedRatio == null) speedRatio = 1.0;
	if(loop == null) loop = false;
	if(to == null) to = 100;
	if(from == null) from = 0;
	this._localDelayOffset = -1;
	this.target = target;
	this.fromFrame = from;
	this.toFrame = to;
	this.loopAnimation = loop;
	this.speedRatio = speedRatio;
	this.onAnimationEnd = onAnimationEnd;
	this.animationStarted = false;
};
$hxClasses["com.gamestudiohx.babylonhx.animations._Animatable"] = com.gamestudiohx.babylonhx.animations._Animatable;
com.gamestudiohx.babylonhx.animations._Animatable.__name__ = ["com","gamestudiohx","babylonhx","animations","_Animatable"];
com.gamestudiohx.babylonhx.animations._Animatable.prototype = {
	_animate: function(delay) {
		if(this._localDelayOffset == -1) this._localDelayOffset = delay;
		var running = false;
		var animations = this.target.animations;
		var _g1 = 0;
		var _g = animations.length;
		while(_g1 < _g) {
			var index = _g1++;
			var isRunning = animations[index].animate(this.target,delay - this._localDelayOffset,this.fromFrame,this.toFrame,this.loopAnimation,this.speedRatio);
			running = running || isRunning;
		}
		if(!running && this.onAnimationEnd != null) this.onAnimationEnd();
		return running;
	}
	,__class__: com.gamestudiohx.babylonhx.animations._Animatable
};
com.gamestudiohx.babylonhx.bones = {};
com.gamestudiohx.babylonhx.bones.Bone = function(name,skeleton,parentBone,matrix) {
	this.name = name;
	this._skeleton = skeleton;
	this._matrix = matrix;
	this._baseMatrix = matrix;
	this._worldTransform = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	this._absoluteTransform = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	this._invertedAbsoluteTransform = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	this.children = [];
	this.animations = [];
	skeleton.bones.push(this);
	if(parentBone != null) {
		this._parent = parentBone;
		parentBone.children.push(this);
	} else this._parent = null;
	this._updateDifferenceMatrix();
};
$hxClasses["com.gamestudiohx.babylonhx.bones.Bone"] = com.gamestudiohx.babylonhx.bones.Bone;
com.gamestudiohx.babylonhx.bones.Bone.__name__ = ["com","gamestudiohx","babylonhx","bones","Bone"];
com.gamestudiohx.babylonhx.bones.Bone.prototype = {
	getParent: function() {
		return this._parent;
	}
	,getLocalMatrix: function() {
		return this._matrix;
	}
	,getAbsoluteMatrix: function() {
		var matrix = this._matrix.clone();
		var parent = this._parent;
		while(parent != null) {
			matrix = matrix.multiply(parent.getLocalMatrix());
			parent = parent.getParent();
		}
		return matrix;
	}
	,_updateDifferenceMatrix: function() {
		if(this._parent != null) this._matrix.multiplyToArray(this._parent._absoluteTransform,this._absoluteTransform.m,0); else this._absoluteTransform.copyFrom(this._matrix);
		this._absoluteTransform.invertToRef(this._invertedAbsoluteTransform);
		var _g1 = 0;
		var _g = this.children.length;
		while(_g1 < _g) {
			var index = _g1++;
			this.children[index]._updateDifferenceMatrix();
		}
	}
	,updateMatrix: function(matrix) {
		this._matrix = matrix;
		this._skeleton._markAsDirty();
		this._updateDifferenceMatrix();
	}
	,markAsDirty: function() {
		this._skeleton._markAsDirty();
	}
	,__class__: com.gamestudiohx.babylonhx.bones.Bone
};
com.gamestudiohx.babylonhx.bones.Skeleton = function(name,id,scene) {
	this.id = id;
	this.name = name;
	this.bones = [];
	this._scene = scene;
	scene.skeletons.push(this);
	this._isDirty = true;
};
$hxClasses["com.gamestudiohx.babylonhx.bones.Skeleton"] = com.gamestudiohx.babylonhx.bones.Skeleton;
com.gamestudiohx.babylonhx.bones.Skeleton.__name__ = ["com","gamestudiohx","babylonhx","bones","Skeleton"];
com.gamestudiohx.babylonhx.bones.Skeleton.prototype = {
	_markAsDirty: function() {
		this._isDirty = true;
	}
	,getTransformMatrices: function() {
		return this._transformMatrices;
	}
	,prepare: function() {
		if(!this._isDirty) return;
		if(this._transformMatrices == null || this._transformMatrices.length != 16 * this.bones.length) this._transformMatrices = new Float32Array(16 * this.bones.length);
		var _g1 = 0;
		var _g = this.bones.length;
		while(_g1 < _g) {
			var index = _g1++;
			var bone = this.bones[index];
			var parentBone = bone.getParent();
			if(parentBone != null) bone._matrix.multiplyToArray(parentBone._worldTransform,bone._worldTransform.m,0); else bone._worldTransform.copyFrom(bone._matrix);
			bone._invertedAbsoluteTransform.multiplyToArray(bone._worldTransform,this._transformMatrices,index * 16);
		}
		this._isDirty = false;
	}
	,getAnimatables: function() {
		if(this._animatables == null || this._animatables.length != this.bones.length) {
			this._animatables = [];
			var _g1 = 0;
			var _g = this.bones.length;
			while(_g1 < _g) {
				var index = _g1++;
				this._animatables.push(this.bones[index]);
			}
		}
		return this._animatables;
	}
	,clone: function(name,id) {
		var result = new com.gamestudiohx.babylonhx.bones.Skeleton(name,id,this._scene);
		var _g1 = 0;
		var _g = this.bones.length;
		while(_g1 < _g) {
			var index = _g1++;
			var source = this.bones[index];
			var parentBone = null;
			if(source.getParent() != null) {
				var parentIndex = Lambda.indexOf(this.bones,source.getParent());
				parentBone = result.bones[parentIndex];
			}
			var bone = new com.gamestudiohx.babylonhx.bones.Bone(source.name,result,parentBone,source._baseMatrix);
			bone.animations = source.animations.slice();
		}
		return result;
	}
	,__class__: com.gamestudiohx.babylonhx.bones.Skeleton
};
com.gamestudiohx.babylonhx.cameras = {};
com.gamestudiohx.babylonhx.cameras.Camera = function(name,position,scene) {
	this.inertia = 0.9;
	this.maxZ = 1000.0;
	this.minZ = 0.1;
	this.orthoTop = null;
	this.orthoBottom = null;
	this.orthoRight = null;
	this.orthoLeft = null;
	this.fov = 0.8;
	com.gamestudiohx.babylonhx.Node.call(this,scene);
	this.name = name;
	this.id = name;
	this.position = position;
	this.upVector = com.gamestudiohx.babylonhx.tools.math.Vector3.Up();
	this.mode = com.gamestudiohx.babylonhx.cameras.Camera.PERSPECTIVE_CAMERA;
	scene.cameras.push(this);
	if(scene.activeCamera == null) scene.activeCamera = this;
	this._computedViewMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
	this._projectionMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
	this.animations = [];
	this._postProcesses = [];
	this._postProcessesTakenIndices = [];
	this.viewport = new com.gamestudiohx.babylonhx.tools.math.Viewport(0,0,1.0,1.0);
	this._cache = { parent : null, position : new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY), upVector : new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY), mode : null, minZ : null, maxZ : null, fov : null, aspectRatio : null, orthoLeft : null, orthoRight : null, orthoBottom : null, orthoTop : null, renderWidth : null, renderHeight : null};
};
$hxClasses["com.gamestudiohx.babylonhx.cameras.Camera"] = com.gamestudiohx.babylonhx.cameras.Camera;
com.gamestudiohx.babylonhx.cameras.Camera.__name__ = ["com","gamestudiohx","babylonhx","cameras","Camera"];
com.gamestudiohx.babylonhx.cameras.Camera.__super__ = com.gamestudiohx.babylonhx.Node;
com.gamestudiohx.babylonhx.cameras.Camera.prototype = $extend(com.gamestudiohx.babylonhx.Node.prototype,{
	_initCache: function() {
		this._cache = { position : new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY), upVector : new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY), mode : null, minZ : null, maxZ : null, fov : null, aspectRatio : null, orthoLeft : null, orthoRight : null, orthoBottom : null, orthoTop : null, renderWidth : null, renderHeight : null};
	}
	,_updateCache: function(ignoreParentClass) {
		if(ignoreParentClass == null) ignoreParentClass = true;
		if(!ignoreParentClass) com.gamestudiohx.babylonhx.Node.prototype._updateCache.call(this,ignoreParentClass);
		var engine = this._scene.getEngine();
		this._cache.position.copyFrom(this.position);
		this._cache.upVector.copyFrom(this.upVector);
		this._cache.mode = this.mode;
		this._cache.minZ = this.minZ;
		this._cache.maxZ = this.maxZ;
		this._cache.fov = this.fov;
		this._cache.aspectRatio = engine.getAspectRatio(this);
		this._cache.orthoLeft = this.orthoLeft;
		this._cache.orthoRight = this.orthoRight;
		this._cache.orthoBottom = this.orthoBottom;
		this._cache.orthoTop = this.orthoTop;
		this._cache.renderWidth = engine.getRenderWidth();
		this._cache.renderHeight = engine.getRenderHeight();
	}
	,_updateFromScene: function() {
		this.updateCache();
		this._update();
	}
	,_isSynchronized: function() {
		return this._isSynchronizedViewMatrix() && this._isSynchronizedProjectionMatrix();
	}
	,_isSynchronizedViewMatrix: function() {
		if(!com.gamestudiohx.babylonhx.Node.prototype._isSynchronized.call(this)) return false;
		return this._cache.position.equals(this.position) && this._cache.upVector.equals(this.upVector) && this.isSynchronizedWithParent();
	}
	,_isSynchronizedProjectionMatrix: function() {
		var check = this._cache.mode == this.mode && this._cache.minZ == this.minZ && this._cache.maxZ == this.maxZ;
		if(!check) return false;
		var engine = this._scene.getEngine();
		if(this.mode == com.gamestudiohx.babylonhx.cameras.Camera.PERSPECTIVE_CAMERA) check = this._cache.fov == this.fov && this._cache.aspectRatio == engine.getAspectRatio(this); else check = this._cache.orthoLeft == this.orthoLeft && this._cache.orthoRight == this.orthoRight && this._cache.orthoBottom == this.orthoBottom && this._cache.orthoTop == this.orthoTop && this._cache.renderWidth == engine.getRenderWidth() && this._cache.renderHeight == engine.getRenderHeight();
		return check;
	}
	,getScene: function() {
		return this._scene;
	}
	,attachControl: function(canvas,noPreventDefault) {
		if(noPreventDefault == null) noPreventDefault = false;
	}
	,detachControl: function(canvas) {
	}
	,_update: function() {
	}
	,attachPostProcess: function(postProcess,insertAt) {
		if(!postProcess._reusable && Lambda.indexOf(this._postProcesses,postProcess) > -1) return -1;
		if(insertAt == null || insertAt < 0) {
			this._postProcesses.push(postProcess);
			this._postProcessesTakenIndices.push(this._postProcesses.length - 1);
			return this._postProcesses.length - 1;
		}
		var add = 0;
		if(this._postProcesses.length > insertAt) {
			var i = this._postProcesses.length - 1;
			while(i >= insertAt) {
				this._postProcesses[i + 1] = this._postProcesses[i];
				--i;
			}
			add = 1;
		}
		var _g1 = 0;
		var _g = this._postProcessesTakenIndices.length;
		while(_g1 < _g) {
			var i1 = _g1++;
			if(this._postProcessesTakenIndices[i1] < insertAt) continue;
			var j = this._postProcessesTakenIndices.length - 1;
			while(j >= i1) {
				this._postProcessesTakenIndices[j + 1] = this._postProcessesTakenIndices[j] + add;
				--j;
			}
			this._postProcessesTakenIndices[i1] = insertAt;
			break;
		}
		if(add > 0 && Lambda.indexOf(this._postProcessesTakenIndices,insertAt) == -1) this._postProcessesTakenIndices.push(insertAt);
		var result = insertAt + add;
		this._postProcesses[result] = postProcess;
		return result;
	}
	,detachPostProcess: function(postProcess,atIndices) {
		var result = [];
		if(atIndices == null) {
			var length = this._postProcesses.length;
			var _g = 0;
			while(_g < length) {
				var i = _g++;
				if(this._postProcesses[i] != postProcess) continue;
				this._postProcesses[i] = null;
				var index = Lambda.indexOf(this._postProcessesTakenIndices,i);
				this._postProcessesTakenIndices.splice(index,1);
			}
		} else {
			var _atIndices;
			if((atIndices instanceof Array) && atIndices.__enum__ == null) _atIndices = atIndices; else _atIndices = [atIndices];
			var _g1 = 0;
			var _g2 = _atIndices.length;
			while(_g1 < _g2) {
				var i1 = _g1++;
				var foundPostProcess = this._postProcesses[atIndices[i1]];
				if(foundPostProcess != postProcess) {
					result.push(i1);
					continue;
				}
				this._postProcesses[atIndices[i1]] = null;
				var index1 = Lambda.indexOf(this._postProcessesTakenIndices,atIndices[i1]);
				this._postProcessesTakenIndices.splice(index1,1);
			}
		}
		return result;
	}
	,getWorldMatrix: function() {
		if(this._worldMatrix == null) this._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
		var viewMatrix;
		if(!this._isSynchronizedViewMatrix()) {
			this._syncChildFlag();
			this._computedViewMatrix = this._getViewMatrix();
		}
		this._computedViewMatrix = this._computedViewMatrix;
		if(!(this.parent == null || this.parent.getWorldMatrix() == null || !this.hasNewParent() && this.parent.isSynchronized())) {
			if(this._worldMatrix == null) this._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
			this._computedViewMatrix.invertToRef(this._worldMatrix);
			this._worldMatrix.multiplyToRef(this.parent.getWorldMatrix(),this._computedViewMatrix);
			this._computedViewMatrix.invert();
		}
		viewMatrix = this._computedViewMatrix;
		viewMatrix.invertToRef(this._worldMatrix);
		return this._worldMatrix;
	}
	,_getViewMatrix: function() {
		return com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
	}
	,getViewMatrix: function() {
		if(!this._isSynchronizedViewMatrix()) {
			this._syncChildFlag();
			this._computedViewMatrix = this._getViewMatrix();
		}
		this._computedViewMatrix = this._computedViewMatrix;
		if(!(this.parent == null || this.parent.getWorldMatrix() == null || !this.hasNewParent() && this.parent.isSynchronized())) {
			if(this._worldMatrix == null) this._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
			this._computedViewMatrix.invertToRef(this._worldMatrix);
			this._worldMatrix.multiplyToRef(this.parent.getWorldMatrix(),this._computedViewMatrix);
			this._computedViewMatrix.invert();
		}
		return this._computedViewMatrix;
	}
	,_computeViewMatrix: function(force) {
		if(force == null) force = false;
		if(!(!force && this._isSynchronizedViewMatrix())) {
			this._syncChildFlag();
			this._computedViewMatrix = this._getViewMatrix();
		}
		return this._computedViewMatrix;
	}
	,getProjectionMatrix: function(force) {
		if(force == null) force = false;
		if(!(!force && this._isSynchronizedProjectionMatrix())) {
			var engine = this._scene.getEngine();
			if(this.mode == com.gamestudiohx.babylonhx.cameras.Camera.PERSPECTIVE_CAMERA) com.gamestudiohx.babylonhx.tools.math.Matrix.PerspectiveFovLHToRef(this.fov,engine.getAspectRatio(this),this.minZ,this.maxZ,this._projectionMatrix); else {
				var halfWidth = engine.getRenderWidth() / 2.0;
				var halfHeight = engine.getRenderHeight() / 2.0;
				com.gamestudiohx.babylonhx.tools.math.Matrix.OrthoOffCenterLHToRef(this.orthoLeft == null?-halfWidth:this.orthoLeft,this.orthoRight == null?halfWidth:this.orthoRight,this.orthoBottom == null?-halfHeight:this.orthoBottom,this.orthoTop == null?halfHeight:this.orthoTop,this.minZ,this.maxZ,this._projectionMatrix);
			}
		}
		return this._projectionMatrix;
	}
	,dispose: function() {
		var index = Lambda.indexOf(this._scene.cameras,this);
		this._scene.cameras.splice(index,1);
		var _g1 = 0;
		var _g = this._postProcessesTakenIndices.length;
		while(_g1 < _g) {
			var i = _g1++;
			this._postProcesses[this._postProcessesTakenIndices[i]].dispose(this);
		}
	}
	,__class__: com.gamestudiohx.babylonhx.cameras.Camera
});
com.gamestudiohx.babylonhx.cameras.ArcRotateCamera = function(name,alpha,beta,radius,target,scene) {
	this.angularSensibility = 1000.0;
	this.upperRadiusLimit = null;
	this.lowerRadiusLimit = null;
	this.upperBetaLimit = 3.141592653589;
	this.lowerBetaLimit = 0.01;
	this.upperAlphaLimit = null;
	this.lowerAlphaLimit = null;
	this.inertialRadiusOffset = 0;
	this.inertialBetaOffset = 0;
	this.inertialAlphaOffset = 0;
	com.gamestudiohx.babylonhx.cameras.Camera.call(this,name,com.gamestudiohx.babylonhx.tools.math.Vector3.Zero(),scene);
	this.alpha = alpha;
	this.beta = beta;
	this.radius = radius;
	this.target = target;
	this._keys = [];
	this.keysUp = [38];
	this.keysDown = [40];
	this.keysLeft = [37];
	this.keysRight = [39];
	this._viewMatrix = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	if(!this._isSynchronizedViewMatrix()) {
		this._syncChildFlag();
		this._computedViewMatrix = this._getViewMatrix();
	}
	this._computedViewMatrix = this._computedViewMatrix;
	if(!(this.parent == null || this.parent.getWorldMatrix() == null || !this.hasNewParent() && this.parent.isSynchronized())) {
		if(this._worldMatrix == null) this._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
		this._computedViewMatrix.invertToRef(this._worldMatrix);
		this._worldMatrix.multiplyToRef(this.parent.getWorldMatrix(),this._computedViewMatrix);
		this._computedViewMatrix.invert();
	}
	this._computedViewMatrix;
	this._cache = { parent : null, target : new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY), alpha : null, beta : null, radius : null, position : new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY), upVector : new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY), mode : null, minZ : null, maxZ : null, fov : null, aspectRatio : null, orthoLeft : null, orthoRight : null, orthoBottom : null, orthoTop : null, renderWidth : null, renderHeight : null};
};
$hxClasses["com.gamestudiohx.babylonhx.cameras.ArcRotateCamera"] = com.gamestudiohx.babylonhx.cameras.ArcRotateCamera;
com.gamestudiohx.babylonhx.cameras.ArcRotateCamera.__name__ = ["com","gamestudiohx","babylonhx","cameras","ArcRotateCamera"];
com.gamestudiohx.babylonhx.cameras.ArcRotateCamera.__super__ = com.gamestudiohx.babylonhx.cameras.Camera;
com.gamestudiohx.babylonhx.cameras.ArcRotateCamera.prototype = $extend(com.gamestudiohx.babylonhx.cameras.Camera.prototype,{
	_initCache: function() {
		this._cache.target = new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY);
		this._cache.alpha = null;
		this._cache.beta = null;
		this._cache.radius = null;
	}
	,_updateCache: function(ignoreParentClass) {
		if(ignoreParentClass == null) ignoreParentClass = true;
		if(!ignoreParentClass) com.gamestudiohx.babylonhx.cameras.Camera.prototype._updateCache.call(this,ignoreParentClass);
		this._cache.target.copyFrom(this._getTargetPosition());
		this._cache.alpha = this.alpha;
		this._cache.beta = this.beta;
		this._cache.radius = this.radius;
	}
	,_getTargetPosition: function() {
		return this.target;
	}
	,_isSynchronizedViewMatrix: function() {
		if(!com.gamestudiohx.babylonhx.cameras.Camera.prototype._isSynchronizedViewMatrix.call(this)) return false;
		return this._cache.target.equals(this._getTargetPosition()) && this._cache.alpha == this.alpha && this._cache.beta == this.beta && this._cache.radius == this.radius;
	}
	,setPosition: function(position) {
		var radiusv3 = position.subtract(Reflect.field(this.target,"position") != null?Reflect.field(this.target,"position"):this.target);
		this.radius = Math.sqrt(radiusv3.x * radiusv3.x + radiusv3.y * radiusv3.y + radiusv3.z * radiusv3.z);
		this.alpha = Math.atan(radiusv3.z / radiusv3.x);
		this.beta = Math.acos(radiusv3.y / this.radius);
	}
	,attachControl: function(canvas,noPreventDefault) {
		if(noPreventDefault == null) noPreventDefault = false;
		var _g = this;
		var previousPosition = null;
		if(this._attachedCanvas != null) return;
		this._attachedCanvas = canvas;
		var engine = this._scene.getEngine();
		if(this._onMouseDown == null) {
			this._onMouseDown = function(evt) {
				previousPosition = { x : _g._attachedCanvas.get_mouseX(), y : _g._attachedCanvas.get_mouseY()};
			};
			this._onMouseUp = function(evt1) {
				previousPosition = null;
			};
			this._onMouseMove = function(evt2) {
				if(previousPosition == null && !engine.isPointerLock) return;
				var offsetX = 0;
				var offsetY = 0;
				if(!engine.isPointerLock) {
					offsetX = _g._attachedCanvas.get_mouseX() - previousPosition.x;
					offsetY = _g._attachedCanvas.get_mouseY() - previousPosition.y;
				}
				_g.inertialAlphaOffset -= offsetX / _g.angularSensibility;
				_g.inertialBetaOffset -= offsetY / _g.angularSensibility;
				previousPosition = { x : _g._attachedCanvas.get_mouseX(), y : _g._attachedCanvas.get_mouseY()};
			};
			this._wheel = function(event) {
				var delta = event.delta / 3;
				_g.inertialRadiusOffset += delta;
			};
			this._onKeyDown = function(evt3) {
				if(Lambda.indexOf(_g.keysUp,evt3.keyCode) != -1 || Lambda.indexOf(_g.keysDown,evt3.keyCode) != -1 || Lambda.indexOf(_g.keysLeft,evt3.keyCode) != -1 || Lambda.indexOf(_g.keysRight,evt3.keyCode) != -1) {
					var index = Lambda.indexOf(_g._keys,evt3.keyCode);
					if(index == -1) _g._keys.push(evt3.keyCode);
				}
			};
			this._onKeyUp = function(evt4) {
				if(Lambda.indexOf(_g.keysUp,evt4.keyCode) != -1 || Lambda.indexOf(_g.keysDown,evt4.keyCode) != -1 || Lambda.indexOf(_g.keysLeft,evt4.keyCode) != -1 || Lambda.indexOf(_g.keysRight,evt4.keyCode) != -1) {
					var index1 = Lambda.indexOf(_g._keys,evt4.keyCode);
					if(index1 >= 0) _g._keys.splice(index1,1);
				}
			};
			this._onLostFocus = function() {
				_g._keys = [];
			};
			this._reset = function() {
				_g._keys = [];
				_g.inertialAlphaOffset = 0;
				_g.inertialBetaOffset = 0;
				previousPosition = null;
			};
		}
		openfl.Lib.current.stage.addEventListener(openfl.events.MouseEvent.MOUSE_DOWN,this._onMouseDown,false);
		openfl.Lib.current.stage.addEventListener(openfl.events.MouseEvent.MOUSE_UP,this._onMouseUp,false);
		openfl.Lib.current.stage.addEventListener(openfl.events.MouseEvent.MOUSE_OUT,this._onMouseOut,false);
		openfl.Lib.current.stage.addEventListener(openfl.events.MouseEvent.MOUSE_MOVE,this._onMouseMove,false);
		openfl.Lib.current.stage.addEventListener(openfl.events.KeyboardEvent.KEY_DOWN,this._onKeyDown,false);
		openfl.Lib.current.stage.addEventListener(openfl.events.KeyboardEvent.KEY_UP,this._onKeyUp,false);
		openfl.Lib.current.stage.addEventListener(openfl.events.MouseEvent.MOUSE_WHEEL,this._wheel,false);
	}
	,detachControl: function(canvas) {
		if(this._attachedCanvas != canvas) return;
		openfl.Lib.current.stage.removeEventListener(openfl.events.MouseEvent.MOUSE_DOWN,this._onMouseDown);
		openfl.Lib.current.stage.removeEventListener(openfl.events.MouseEvent.MOUSE_UP,this._onMouseUp);
		openfl.Lib.current.stage.removeEventListener(openfl.events.MouseEvent.MOUSE_OUT,this._onMouseOut);
		openfl.Lib.current.stage.removeEventListener(openfl.events.MouseEvent.MOUSE_MOVE,this._onMouseMove);
		openfl.Lib.current.stage.removeEventListener(openfl.events.KeyboardEvent.KEY_DOWN,this._onKeyDown);
		openfl.Lib.current.stage.removeEventListener(openfl.events.KeyboardEvent.KEY_UP,this._onKeyUp);
		this._attachedCanvas = null;
		if(this._reset != null) this._reset();
	}
	,_update: function() {
		var _g1 = 0;
		var _g = this._keys.length;
		while(_g1 < _g) {
			var index = _g1++;
			var keyCode = this._keys[index];
			if(Lambda.indexOf(this.keysLeft,keyCode) != -1) this.inertialAlphaOffset -= 0.01; else if(Lambda.indexOf(this.keysUp,keyCode) != -1) this.inertialBetaOffset -= 0.01; else if(Lambda.indexOf(this.keysRight,keyCode) != -1) this.inertialAlphaOffset += 0.01; else if(Lambda.indexOf(this.keysDown,keyCode) != -1) this.inertialBetaOffset += 0.01;
		}
		if(this.inertialAlphaOffset != 0 || this.inertialBetaOffset != 0 || this.inertialRadiusOffset != 0) {
			this.alpha += this.inertialAlphaOffset;
			this.beta += this.inertialBetaOffset;
			this.radius -= this.inertialRadiusOffset;
			this.inertialAlphaOffset *= this.inertia;
			this.inertialBetaOffset *= this.inertia;
			this.inertialRadiusOffset *= this.inertia;
			if(Math.abs(this.inertialAlphaOffset) < com.gamestudiohx.babylonhx.Engine.epsilon) this.inertialAlphaOffset = 0;
			if(Math.abs(this.inertialBetaOffset) < com.gamestudiohx.babylonhx.Engine.epsilon) this.inertialBetaOffset = 0;
			if(Math.abs(this.inertialRadiusOffset) < com.gamestudiohx.babylonhx.Engine.epsilon) this.inertialRadiusOffset = 0;
		}
		if(this.lowerAlphaLimit != null && this.alpha < this.lowerAlphaLimit) this.alpha = this.lowerAlphaLimit;
		if(this.upperAlphaLimit != null && this.alpha > this.upperAlphaLimit) this.alpha = this.upperAlphaLimit;
		if(this.lowerBetaLimit != null && this.beta < this.lowerBetaLimit) this.beta = this.lowerBetaLimit;
		if(this.upperBetaLimit != null && this.beta > this.upperBetaLimit) this.beta = this.upperBetaLimit;
		if(this.lowerRadiusLimit != null && this.radius < this.lowerRadiusLimit) this.radius = this.lowerRadiusLimit;
		if(this.upperRadiusLimit != null && this.radius > this.upperRadiusLimit) this.radius = this.upperRadiusLimit;
	}
	,_getViewMatrix: function() {
		var cosa = Math.cos(this.alpha);
		var sina = Math.sin(this.alpha);
		var cosb = Math.cos(this.beta);
		var sinb = Math.sin(this.beta);
		var target = this._getTargetPosition();
		target.addToRef(new com.gamestudiohx.babylonhx.tools.math.Vector3(this.radius * cosa * sinb,this.radius * cosb,this.radius * sina * sinb),this.position);
		com.gamestudiohx.babylonhx.tools.math.Matrix.LookAtLHToRef(this.position,target,this.upVector,this._viewMatrix);
		return this._viewMatrix;
	}
	,__class__: com.gamestudiohx.babylonhx.cameras.ArcRotateCamera
});
com.gamestudiohx.babylonhx.cameras.FreeCamera = function(name,position,scene) {
	this.onCollide = null;
	this.lockedTarget = null;
	this.angularSensibility = 2000.0;
	this.noRotationConstraint = false;
	this.applyGravity = false;
	this.checkCollisions = false;
	this.speed = 2.0;
	com.gamestudiohx.babylonhx.cameras.Camera.call(this,name,position,scene);
	this.cameraDirection = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,0);
	this.cameraRotation = new com.gamestudiohx.babylonhx.tools.math.Vector2(0,0);
	this.rotation = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,0);
	this.ellipsoid = new com.gamestudiohx.babylonhx.tools.math.Vector3(0.5,1,0.5);
	this._keys = [];
	this.keysUp = [38];
	this.keysDown = [40];
	this.keysLeft = [37];
	this.keysRight = [39];
	this._collider = new com.gamestudiohx.babylonhx.collisions.Collider();
	this._needMoveForGravity = true;
	this._currentTarget = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._viewMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._camMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._cameraTransformMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._cameraRotationMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._referencePoint = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._transformedReferencePoint = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._oldPosition = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._diffPosition = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._newPosition = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._lookAtTemp = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._tempMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._cache = { parent : null, lockedTarget : new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY), rotation : new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY), position : new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY), upVector : new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY), mode : null, minZ : null, maxZ : null, fov : null, aspectRatio : null, orthoLeft : null, orthoRight : null, orthoBottom : null, orthoTop : null, renderWidth : null, renderHeight : null};
};
$hxClasses["com.gamestudiohx.babylonhx.cameras.FreeCamera"] = com.gamestudiohx.babylonhx.cameras.FreeCamera;
com.gamestudiohx.babylonhx.cameras.FreeCamera.__name__ = ["com","gamestudiohx","babylonhx","cameras","FreeCamera"];
com.gamestudiohx.babylonhx.cameras.FreeCamera.__super__ = com.gamestudiohx.babylonhx.cameras.Camera;
com.gamestudiohx.babylonhx.cameras.FreeCamera.prototype = $extend(com.gamestudiohx.babylonhx.cameras.Camera.prototype,{
	_getLockedTargetPosition: function() {
		var ret = null;
		if(this.lockedTarget != null) if(js.Boot.__instanceof(this.lockedTarget,com.gamestudiohx.babylonhx.tools.math.Vector3)) ret = this.lockedTarget; else ret = this.lockedTarget.position;
		return ret;
	}
	,_updateCache: function(ignoreParentClass) {
		if(ignoreParentClass == null) ignoreParentClass = true;
		if(!ignoreParentClass) com.gamestudiohx.babylonhx.cameras.Camera.prototype._updateCache.call(this,ignoreParentClass);
		var lockedTargetPosition = this._getLockedTargetPosition();
		if(lockedTargetPosition == null) this._cache.lockedTarget = null; else if(this._cache.lockedTarget == null) this._cache.lockedTarget = new com.gamestudiohx.babylonhx.tools.math.Vector3(lockedTargetPosition.x,lockedTargetPosition.y,lockedTargetPosition.z); else this._cache.lockedTarget.copyFrom(lockedTargetPosition);
		this._cache.rotation.copyFrom(this.rotation);
	}
	,_isSynchronizedViewMatrix: function() {
		if(!com.gamestudiohx.babylonhx.cameras.Camera.prototype._isSynchronizedViewMatrix.call(this)) return false;
		var lockedTargetPosition = this._getLockedTargetPosition();
		var _t = lockedTargetPosition != null;
		return (this._cache.lockedTarget != null?this._cache.lockedTarget.equals(lockedTargetPosition):!_t) && this._cache.rotation.equals(this.rotation);
	}
	,_computeLocalCameraSpeed: function() {
		return this.speed * (com.gamestudiohx.babylonhx.tools.Tools.GetDeltaTime() / (com.gamestudiohx.babylonhx.tools.Tools.GetFps() * 10.0));
	}
	,setTarget: function(target) {
		this.upVector.normalize();
		com.gamestudiohx.babylonhx.tools.math.Matrix.LookAtLHToRef(this.position,target,this.upVector,this._camMatrix);
		this._camMatrix.invert();
		this.rotation.x = Math.atan(this._camMatrix.m[6] / this._camMatrix.m[10]);
		var vDir = target.subtract(this.position);
		if(vDir.x >= 0.0) this.rotation.y = -Math.atan(vDir.z / vDir.x) + Math.PI / 2.0; else this.rotation.y = -Math.atan(vDir.z / vDir.x) - Math.PI / 2.0;
		this.rotation.z = -Math.acos(com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(new com.gamestudiohx.babylonhx.tools.math.Vector3(0,1.0,0),this.upVector));
		if(Math.isNaN(this.rotation.x)) this.rotation.x = 0;
		if(Math.isNaN(this.rotation.y)) this.rotation.y = 0;
		if(Math.isNaN(this.rotation.z)) this.rotation.z = 0;
	}
	,attachControl: function(canvas,noPreventDefault) {
		if(noPreventDefault == null) noPreventDefault = false;
		var _g = this;
		var previousPosition = null;
		var engine = this._scene.getEngine();
		if(this._attachedCanvas != null) return;
		this._attachedCanvas = canvas;
		if(this._onMouseDown == null) {
			this._onMouseDown = function(evt) {
				previousPosition = { x : _g._attachedCanvas.get_mouseX(), y : _g._attachedCanvas.get_mouseY()};
			};
			this._onMouseUp = function(evt1) {
				previousPosition = null;
			};
			this._onMouseOut = function(evt2) {
				previousPosition = null;
				_g._keys = [];
			};
			this._onMouseMove = function(evt3) {
				if(previousPosition == null && !engine.isPointerLock) return;
				var offsetX = 0;
				var offsetY = 0;
				if(!engine.isPointerLock) {
					offsetX = _g._attachedCanvas.get_mouseX() - previousPosition.x;
					offsetY = _g._attachedCanvas.get_mouseY() - previousPosition.y;
				}
				_g.cameraRotation.y += offsetX / _g.angularSensibility;
				_g.cameraRotation.x += offsetY / _g.angularSensibility;
				previousPosition = { x : _g._attachedCanvas.get_mouseX(), y : _g._attachedCanvas.get_mouseY()};
			};
			this._onKeyDown = function(evt4) {
				if(Lambda.indexOf(_g.keysUp,evt4.keyCode) != -1 || Lambda.indexOf(_g.keysDown,evt4.keyCode) != -1 || Lambda.indexOf(_g.keysLeft,evt4.keyCode) != -1 || Lambda.indexOf(_g.keysRight,evt4.keyCode) != -1) {
					var index = Lambda.indexOf(_g._keys,evt4.keyCode);
					if(index == -1) _g._keys.push(evt4.keyCode);
				}
			};
			this._onKeyUp = function(evt5) {
				if(Lambda.indexOf(_g.keysUp,evt5.keyCode) != -1 || Lambda.indexOf(_g.keysDown,evt5.keyCode) != -1 || Lambda.indexOf(_g.keysLeft,evt5.keyCode) != -1 || Lambda.indexOf(_g.keysRight,evt5.keyCode) != -1) {
					var index1 = Lambda.indexOf(_g._keys,evt5.keyCode);
					if(index1 >= 0) _g._keys.splice(index1,1);
				}
			};
			this._onLostFocus = function() {
				_g._keys = [];
			};
			this._reset = function() {
				_g._keys = [];
				previousPosition = null;
				_g.cameraDirection = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,0);
				_g.cameraRotation = new com.gamestudiohx.babylonhx.tools.math.Vector2(0,0);
			};
		}
		openfl.Lib.current.stage.addEventListener(openfl.events.MouseEvent.MOUSE_DOWN,this._onMouseDown,false);
		openfl.Lib.current.stage.addEventListener(openfl.events.MouseEvent.MOUSE_UP,this._onMouseUp,false);
		openfl.Lib.current.stage.addEventListener(openfl.events.MouseEvent.MOUSE_OUT,this._onMouseOut,false);
		openfl.Lib.current.stage.addEventListener(openfl.events.MouseEvent.MOUSE_MOVE,this._onMouseMove,false);
		openfl.Lib.current.stage.addEventListener(openfl.events.KeyboardEvent.KEY_DOWN,this._onKeyDown,false);
		openfl.Lib.current.stage.addEventListener(openfl.events.KeyboardEvent.KEY_UP,this._onKeyUp,false);
	}
	,detachControl: function(canvas) {
		if(this._attachedCanvas != canvas) return;
		openfl.Lib.current.stage.removeEventListener(openfl.events.MouseEvent.MOUSE_DOWN,this._onMouseDown);
		openfl.Lib.current.stage.removeEventListener(openfl.events.MouseEvent.MOUSE_UP,this._onMouseUp);
		openfl.Lib.current.stage.removeEventListener(openfl.events.MouseEvent.MOUSE_OUT,this._onMouseOut);
		openfl.Lib.current.stage.removeEventListener(openfl.events.MouseEvent.MOUSE_MOVE,this._onMouseMove);
		openfl.Lib.current.stage.removeEventListener(openfl.events.KeyboardEvent.KEY_DOWN,this._onKeyDown);
		openfl.Lib.current.stage.removeEventListener(openfl.events.KeyboardEvent.KEY_UP,this._onKeyUp);
		this._attachedCanvas = null;
		if(this._reset != null) this._reset();
	}
	,_collideWithWorld: function(velocity) {
		this.position.subtractFromFloatsToRef(0,this.ellipsoid.y,0,this._oldPosition);
		this._collider.radius = this.ellipsoid;
		this._scene._getNewPosition(this._oldPosition,velocity,this._collider,3,this._newPosition);
		this._newPosition.subtractToRef(this._oldPosition,this._diffPosition);
		if(this._diffPosition.length() > com.gamestudiohx.babylonhx.Engine.collisionsEpsilon) {
			this.position.addInPlace(this._diffPosition);
			if(this.onCollide != null) this.onCollide(this._collider.collidedMesh);
		}
	}
	,_checkInputs: function() {
		if(this._localDirection == null) {
			this._localDirection = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			this._transformedDirection = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
		}
		var _g1 = 0;
		var _g = this._keys.length;
		while(_g1 < _g) {
			var index = _g1++;
			var keyCode = this._keys[index];
			var speed = this.speed * (com.gamestudiohx.babylonhx.tools.Tools.GetDeltaTime() / (com.gamestudiohx.babylonhx.tools.Tools.GetFps() * 10.0));
			if(Lambda.indexOf(this.keysLeft,keyCode) != -1) this._localDirection.copyFromFloats(-speed,0,0); else if(Lambda.indexOf(this.keysUp,keyCode) != -1) this._localDirection.copyFromFloats(0,0,speed); else if(Lambda.indexOf(this.keysRight,keyCode) != -1) this._localDirection.copyFromFloats(speed,0,0); else if(Lambda.indexOf(this.keysDown,keyCode) != -1) this._localDirection.copyFromFloats(0,0,-speed);
			((function($this) {
				var $r;
				{
					if(!$this._isSynchronizedViewMatrix()) {
						$this._syncChildFlag();
						$this._computedViewMatrix = $this._getViewMatrix();
					}
					$this._computedViewMatrix = $this._computedViewMatrix;
				}
				if(!($this.parent == null || $this.parent.getWorldMatrix() == null || !$this.hasNewParent() && $this.parent.isSynchronized())) {
					if($this._worldMatrix == null) $this._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
					$this._computedViewMatrix.invertToRef($this._worldMatrix);
					$this._worldMatrix.multiplyToRef($this.parent.getWorldMatrix(),$this._computedViewMatrix);
					$this._computedViewMatrix.invert();
				}
				$r = $this._computedViewMatrix;
				return $r;
			}(this))).invertToRef(this._cameraTransformMatrix);
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormalToRef(this._localDirection,this._cameraTransformMatrix,this._transformedDirection);
			this.cameraDirection.addInPlace(this._transformedDirection);
		}
	}
	,_update: function() {
		this._checkInputs();
		var needToMove = this._needMoveForGravity || Math.abs(this.cameraDirection.x) > 0 || Math.abs(this.cameraDirection.y) > 0 || Math.abs(this.cameraDirection.z) > 0;
		var needToRotate = Math.abs(this.cameraRotation.x) > 0 || Math.abs(this.cameraRotation.y) > 0;
		if(needToMove) {
			if(this.checkCollisions && this._scene.collisionsEnabled) {
				this.position.subtractFromFloatsToRef(0,this.ellipsoid.y,0,this._oldPosition);
				this._collider.radius = this.ellipsoid;
				this._scene._getNewPosition(this._oldPosition,this.cameraDirection,this._collider,3,this._newPosition);
				this._newPosition.subtractToRef(this._oldPosition,this._diffPosition);
				if(this._diffPosition.length() > com.gamestudiohx.babylonhx.Engine.collisionsEpsilon) {
					this.position.addInPlace(this._diffPosition);
					if(this.onCollide != null) this.onCollide(this._collider.collidedMesh);
				}
				if(this.applyGravity) {
					var oldPosition = this.position;
					this.position.subtractFromFloatsToRef(0,this.ellipsoid.y,0,this._oldPosition);
					this._collider.radius = this.ellipsoid;
					this._scene._getNewPosition(this._oldPosition,this._scene.gravity,this._collider,3,this._newPosition);
					this._newPosition.subtractToRef(this._oldPosition,this._diffPosition);
					if(this._diffPosition.length() > com.gamestudiohx.babylonhx.Engine.collisionsEpsilon) {
						this.position.addInPlace(this._diffPosition);
						if(this.onCollide != null) this.onCollide(this._collider.collidedMesh);
					}
					this._needMoveForGravity = com.gamestudiohx.babylonhx.tools.math.Vector3.DistanceSquared(oldPosition,this.position) != 0;
				}
			} else this.position.addInPlace(this.cameraDirection);
		}
		if(needToRotate) {
			this.rotation.x += this.cameraRotation.x;
			this.rotation.y += this.cameraRotation.y;
			if(!this.noRotationConstraint) {
				var limit = Math.PI / 2 * 0.95;
				if(this.rotation.x > limit) this.rotation.x = limit;
				if(this.rotation.x < -limit) this.rotation.x = -limit;
			}
		}
		if(needToMove) {
			if(Math.abs(this.cameraDirection.x) < com.gamestudiohx.babylonhx.Engine.epsilon) this.cameraDirection.x = 0;
			if(Math.abs(this.cameraDirection.y) < com.gamestudiohx.babylonhx.Engine.epsilon) this.cameraDirection.y = 0;
			if(Math.abs(this.cameraDirection.z) < com.gamestudiohx.babylonhx.Engine.epsilon) this.cameraDirection.z = 0;
			this.cameraDirection.scaleInPlace(this.inertia);
		}
		if(needToRotate) {
			if(Math.abs(this.cameraRotation.x) < com.gamestudiohx.babylonhx.Engine.epsilon) this.cameraRotation.x = 0;
			if(Math.abs(this.cameraRotation.y) < com.gamestudiohx.babylonhx.Engine.epsilon) this.cameraRotation.y = 0;
			this.cameraRotation.scaleInPlace(this.inertia);
		}
	}
	,_getViewMatrix: function() {
		com.gamestudiohx.babylonhx.tools.math.Vector3.FromFloatsToRef(0,0,1,this._referencePoint);
		if(this.lockedTarget == null) {
			if(this.upVector.x != 0 || this.upVector.y != 1.0 || this.upVector.z != 0) {
				com.gamestudiohx.babylonhx.tools.math.Matrix.LookAtLHToRef(com.gamestudiohx.babylonhx.tools.math.Vector3.Zero(),this._referencePoint,this.upVector,this._lookAtTemp);
				com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYawPitchRollToRef(this.rotation.y,this.rotation.x,this.rotation.z,this._cameraRotationMatrix);
				this._lookAtTemp.multiplyToArray(this._cameraRotationMatrix,this._tempMatrix.m,0);
				this._lookAtTemp.invert();
				this._tempMatrix.multiplyToArray(this._lookAtTemp,this._cameraRotationMatrix.m,0);
			} else com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYawPitchRollToRef(this.rotation.y,this.rotation.x,this.rotation.z,this._cameraRotationMatrix);
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesToRef(this._referencePoint,this._cameraRotationMatrix,this._transformedReferencePoint);
			this.position.addToRef(this._transformedReferencePoint,this._currentTarget);
		} else this._currentTarget.copyFrom(this._getLockedTargetPosition());
		com.gamestudiohx.babylonhx.tools.math.Matrix.LookAtLHToRef(this.position,this._currentTarget,this.upVector,this._viewMatrix);
		return this._viewMatrix;
	}
	,__class__: com.gamestudiohx.babylonhx.cameras.FreeCamera
});
com.gamestudiohx.babylonhx.collisions = {};
com.gamestudiohx.babylonhx.collisions.Collider = function() {
	this.radius = new com.gamestudiohx.babylonhx.tools.math.Vector3(1,1,1);
	this.retry = 0;
	this.basePoint = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this.velocity = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this.basePointWorld = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this.velocityWorld = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this.normalizedVelocity = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._collisionPoint = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._planeIntersectionPoint = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._tempVector = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._tempVector2 = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._tempVector3 = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._tempVector4 = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._edge = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._baseToVertex = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._destinationPoint = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._slidePlaneNormal = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._displacementVector = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
};
$hxClasses["com.gamestudiohx.babylonhx.collisions.Collider"] = com.gamestudiohx.babylonhx.collisions.Collider;
com.gamestudiohx.babylonhx.collisions.Collider.__name__ = ["com","gamestudiohx","babylonhx","collisions","Collider"];
com.gamestudiohx.babylonhx.collisions.Collider.prototype = {
	_initialize: function(source,dir,e) {
		this.velocity = dir;
		com.gamestudiohx.babylonhx.tools.math.Vector3.NormalizeToRef(dir,this.normalizedVelocity);
		this.basePoint = source;
		source.multiplyToRef(this.radius,this.basePointWorld);
		dir.multiplyToRef(this.radius,this.velocityWorld);
		this.velocityWorldLength = this.velocityWorld.length();
		this.epsilon = e;
		this.collisionFound = false;
	}
	,_checkPointInTriangle: function(point,pa,pb,pc,n) {
		pa.subtractToRef(point,this._tempVector);
		pb.subtractToRef(point,this._tempVector2);
		com.gamestudiohx.babylonhx.tools.math.Vector3.CrossToRef(this._tempVector,this._tempVector2,this._tempVector4);
		var d = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._tempVector4,n);
		if(d < 0) return false;
		pc.subtractToRef(point,this._tempVector3);
		com.gamestudiohx.babylonhx.tools.math.Vector3.CrossToRef(this._tempVector2,this._tempVector3,this._tempVector4);
		d = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._tempVector4,n);
		if(d < 0) return false;
		com.gamestudiohx.babylonhx.tools.math.Vector3.CrossToRef(this._tempVector3,this._tempVector,this._tempVector4);
		d = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._tempVector4,n);
		return d >= 0;
	}
	,intersectBoxAASphere: function(boxMin,boxMax,sphereCenter,sphereRadius) {
		if(boxMin.x > sphereCenter.x + sphereRadius) return false;
		if(sphereCenter.x - sphereRadius > boxMax.x) return false;
		if(boxMin.y > sphereCenter.y + sphereRadius) return false;
		if(sphereCenter.y - sphereRadius > boxMax.y) return false;
		if(boxMin.z > sphereCenter.z + sphereRadius) return false;
		if(sphereCenter.z - sphereRadius > boxMax.z) return false;
		return true;
	}
	,getLowestRoot: function(a,b,c,maxR) {
		var determinant = b * b - 4.0 * a * c;
		var result = { root : 0, found : false};
		if(determinant < 0) return result;
		var sqrtD = Math.sqrt(determinant);
		var r1 = (-b - sqrtD) / (2.0 * a);
		var r2 = (-b + sqrtD) / (2.0 * a);
		if(r1 > r2) {
			var temp = r2;
			r2 = r1;
			r1 = temp;
		}
		if(r1 > 0 && r1 < maxR) {
			result.root = r1;
			result.found = true;
			return result;
		}
		if(r2 > 0 && r2 < maxR) {
			result.root = r2;
			result.found = true;
			return result;
		}
		return result;
	}
	,_canDoCollision: function(sphereCenter,sphereRadius,vecMin,vecMax) {
		var distance = Math.sqrt(com.gamestudiohx.babylonhx.tools.math.Vector3.DistanceSquared(this.basePointWorld,sphereCenter));
		var max = Math.max(this.radius.x,this.radius.y);
		max = Math.max(max,this.radius.z);
		if(distance > this.velocityWorldLength + max + sphereRadius) return false;
		if(!this.intersectBoxAASphere(vecMin,vecMax,this.basePointWorld,this.velocityWorldLength + max)) return false;
		return true;
	}
	,_testTriangle: function(faceIndex,subMesh,p1,p2,p3) {
		var t0 = 0;
		var embeddedInPlane = false;
		if(subMesh._trianglePlanes == null) subMesh._trianglePlanes = [];
		if(faceIndex >= subMesh._trianglePlanes.length) {
			subMesh._trianglePlanes[faceIndex] = new com.gamestudiohx.babylonhx.tools.math.Plane(0,0,0,0);
			subMesh._trianglePlanes[faceIndex].copyFromPoints(p1,p2,p3);
		}
		var trianglePlane = subMesh._trianglePlanes[faceIndex];
		if(subMesh.getMaterial() == null && !trianglePlane.isFrontFacingTo(this.normalizedVelocity,0)) return;
		var signedDistToTrianglePlane = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this.basePoint,trianglePlane.normal) + trianglePlane.d;
		var normalDotVelocity = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(trianglePlane.normal,this.velocity);
		if(normalDotVelocity == 0) {
			if(Math.abs(signedDistToTrianglePlane) >= 1.0) return;
			embeddedInPlane = true;
			t0 = 0;
		} else {
			t0 = (-1. - signedDistToTrianglePlane) / normalDotVelocity;
			var t1 = (1.0 - signedDistToTrianglePlane) / normalDotVelocity;
			if(t0 > t1) {
				var temp = t1;
				t1 = t0;
				t0 = temp;
			}
			if(t0 > 1.0 || t1 < 0.0) return;
			if(t0 < 0) t0 = 0;
			if(t0 > 1.0) t0 = 1.0;
		}
		this._collisionPoint.copyFromFloats(0,0,0);
		var found = false;
		var t = 1.0;
		if(!embeddedInPlane) {
			this.basePoint.subtractToRef(trianglePlane.normal,this._planeIntersectionPoint);
			this.velocity.scaleToRef(t0,this._tempVector);
			this._planeIntersectionPoint.addInPlace(this._tempVector);
			if(this._checkPointInTriangle(this._planeIntersectionPoint,p1,p2,p3,trianglePlane.normal)) {
				found = true;
				t = t0;
				this._collisionPoint.copyFrom(this._planeIntersectionPoint);
			}
		}
		if(!found) {
			var velocitySquaredLength = this.velocity.lengthSquared();
			var a = velocitySquaredLength;
			this.basePoint.subtractToRef(p1,this._tempVector);
			var b = 2.0 * com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this.velocity,this._tempVector);
			var c = this._tempVector.lengthSquared() - 1.0;
			var lowestRoot = this.getLowestRoot(a,b,c,t);
			if(lowestRoot.found) {
				t = lowestRoot.root;
				found = true;
				this._collisionPoint.copyFrom(p1);
			}
			this.basePoint.subtractToRef(p2,this._tempVector);
			b = 2.0 * com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this.velocity,this._tempVector);
			c = this._tempVector.lengthSquared() - 1.0;
			lowestRoot = this.getLowestRoot(a,b,c,t);
			if(lowestRoot.found) {
				t = lowestRoot.root;
				found = true;
				this._collisionPoint.copyFrom(p2);
			}
			this.basePoint.subtractToRef(p3,this._tempVector);
			b = 2.0 * com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this.velocity,this._tempVector);
			c = this._tempVector.lengthSquared() - 1.0;
			lowestRoot = this.getLowestRoot(a,b,c,t);
			if(lowestRoot.found) {
				t = lowestRoot.root;
				found = true;
				this._collisionPoint.copyFrom(p3);
			}
			p2.subtractToRef(p1,this._edge);
			p1.subtractToRef(this.basePoint,this._baseToVertex);
			var edgeSquaredLength = this._edge.lengthSquared();
			var edgeDotVelocity = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._edge,this.velocity);
			var edgeDotBaseToVertex = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._edge,this._baseToVertex);
			a = edgeSquaredLength * -velocitySquaredLength + edgeDotVelocity * edgeDotVelocity;
			b = edgeSquaredLength * (2.0 * com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this.velocity,this._baseToVertex)) - 2.0 * edgeDotVelocity * edgeDotBaseToVertex;
			c = edgeSquaredLength * (1.0 - this._baseToVertex.lengthSquared()) + edgeDotBaseToVertex * edgeDotBaseToVertex;
			lowestRoot = this.getLowestRoot(a,b,c,t);
			if(lowestRoot.found) {
				var f = (edgeDotVelocity * lowestRoot.root - edgeDotBaseToVertex) / edgeSquaredLength;
				if(f >= 0.0 && f <= 1.0) {
					t = lowestRoot.root;
					found = true;
					this._edge.scaleInPlace(f);
					p1.addToRef(this._edge,this._collisionPoint);
				}
			}
			p3.subtractToRef(p2,this._edge);
			p2.subtractToRef(this.basePoint,this._baseToVertex);
			edgeSquaredLength = this._edge.lengthSquared();
			edgeDotVelocity = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._edge,this.velocity);
			edgeDotBaseToVertex = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._edge,this._baseToVertex);
			a = edgeSquaredLength * -velocitySquaredLength + edgeDotVelocity * edgeDotVelocity;
			b = edgeSquaredLength * (2.0 * com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this.velocity,this._baseToVertex)) - 2.0 * edgeDotVelocity * edgeDotBaseToVertex;
			c = edgeSquaredLength * (1.0 - this._baseToVertex.lengthSquared()) + edgeDotBaseToVertex * edgeDotBaseToVertex;
			lowestRoot = this.getLowestRoot(a,b,c,t);
			if(lowestRoot.found) {
				var f1 = (edgeDotVelocity * lowestRoot.root - edgeDotBaseToVertex) / edgeSquaredLength;
				if(f1 >= 0.0 && f1 <= 1.0) {
					t = lowestRoot.root;
					found = true;
					this._edge.scaleInPlace(f1);
					p2.addToRef(this._edge,this._collisionPoint);
				}
			}
			p1.subtractToRef(p3,this._edge);
			p3.subtractToRef(this.basePoint,this._baseToVertex);
			edgeSquaredLength = this._edge.lengthSquared();
			edgeDotVelocity = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._edge,this.velocity);
			edgeDotBaseToVertex = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._edge,this._baseToVertex);
			a = edgeSquaredLength * -velocitySquaredLength + edgeDotVelocity * edgeDotVelocity;
			b = edgeSquaredLength * (2.0 * com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this.velocity,this._baseToVertex)) - 2.0 * edgeDotVelocity * edgeDotBaseToVertex;
			c = edgeSquaredLength * (1.0 - this._baseToVertex.lengthSquared()) + edgeDotBaseToVertex * edgeDotBaseToVertex;
			lowestRoot = this.getLowestRoot(a,b,c,t);
			if(lowestRoot.found) {
				var f2 = (edgeDotVelocity * lowestRoot.root - edgeDotBaseToVertex) / edgeSquaredLength;
				if(f2 >= 0.0 && f2 <= 1.0) {
					t = lowestRoot.root;
					found = true;
					this._edge.scaleInPlace(f2);
					p3.addToRef(this._edge,this._collisionPoint);
				}
			}
		}
		if(found) {
			var distToCollision = t * this.velocity.length();
			if(!this.collisionFound || distToCollision < this.nearestDistance) {
				if(this.intersectionPoint == null) this.intersectionPoint = this._collisionPoint.clone(); else this.intersectionPoint.copyFrom(this._collisionPoint);
				this.nearestDistance = distToCollision;
				this.collisionFound = true;
				this.collidedMesh = subMesh.getMesh();
			}
		}
	}
	,_collide: function(subMesh,pts,indices,indexStart,indexEnd,decal) {
		var i = indexStart;
		while(i < indexEnd) {
			var p1 = pts[indices[i] - decal];
			var p2 = pts[indices[i + 1] - decal];
			var p3 = pts[indices[i + 2] - decal];
			this._testTriangle(i,subMesh,p3,p2,p1);
			i += 3;
		}
	}
	,_getResponse: function(pos,vel) {
		pos.addToRef(vel,this._destinationPoint);
		vel.scaleInPlace(this.nearestDistance / Math.sqrt(vel.x * vel.x + vel.y * vel.y + vel.z * vel.z));
		this.basePoint.addToRef(vel,pos);
		pos.subtractToRef(this.intersectionPoint,this._slidePlaneNormal);
		this._slidePlaneNormal.normalize();
		this._slidePlaneNormal.scaleToRef(this.epsilon,this._displacementVector);
		pos.addInPlace(this._displacementVector);
		this.intersectionPoint.addInPlace(this._displacementVector);
		this._slidePlaneNormal.scaleInPlace(com.gamestudiohx.babylonhx.tools.math.Plane.SignedDistanceToPlaneFromPositionAndNormal(this.intersectionPoint,this._slidePlaneNormal,this._destinationPoint));
		this._destinationPoint.subtractInPlace(this._slidePlaneNormal);
		this._destinationPoint.subtractToRef(this.intersectionPoint,vel);
	}
	,__class__: com.gamestudiohx.babylonhx.collisions.Collider
};
com.gamestudiohx.babylonhx.collisions.PickingInfo = function() {
	this.hit = false;
	this.hit = false;
	this.distance = 0;
	this.pickedPoint = null;
	this.pickedMesh = null;
};
$hxClasses["com.gamestudiohx.babylonhx.collisions.PickingInfo"] = com.gamestudiohx.babylonhx.collisions.PickingInfo;
com.gamestudiohx.babylonhx.collisions.PickingInfo.__name__ = ["com","gamestudiohx","babylonhx","collisions","PickingInfo"];
com.gamestudiohx.babylonhx.collisions.PickingInfo.prototype = {
	__class__: com.gamestudiohx.babylonhx.collisions.PickingInfo
};
com.gamestudiohx.babylonhx.culling = {};
com.gamestudiohx.babylonhx.culling.BoundingBox = function(minimum,maximum) {
	this.minimum = minimum;
	this.maximum = maximum;
	this.vectors = [];
	this.vectors.push(this.minimum.clone());
	this.vectors.push(this.maximum.clone());
	this.vectors.push(this.minimum.clone());
	this.vectors[2].x = this.maximum.x;
	this.vectors.push(this.minimum.clone());
	this.vectors[3].y = this.maximum.y;
	this.vectors.push(this.minimum.clone());
	this.vectors[4].z = this.maximum.z;
	this.vectors.push(this.maximum.clone());
	this.vectors[5].z = this.minimum.z;
	this.vectors.push(this.maximum.clone());
	this.vectors[6].x = this.minimum.x;
	this.vectors.push(this.maximum.clone());
	this.vectors[7].y = this.minimum.y;
	this.center = this.maximum.add(this.minimum).scale(0.5);
	this._extends = this.maximum.subtract(this.minimum).scale(0.5);
	this.directions = [com.gamestudiohx.babylonhx.tools.math.Vector3.Zero(),com.gamestudiohx.babylonhx.tools.math.Vector3.Zero(),com.gamestudiohx.babylonhx.tools.math.Vector3.Zero()];
	this.vectorsWorld = [];
	var _g1 = 0;
	var _g = this.vectors.length;
	while(_g1 < _g) {
		var index = _g1++;
		this.vectorsWorld[index] = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	}
	this.minimumWorld = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this.maximumWorld = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._update(com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0));
};
$hxClasses["com.gamestudiohx.babylonhx.culling.BoundingBox"] = com.gamestudiohx.babylonhx.culling.BoundingBox;
com.gamestudiohx.babylonhx.culling.BoundingBox.__name__ = ["com","gamestudiohx","babylonhx","culling","BoundingBox"];
com.gamestudiohx.babylonhx.culling.BoundingBox.intersects = function(box0,box1) {
	if(box0.maximumWorld.x < box1.minimumWorld.x || box0.minimumWorld.x > box1.maximumWorld.x) return false;
	if(box0.maximumWorld.y < box1.minimumWorld.y || box0.minimumWorld.y > box1.maximumWorld.y) return false;
	if(box0.maximumWorld.z < box1.minimumWorld.z || box0.minimumWorld.z > box1.maximumWorld.z) return false;
	return true;
};
com.gamestudiohx.babylonhx.culling.BoundingBox.IsInFrustum = function(boundingVectors,frustumPlanes) {
	var _g = 0;
	while(_g < 6) {
		var p = _g++;
		var inCount = 8;
		var _g1 = 0;
		while(_g1 < 8) {
			var i = _g1++;
			if(frustumPlanes[p].dotCoordinate(boundingVectors[i]) < 0) --inCount; else break;
		}
		if(inCount == 0) return false;
	}
	return true;
};
com.gamestudiohx.babylonhx.culling.BoundingBox.prototype = {
	_update: function(world) {
		com.gamestudiohx.babylonhx.tools.math.Vector3.FromFloatsToRef(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,this.minimumWorld);
		com.gamestudiohx.babylonhx.tools.math.Vector3.FromFloatsToRef(Math.NEGATIVE_INFINITY,Math.NEGATIVE_INFINITY,Math.NEGATIVE_INFINITY,this.maximumWorld);
		var _g1 = 0;
		var _g = this.vectors.length;
		while(_g1 < _g) {
			var index = _g1++;
			var v = this.vectorsWorld[index];
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesToRef(this.vectors[index],world,v);
			if(v.x < this.minimumWorld.x) this.minimumWorld.x = v.x;
			if(v.y < this.minimumWorld.y) this.minimumWorld.y = v.y;
			if(v.z < this.minimumWorld.z) this.minimumWorld.z = v.z;
			if(v.x > this.maximumWorld.x) this.maximumWorld.x = v.x;
			if(v.y > this.maximumWorld.y) this.maximumWorld.y = v.y;
			if(v.z > this.maximumWorld.z) this.maximumWorld.z = v.z;
		}
		this.maximumWorld.addToRef(this.minimumWorld,this.center);
		this.center.scaleInPlace(0.5);
		com.gamestudiohx.babylonhx.tools.math.Vector3.FromArrayToRef(world.m,0,this.directions[0]);
		com.gamestudiohx.babylonhx.tools.math.Vector3.FromArrayToRef(world.m,4,this.directions[1]);
		com.gamestudiohx.babylonhx.tools.math.Vector3.FromArrayToRef(world.m,8,this.directions[2]);
	}
	,isInFrustrum: function(frustumPlanes) {
		return com.gamestudiohx.babylonhx.culling.BoundingBox.IsInFrustum(this.vectorsWorld,frustumPlanes);
	}
	,intersectsPoint: function(point) {
		if(this.maximumWorld.x < point.x || this.minimumWorld.x > point.x) return false;
		if(this.maximumWorld.y < point.y || this.minimumWorld.y > point.y) return false;
		if(this.maximumWorld.z < point.z || this.minimumWorld.z > point.z) return false;
		return true;
	}
	,intersectsSphere: function(sphere) {
		var vector = com.gamestudiohx.babylonhx.tools.math.Vector3.Clamp(sphere.centerWorld,this.minimumWorld,this.maximumWorld);
		var num = com.gamestudiohx.babylonhx.tools.math.Vector3.DistanceSquared(sphere.centerWorld,vector);
		return num <= sphere.radiusWorld * sphere.radiusWorld;
	}
	,intersectsMinMax: function(min,max) {
		if(this.maximumWorld.x < min.x || this.minimumWorld.x > max.x) return false;
		if(this.maximumWorld.y < min.y || this.minimumWorld.y > max.y) return false;
		if(this.maximumWorld.z < min.z || this.minimumWorld.z > max.z) return false;
		return true;
	}
	,__class__: com.gamestudiohx.babylonhx.culling.BoundingBox
};
com.gamestudiohx.babylonhx.culling.BoundingInfo = function(minimum,maximum) {
	this.minimum = minimum;
	this.maximum = maximum;
	this.boundingBox = new com.gamestudiohx.babylonhx.culling.BoundingBox(minimum,maximum);
	this.boundingSphere = new com.gamestudiohx.babylonhx.culling.BoundingSphere(minimum,maximum);
};
$hxClasses["com.gamestudiohx.babylonhx.culling.BoundingInfo"] = com.gamestudiohx.babylonhx.culling.BoundingInfo;
com.gamestudiohx.babylonhx.culling.BoundingInfo.__name__ = ["com","gamestudiohx","babylonhx","culling","BoundingInfo"];
com.gamestudiohx.babylonhx.culling.BoundingInfo.prototype = {
	_update: function(world,scale) {
		this.boundingBox._update(world);
		this.boundingSphere._update(world,scale);
	}
	,extentsOverlap: function(min0,max0,min1,max1) {
		return !(min0 > max1 || min1 > max0);
	}
	,computeBoxExtents: function(axis,box) {
		var p = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(box.center,axis);
		var r0 = Math.abs(com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(box.directions[0],axis)) * box._extends.x;
		var r1 = Math.abs(com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(box.directions[1],axis)) * box._extends.y;
		var r2 = Math.abs(com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(box.directions[2],axis)) * box._extends.z;
		var r = r0 + r1 + r2;
		return { min : p - r, max : p + r};
	}
	,axisOverlap: function(axis,box0,box1) {
		var result0 = this.computeBoxExtents(axis,box0);
		var result1 = this.computeBoxExtents(axis,box1);
		return this.extentsOverlap(result0.min,result0.max,result1.min,result1.max);
	}
	,isInFrustrum: function(frustumPlanes) {
		if(!this.boundingSphere.isInFrustrum(frustumPlanes)) return false;
		return this.boundingBox.isInFrustrum(frustumPlanes);
	}
	,_checkCollision: function(collider) {
		return collider._canDoCollision(this.boundingSphere.centerWorld,this.boundingSphere.radiusWorld,this.boundingBox.minimumWorld,this.boundingBox.maximumWorld);
	}
	,intersectsPoint: function(point) {
		if(this.boundingSphere.centerWorld == null) return false;
		if(!this.boundingSphere.intersectsPoint(point)) return false;
		if(!this.boundingBox.intersectsPoint(point)) return false;
		return true;
	}
	,isInFrustum: function(frustumPlanes) {
		if(!this.boundingSphere.isInFrustrum(frustumPlanes)) return false;
		return this.boundingBox.isInFrustrum(frustumPlanes);
	}
	,intersects: function(boundingInfo,precise) {
		if(this.boundingSphere.centerWorld == null || boundingInfo.boundingSphere.centerWorld == null) return false;
		if(!com.gamestudiohx.babylonhx.culling.BoundingSphere.intersects(this.boundingSphere,boundingInfo.boundingSphere)) return false;
		if(!com.gamestudiohx.babylonhx.culling.BoundingBox.intersects(this.boundingBox,boundingInfo.boundingBox)) return false;
		if(!precise) return true;
		var box0 = this.boundingBox;
		var box1 = boundingInfo.boundingBox;
		if(!this.axisOverlap(box0.directions[0],box0,box1)) return false;
		if(!this.axisOverlap(box0.directions[1],box0,box1)) return false;
		if(!this.axisOverlap(box0.directions[2],box0,box1)) return false;
		if(!this.axisOverlap(box1.directions[0],box0,box1)) return false;
		if(!this.axisOverlap(box1.directions[1],box0,box1)) return false;
		if(!this.axisOverlap(box1.directions[2],box0,box1)) return false;
		if(!this.axisOverlap(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(box0.directions[0],box1.directions[0]),box0,box1)) return false;
		if(!this.axisOverlap(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(box0.directions[0],box1.directions[1]),box0,box1)) return false;
		if(!this.axisOverlap(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(box0.directions[0],box1.directions[2]),box0,box1)) return false;
		if(!this.axisOverlap(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(box0.directions[1],box1.directions[0]),box0,box1)) return false;
		if(!this.axisOverlap(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(box0.directions[1],box1.directions[1]),box0,box1)) return false;
		if(!this.axisOverlap(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(box0.directions[1],box1.directions[2]),box0,box1)) return false;
		if(!this.axisOverlap(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(box0.directions[2],box1.directions[0]),box0,box1)) return false;
		if(!this.axisOverlap(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(box0.directions[2],box1.directions[1]),box0,box1)) return false;
		if(!this.axisOverlap(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(box0.directions[2],box1.directions[2]),box0,box1)) return false;
		return true;
	}
	,__class__: com.gamestudiohx.babylonhx.culling.BoundingInfo
};
com.gamestudiohx.babylonhx.culling.BoundingSphere = function(minimum,maximum) {
	this.minimum = minimum;
	this.maximum = maximum;
	var distance = Math.sqrt(com.gamestudiohx.babylonhx.tools.math.Vector3.DistanceSquared(minimum,maximum));
	this.center = com.gamestudiohx.babylonhx.tools.math.Vector3.Lerp(minimum,maximum,0.5);
	this.radius = distance * 0.5;
	this.centerWorld = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._update(com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0));
};
$hxClasses["com.gamestudiohx.babylonhx.culling.BoundingSphere"] = com.gamestudiohx.babylonhx.culling.BoundingSphere;
com.gamestudiohx.babylonhx.culling.BoundingSphere.__name__ = ["com","gamestudiohx","babylonhx","culling","BoundingSphere"];
com.gamestudiohx.babylonhx.culling.BoundingSphere.intersects = function(sphere0,sphere1) {
	var x = sphere0.centerWorld.x - sphere1.centerWorld.x;
	var y = sphere0.centerWorld.y - sphere1.centerWorld.y;
	var z = sphere0.centerWorld.z - sphere1.centerWorld.z;
	var distance = Math.sqrt(x * x + y * y + z * z);
	if(sphere0.radiusWorld + sphere1.radiusWorld < distance) return false;
	return true;
};
com.gamestudiohx.babylonhx.culling.BoundingSphere.prototype = {
	_update: function(world,scale) {
		if(scale == null) scale = 1.0;
		com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesToRef(this.center,world,this.centerWorld);
		this.radiusWorld = this.radius * scale;
	}
	,isInFrustrum: function(frustumPlanes) {
		var _g = 0;
		while(_g < 6) {
			var i = _g++;
			if(frustumPlanes[i].dotCoordinate(this.centerWorld) <= -this.radiusWorld) return false;
		}
		return true;
	}
	,intersectsPoint: function(point) {
		var x = this.centerWorld.x - point.x;
		var y = this.centerWorld.y - point.y;
		var z = this.centerWorld.z - point.z;
		var distance = Math.sqrt(x * x + y * y + z * z);
		if(this.radiusWorld < distance) return false;
		return true;
	}
	,__class__: com.gamestudiohx.babylonhx.culling.BoundingSphere
};
com.gamestudiohx.babylonhx.culling.octrees = {};
com.gamestudiohx.babylonhx.culling.octrees.Octree = function(maxBlockCapacity) {
	if(maxBlockCapacity == null) maxBlockCapacity = 64;
	this.blocks = [];
	this._maxBlockCapacity = maxBlockCapacity;
	this._selection = [];
};
$hxClasses["com.gamestudiohx.babylonhx.culling.octrees.Octree"] = com.gamestudiohx.babylonhx.culling.octrees.Octree;
com.gamestudiohx.babylonhx.culling.octrees.Octree.__name__ = ["com","gamestudiohx","babylonhx","culling","octrees","Octree"];
com.gamestudiohx.babylonhx.culling.octrees.Octree._CreateBlocks = function(worldMin,worldMax,meshes,maxBlockCapacity,target) {
	target.blocks = [];
	var blockSize = new com.gamestudiohx.babylonhx.tools.math.Vector3((worldMax.x - worldMin.x) / 2,(worldMax.y - worldMin.y) / 2,(worldMax.z - worldMin.z) / 2);
	var _g = 0;
	while(_g < 2) {
		var x = _g++;
		var _g1 = 0;
		while(_g1 < 2) {
			var y = _g1++;
			var _g2 = 0;
			while(_g2 < 2) {
				var z = _g2++;
				var localMin = worldMin.add(new com.gamestudiohx.babylonhx.tools.math.Vector3(blockSize.x * x,blockSize.y * y,blockSize.z * z));
				var localMax = worldMin.add(new com.gamestudiohx.babylonhx.tools.math.Vector3(blockSize.x * (x + 1),blockSize.y * (y + 1),blockSize.z * (z + 1)));
				var block = new com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock(localMin,localMax,maxBlockCapacity);
				block.addEntries(meshes);
				target.blocks.push(block);
			}
		}
	}
};
com.gamestudiohx.babylonhx.culling.octrees.Octree.prototype = {
	update: function(worldMin,worldMax,meshes) {
		com.gamestudiohx.babylonhx.culling.octrees.Octree._CreateBlocks(worldMin,worldMax,meshes,this._maxBlockCapacity,this);
	}
	,addMesh: function(mesh) {
		var _g1 = 0;
		var _g = this.blocks.length;
		while(_g1 < _g) {
			var index = _g1++;
			var block = this.blocks[index];
			block.addMesh(mesh);
		}
	}
	,select: function(frustumPlanes) {
		var _g1 = 0;
		var _g = this.blocks.length;
		while(_g1 < _g) {
			var index = _g1++;
			var block = this.blocks[index];
			block.select(frustumPlanes,this._selection);
		}
		return this._selection;
	}
	,__class__: com.gamestudiohx.babylonhx.culling.octrees.Octree
};
com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock = function(minPoint,maxPoint,capacity) {
	this.subMeshes = [];
	this.meshes = [];
	this._capacity = capacity;
	this._minPoint = minPoint;
	this._maxPoint = maxPoint;
	this._boundingVectors = [];
	this._boundingVectors.push(new com.gamestudiohx.babylonhx.tools.math.Vector3(minPoint.x,minPoint.y,minPoint.z));
	this._boundingVectors.push(new com.gamestudiohx.babylonhx.tools.math.Vector3(maxPoint.x,maxPoint.y,maxPoint.z));
	this._boundingVectors.push(new com.gamestudiohx.babylonhx.tools.math.Vector3(minPoint.x,minPoint.y,minPoint.z));
	this._boundingVectors[2].x = maxPoint.x;
	this._boundingVectors.push(new com.gamestudiohx.babylonhx.tools.math.Vector3(minPoint.x,minPoint.y,minPoint.z));
	this._boundingVectors[3].y = maxPoint.y;
	this._boundingVectors.push(new com.gamestudiohx.babylonhx.tools.math.Vector3(minPoint.x,minPoint.y,minPoint.z));
	this._boundingVectors[4].z = maxPoint.z;
	this._boundingVectors.push(new com.gamestudiohx.babylonhx.tools.math.Vector3(maxPoint.x,maxPoint.y,maxPoint.z));
	this._boundingVectors[5].z = minPoint.z;
	this._boundingVectors.push(new com.gamestudiohx.babylonhx.tools.math.Vector3(maxPoint.x,maxPoint.y,maxPoint.z));
	this._boundingVectors[6].x = minPoint.x;
	this._boundingVectors.push(new com.gamestudiohx.babylonhx.tools.math.Vector3(maxPoint.x,maxPoint.y,maxPoint.z));
	this._boundingVectors[7].y = minPoint.y;
};
$hxClasses["com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock"] = com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock;
com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock.__name__ = ["com","gamestudiohx","babylonhx","culling","octrees","OctreeBlock"];
com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock.prototype = {
	addMesh: function(mesh) {
		if(this.blocks != null) {
			var _g1 = 0;
			var _g = this.blocks.length;
			while(_g1 < _g) {
				var index = _g1++;
				var block = this.blocks[index];
				block.addMesh(mesh);
			}
		} else {
			if(mesh.getBoundingInfo().boundingBox.intersectsMinMax(this._minPoint,this._maxPoint)) {
				var localMeshIndex = this.meshes.length;
				this.meshes.push(mesh);
				this.subMeshes[localMeshIndex] = [];
				var _g11 = 0;
				var _g2 = mesh.subMeshes.length;
				while(_g11 < _g2) {
					var subIndex = _g11++;
					var subMesh = mesh.subMeshes[subIndex];
					if(mesh.subMeshes.length == 1 || subMesh.getBoundingInfo().boundingBox.intersectsMinMax(this._minPoint,this._maxPoint)) this.subMeshes[localMeshIndex].push(subMesh);
				}
			}
			if(this.subMeshes.length > this._capacity) com.gamestudiohx.babylonhx.culling.octrees.Octree._CreateBlocks(this._minPoint,this._maxPoint,this.meshes,this._capacity,this);
		}
	}
	,addEntries: function(meshes) {
		var _g1 = 0;
		var _g = meshes.length;
		while(_g1 < _g) {
			var index = _g1++;
			var mesh = meshes[index];
			this.addMesh(mesh);
		}
	}
	,select: function(frustumPlanes,selection) {
		if(this.blocks != null && this.blocks.length > 0) {
			var _g1 = 0;
			var _g = this.blocks.length;
			while(_g1 < _g) {
				var index = _g1++;
				var block = this.blocks[index];
				block.select(frustumPlanes,selection);
			}
		} else if(com.gamestudiohx.babylonhx.culling.BoundingBox.IsInFrustum(this._boundingVectors,frustumPlanes)) selection.push(this);
	}
	,__class__: com.gamestudiohx.babylonhx.culling.octrees.OctreeBlock
};
com.gamestudiohx.babylonhx.layer = {};
com.gamestudiohx.babylonhx.layer.Layer = function(name,imgUrl,scene,isBackground,color) {
	if(isBackground == null) isBackground = true;
	this.name = name;
	if(imgUrl != null) this.texture = new com.gamestudiohx.babylonhx.materials.textures.Texture(imgUrl,scene,true); else this.texture = null;
	this.isBackground = isBackground;
	if(color == null) this.color = new com.gamestudiohx.babylonhx.tools.math.Color4(1,1,1,1); else this.color = color;
	this._scene = scene;
	this._scene.layers.push(this);
	var vertices = [];
	vertices.push(1);
	vertices.push(1);
	vertices.push(-1);
	vertices.push(1);
	vertices.push(-1);
	vertices.push(-1);
	vertices.push(1);
	vertices.push(-1);
	this._vertexDeclaration = [2];
	this._vertexStrideSize = 8;
	this._vertexBuffer = scene.getEngine().createVertexBuffer(vertices);
	var indices = [];
	indices.push(0);
	indices.push(1);
	indices.push(2);
	indices.push(0);
	indices.push(2);
	indices.push(3);
	this._indexBuffer = scene.getEngine().createIndexBuffer(indices);
	this._effect = this._scene.getEngine().createEffect("layer",["position"],["textureMatrix","color"],["textureSampler"],"");
};
$hxClasses["com.gamestudiohx.babylonhx.layer.Layer"] = com.gamestudiohx.babylonhx.layer.Layer;
com.gamestudiohx.babylonhx.layer.Layer.__name__ = ["com","gamestudiohx","babylonhx","layer","Layer"];
com.gamestudiohx.babylonhx.layer.Layer.prototype = {
	render: function() {
		if(!this._effect.isReady() || this.texture == null || !this.texture.isReady()) return;
		var engine = this._scene.getEngine();
		engine.enableEffect(this._effect);
		engine.setState(false);
		this._effect.setTexture("textureSampler",this.texture);
		this._effect.setMatrix("textureMatrix",this.texture._computeTextureMatrix());
		this._effect.setFloat4("color",this.color.r,this.color.g,this.color.b,this.color.a);
		engine.bindBuffers(this._vertexBuffer,this._indexBuffer,this._vertexDeclaration,this._vertexStrideSize,this._effect);
		engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_COMBINE);
		engine.draw(true,0,6);
		engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_DISABLE);
	}
	,dispose: function() {
		if(this._vertexBuffer != null) {
			this._scene.getEngine()._releaseBuffer(this._vertexBuffer);
			this._vertexBuffer = null;
		}
		if(this._indexBuffer != null) {
			this._scene.getEngine()._releaseBuffer(this._indexBuffer);
			this._indexBuffer = null;
		}
		if(this.texture != null) {
			this.texture.dispose();
			this.texture = null;
		}
		var index = Lambda.indexOf(this._scene.layers,this);
		this._scene.layers.splice(index,1);
		if(this.onDispose != null) this.onDispose();
	}
	,__class__: com.gamestudiohx.babylonhx.layer.Layer
};
com.gamestudiohx.babylonhx.lensflare = {};
com.gamestudiohx.babylonhx.lensflare.LensFlare = function(size,position,color,imgUrl,system) {
	if(color != null) this.color = color; else this.color = new com.gamestudiohx.babylonhx.tools.math.Color3(1,1,1);
	this.position = position;
	this.size = size;
	if(imgUrl != null) this.texture = new com.gamestudiohx.babylonhx.materials.textures.Texture(imgUrl,system.getScene(),true); else this.texture = null;
	this._system = system;
	this._system.lensFlares.push(this);
};
$hxClasses["com.gamestudiohx.babylonhx.lensflare.LensFlare"] = com.gamestudiohx.babylonhx.lensflare.LensFlare;
com.gamestudiohx.babylonhx.lensflare.LensFlare.__name__ = ["com","gamestudiohx","babylonhx","lensflare","LensFlare"];
com.gamestudiohx.babylonhx.lensflare.LensFlare.prototype = {
	dispose: function() {
		if(this.texture != null) this.texture.dispose();
		HxOverrides.remove(this._system.lensFlares,this);
	}
	,__class__: com.gamestudiohx.babylonhx.lensflare.LensFlare
};
com.gamestudiohx.babylonhx.lensflare.LensFlareSystem = function(name,emitter,scene) {
	this.lensFlares = [];
	this._scene = scene;
	this._emitter = emitter;
	this.name = name;
	this.borderLimit = 300;
	scene.lensFlareSystems.push(this);
	var vertices = [];
	vertices.push(1);
	vertices.push(1);
	vertices.push(-1);
	vertices.push(1);
	vertices.push(-1);
	vertices.push(-1);
	vertices.push(1);
	vertices.push(-1);
	this._vertexDeclaration = [2];
	this._vertexStrideSize = 8;
	this._vertexBuffer = scene.getEngine().createVertexBuffer(vertices);
	var indices = [];
	indices.push(0);
	indices.push(1);
	indices.push(2);
	indices.push(0);
	indices.push(2);
	indices.push(3);
	this._indexBuffer = scene.getEngine().createIndexBuffer(indices);
	this._effect = this._scene.getEngine().createEffect("lensFlare",["position"],["color","viewportMatrix"],["textureSampler"],"");
	this.meshesSelectionPredicate = function(m) {
		return m.material != null && m.isVisible && m.isEnabled() && m.checkCollisions;
	};
};
$hxClasses["com.gamestudiohx.babylonhx.lensflare.LensFlareSystem"] = com.gamestudiohx.babylonhx.lensflare.LensFlareSystem;
com.gamestudiohx.babylonhx.lensflare.LensFlareSystem.__name__ = ["com","gamestudiohx","babylonhx","lensflare","LensFlareSystem"];
com.gamestudiohx.babylonhx.lensflare.LensFlareSystem.prototype = {
	getScene: function() {
		return this._scene;
	}
	,getEmitterPosition: function() {
		if(Reflect.field(this._emitter,"getAbsolutePosition") != null) return this._emitter.getAbsolutePosition(); else return this._emitter.position;
	}
	,computeEffectivePosition: function(globalViewport) {
		var position = this.getEmitterPosition();
		position = com.gamestudiohx.babylonhx.tools.math.Vector3.Project(position,com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0),this._scene._transformMatrix,globalViewport);
		this._positionX = position.x;
		this._positionY = position.y;
		position = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(this.getEmitterPosition(),this._scene.getViewMatrix());
		if(position.z > 0) {
			if(this._positionX > globalViewport.x && this._positionX < globalViewport.x + globalViewport.width) {
				if(this._positionY > globalViewport.y && this._positionY < globalViewport.y + globalViewport.height) return true;
			}
		}
		return false;
	}
	,_isVisible: function() {
		var emitterPosition = this.getEmitterPosition();
		var direction = emitterPosition.subtract(this._scene.activeCamera.position);
		var distance = Math.sqrt(direction.x * direction.x + direction.y * direction.y + direction.z * direction.z);
		direction.normalize();
		var ray = new com.gamestudiohx.babylonhx.tools.math.Ray(this._scene.activeCamera.position,direction);
		var pickInfo = this._scene.pickWithRay(ray,this.meshesSelectionPredicate,true);
		return !pickInfo.hit || pickInfo.distance > distance;
	}
	,render: function() {
		if(!this._effect.isReady()) return false;
		var engine = this._scene.getEngine();
		var viewport = this._scene.activeCamera.viewport;
		var globalViewport = viewport.toGlobal(engine);
		if(!this.computeEffectivePosition(globalViewport)) return false;
		if(!this._isVisible()) return false;
		var awayX = 0;
		var awayY = 0;
		if(this._positionX < this.borderLimit + globalViewport.x) awayX = this.borderLimit + globalViewport.x - this._positionX; else if(this._positionX > globalViewport.x + globalViewport.width - this.borderLimit) awayX = this._positionX - globalViewport.x - globalViewport.width + this.borderLimit; else awayX = 0;
		if(this._positionY < this.borderLimit + globalViewport.y) awayY = this.borderLimit + globalViewport.y - this._positionY; else if(this._positionY > globalViewport.y + globalViewport.height - this.borderLimit) awayY = this._positionY - globalViewport.y - globalViewport.height + this.borderLimit; else awayY = 0;
		var away;
		if(awayX > awayY) away = awayX; else away = awayY;
		if(away > this.borderLimit) away = this.borderLimit;
		var intensity = 1.0 - away / this.borderLimit;
		if(intensity < 0) return false;
		if(intensity > 1.0) intensity = 1.0;
		var centerX = globalViewport.x + globalViewport.width / 2;
		var centerY = globalViewport.y + globalViewport.height / 2;
		var distX = centerX - this._positionX;
		var distY = centerY - this._positionY;
		engine.enableEffect(this._effect);
		engine.setState(false);
		engine.setDepthBuffer(false);
		engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_ADD);
		engine.bindBuffers(this._vertexBuffer,this._indexBuffer,this._vertexDeclaration,this._vertexStrideSize,this._effect);
		var _g1 = 0;
		var _g = this.lensFlares.length;
		while(_g1 < _g) {
			var index = _g1++;
			var flare = this.lensFlares[index];
			var x = centerX - distX * flare.position;
			var y = centerY - distY * flare.position;
			var cw = flare.size;
			var ch = flare.size * engine.getAspectRatio(this._scene.activeCamera);
			var cx = 2 * (x / globalViewport.width) - 1.0;
			var cy = 1.0 - 2 * (y / globalViewport.height);
			var viewportMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(cw / 2,0,0,0,0,ch / 2,0,0,0,0,1,0,cx,cy,0,1);
			this._effect.setMatrix("viewportMatrix",viewportMatrix);
			this._effect.setTexture("textureSampler",flare.texture);
			this._effect.setFloat4("color",flare.color.r * intensity,flare.color.g * intensity,flare.color.b * intensity,1.0);
			engine.draw(true,0,6);
		}
		engine.setDepthBuffer(true);
		engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_DISABLE);
		return true;
	}
	,dispose: function() {
		if(this._vertexBuffer != null) {
			this._scene.getEngine()._releaseBuffer(this._vertexBuffer);
			this._vertexBuffer = null;
		}
		if(this._indexBuffer != null) {
			this._scene.getEngine()._releaseBuffer(this._indexBuffer);
			this._indexBuffer = null;
		}
		while(this.lensFlares.length > 0) this.lensFlares[0].dispose();
		HxOverrides.remove(this._scene.lensFlareSystems,this);
	}
	,__class__: com.gamestudiohx.babylonhx.lensflare.LensFlareSystem
};
com.gamestudiohx.babylonhx.lights = {};
com.gamestudiohx.babylonhx.lights.Light = function(name,scene) {
	this.intensity = 1.0;
	com.gamestudiohx.babylonhx.Node.call(this,scene);
	this.name = name;
	this.id = name;
	this._childrenFlag = 1;
	this._scene = scene;
	this._scene.lights.push(this);
	this.animations = [];
	this.excludedMeshes = [];
};
$hxClasses["com.gamestudiohx.babylonhx.lights.Light"] = com.gamestudiohx.babylonhx.lights.Light;
com.gamestudiohx.babylonhx.lights.Light.__name__ = ["com","gamestudiohx","babylonhx","lights","Light"];
com.gamestudiohx.babylonhx.lights.Light.__super__ = com.gamestudiohx.babylonhx.Node;
com.gamestudiohx.babylonhx.lights.Light.prototype = $extend(com.gamestudiohx.babylonhx.Node.prototype,{
	getScene: function() {
		return this._scene;
	}
	,getShadowGenerator: function() {
		return this._shadowGenerator;
	}
	,transferToEffect: function(effect,positionUniformName,directionUniformName) {
		if(directionUniformName == null) directionUniformName = "";
		if(positionUniformName == null) positionUniformName = "";
	}
	,_getWorldMatrix: function() {
		return com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	}
	,getWorldMatrix: function() {
		var worldMatrix = this._getWorldMatrix();
		if(this.parent != null && this.parent.getWorldMatrix() != null) {
			if(this._parentedWorldMatrix == null) this._parentedWorldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
			worldMatrix.multiplyToRef(this.parent.getWorldMatrix(),this._parentedWorldMatrix);
			return this._parentedWorldMatrix;
		}
		return worldMatrix;
	}
	,dispose: function() {
		if(this._shadowGenerator != null) {
			this._shadowGenerator.dispose();
			this._shadowGenerator = null;
		}
		var index = Lambda.indexOf(this._scene.lights,this);
		this._scene.lights.splice(index,1);
	}
	,__class__: com.gamestudiohx.babylonhx.lights.Light
});
com.gamestudiohx.babylonhx.lights.DirectionalLight = function(name,direction,scene) {
	com.gamestudiohx.babylonhx.lights.Light.call(this,name,scene);
	this.position = new com.gamestudiohx.babylonhx.tools.math.Vector3(direction.x * -1,direction.y * -1,direction.z * -1);
	this.direction = direction;
	this.diffuse = new com.gamestudiohx.babylonhx.tools.math.Color3(1.0,1.0,1.0);
	this.specular = new com.gamestudiohx.babylonhx.tools.math.Color3(1.0,1.0,1.0);
};
$hxClasses["com.gamestudiohx.babylonhx.lights.DirectionalLight"] = com.gamestudiohx.babylonhx.lights.DirectionalLight;
com.gamestudiohx.babylonhx.lights.DirectionalLight.__name__ = ["com","gamestudiohx","babylonhx","lights","DirectionalLight"];
com.gamestudiohx.babylonhx.lights.DirectionalLight.__super__ = com.gamestudiohx.babylonhx.lights.Light;
com.gamestudiohx.babylonhx.lights.DirectionalLight.prototype = $extend(com.gamestudiohx.babylonhx.lights.Light.prototype,{
	_computeTransformedPosition: function() {
		var ret = false;
		if(this.parent != null && this.parent.getWorldMatrix() != null) {
			if(this._transformedPosition == null) this._transformedPosition = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesToRef(this.position,this.parent.getWorldMatrix(),this._transformedPosition);
			ret = true;
		}
		return ret;
	}
	,transferToEffect: function(effect,positionUniformName,directionUniformName) {
		if(directionUniformName == null) directionUniformName = "";
		if(positionUniformName == null) positionUniformName = "";
		if(this.parent != null && this.parent.getWorldMatrix() != null) {
			if(this._transformedDirection == null) this._transformedDirection = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormalToRef(this.direction,this.parent.getWorldMatrix(),this._transformedDirection);
			effect.setFloat4(directionUniformName,this._transformedDirection.x,this._transformedDirection.y,this._transformedDirection.z,1);
		} else effect.setFloat4(directionUniformName,this.direction.x,this.direction.y,this.direction.z,1);
	}
	,_getWorldMatrix: function() {
		if(this._worldMatrix == null) this._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
		com.gamestudiohx.babylonhx.tools.math.Matrix.TranslationToRef(this.position.x,this.position.y,this.position.z,this._worldMatrix);
		return this._worldMatrix;
	}
	,__class__: com.gamestudiohx.babylonhx.lights.DirectionalLight
});
com.gamestudiohx.babylonhx.lights.HemisphericLight = function(name,direction,scene) {
	com.gamestudiohx.babylonhx.lights.Light.call(this,name,scene);
	this.direction = direction;
	this.diffuse = new com.gamestudiohx.babylonhx.tools.math.Color3(1.0,1.0,1.0);
	this.specular = new com.gamestudiohx.babylonhx.tools.math.Color3(1.0,1.0,1.0);
	this.groundColor = new com.gamestudiohx.babylonhx.tools.math.Color3(0.0,0.0,0.0);
};
$hxClasses["com.gamestudiohx.babylonhx.lights.HemisphericLight"] = com.gamestudiohx.babylonhx.lights.HemisphericLight;
com.gamestudiohx.babylonhx.lights.HemisphericLight.__name__ = ["com","gamestudiohx","babylonhx","lights","HemisphericLight"];
com.gamestudiohx.babylonhx.lights.HemisphericLight.__super__ = com.gamestudiohx.babylonhx.lights.Light;
com.gamestudiohx.babylonhx.lights.HemisphericLight.prototype = $extend(com.gamestudiohx.babylonhx.lights.Light.prototype,{
	getShadowGenerator: function() {
		return null;
	}
	,transferToEffect: function(effect,directionUniformName,groundColorUniformName) {
		if(groundColorUniformName == null) groundColorUniformName = "";
		if(directionUniformName == null) directionUniformName = "";
		var normalizeDirection = com.gamestudiohx.babylonhx.tools.math.Vector3.Normalize(this.direction);
		effect.setFloat4(directionUniformName,normalizeDirection.x,normalizeDirection.y,normalizeDirection.z,0);
		effect.setColor3(groundColorUniformName,this.groundColor.scale(this.intensity));
	}
	,_getWorldMatrix: function() {
		if(this._worldMatrix == null) this._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
		return this._worldMatrix;
	}
	,__class__: com.gamestudiohx.babylonhx.lights.HemisphericLight
});
com.gamestudiohx.babylonhx.lights.PointLight = function(name,position,scene) {
	com.gamestudiohx.babylonhx.lights.Light.call(this,name,scene);
	this.position = position;
	this.diffuse = new com.gamestudiohx.babylonhx.tools.math.Color3(1.0,1.0,1.0);
	this.specular = new com.gamestudiohx.babylonhx.tools.math.Color3(1.0,1.0,1.0);
};
$hxClasses["com.gamestudiohx.babylonhx.lights.PointLight"] = com.gamestudiohx.babylonhx.lights.PointLight;
com.gamestudiohx.babylonhx.lights.PointLight.__name__ = ["com","gamestudiohx","babylonhx","lights","PointLight"];
com.gamestudiohx.babylonhx.lights.PointLight.__super__ = com.gamestudiohx.babylonhx.lights.Light;
com.gamestudiohx.babylonhx.lights.PointLight.prototype = $extend(com.gamestudiohx.babylonhx.lights.Light.prototype,{
	transferToEffect: function(effect,positionUniformName,directionUniformName) {
		if(directionUniformName == null) directionUniformName = "";
		if(positionUniformName == null) positionUniformName = "";
		if(this.parent != null && this.parent.getWorldMatrix() != null) {
			if(this._transformedPosition == null) this._transformedPosition = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesToRef(this.position,this.parent.getWorldMatrix(),this._transformedPosition);
			effect.setFloat4(positionUniformName,this._transformedPosition.x,this._transformedPosition.y,this._transformedPosition.z,0);
		} else effect.setFloat4(positionUniformName,this.position.x,this.position.y,this.position.z,0);
	}
	,getShadowGenerator: function() {
		return null;
	}
	,_getWorldMatrix: function() {
		if(this._worldMatrix == null) this._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
		com.gamestudiohx.babylonhx.tools.math.Matrix.TranslationToRef(this.position.x,this.position.y,this.position.z,this._worldMatrix);
		return this._worldMatrix;
	}
	,__class__: com.gamestudiohx.babylonhx.lights.PointLight
});
com.gamestudiohx.babylonhx.lights.SpotLight = function(name,position,direction,angle,exponent,scene) {
	com.gamestudiohx.babylonhx.lights.Light.call(this,name,scene);
	this.position = position;
	this.direction = direction;
	this.angle = angle;
	this.exponent = exponent;
	this.diffuse = new com.gamestudiohx.babylonhx.tools.math.Color3(1.0,1.0,1.0);
	this.specular = new com.gamestudiohx.babylonhx.tools.math.Color3(1.0,1.0,1.0);
};
$hxClasses["com.gamestudiohx.babylonhx.lights.SpotLight"] = com.gamestudiohx.babylonhx.lights.SpotLight;
com.gamestudiohx.babylonhx.lights.SpotLight.__name__ = ["com","gamestudiohx","babylonhx","lights","SpotLight"];
com.gamestudiohx.babylonhx.lights.SpotLight.__super__ = com.gamestudiohx.babylonhx.lights.Light;
com.gamestudiohx.babylonhx.lights.SpotLight.prototype = $extend(com.gamestudiohx.babylonhx.lights.Light.prototype,{
	transferToEffect: function(effect,positionUniformName,directionUniformName) {
		if(directionUniformName == null) directionUniformName = "";
		if(positionUniformName == null) positionUniformName = "";
		var normalizeDirection = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
		if(this.parent != null && this.parent.getWorldMatrix() != null) {
			if(this._transformedDirection == null) this._transformedDirection = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			if(this._transformedPosition == null) this._transformedPosition = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			var parentWorldMatrix = this.parent.getWorldMatrix();
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesToRef(this.position,parentWorldMatrix,this._transformedPosition);
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormalToRef(this.direction,parentWorldMatrix,this._transformedDirection);
			effect.setFloat4(positionUniformName,this._transformedPosition.x,this._transformedPosition.y,this._transformedPosition.z,this.exponent);
			normalizeDirection = com.gamestudiohx.babylonhx.tools.math.Vector3.Normalize(this._transformedDirection);
		} else {
			effect.setFloat4(positionUniformName,this.position.x,this.position.y,this.position.z,this.exponent);
			normalizeDirection = com.gamestudiohx.babylonhx.tools.math.Vector3.Normalize(this.direction);
		}
		effect.setFloat4(directionUniformName,normalizeDirection.x,normalizeDirection.y,normalizeDirection.z,Math.cos(this.angle * 0.5));
	}
	,_getWorldMatrix: function() {
		if(this._worldMatrix == null) this._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
		com.gamestudiohx.babylonhx.tools.math.Matrix.TranslationToRef(this.position.x,this.position.y,this.position.z,this._worldMatrix);
		return this._worldMatrix;
	}
	,__class__: com.gamestudiohx.babylonhx.lights.SpotLight
});
com.gamestudiohx.babylonhx.lights.shadows = {};
com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator = function(mapSize,light) {
	var _g = this;
	this._light = light;
	this._scene = light.getScene();
	light._shadowGenerator = this;
	this._shadowMap = new com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture(light.name + "_shadowMap",mapSize,this._scene,false);
	this._shadowMap.wrapU = com.gamestudiohx.babylonhx.materials.textures.Texture.CLAMP_ADDRESSMODE;
	this._shadowMap.wrapV = com.gamestudiohx.babylonhx.materials.textures.Texture.CLAMP_ADDRESSMODE;
	this._shadowMap.renderParticles = false;
	var renderSubMesh = function(subMesh) {
		var mesh = subMesh.getMesh();
		var world;
		if(mesh._currentRenderId != mesh._scene.getRenderId()) mesh.computeWorldMatrix(null);
		world = mesh._worldMatrix;
		var engine = _g._scene.getEngine();
		if(_g.isReady(mesh)) {
			engine.enableEffect(_g._effect);
			if(mesh.skeleton != null && mesh.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind) && mesh.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind)) {
				_g._effect.setMatrix("world",world);
				_g._effect.setMatrix("viewProjection",_g.getTransformMatrix());
				_g._effect.setMatrices("mBones",mesh.skeleton.getTransformMatrices());
			} else {
				world.multiplyToRef(_g.getTransformMatrix(),_g._worldViewProjection);
				_g._effect.setMatrix("worldViewProjection",_g._worldViewProjection);
			}
			mesh.bindAndDraw(subMesh,_g._effect,false);
		}
	};
	this._shadowMap.customRenderFunction = function(opaqueSubMeshes,alphaTestSubMeshes) {
		var _g1 = 0;
		var _g2 = opaqueSubMeshes.length;
		while(_g1 < _g2) {
			var index = _g1++;
			renderSubMesh(opaqueSubMeshes.data[index]);
		}
		var _g11 = 0;
		var _g3 = alphaTestSubMeshes.length;
		while(_g11 < _g3) {
			var index1 = _g11++;
			renderSubMesh(alphaTestSubMeshes.data[index1]);
		}
	};
	this._viewMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._projectionMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._transformMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._worldViewProjection = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this.useVarianceShadowMap = true;
};
$hxClasses["com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator"] = com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator;
com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator.__name__ = ["com","gamestudiohx","babylonhx","lights","shadows","ShadowGenerator"];
com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator.prototype = {
	isReady: function(mesh) {
		var defines = [];
		if(this.useVarianceShadowMap) defines.push("#define VSM");
		var attribs = [com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind];
		if(mesh.skeleton != null && mesh.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind) && mesh.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind)) {
			attribs.push(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind);
			attribs.push(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind);
			defines.push("#define BONES");
			defines.push("#define BonesPerMesh " + mesh.skeleton.bones.length);
		}
		var join = defines.join("\n");
		if(this._cachedDefines != join) {
			this._cachedDefines = join;
			this._effect = this._scene.getEngine().createEffect("shadowMap",attribs,["world","mBones","viewProjection","worldViewProjection"],[],join);
		}
		return this._effect.isReady();
	}
	,getShadowMap: function() {
		return this._shadowMap;
	}
	,getLight: function() {
		return this._light;
	}
	,getTransformMatrix: function() {
		var lightPosition = Reflect.field(this._light,"position");
		var lightDirection = Reflect.field(this._light,"direction");
		if((js.Boot.__cast(this._light , com.gamestudiohx.babylonhx.lights.DirectionalLight))._computeTransformedPosition()) lightPosition = (js.Boot.__cast(this._light , com.gamestudiohx.babylonhx.lights.DirectionalLight))._transformedPosition;
		if(this._cachedPosition == null || this._cachedDirection == null || !lightPosition.equals(this._cachedPosition) || !lightDirection.equals(this._cachedDirection)) {
			this._cachedPosition = new com.gamestudiohx.babylonhx.tools.math.Vector3(lightPosition.x,lightPosition.y,lightPosition.z);
			this._cachedDirection = lightDirection.clone();
			var activeCamera = this._scene.activeCamera;
			com.gamestudiohx.babylonhx.tools.math.Matrix.LookAtLHToRef(lightPosition,Reflect.field(this._light,"position").add(lightDirection),com.gamestudiohx.babylonhx.tools.math.Vector3.Up(),this._viewMatrix);
			com.gamestudiohx.babylonhx.tools.math.Matrix.PerspectiveFovLHToRef(Math.PI / 2.0,1.0,activeCamera.minZ,activeCamera.maxZ,this._projectionMatrix);
			this._viewMatrix.multiplyToArray(this._projectionMatrix,this._transformMatrix.m,0);
		}
		return this._transformMatrix;
	}
	,dispose: function() {
		this._shadowMap.dispose();
		this._shadowMap = null;
	}
	,__class__: com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator
};
com.gamestudiohx.babylonhx.materials = {};
com.gamestudiohx.babylonhx.materials.Effect = function(baseName,attributesNames,uniformsNames,samplers,engine,defines,optionalDefines,onCompiled,onError) {
	this._engine = engine;
	this.name = baseName;
	this.defines = defines;
	this._uniformsNames = uniformsNames.concat(samplers);
	this._samplers = samplers;
	this._isReady = false;
	this._compilationError = "";
	this._attributesNames = attributesNames;
	if(onError != null) this.onError = onError;
	if(onCompiled != null) this.onCompiled = onCompiled;
	var vertex;
	if(Reflect.field(baseName,"vertex") != null) vertex = baseName.vertex; else vertex = baseName;
	var fragment;
	if(Reflect.field(baseName,"fragment") != null) fragment = baseName.fragment; else fragment = baseName;
	var vertexShaderUrl = "";
	if(vertex.charAt(0) == ".") vertexShaderUrl = vertex; else vertexShaderUrl = com.gamestudiohx.babylonhx.Engine.ShadersRepository + vertex;
	var fragmentShaderUrl = "";
	if(fragment.charAt(0) == ".") fragmentShaderUrl = fragment; else fragmentShaderUrl = com.gamestudiohx.babylonhx.Engine.ShadersRepository + fragment;
	var _vertexCode = "";
	if(com.gamestudiohx.babylonhx.materials.Effect.ShadersStore.exists(vertex + "VertexShader")) _vertexCode = com.gamestudiohx.babylonhx.materials.Effect.ShadersStore.get(vertex + "VertexShader"); else _vertexCode = StringTools.trim(openfl.Assets.getText(vertexShaderUrl + ".vertex.txt"));
	var _fragmentCode = "";
	if(com.gamestudiohx.babylonhx.materials.Effect.ShadersStore.exists(fragment + "PixelShader")) _fragmentCode = com.gamestudiohx.babylonhx.materials.Effect.ShadersStore.get(fragment + "PixelShader"); else _fragmentCode = StringTools.trim(openfl.Assets.getText(fragmentShaderUrl + ".fragment.txt"));
	this._prepareEffect(_vertexCode,_fragmentCode,attributesNames,defines,optionalDefines,false);
	this._valueCache = new haxe.ds.StringMap();
};
$hxClasses["com.gamestudiohx.babylonhx.materials.Effect"] = com.gamestudiohx.babylonhx.materials.Effect;
com.gamestudiohx.babylonhx.materials.Effect.__name__ = ["com","gamestudiohx","babylonhx","materials","Effect"];
com.gamestudiohx.babylonhx.materials.Effect.prototype = {
	isReady: function() {
		return this._isReady;
	}
	,getAttributeLocationByName: function(name) {
		var index = HxOverrides.indexOf(this._attributesNames,name,0);
		return this._attributes[index];
	}
	,getProgram: function() {
		return this._program;
	}
	,getAttributesNames: function() {
		return this._attributesNames;
	}
	,getAttribute: function(index) {
		return this._attributes[index];
	}
	,getAttributesCount: function() {
		return this._attributes.length;
	}
	,getUniformIndex: function(uniformName) {
		return Lambda.indexOf(this._uniformsNames,uniformName);
	}
	,getUniform: function(uniformName) {
		return this._uniforms[Lambda.indexOf(this._uniformsNames,uniformName)];
	}
	,getSamplers: function() {
		return this._samplers;
	}
	,getCompilationError: function() {
		return this._compilationError;
	}
	,_loadVertexShader: function(vertex,callbackFn) {
		if(com.gamestudiohx.babylonhx.materials.Effect.ShadersStore.exists(vertex + "VertexShader")) {
			callbackFn(com.gamestudiohx.babylonhx.materials.Effect.ShadersStore.get(vertex + "VertexShader"));
			return;
		}
		var vertexShaderUrl = "";
		if(vertex.charAt(0) == ".") vertexShaderUrl = vertex; else vertexShaderUrl = com.gamestudiohx.babylonhx.Engine.ShadersRepository + vertex;
		com.gamestudiohx.babylonhx.tools.Tools.LoadFile(vertexShaderUrl + ".vertex.fx",callbackFn);
	}
	,_loadFragmentShader: function(fragment,callbackFn) {
		if(com.gamestudiohx.babylonhx.materials.Effect.ShadersStore.exists(fragment + "PixelShader")) {
			callbackFn(com.gamestudiohx.babylonhx.materials.Effect.ShadersStore.get(fragment + "PixelShader"));
			return;
		}
		var fragmentShaderUrl = "";
		if(fragment.charAt(0) == ".") fragmentShaderUrl = fragment; else fragmentShaderUrl = com.gamestudiohx.babylonhx.Engine.ShadersRepository + fragment;
		com.gamestudiohx.babylonhx.tools.Tools.LoadFile(fragmentShaderUrl + ".fragment.fx",callbackFn);
	}
	,_prepareEffect: function(vertexSourceCode,fragmentSourceCode,attributesNames,defines,optionalDefines,useFallback) {
		try {
			var engine = this._engine;
			if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) {
				haxe.Log.trace(defines,{ fileName : "Effect.hx", lineNumber : 207, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
				haxe.Log.trace("prepareEffect pre built..",{ fileName : "Effect.hx", lineNumber : 208, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
				haxe.Log.trace("vertex ----------",{ fileName : "Effect.hx", lineNumber : 209, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
				haxe.Log.trace(vertexSourceCode,{ fileName : "Effect.hx", lineNumber : 210, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
				haxe.Log.trace("vertex ----------",{ fileName : "Effect.hx", lineNumber : 211, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
				haxe.Log.trace("fragmentSourceCode ----------",{ fileName : "Effect.hx", lineNumber : 212, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
				haxe.Log.trace(fragmentSourceCode,{ fileName : "Effect.hx", lineNumber : 213, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
				haxe.Log.trace("fragmentSourceCode ----------",{ fileName : "Effect.hx", lineNumber : 214, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
			}
			this._program = engine.createShaderProgram(vertexSourceCode,fragmentSourceCode,defines);
			this._uniforms = engine.getUniforms(this._program,this._uniformsNames);
			this._attributes = engine.getAttributes(this._program,attributesNames);
			var index = 0;
			while(index < this._samplers.length) {
				var sampler = this.getUniform(this._samplers[index]);
				if(sampler == null) {
					this._samplers.splice(index,1);
					index--;
				}
				index++;
			}
			engine.bindSamplers(this);
			this._isReady = true;
		} catch( e ) {
			haxe.Log.trace(e,{ fileName : "Effect.hx", lineNumber : 237, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
			if(!useFallback && optionalDefines != null) {
				var _g1 = 0;
				var _g = optionalDefines.length;
				while(_g1 < _g) {
					var index1 = _g1++;
					defines = StringTools.replace(defines,optionalDefines[index1],"");
				}
				this._prepareEffect(vertexSourceCode,fragmentSourceCode,attributesNames,defines,optionalDefines,true);
			} else {
				haxe.Log.trace("Unable to compile effect: " + Std.string(this.name),{ fileName : "Effect.hx", lineNumber : 244, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
				haxe.Log.trace("Defines: " + defines,{ fileName : "Effect.hx", lineNumber : 245, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
				haxe.Log.trace("Optional defines: " + Std.string(optionalDefines),{ fileName : "Effect.hx", lineNumber : 246, className : "com.gamestudiohx.babylonhx.materials.Effect", methodName : "_prepareEffect"});
				this._compilationError = e;
			}
		}
	}
	,_bindTexture: function(channel,texture) {
		this._engine._bindTexture(Lambda.indexOf(this._samplers,channel),texture);
	}
	,setTexture: function(channel,texture) {
		this._engine.setTexture(Lambda.indexOf(this._samplers,channel),texture);
	}
	,setTextureFromPostProcess: function(channel,postProcess) {
		this._engine.setTextureFromPostProcess(Lambda.indexOf(this._samplers,channel),postProcess);
	}
	,_cacheFloat2: function(uniformName,x,y) {
		if(!this._valueCache.exists(uniformName)) this._valueCache.set(uniformName,[x,y]); else {
			this._valueCache.get(uniformName)[0] = x;
			this._valueCache.get(uniformName)[1] = y;
		}
	}
	,_cacheFloat3: function(uniformName,x,y,z) {
		if(!this._valueCache.exists(uniformName)) this._valueCache.set(uniformName,[x,y,z]); else {
			this._valueCache.get(uniformName)[0] = x;
			this._valueCache.get(uniformName)[1] = y;
			this._valueCache.get(uniformName)[2] = z;
		}
	}
	,_cacheFloat4: function(uniformName,x,y,z,w) {
		if(!this._valueCache.exists(uniformName)) this._valueCache.set(uniformName,[x,y,z,w]); else {
			this._valueCache.get(uniformName)[0] = x;
			this._valueCache.get(uniformName)[1] = y;
			this._valueCache.get(uniformName)[2] = z;
			this._valueCache.get(uniformName)[3] = w;
		}
	}
	,setMatrices: function(uniformName,matrices) {
		this._engine.setMatrices(this.getUniform(uniformName),matrices);
	}
	,setArray: function(uniformName,array) {
		this._engine.setArray(this.getUniform(uniformName),array);
		return this;
	}
	,setMatrix: function(uniformName,matrix) {
		this._engine.setMatrix(this.getUniform(uniformName),matrix);
	}
	,setFloat: function(uniformName,value) {
		if(!(this._valueCache.exists(uniformName) && this._valueCache.get(uniformName)[0] == value)) {
			this._valueCache.set(uniformName,[value]);
			this._engine.setFloat(this.getUniform(uniformName),value);
		}
	}
	,setBool: function(uniformName,bool) {
		if(!(this._valueCache.exists(uniformName) && this._valueCache.get(uniformName)[0] == (bool?1.0:0.0))) {
			this._valueCache.set(uniformName,bool?[1.0]:[0.0]);
			this._engine.setBool(this.getUniform(uniformName),bool);
		}
	}
	,setVector2: function(uniformName,vector2) {
		if(!(this._valueCache.exists(uniformName) && this._valueCache.get(uniformName)[0] == vector2.x && this._valueCache.get(uniformName)[1] == vector2.y)) {
			this._cacheFloat2(uniformName,vector2.x,vector2.y);
			this._engine.setFloat2(this.getUniform(uniformName),vector2.x,vector2.y);
		}
	}
	,setFloat2: function(uniformName,x,y) {
		if(!(this._valueCache.exists(uniformName) && this._valueCache.get(uniformName)[0] == x && this._valueCache.get(uniformName)[1] == y)) {
			if(!this._valueCache.exists(uniformName)) this._valueCache.set(uniformName,[x,y]); else {
				this._valueCache.get(uniformName)[0] = x;
				this._valueCache.get(uniformName)[1] = y;
			}
			this._engine.setFloat2(this.getUniform(uniformName),x,y);
		}
	}
	,setVector3: function(uniformName,vector3) {
		if(!(this._valueCache.exists(uniformName) && this._valueCache.get(uniformName)[0] == vector3.x && this._valueCache.get(uniformName)[1] == vector3.y && this._valueCache.get(uniformName)[2] == vector3.z)) {
			this._cacheFloat3(uniformName,vector3.x,vector3.y,vector3.z);
			this._engine.setFloat3(this.getUniform(uniformName),vector3.x,vector3.y,vector3.z);
		}
	}
	,setFloat3: function(uniformName,x,y,z) {
		if(!(this._valueCache.exists(uniformName) && this._valueCache.get(uniformName)[0] == x && this._valueCache.get(uniformName)[1] == y && this._valueCache.get(uniformName)[2] == z)) {
			if(!this._valueCache.exists(uniformName)) this._valueCache.set(uniformName,[x,y,z]); else {
				this._valueCache.get(uniformName)[0] = x;
				this._valueCache.get(uniformName)[1] = y;
				this._valueCache.get(uniformName)[2] = z;
			}
			this._engine.setFloat3(this.getUniform(uniformName),x,y,z);
		}
	}
	,setFloat4: function(uniformName,x,y,z,w) {
		if(!(this._valueCache.exists(uniformName) && this._valueCache.get(uniformName)[0] == x && this._valueCache.get(uniformName)[1] == y && this._valueCache.get(uniformName)[2] == z && this._valueCache.get(uniformName)[3] == w)) {
			if(!this._valueCache.exists(uniformName)) this._valueCache.set(uniformName,[x,y,z,w]); else {
				this._valueCache.get(uniformName)[0] = x;
				this._valueCache.get(uniformName)[1] = y;
				this._valueCache.get(uniformName)[2] = z;
				this._valueCache.get(uniformName)[3] = w;
			}
			this._engine.setFloat4(this.getUniform(uniformName),x,y,z,w);
		}
	}
	,setColor3: function(uniformName,color3) {
		if(!(this._valueCache.exists(uniformName) && this._valueCache.get(uniformName)[0] == color3.r && this._valueCache.get(uniformName)[1] == color3.g && this._valueCache.get(uniformName)[2] == color3.b)) {
			this._cacheFloat3(uniformName,color3.r,color3.g,color3.b);
			this._engine.setColor3(this.getUniform(uniformName),color3);
		}
	}
	,setColor4: function(uniformName,color3,alpha) {
		if(!(this._valueCache.exists(uniformName) && this._valueCache.get(uniformName)[0] == color3.r && this._valueCache.get(uniformName)[1] == color3.g && this._valueCache.get(uniformName)[2] == color3.b && this._valueCache.get(uniformName)[3] == alpha)) {
			this._cacheFloat4(uniformName,color3.r,color3.g,color3.b,alpha);
			this._engine.setColor4(this.getUniform(uniformName),color3,alpha);
		}
	}
	,__class__: com.gamestudiohx.babylonhx.materials.Effect
};
com.gamestudiohx.babylonhx.materials.Material = function(name,scene) {
	this.name = name;
	this.id = name;
	this._scene = scene;
	scene.materials.push(this);
	this.checkReadyOnEveryCall = true;
	this.checkReadyOnlyOnce = false;
	this.alpha = 1.0;
	this.wireframe = false;
	this.backFaceCulling = true;
	this._effect = null;
	this._wasPreviouslyReady = false;
	this.onDispose = null;
};
$hxClasses["com.gamestudiohx.babylonhx.materials.Material"] = com.gamestudiohx.babylonhx.materials.Material;
com.gamestudiohx.babylonhx.materials.Material.__name__ = ["com","gamestudiohx","babylonhx","materials","Material"];
com.gamestudiohx.babylonhx.materials.Material.prototype = {
	isReady: function(mesh) {
		return true;
	}
	,getEffect: function() {
		return this._effect;
	}
	,getScene: function() {
		return this._scene;
	}
	,needAlphaBlending: function() {
		return this.alpha < 1.0;
	}
	,needAlphaTesting: function() {
		return false;
	}
	,_preBind: function() {
		var engine = this._scene.getEngine();
		engine.enableEffect(this._effect);
		engine.setState(this.backFaceCulling);
	}
	,bind: function(world,mesh) {
	}
	,unbind: function() {
	}
	,baseDispose: function() {
		var index = Lambda.indexOf(this._scene.materials,this);
		this._scene.materials.splice(index,1);
		if(this.onDispose != null) this.onDispose();
	}
	,dispose: function() {
		this.baseDispose();
	}
	,__class__: com.gamestudiohx.babylonhx.materials.Material
};
com.gamestudiohx.babylonhx.materials.MultiMaterial = function(name,scene) {
	this.name = name;
	this.id = name;
	this._scene = scene;
	scene.multiMaterials.push(this);
	this.subMaterials = [];
};
$hxClasses["com.gamestudiohx.babylonhx.materials.MultiMaterial"] = com.gamestudiohx.babylonhx.materials.MultiMaterial;
com.gamestudiohx.babylonhx.materials.MultiMaterial.__name__ = ["com","gamestudiohx","babylonhx","materials","MultiMaterial"];
com.gamestudiohx.babylonhx.materials.MultiMaterial.prototype = {
	getSubMaterial: function(index) {
		if(index < 0 || index >= this.subMaterials.length) return this._scene.defaultMaterial;
		return this.subMaterials[index];
	}
	,isReady: function(mesh) {
		var result = true;
		var _g1 = 0;
		var _g = this.subMaterials.length;
		while(_g1 < _g) {
			var index = _g1++;
			var subMaterial = this.subMaterials[index];
			result = result && this.subMaterials[index].isReady(mesh);
		}
		return result;
	}
	,__class__: com.gamestudiohx.babylonhx.materials.MultiMaterial
};
com.gamestudiohx.babylonhx.materials.ShaderMaterial = function(name,scene,shaderPath,options) {
	com.gamestudiohx.babylonhx.materials.Material.call(this,name,scene);
	this._shaderPath = shaderPath;
	if(options.needAlphaBlending == null) options.needAlphaBlending = false;
	if(options.needAlphaTesting == null) options.needAlphaTesting = false;
	if(options.attributes == null) options.attributes = ["position","normal","uv"];
	if(options.uniforms == null) options.uniforms = ["worldViewProjection"];
	if(options.samplers == null) options.samplers = new Array();
	this._textures = new haxe.ds.StringMap();
	this._floats = new haxe.ds.StringMap();
	this._colors3 = new haxe.ds.StringMap();
	this._colors4 = new haxe.ds.StringMap();
	this._vectors2 = new haxe.ds.StringMap();
	this._vectors3 = new haxe.ds.StringMap();
	this._matrices = new haxe.ds.StringMap();
	this._floatsArrays = new haxe.ds.StringMap();
	this._cachedWorldViewMatrix = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	this._options = options;
};
$hxClasses["com.gamestudiohx.babylonhx.materials.ShaderMaterial"] = com.gamestudiohx.babylonhx.materials.ShaderMaterial;
com.gamestudiohx.babylonhx.materials.ShaderMaterial.__name__ = ["com","gamestudiohx","babylonhx","materials","ShaderMaterial"];
com.gamestudiohx.babylonhx.materials.ShaderMaterial.__super__ = com.gamestudiohx.babylonhx.materials.Material;
com.gamestudiohx.babylonhx.materials.ShaderMaterial.prototype = $extend(com.gamestudiohx.babylonhx.materials.Material.prototype,{
	needAlphaBlending: function() {
		return this._options.needAlphaBlending;
	}
	,needAlphaTesting: function() {
		return this._options.needAlphaTesting;
	}
	,_checkUniform: function(uniformName) {
		if(Lambda.indexOf(this._options.uniforms,uniformName) == -1) this._options.uniforms.push(uniformName);
	}
	,setTexture: function(name,texture) {
		if(Lambda.indexOf(this._options.samplers,name) == -1) this._options.samplers.push(name);
		this._textures.set(name,texture);
		return this;
	}
	,setFloat: function(name,value) {
		this._checkUniform(name);
		this._floats.set(name,value);
		return this;
	}
	,setFloats: function(name,value) {
		this._checkUniform(name);
		this._floatsArrays.set(name,value);
		return this;
	}
	,setColor3: function(name,value) {
		this._checkUniform(name);
		this._colors3.set(name,value);
		return this;
	}
	,setColor4: function(name,value) {
		this._checkUniform(name);
		this._colors4.set(name,value);
		return this;
	}
	,setVector2: function(name,value) {
		this._checkUniform(name);
		this._vectors2.set(name,value);
		return this;
	}
	,setVector3: function(name,value) {
		this._checkUniform(name);
		this._vectors3.set(name,value);
		return this;
	}
	,setMatrix: function(name,value) {
		this._checkUniform(name);
		this._matrices.set(name,value);
		return this;
	}
	,isReady: function(mesh) {
		var engine = this._scene.getEngine();
		this._effect = engine.createEffect(this._shaderPath,this._options.attributes,this._options.uniforms,this._options.samplers,"",null);
		if(!this._effect.isReady()) return false;
		return true;
	}
	,bind: function(world,mesh) {
		if(Lambda.indexOf(this._options.uniforms,"world") != -1) this._effect.setMatrix("world",world);
		if(Lambda.indexOf(this._options.uniforms,"view") != -1) this._effect.setMatrix("view",this._scene.getViewMatrix());
		if(Lambda.indexOf(this._options.uniforms,"worldView") != -1) {
			world.multiplyToRef(this._scene.getViewMatrix(),this._cachedWorldViewMatrix);
			this._effect.setMatrix("worldView",this._cachedWorldViewMatrix);
		}
		if(Lambda.indexOf(this._options.uniforms,"projection") != -1) this._effect.setMatrix("projection",this._scene.getProjectionMatrix());
		if(Lambda.indexOf(this._options.uniforms,"worldViewProjection") != -1) this._effect.setMatrix("worldViewProjection",world.multiply(this._scene._transformMatrix));
		var $it0 = this._textures.keys();
		while( $it0.hasNext() ) {
			var name = $it0.next();
			this._effect.setTexture(name,this._textures.get(name));
		}
		var $it1 = this._floats.keys();
		while( $it1.hasNext() ) {
			var name1 = $it1.next();
			this._effect.setFloat(name1,this._floats.get(name1));
		}
		var $it2 = this._floatsArrays.keys();
		while( $it2.hasNext() ) {
			var name2 = $it2.next();
			this._effect.setArray(name2,this._floatsArrays.get(name2));
		}
		var $it3 = this._colors3.keys();
		while( $it3.hasNext() ) {
			var name3 = $it3.next();
			this._effect.setColor3(name3,this._colors3.get(name3));
		}
		var $it4 = this._colors4.keys();
		while( $it4.hasNext() ) {
			var name4 = $it4.next();
			var color = this._colors4.get(name4);
			this._effect.setFloat4(name4,color.r,color.g,color.b,color.a);
		}
		var $it5 = this._vectors2.keys();
		while( $it5.hasNext() ) {
			var name5 = $it5.next();
			this._effect.setVector2(name5,this._vectors2.get(name5));
		}
		var $it6 = this._vectors3.keys();
		while( $it6.hasNext() ) {
			var name6 = $it6.next();
			this._effect.setVector3(name6,this._vectors3.get(name6));
		}
		var $it7 = this._matrices.keys();
		while( $it7.hasNext() ) {
			var name7 = $it7.next();
			this._effect.setMatrix(name7,this._matrices.get(name7));
		}
	}
	,dispose: function() {
		var $it0 = this._textures.keys();
		while( $it0.hasNext() ) {
			var name = $it0.next();
			this._textures.get(name).dispose();
		}
		this._textures = new haxe.ds.StringMap();
		this.baseDispose();
	}
	,__class__: com.gamestudiohx.babylonhx.materials.ShaderMaterial
});
com.gamestudiohx.babylonhx.materials.StandardMaterial = function(name,scene) {
	this.bumpTexture = null;
	this.specularTexture = null;
	this.emissiveTexture = null;
	this.reflectionTexture = null;
	this.opacityTexture = null;
	this.ambientTexture = null;
	this.diffuseTexture = null;
	com.gamestudiohx.babylonhx.materials.Material.call(this,name,scene);
	this.ambientColor = new com.gamestudiohx.babylonhx.tools.math.Color3(0,0,0);
	this.diffuseColor = new com.gamestudiohx.babylonhx.tools.math.Color3(1,1,1);
	this.specularColor = new com.gamestudiohx.babylonhx.tools.math.Color3(1,1,1);
	this.specularPower = 64;
	this.emissiveColor = new com.gamestudiohx.babylonhx.tools.math.Color3(0,0,0);
	this._cachedDefines = null;
	this._renderTargets = new com.gamestudiohx.babylonhx.tools.SmartArray();
	this._worldViewProjectionMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._lightMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._globalAmbientColor = new com.gamestudiohx.babylonhx.tools.math.Color3(0,0,0);
	this._baseColor = new com.gamestudiohx.babylonhx.tools.math.Color3();
	this._scaledDiffuse = new com.gamestudiohx.babylonhx.tools.math.Color3();
	this._scaledSpecular = new com.gamestudiohx.babylonhx.tools.math.Color3();
};
$hxClasses["com.gamestudiohx.babylonhx.materials.StandardMaterial"] = com.gamestudiohx.babylonhx.materials.StandardMaterial;
com.gamestudiohx.babylonhx.materials.StandardMaterial.__name__ = ["com","gamestudiohx","babylonhx","materials","StandardMaterial"];
com.gamestudiohx.babylonhx.materials.StandardMaterial.__super__ = com.gamestudiohx.babylonhx.materials.Material;
com.gamestudiohx.babylonhx.materials.StandardMaterial.prototype = $extend(com.gamestudiohx.babylonhx.materials.Material.prototype,{
	needAlphaBlending: function() {
		return this.alpha < 1.0 || this.opacityTexture != null;
	}
	,needAlphaTesting: function() {
		return this.diffuseTexture != null && this.diffuseTexture.hasAlpha;
	}
	,isReady: function(mesh) {
		if(this.checkReadyOnlyOnce) {
			if(this._wasPreviouslyReady) return true;
		}
		if(!this.checkReadyOnEveryCall) {
			if(this._renderId == this._scene.getRenderId()) return true;
		}
		var engine = this._scene.getEngine();
		var defines = [];
		var optionalDefines = [];
		if(this._scene.texturesEnabled) {
			if(this.diffuseTexture != null) {
				if(!this.diffuseTexture.isReady()) return false; else defines.push("#define DIFFUSE");
			}
			if(this.ambientTexture != null) {
				if(!this.ambientTexture.isReady()) return false; else defines.push("#define AMBIENT");
			}
			if(this.opacityTexture != null) {
				if(!this.opacityTexture.isReady()) return false; else defines.push("#define OPACITY");
			}
			if(this.reflectionTexture != null) {
				if(!this.reflectionTexture.isReady()) return false; else defines.push("#define REFLECTION");
			}
			if(this.emissiveTexture != null) {
				if(!this.emissiveTexture.isReady()) return false; else defines.push("#define EMISSIVE");
			}
			if(this.specularTexture != null) {
				if(!this.specularTexture.isReady()) return false; else {
					defines.push("#define SPECULAR");
					optionalDefines.push(defines[defines.length - 1]);
				}
			}
		}
		if(this._scene.getEngine().getCaps().standardDerivatives != null && this.bumpTexture != null) {
			if(!this.bumpTexture.isReady()) return false; else {
				defines.push("#define BUMP");
				optionalDefines.push(defines[defines.length - 1]);
			}
		}
		if(com.gamestudiohx.babylonhx.Engine.clipPlane != null) defines.push("#define CLIPPLANE");
		if(engine.getAlphaTesting()) defines.push("#define ALPHATEST");
		if(this._scene.fogMode != com.gamestudiohx.babylonhx.Scene.FOGMODE_NONE) {
			defines.push("#define FOG");
			optionalDefines.push(defines[defines.length - 1]);
		}
		var shadowsActivated = false;
		var lightIndex = 0;
		if(this._scene.lightsEnabled) {
			var _g1 = 0;
			var _g = this._scene.lights.length;
			while(_g1 < _g) {
				var index = _g1++;
				var light = this._scene.lights[index];
				if(!light.isEnabled()) continue;
				if(mesh != null && Lambda.indexOf(light.excludedMeshes,mesh) != -1) continue;
				defines.push("#define LIGHT" + lightIndex);
				if(lightIndex > 0) optionalDefines.push(defines[defines.length - 1]);
				var type = "";
				if(js.Boot.__instanceof(light,com.gamestudiohx.babylonhx.lights.SpotLight)) type = "#define SPOTLIGHT" + lightIndex; else if(js.Boot.__instanceof(light,com.gamestudiohx.babylonhx.lights.HemisphericLight)) type = "#define HEMILIGHT" + lightIndex; else type = "#define POINTDIRLIGHT" + lightIndex;
				defines.push(type);
				if(lightIndex > 0) optionalDefines.push(defines[defines.length - 1]);
				var shadowGenerator = light.getShadowGenerator();
				if(mesh != null && mesh.receiveShadows && shadowGenerator != null) {
					defines.push("#define SHADOW" + lightIndex);
					if(lightIndex > 0) optionalDefines.push(defines[defines.length - 1]);
					if(!shadowsActivated) {
						defines.push("#define SHADOWS");
						shadowsActivated = true;
					}
					if(shadowGenerator.useVarianceShadowMap) {
						defines.push("#define SHADOWVSM" + lightIndex);
						if(lightIndex > 0) optionalDefines.push(defines[defines.length - 1]);
					}
				}
				lightIndex++;
				if(lightIndex == 4) break;
			}
		}
		var attribs = [com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind,com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind];
		if(mesh != null) {
			if(mesh.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UVKind)) {
				attribs.push(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UVKind);
				defines.push("#define UV1");
			}
			if(mesh.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UV2Kind)) {
				attribs.push(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UV2Kind);
				defines.push("#define UV2");
			}
			if(mesh.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.ColorKind)) {
				attribs.push(com.gamestudiohx.babylonhx.mesh.VertexBuffer.ColorKind);
				defines.push("#define VERTEXCOLOR");
			}
			if(mesh.skeleton != null && mesh.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind) && mesh.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind)) {
				attribs.push(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind);
				attribs.push(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind);
				defines.push("#define BONES");
				defines.push("#define BonesPerMesh " + mesh.skeleton.bones.length);
				defines.push("#define BONES4");
				optionalDefines.push(defines[defines.length - 1]);
			}
		}
		var join = defines.join("\n");
		if(this._cachedDefines != join) {
			this._cachedDefines = join;
			var shaderName = "default";
			this._effect = this._scene.getEngine().createEffect(shaderName,attribs,["world","view","viewProjection","vEyePosition","vLightsType","vAmbientColor","vDiffuseColor","vSpecularColor","vEmissiveColor","vLightData0","vLightDiffuse0","vLightSpecular0","vLightDirection0","vLightGround0","lightMatrix0","vLightData1","vLightDiffuse1","vLightSpecular1","vLightDirection1","vLightGround1","lightMatrix1","vLightData2","vLightDiffuse2","vLightSpecular2","vLightDirection2","vLightGround2","lightMatrix2","vLightData3","vLightDiffuse3","vLightSpecular3","vLightDirection3","vLightGround3","lightMatrix3","vFogInfos","vFogColor","vDiffuseInfos","vAmbientInfos","vOpacityInfos","vReflectionInfos","vEmissiveInfos","vSpecularInfos","vBumpInfos","mBones","vClipPlane","diffuseMatrix","ambientMatrix","opacityMatrix","reflectionMatrix","emissiveMatrix","specularMatrix","bumpMatrix"],["diffuseSampler","ambientSampler","opacitySampler","reflectionCubeSampler","reflection2DSampler","emissiveSampler","specularSampler","bumpSampler","shadowSampler0","shadowSampler1","shadowSampler2","shadowSampler3"],join,optionalDefines);
		}
		if(!this._effect.isReady()) return false;
		this._renderId = this._scene.getRenderId();
		this._wasPreviouslyReady = true;
		return true;
	}
	,getRenderTargetTextures: function() {
		this._renderTargets.reset();
		if(this.reflectionTexture != null && Reflect.field(this.reflectionTexture,"isRenderTarget") != null) this._renderTargets.push(this.reflectionTexture);
		return this._renderTargets;
	}
	,unbind: function() {
		if(this.reflectionTexture != null && Reflect.field(this.reflectionTexture,"isRenderTarget") != null) this._effect.setTexture("reflection2DSampler",null);
	}
	,bind: function(world,mesh) {
		this._baseColor.copyFrom(this.diffuseColor);
		this._effect.setMatrix("world",world);
		this._effect.setMatrix("viewProjection",this._scene._transformMatrix);
		if(mesh.skeleton != null && mesh.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind) && mesh.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind)) this._effect.setMatrices("mBones",mesh.skeleton.getTransformMatrices());
		if(this.diffuseTexture != null) {
			this._effect.setTexture("diffuseSampler",this.diffuseTexture);
			this._effect.setFloat2("vDiffuseInfos",this.diffuseTexture.coordinatesIndex,this.diffuseTexture.level);
			this._effect.setMatrix("diffuseMatrix",this.diffuseTexture._computeTextureMatrix());
			this._baseColor.copyFromFloats(1,1,1);
		}
		if(this.ambientTexture != null) {
			this._effect.setTexture("ambientSampler",this.ambientTexture);
			this._effect.setFloat2("vAmbientInfos",this.ambientTexture.coordinatesIndex,this.ambientTexture.level);
			this._effect.setMatrix("ambientMatrix",this.ambientTexture._computeTextureMatrix());
		}
		if(this.opacityTexture != null) {
			this._effect.setTexture("opacitySampler",this.opacityTexture);
			this._effect.setFloat2("vOpacityInfos",this.opacityTexture.coordinatesIndex,this.opacityTexture.level);
			this._effect.setMatrix("opacityMatrix",this.opacityTexture._computeTextureMatrix());
		}
		if(this.reflectionTexture != null) {
			if(js.Boot.__instanceof(this.reflectionTexture,com.gamestudiohx.babylonhx.materials.textures.CubeTexture)) this._effect.setTexture("reflectionCubeSampler",this.reflectionTexture); else this._effect.setTexture("reflection2DSampler",this.reflectionTexture);
			this._effect.setMatrix("reflectionMatrix",this.reflectionTexture._computeReflectionTextureMatrix());
			this._effect.setFloat3("vReflectionInfos",this.reflectionTexture.coordinatesMode,this.reflectionTexture.level,Reflect.field(this.reflectionTexture,"isCube") != null?1.0:0.0);
		}
		if(this.emissiveTexture != null) {
			this._effect.setTexture("emissiveSampler",this.emissiveTexture);
			this._effect.setFloat2("vEmissiveInfos",this.emissiveTexture.coordinatesIndex,this.emissiveTexture.level);
			this._effect.setMatrix("emissiveMatrix",this.emissiveTexture._computeTextureMatrix());
		}
		if(this.specularTexture != null) {
			this._effect.setTexture("specularSampler",this.specularTexture);
			this._effect.setFloat2("vSpecularInfos",this.specularTexture.coordinatesIndex,this.specularTexture.level);
			this._effect.setMatrix("specularMatrix",this.specularTexture._computeTextureMatrix());
		}
		if(this.bumpTexture != null && this._scene.getEngine().getCaps().standardDerivatives != null) {
			this._effect.setTexture("bumpSampler",this.bumpTexture);
			this._effect.setFloat2("vBumpInfos",this.bumpTexture.coordinatesIndex,this.bumpTexture.level);
			this._effect.setMatrix("bumpMatrix",this.bumpTexture._computeTextureMatrix());
		}
		this._scene.ambientColor.multiplyToRef(this.ambientColor,this._globalAmbientColor);
		this._effect.setVector3("vEyePosition",this._scene.activeCamera.position);
		this._effect.setColor3("vAmbientColor",this._globalAmbientColor);
		this._effect.setColor4("vDiffuseColor",this._baseColor,this.alpha * mesh.visibility);
		this._effect.setColor4("vSpecularColor",this.specularColor,this.specularPower);
		this._effect.setColor3("vEmissiveColor",this.emissiveColor);
		if(this._scene.lightsEnabled) {
			var lightIndex = 0;
			var _g1 = 0;
			var _g = this._scene.lights.length;
			while(_g1 < _g) {
				var index = _g1++;
				var light = this._scene.lights[index];
				if(!light.isEnabled()) continue;
				if(mesh != null && Lambda.indexOf(light.excludedMeshes,mesh) != -1) continue;
				if(js.Boot.__instanceof(light,com.gamestudiohx.babylonhx.lights.PointLight)) light.transferToEffect(this._effect,"vLightData" + lightIndex); else if(js.Boot.__instanceof(light,com.gamestudiohx.babylonhx.lights.DirectionalLight)) light.transferToEffect(this._effect,"","vLightData" + lightIndex); else if(js.Boot.__instanceof(light,com.gamestudiohx.babylonhx.lights.SpotLight)) light.transferToEffect(this._effect,"vLightData" + lightIndex,"vLightDirection" + lightIndex); else if(js.Boot.__instanceof(light,com.gamestudiohx.babylonhx.lights.HemisphericLight)) light.transferToEffect(this._effect,"vLightData" + lightIndex,"vLightGround" + lightIndex);
				light.diffuse.scaleToRef(light.intensity,this._scaledDiffuse);
				light.specular.scaleToRef(light.intensity,this._scaledSpecular);
				this._effect.setColor3("vLightDiffuse" + lightIndex,this._scaledDiffuse);
				this._effect.setColor3("vLightSpecular" + lightIndex,this._scaledSpecular);
				var shadowGenerator = light.getShadowGenerator();
				if(mesh.receiveShadows && shadowGenerator != null) {
					world.multiplyToRef(shadowGenerator.getTransformMatrix(),this._lightMatrix);
					this._effect.setMatrix("lightMatrix" + lightIndex,this._lightMatrix);
					this._effect.setTexture("shadowSampler" + lightIndex,shadowGenerator.getShadowMap());
				}
				lightIndex++;
				if(lightIndex == 4) break;
			}
		}
		if(com.gamestudiohx.babylonhx.Engine.clipPlane != null) this._effect.setFloat4("vClipPlane",com.gamestudiohx.babylonhx.Engine.clipPlane.normal.x,com.gamestudiohx.babylonhx.Engine.clipPlane.normal.y,com.gamestudiohx.babylonhx.Engine.clipPlane.normal.z,com.gamestudiohx.babylonhx.Engine.clipPlane.d);
		if(this._scene.fogMode != com.gamestudiohx.babylonhx.Scene.FOGMODE_NONE || this.reflectionTexture != null) this._effect.setMatrix("view",this._scene.getViewMatrix());
		if(this._scene.fogMode != com.gamestudiohx.babylonhx.Scene.FOGMODE_NONE) {
			this._effect.setFloat4("vFogInfos",this._scene.fogMode,this._scene.fogStart,this._scene.fogEnd,this._scene.fogDensity);
			this._effect.setColor3("vFogColor",this._scene.fogColor);
		}
	}
	,getAnimatables: function() {
		var results = [];
		if(this.diffuseTexture != null && this.diffuseTexture.animations != null && this.diffuseTexture.animations.length > 0) results.push(this.diffuseTexture);
		if(this.ambientTexture != null && this.ambientTexture.animations != null && this.ambientTexture.animations.length > 0) results.push(this.ambientTexture);
		if(this.opacityTexture != null && this.opacityTexture.animations != null && this.opacityTexture.animations.length > 0) results.push(this.opacityTexture);
		if(this.reflectionTexture != null && this.reflectionTexture.animations != null && this.reflectionTexture.animations.length > 0) results.push(this.reflectionTexture);
		if(this.emissiveTexture != null && this.emissiveTexture.animations != null && this.emissiveTexture.animations.length > 0) results.push(this.emissiveTexture);
		if(this.specularTexture != null && this.specularTexture.animations != null && this.specularTexture.animations.length > 0) results.push(this.specularTexture);
		if(this.bumpTexture != null && this.bumpTexture.animations != null && this.bumpTexture.animations.length > 0) results.push(this.bumpTexture);
		return results;
	}
	,dispose: function() {
		if(this.diffuseTexture != null) this.diffuseTexture.dispose();
		if(this.ambientTexture != null) this.ambientTexture.dispose();
		if(this.opacityTexture != null) this.opacityTexture.dispose();
		if(this.reflectionTexture != null) this.reflectionTexture.dispose();
		if(this.emissiveTexture != null) this.emissiveTexture.dispose();
		if(this.specularTexture != null) this.specularTexture.dispose();
		if(this.bumpTexture != null) this.bumpTexture.dispose();
		this.baseDispose();
	}
	,clone: function(name) {
		var newStandardMaterial = new com.gamestudiohx.babylonhx.materials.StandardMaterial(name,this._scene);
		newStandardMaterial.checkReadyOnEveryCall = this.checkReadyOnEveryCall;
		newStandardMaterial.alpha = this.alpha;
		newStandardMaterial.wireframe = this.wireframe;
		newStandardMaterial.backFaceCulling = this.backFaceCulling;
		if(this.diffuseTexture != null) newStandardMaterial.diffuseTexture = this.diffuseTexture.clone();
		if(this.ambientTexture != null) newStandardMaterial.ambientTexture = this.ambientTexture.clone();
		if(this.opacityTexture != null) newStandardMaterial.opacityTexture = this.opacityTexture.clone();
		if(this.reflectionTexture != null) newStandardMaterial.reflectionTexture = this.reflectionTexture.clone();
		if(this.emissiveTexture != null) newStandardMaterial.emissiveTexture = this.emissiveTexture.clone();
		if(this.specularTexture != null) newStandardMaterial.specularTexture = this.specularTexture.clone();
		if(this.bumpTexture != null) newStandardMaterial.bumpTexture = this.bumpTexture.clone();
		newStandardMaterial.ambientColor = this.ambientColor.clone();
		newStandardMaterial.diffuseColor = this.diffuseColor.clone();
		newStandardMaterial.specularColor = this.specularColor.clone();
		newStandardMaterial.specularPower = this.specularPower;
		newStandardMaterial.emissiveColor = this.emissiveColor.clone();
		return newStandardMaterial;
	}
	,__class__: com.gamestudiohx.babylonhx.materials.StandardMaterial
});
com.gamestudiohx.babylonhx.materials.textures = {};
com.gamestudiohx.babylonhx.materials.textures.BaseTexture = function(url,scene) {
	this.level = 1.0;
	this.hasAlpha = false;
	this._scene = scene;
	this._scene.textures.push(this);
	this.delayLoadState = com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_NONE;
};
$hxClasses["com.gamestudiohx.babylonhx.materials.textures.BaseTexture"] = com.gamestudiohx.babylonhx.materials.textures.BaseTexture;
com.gamestudiohx.babylonhx.materials.textures.BaseTexture.__name__ = ["com","gamestudiohx","babylonhx","materials","textures","BaseTexture"];
com.gamestudiohx.babylonhx.materials.textures.BaseTexture.prototype = {
	getInternalTexture: function() {
		return this._texture;
	}
	,isReady: function() {
		if(this._texture != null) return this._texture.isReady;
		return false;
	}
	,getScene: function() {
		return this._scene;
	}
	,getSize: function() {
		if(this._texture._width != -1) return { width : this._texture._width, height : this._texture._height};
		if(this._texture._size != -1) return { width : this._texture._size, height : this._texture._size};
		return { width : 0, height : 0};
	}
	,getBaseSize: function() {
		if(!this.isReady()) return { width : 0, height : 0};
		if(this._texture._size != -1) return { width : this._texture._size, height : this._texture._size};
		return { width : this._texture._baseWidth, height : this._texture._baseHeight};
	}
	,_getFromCache: function(url,noMipmap) {
		var texturesCache = this._scene.getEngine().getLoadedTexturesCache();
		var _g1 = 0;
		var _g = texturesCache.length;
		while(_g1 < _g) {
			var index = _g1++;
			var texturesCacheEntry = texturesCache[index];
			if(texturesCacheEntry.url == url && texturesCacheEntry.noMipmap == noMipmap) {
				texturesCacheEntry.references++;
				return texturesCacheEntry;
			}
		}
		return null;
	}
	,delayLoad: function() {
	}
	,releaseInternalTexture: function() {
		if(this._texture == null) return;
		var texturesCache = this._scene.getEngine().getLoadedTexturesCache();
		this._texture.references--;
		if(this._texture.references == 0) {
			HxOverrides.remove(texturesCache,this._texture);
			this._scene.getEngine()._releaseTexture(this._texture);
			this._texture = null;
		}
	}
	,dispose: function() {
		var index = Lambda.indexOf(this._scene.textures,this);
		if(index >= 0) this._scene.textures.splice(index,1);
		if(this._texture == null) return;
		this.releaseInternalTexture();
		if(this.onDispose != null) this.onDispose();
	}
	,__class__: com.gamestudiohx.babylonhx.materials.textures.BaseTexture
};
com.gamestudiohx.babylonhx.materials.textures.Texture = function(url,scene,noMipmap,invertY) {
	com.gamestudiohx.babylonhx.materials.textures.BaseTexture.call(this,url,scene);
	this.name = url;
	this.url = url;
	this._noMipmap = noMipmap;
	this._invertY = invertY;
	if(this._texture == null && url != null) this._texture = this._getFromCache(url,noMipmap);
	if(this._texture == null && url != null) this._texture = scene.getEngine().createTexture(url,noMipmap,invertY != null?1:0,scene);
	this.uOffset = 0;
	this._cachedUOffset = -1.123412341234;
	this.vOffset = 0;
	this._cachedVOffset = -1.123412341234;
	this.uScale = 1.0;
	this._cachedUScale = -1.123412341234;
	this.vScale = 1.0;
	this._cachedVScale = -1.123412341234;
	this.uAng = 0;
	this._cachedUAng = -1.123412341234;
	this.vAng = 0;
	this._cachedVAng = -1.123412341234;
	this.wAng = 0;
	this._cachedWAng = -1.123412341234;
	this.wrapU = com.gamestudiohx.babylonhx.materials.textures.Texture.WRAP_ADDRESSMODE;
	this.wrapV = com.gamestudiohx.babylonhx.materials.textures.Texture.WRAP_ADDRESSMODE;
	this.coordinatesIndex = 0;
	this.coordinatesMode = com.gamestudiohx.babylonhx.materials.textures.Texture.EXPLICIT_MODE;
	this.anisotropicFilteringLevel = 4;
	this.animations = [];
};
$hxClasses["com.gamestudiohx.babylonhx.materials.textures.Texture"] = com.gamestudiohx.babylonhx.materials.textures.Texture;
com.gamestudiohx.babylonhx.materials.textures.Texture.__name__ = ["com","gamestudiohx","babylonhx","materials","textures","Texture"];
com.gamestudiohx.babylonhx.materials.textures.Texture.__super__ = com.gamestudiohx.babylonhx.materials.textures.BaseTexture;
com.gamestudiohx.babylonhx.materials.textures.Texture.prototype = $extend(com.gamestudiohx.babylonhx.materials.textures.BaseTexture.prototype,{
	delayLoad: function() {
		if(this.delayLoadState != com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_NOTLOADED) return;
		this.delayLoadState = com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_LOADED;
		this._texture = this._getFromCache(this.url,this._noMipmap);
		if(this._texture == null) this._texture = this._scene.getEngine().createTexture(this.url,this._noMipmap,this._invertY?1:0,this._scene);
	}
	,_prepareRowForTextureGeneration: function(x,y,z,t) {
		x -= this.uOffset + 0.5;
		y -= this.vOffset + 0.5;
		z -= 0.5;
		com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesFromFloatsToRef(x,y,z,this._rowGenerationMatrix,t);
		t.x *= this.uScale;
		t.y *= this.vScale;
		t.x += 0.5;
		t.y += 0.5;
		t.z += 0.5;
	}
	,_computeTextureMatrix: function() {
		var ret = this._cachedTextureMatrix;
		if(!(this.uOffset == this._cachedUOffset && this.vOffset == this._cachedVOffset && this.uScale == this._cachedUScale && this.vScale == this._cachedVScale && this.uAng == this._cachedUAng && this.vAng == this._cachedVAng && this.wAng == this._cachedWAng)) {
			this._cachedUOffset = this.uOffset;
			this._cachedVOffset = this.vOffset;
			this._cachedUScale = this.uScale;
			this._cachedVScale = this.vScale;
			this._cachedUAng = this.uAng;
			this._cachedVAng = this.vAng;
			this._cachedWAng = this.wAng;
			if(this._cachedTextureMatrix == null) {
				this._cachedTextureMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
				this._rowGenerationMatrix = new com.gamestudiohx.babylonhx.tools.math.Matrix();
				this._t0 = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
				this._t1 = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
				this._t2 = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			}
			com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYawPitchRollToRef(this.vAng,this.uAng,this.wAng,this._rowGenerationMatrix);
			this._prepareRowForTextureGeneration(0,0,0,this._t0);
			this._prepareRowForTextureGeneration(1.0,0,0,this._t1);
			this._prepareRowForTextureGeneration(0,1.0,0,this._t2);
			this._t1.subtractInPlace(this._t0);
			this._t2.subtractInPlace(this._t0);
			com.gamestudiohx.babylonhx.tools.math.Matrix.IdentityToRef(this._cachedTextureMatrix);
			this._cachedTextureMatrix.m[0] = this._t1.x;
			this._cachedTextureMatrix.m[1] = this._t1.y;
			this._cachedTextureMatrix.m[2] = this._t1.z;
			this._cachedTextureMatrix.m[4] = this._t2.x;
			this._cachedTextureMatrix.m[5] = this._t2.y;
			this._cachedTextureMatrix.m[6] = this._t2.z;
			this._cachedTextureMatrix.m[8] = this._t0.x;
			this._cachedTextureMatrix.m[9] = this._t0.y;
			this._cachedTextureMatrix.m[10] = this._t0.z;
		}
		return this._cachedTextureMatrix;
	}
	,_computeReflectionTextureMatrix: function() {
		if(this.uOffset == this._cachedUOffset && this.vOffset == this._cachedVOffset && this.uScale == this._cachedUScale && this.vScale == this._cachedVScale && this.coordinatesMode == this._cachedCoordinatesMode) return this._cachedTextureMatrix;
		if(this._cachedTextureMatrix == null) {
			this._cachedTextureMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
			this._projectionModeMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
		}
		var _g = this.coordinatesMode;
		switch(_g) {
		case com.gamestudiohx.babylonhx.materials.textures.Texture.SPHERICAL_MODE:
			com.gamestudiohx.babylonhx.tools.math.Matrix.IdentityToRef(this._cachedTextureMatrix);
			this._cachedTextureMatrix.m[0] = -0.5 * this.uScale;
			this._cachedTextureMatrix.m[5] = -0.5 * this.vScale;
			this._cachedTextureMatrix.m[12] = 0.5 + this.uOffset;
			this._cachedTextureMatrix.m[13] = 0.5 + this.vOffset;
			break;
		case com.gamestudiohx.babylonhx.materials.textures.Texture.PLANAR_MODE:
			com.gamestudiohx.babylonhx.tools.math.Matrix.IdentityToRef(this._cachedTextureMatrix);
			this._cachedTextureMatrix.m[0] = this.uScale;
			this._cachedTextureMatrix.m[5] = this.vScale;
			this._cachedTextureMatrix.m[12] = this.uOffset;
			this._cachedTextureMatrix.m[13] = this.vOffset;
			break;
		case com.gamestudiohx.babylonhx.materials.textures.Texture.PROJECTION_MODE:
			com.gamestudiohx.babylonhx.tools.math.Matrix.IdentityToRef(this._projectionModeMatrix);
			this._projectionModeMatrix.m[0] = 0.5;
			this._projectionModeMatrix.m[5] = -0.5;
			this._projectionModeMatrix.m[10] = 0.0;
			this._projectionModeMatrix.m[12] = 0.5;
			this._projectionModeMatrix.m[13] = 0.5;
			this._projectionModeMatrix.m[14] = 1.0;
			this._projectionModeMatrix.m[15] = 1.0;
			this._scene.getProjectionMatrix().multiplyToRef(this._projectionModeMatrix,this._cachedTextureMatrix);
			break;
		default:
			com.gamestudiohx.babylonhx.tools.math.Matrix.IdentityToRef(this._cachedTextureMatrix);
		}
		return this._cachedTextureMatrix;
	}
	,update: function(invertY) {
		if(invertY == null) invertY = 1;
		return;
	}
	,clone: function() {
		var newTexture = new com.gamestudiohx.babylonhx.materials.textures.Texture(this._texture.url,this._scene,this._noMipmap,this._invertY);
		newTexture.hasAlpha = this.hasAlpha;
		newTexture.level = this.level;
		newTexture.uOffset = this.uOffset;
		newTexture.vOffset = this.vOffset;
		newTexture.uScale = this.uScale;
		newTexture.vScale = this.vScale;
		newTexture.uAng = this.uAng;
		newTexture.vAng = this.vAng;
		newTexture.wAng = this.wAng;
		newTexture.wrapU = this.wrapU;
		newTexture.wrapV = this.wrapV;
		newTexture.coordinatesIndex = this.coordinatesIndex;
		newTexture.coordinatesMode = this.coordinatesMode;
		return newTexture;
	}
	,__class__: com.gamestudiohx.babylonhx.materials.textures.Texture
});
com.gamestudiohx.babylonhx.materials.textures.CubeTexture = function(rootUrl,scene,extensions) {
	this.isCube = true;
	this._scene = scene;
	if(null == extensions) extensions = ["_px.jpg","_py.jpg","_pz.jpg","_nx.jpg","_ny.jpg","_nz.jpg"];
	this._extensions = extensions;
	this._texture = this._getFromCache(rootUrl,false);
	if(this._texture == null) this._texture = scene.getEngine().createCubeTexture(rootUrl,scene,extensions);
	com.gamestudiohx.babylonhx.materials.textures.Texture.call(this,rootUrl,scene);
	this.name = rootUrl;
	this.url = rootUrl;
	this.hasAlpha = false;
	this.coordinatesMode = com.gamestudiohx.babylonhx.materials.textures.Texture.CUBIC_MODE;
	this._textureMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
};
$hxClasses["com.gamestudiohx.babylonhx.materials.textures.CubeTexture"] = com.gamestudiohx.babylonhx.materials.textures.CubeTexture;
com.gamestudiohx.babylonhx.materials.textures.CubeTexture.__name__ = ["com","gamestudiohx","babylonhx","materials","textures","CubeTexture"];
com.gamestudiohx.babylonhx.materials.textures.CubeTexture.__super__ = com.gamestudiohx.babylonhx.materials.textures.Texture;
com.gamestudiohx.babylonhx.materials.textures.CubeTexture.prototype = $extend(com.gamestudiohx.babylonhx.materials.textures.Texture.prototype,{
	delayLoad: function() {
		if(this.delayLoadState != com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_NOTLOADED) return;
		this.delayLoadState = com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_LOADED;
		this._texture = this._getFromCache(this.url,false);
		if(this._texture == null) this._texture = this._scene.getEngine().createCubeTexture(this.url,this._scene);
	}
	,_computeReflectionTextureMatrix: function() {
		return this._textureMatrix;
	}
	,__class__: com.gamestudiohx.babylonhx.materials.textures.CubeTexture
});
com.gamestudiohx.babylonhx.materials.textures.DynamicTexture = function(name,options,scene,generateMipMaps) {
	com.gamestudiohx.babylonhx.materials.textures.Texture.call(this,null,scene,!generateMipMaps);
	this.name = name;
	this.wrapU = com.gamestudiohx.babylonhx.materials.textures.Texture.CLAMP_ADDRESSMODE;
	this.wrapV = com.gamestudiohx.babylonhx.materials.textures.Texture.CLAMP_ADDRESSMODE;
	this._generateMipMaps = generateMipMaps;
	if(options.getContext) {
		this._canvas = options;
		this._texture = scene.getEngine().createDynamicTexture(options.width,options.height,generateMipMaps);
	} else {
		this._canvas = new openfl.display.BitmapData(options.width,options.height,false,-1);
		if(options.width != null) this._texture = scene.getEngine().createDynamicTexture(options.width,options.height,generateMipMaps); else this._texture = scene.getEngine().createDynamicTexture(options,options,generateMipMaps);
	}
	var textureSize = this.getSize();
};
$hxClasses["com.gamestudiohx.babylonhx.materials.textures.DynamicTexture"] = com.gamestudiohx.babylonhx.materials.textures.DynamicTexture;
com.gamestudiohx.babylonhx.materials.textures.DynamicTexture.__name__ = ["com","gamestudiohx","babylonhx","materials","textures","DynamicTexture"];
com.gamestudiohx.babylonhx.materials.textures.DynamicTexture.__super__ = com.gamestudiohx.babylonhx.materials.textures.Texture;
com.gamestudiohx.babylonhx.materials.textures.DynamicTexture.prototype = $extend(com.gamestudiohx.babylonhx.materials.textures.Texture.prototype,{
	getCanvas: function() {
		return this._canvas;
	}
	,update: function(invertY) {
		if(invertY == null) invertY = 1;
		this.getScene().getEngine().updateDynamicTexture(this._texture,this._canvas,invertY);
	}
	,clone: function() {
		var textureSize = this.getSize();
		var newTexture = new com.gamestudiohx.babylonhx.materials.textures.DynamicTexture(this.name,textureSize,this.getScene(),this._generateMipMaps);
		newTexture.hasAlpha = this.hasAlpha;
		newTexture.level = this.level;
		newTexture.wrapU = this.wrapU;
		newTexture.wrapV = this.wrapV;
		return newTexture;
	}
	,__class__: com.gamestudiohx.babylonhx.materials.textures.DynamicTexture
});
com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture = function(name,size,scene,generateMipMaps) {
	this._generateMipMaps = generateMipMaps;
	this._texture = scene.getEngine().createRenderTargetTexture(size,generateMipMaps);
	com.gamestudiohx.babylonhx.materials.textures.Texture.call(this,name,scene,generateMipMaps);
	this.renderList = [];
	this._renderingManager = new com.gamestudiohx.babylonhx.rendering.RenderingManager(scene);
};
$hxClasses["com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture"] = com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture;
com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture.__name__ = ["com","gamestudiohx","babylonhx","materials","textures","RenderTargetTexture"];
com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture.__super__ = com.gamestudiohx.babylonhx.materials.textures.Texture;
com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture.prototype = $extend(com.gamestudiohx.babylonhx.materials.textures.Texture.prototype,{
	resize: function(size,generateMipMaps) {
		this.releaseInternalTexture();
		this._texture = this._scene.getEngine().createRenderTargetTexture(size,generateMipMaps);
	}
	,render: function() {
		if(this.onBeforeRender != null) this.onBeforeRender();
		var scene = this._scene;
		var engine = scene.getEngine();
		if(this._waitingRenderList != null) {
			this.renderList = [];
			var _g1 = 0;
			var _g = this._waitingRenderList.length;
			while(_g1 < _g) {
				var index = _g1++;
				var id = this._waitingRenderList[index];
				this.renderList.push(this._scene.getMeshByID(id));
			}
			this._waitingRenderList = null;
		}
		if(this.renderList == null || this.renderList.length == 0) {
			if(this.onAfterRender != null) this.onAfterRender();
		} else {
			engine.bindFramebuffer(this._texture);
			engine.clear(scene.clearColor,true,true);
			this._renderingManager.reset();
			var _g11 = 0;
			var _g2 = this.renderList.length;
			while(_g11 < _g2) {
				var meshIndex = _g11++;
				var mesh = this.renderList[meshIndex];
				if(mesh != null && mesh.isEnabled() && mesh.isVisible) {
					var _g3 = 0;
					var _g21 = mesh.subMeshes.length;
					while(_g3 < _g21) {
						var subIndex = _g3++;
						var subMesh = mesh.subMeshes[subIndex];
						scene._activeVertices += subMesh.verticesCount;
						this._renderingManager.dispatch(subMesh);
					}
				}
			}
			this._renderingManager.render(this.customRenderFunction,this.renderList,this.renderParticles,this.renderSprites);
			engine.unBindFramebuffer(this._texture);
			if(this.onAfterRender != null) this.onAfterRender();
		}
	}
	,clone: function() {
		var textureSize = this.getSize();
		var newTexture = new com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture(this.name,textureSize.width,this._scene,this._generateMipMaps);
		newTexture.hasAlpha = this.hasAlpha;
		newTexture.level = this.level;
		newTexture.coordinatesMode = this.coordinatesMode;
		newTexture.renderList = this.renderList.slice();
		return newTexture;
	}
	,__class__: com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture
});
com.gamestudiohx.babylonhx.materials.textures.MirrorTexture = function(name,size,scene,generateMipMaps) {
	var _g = this;
	com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture.call(this,name,size,scene,generateMipMaps);
	this._transformMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._mirrorMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this.mirrorPlane = new com.gamestudiohx.babylonhx.tools.math.Plane(0,1,0,1);
	this.onBeforeRender = function() {
		var scene1 = _g._scene;
		com.gamestudiohx.babylonhx.tools.math.Matrix.ReflectionToRef(_g.mirrorPlane,_g._mirrorMatrix);
		_g._savedViewMatrix = scene1.getViewMatrix();
		_g._mirrorMatrix.multiplyToArray(_g._savedViewMatrix,_g._transformMatrix.m,0);
		scene1.setTransformMatrix(_g._transformMatrix,scene1.getProjectionMatrix());
		com.gamestudiohx.babylonhx.Engine.clipPlane = _g.mirrorPlane;
		scene1.getEngine().cullBackFaces = false;
	};
	this.onAfterRender = function() {
		var scene2 = _g._scene;
		scene2.setTransformMatrix(_g._savedViewMatrix,scene2.getProjectionMatrix());
		scene2.getEngine().cullBackFaces = true;
		com.gamestudiohx.babylonhx.Engine.clipPlane = null;
	};
};
$hxClasses["com.gamestudiohx.babylonhx.materials.textures.MirrorTexture"] = com.gamestudiohx.babylonhx.materials.textures.MirrorTexture;
com.gamestudiohx.babylonhx.materials.textures.MirrorTexture.__name__ = ["com","gamestudiohx","babylonhx","materials","textures","MirrorTexture"];
com.gamestudiohx.babylonhx.materials.textures.MirrorTexture.__super__ = com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture;
com.gamestudiohx.babylonhx.materials.textures.MirrorTexture.prototype = $extend(com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture.prototype,{
	clone: function() {
		var textureSize = this.getSize();
		var newTexture = new com.gamestudiohx.babylonhx.materials.textures.MirrorTexture(this.name,textureSize.width,this._scene,this._generateMipMaps);
		newTexture.hasAlpha = this.hasAlpha;
		newTexture.level = this.level;
		newTexture.mirrorPlane = this.mirrorPlane.clone();
		newTexture.renderList = this.renderList.slice(0);
		return newTexture;
	}
	,__class__: com.gamestudiohx.babylonhx.materials.textures.MirrorTexture
});
com.gamestudiohx.babylonhx.materials.textures.BabylonTexture = function(url,data) {
	this.noMipmap = true;
	this.url = url;
	this.data = data;
	this._framebuffer = null;
	this._depthBuffer = null;
	this.generateMipMaps = false;
	this.isCube = false;
	this._size = 1;
	this._width = 1;
	this._height = 1;
	this._baseHeight = 1;
	this._baseWidth = 1;
	this._cachedWrapU = -1;
	this._cachedWrapV = -1;
	this.isReady = false;
	this.noMipmap = false;
	this.references = 0;
};
$hxClasses["com.gamestudiohx.babylonhx.materials.textures.BabylonTexture"] = com.gamestudiohx.babylonhx.materials.textures.BabylonTexture;
com.gamestudiohx.babylonhx.materials.textures.BabylonTexture.__name__ = ["com","gamestudiohx","babylonhx","materials","textures","BabylonTexture"];
com.gamestudiohx.babylonhx.materials.textures.BabylonTexture.prototype = {
	__class__: com.gamestudiohx.babylonhx.materials.textures.BabylonTexture
};
com.gamestudiohx.babylonhx.mesh = {};
com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer = function(buffer,_capacity) {
	if(_capacity == null) _capacity = 0;
	this.buffer = buffer;
	this.references = 1;
	this.capacity = _capacity;
};
$hxClasses["com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer"] = com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer;
com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer.__name__ = ["com","gamestudiohx","babylonhx","mesh","BabylonGLBuffer"];
com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer.prototype = {
	__class__: com.gamestudiohx.babylonhx.mesh.BabylonGLBuffer
};
com.gamestudiohx.babylonhx.mesh.AbstractMesh = function(name,scene) {
	this.showSubMeshesBoundingBox = false;
	this._isDirty = false;
	com.gamestudiohx.babylonhx.Node.call(this,scene);
	this.name = name;
	this.id = name;
	this._scene = scene;
	this._totalVertices = 0;
	this._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
	scene.meshes.push(this);
	this.position = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,0);
	this.rotation = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,0);
	this.rotationQuaternion = null;
	this.scaling = new com.gamestudiohx.babylonhx.tools.math.Vector3(1,1,1);
	this._pivotMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
	this._indices = new Array();
	this.subMeshes = new Array();
	this._renderId = 0;
	this.animations = new Array();
	this._positions = null;
	this._cache = { localMatrixUpdated : false, position : com.gamestudiohx.babylonhx.tools.math.Vector3.Zero(), scaling : com.gamestudiohx.babylonhx.tools.math.Vector3.Zero(), rotation : com.gamestudiohx.babylonhx.tools.math.Vector3.Zero(), rotationQuaternion : new com.gamestudiohx.babylonhx.tools.math.Quaternion(0,0,0,0), pivotMatrixUpdated : null};
	this._localScaling = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._localRotation = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._localTranslation = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._localBillboard = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._localPivotScaling = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._localPivotScalingRotation = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._localWorld = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._rotateYByPI = com.gamestudiohx.babylonhx.tools.math.Matrix.RotationY(Math.PI);
	this._collisionsTransformMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._collisionsScalingMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	this._absolutePosition = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this.material = null;
	this.isVisible = true;
	this.isPickable = true;
	this.visibility = 1.0;
	this.billboardMode = com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_NONE;
	this.checkCollisions = false;
	this.receiveShadows = false;
	this._isDisposed = false;
	this.onDispose = null;
	this.skeleton = null;
	this.renderingGroupId = 0;
	this.infiniteDistance = false;
};
$hxClasses["com.gamestudiohx.babylonhx.mesh.AbstractMesh"] = com.gamestudiohx.babylonhx.mesh.AbstractMesh;
com.gamestudiohx.babylonhx.mesh.AbstractMesh.__name__ = ["com","gamestudiohx","babylonhx","mesh","AbstractMesh"];
com.gamestudiohx.babylonhx.mesh.AbstractMesh.ComputeNormal = function(positions,normals,indices) {
	var positionVectors = [];
	var facesOfVertices = [];
	var index = 0;
	while(index < positions.length) {
		var vector3 = new com.gamestudiohx.babylonhx.tools.math.Vector3(positions[index],positions[index + 1],positions[index + 2]);
		positionVectors.push(vector3);
		facesOfVertices.push([]);
		index += 3;
	}
	var facesNormals = [];
	var _g1 = 0;
	var _g = indices.length / 3 | 0;
	while(_g1 < _g) {
		var index1 = _g1++;
		var i1 = indices[index1 * 3];
		var i2 = indices[index1 * 3 + 1];
		var i3 = indices[index1 * 3 + 2];
		var p1 = positionVectors[i1];
		var p2 = positionVectors[i2];
		var p3 = positionVectors[i3];
		var p1p2 = new com.gamestudiohx.babylonhx.tools.math.Vector3(p1.x - p2.x,p1.y - p2.y,p1.z - p2.z);
		var p3p2 = new com.gamestudiohx.babylonhx.tools.math.Vector3(p3.x - p2.x,p3.y - p2.y,p3.z - p2.z);
		facesNormals[index1] = com.gamestudiohx.babylonhx.tools.math.Vector3.Normalize(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(p1p2,p3p2));
		facesOfVertices[i1].push(index1);
		facesOfVertices[i2].push(index1);
		facesOfVertices[i3].push(index1);
	}
	var _g11 = 0;
	var _g2 = positionVectors.length;
	while(_g11 < _g2) {
		var index2 = _g11++;
		var faces = facesOfVertices[index2];
		var normal = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
		var _g3 = 0;
		var _g21 = faces.length;
		while(_g3 < _g21) {
			var faceIndex = _g3++;
			normal.addInPlace(facesNormals[faces[faceIndex]]);
		}
		normal = com.gamestudiohx.babylonhx.tools.math.Vector3.Normalize(normal.scale(1.0 / faces.length));
		normals[index2 * 3] = normal.x;
		normals[index2 * 3 + 1] = normal.y;
		normals[index2 * 3 + 2] = normal.z;
	}
};
com.gamestudiohx.babylonhx.mesh.AbstractMesh.__super__ = com.gamestudiohx.babylonhx.Node;
com.gamestudiohx.babylonhx.mesh.AbstractMesh.prototype = $extend(com.gamestudiohx.babylonhx.Node.prototype,{
	_resetPointsArrayCache: function() {
		this._positions = null;
	}
	,_generatePointsArray: function() {
		return false;
	}
	,_collideForSubMesh: function(subMesh,transformMatrix,collider) {
		this._generatePointsArray();
		if(subMesh._lastColliderWorldVertices == null || !subMesh._lastColliderTransformMatrix.equals(transformMatrix)) {
			subMesh._lastColliderTransformMatrix = transformMatrix;
			subMesh._lastColliderWorldVertices = new Array();
			var start = subMesh.verticesStart;
			var end = subMesh.verticesStart + subMesh.verticesCount;
			var _g = start;
			while(_g < end) {
				var i = _g++;
				subMesh._lastColliderWorldVertices.push(com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(this._positions[i],transformMatrix));
			}
		}
		collider._collide(subMesh,subMesh._lastColliderWorldVertices,this.getIndices(),subMesh.indexStart,subMesh.indexStart + subMesh.indexCount,subMesh.verticesStart);
	}
	,_processCollisionsForSubModels: function(collider,transformMatrix) {
		var _g1 = 0;
		var _g = this.subMeshes.length;
		while(_g1 < _g) {
			var index = _g1++;
			var subMesh = this.subMeshes[index];
			if(this.subMeshes.length > 1 && !subMesh._boundingInfo._checkCollision(collider)) continue;
			this._collideForSubMesh(subMesh,transformMatrix,collider);
		}
	}
	,_checkCollision: function(collider) {
		if(this._boundingInfo._checkCollision(collider)) {
			com.gamestudiohx.babylonhx.tools.math.Matrix.ScalingToRef(1.0 / collider.radius.x,1.0 / collider.radius.y,1.0 / collider.radius.z,this._collisionsScalingMatrix);
			this._worldMatrix.multiplyToArray(this._collisionsScalingMatrix,this._collisionsTransformMatrix.m,0);
			this._processCollisionsForSubModels(collider,this._collisionsTransformMatrix);
		}
	}
	,isInFrustum: function(frustumPlanes) {
		if(!this._boundingInfo.isInFrustum(frustumPlanes)) return false;
		return true;
	}
	,getBoundingInfo: function() {
		return this._boundingInfo;
	}
	,_preActivate: function() {
	}
	,_activate: function(renderId) {
		this._renderId = renderId;
	}
	,getScene: function() {
		return this._scene;
	}
	,get_parentId: function() {
		if(this.parent != null) return this.parent.id;
		return "";
	}
	,getWorldMatrix: function() {
		if(this._currentRenderId != this._scene.getRenderId()) this.computeWorldMatrix(null);
		return this._worldMatrix;
	}
	,getWorldMatrixFromCache: function() {
		return this._worldMatrix;
	}
	,getTotalVertices: function() {
		return this._totalVertices;
	}
	,getabsolutePosition: function() {
		return this._absolutePosition;
	}
	,getAbsolutePosition: function() {
		this.computeWorldMatrix(null);
		return this._absolutePosition;
	}
	,setAbsolutePosition: function(absolutePosition) {
		if(absolutePosition == null) return;
		var absolutePositionX = 0;
		var absolutePositionY = 0;
		var absolutePositionZ = 0;
		if((absolutePosition instanceof Array) && absolutePosition.__enum__ == null) {
			if(absolutePosition.length < 3) return;
			absolutePositionX = absolutePosition[0];
			absolutePositionY = absolutePosition[1];
			absolutePositionZ = absolutePosition[2];
		} else {
			absolutePositionX = absolutePosition.x;
			absolutePositionY = absolutePosition.y;
			absolutePositionZ = absolutePosition.z;
		}
		if(this.parent != null) {
			var invertParentWorldMatrix = this.parent.getWorldMatrix().clone();
			invertParentWorldMatrix.invertToRef(invertParentWorldMatrix);
			var worldPosition = new com.gamestudiohx.babylonhx.tools.math.Vector3(absolutePositionX,absolutePositionY,absolutePositionZ);
			this.position = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(worldPosition,invertParentWorldMatrix);
		} else {
			this.position.x = absolutePositionX;
			this.position.y = absolutePositionY;
			this.position.z = absolutePositionZ;
		}
	}
	,rotate: function(axis,amount,space) {
		if(this.rotationQuaternion == null) {
			this.rotationQuaternion = com.gamestudiohx.babylonhx.tools.math.Quaternion.RotationYawPitchRoll(this.rotation.y,this.rotation.x,this.rotation.z);
			this.rotation = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
		}
		if(space == null || space == com.gamestudiohx.babylonhx.tools.Space.LOCAL) {
			var rotationQuaternion = com.gamestudiohx.babylonhx.tools.math.Quaternion.RotationAxis(axis,amount);
			this.rotationQuaternion = this.rotationQuaternion.multiply(rotationQuaternion);
		} else {
			if(this.parent != null) {
				var invertParentWorldMatrix = this.parent.getWorldMatrix().clone();
				invertParentWorldMatrix.invertToRef(invertParentWorldMatrix);
				axis = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormal(axis,invertParentWorldMatrix);
			}
			this.rotationQuaternion = com.gamestudiohx.babylonhx.tools.math.Quaternion.RotationAxis(axis,amount);
			this.rotationQuaternion = this.rotationQuaternion.multiply(this.rotationQuaternion);
		}
	}
	,translate: function(axis,distance,space) {
		var displacementVector = new com.gamestudiohx.babylonhx.tools.math.Vector3(axis.x * distance,axis.y * distance,axis.z * distance);
		if(space != null || space == com.gamestudiohx.babylonhx.tools.Space.LOCAL) {
			var tempV3 = this.getLocalTranslation().add(displacementVector);
			this.setLocalTranslation(tempV3);
		} else this.setAbsolutePosition(((function($this) {
			var $r;
			$this.computeWorldMatrix(null);
			$r = $this._absolutePosition;
			return $r;
		}(this))).add(displacementVector));
	}
	,getVerticesData: function(kind) {
		return null;
	}
	,isVerticesDataPresent: function(kind) {
		return false;
	}
	,getTotalIndicies: function() {
		return this._indices.length;
	}
	,getIndices: function() {
		return this._indices;
	}
	,getVertexStrideSize: function() {
		return this._vertexStrideSize;
	}
	,setPivotMatrix: function(matrix) {
		this._pivotMatrix = matrix;
		this._cache.pivotMatrixUpdated = true;
	}
	,getPivotMatrix: function() {
		return this._pivotMatrix;
	}
	,isSynchronized: function(updateCache) {
		if(updateCache == null) updateCache = true;
		if(this._isDirty) return false;
		if(this.billboardMode != com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_NONE) return false;
		if(this._cache.pivotMatrixUpdated) return false;
		if(this.infiniteDistance) return false;
		if(!this._cache.position.equals(this.position)) return false;
		if(this.rotationQuaternion != null) {
			if(!this._cache.rotationQuaternion.equals(this.rotationQuaternion)) return false;
		} else if(!this._cache.rotation.equals(this.rotation)) return false;
		if(!this._cache.scaling.equals(this.scaling)) return false;
		return true;
	}
	,isAnimated: function() {
		return this._animationStarted;
	}
	,isDisposed: function() {
		return this._isDisposed;
	}
	,_initCache: function() {
		this._cache.localMatrixUpdated = false;
		this._cache.position = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
		this._cache.scaling = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
		this._cache.rotation = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
		this._cache.rotationQuaternion = new com.gamestudiohx.babylonhx.tools.math.Quaternion(0,0,0,0);
		this._cache.pivotMatrixUpdated = null;
	}
	,markAsDirty: function(property) {
		if(property == "rotation") this.rotationQuaternion = null;
		this._childrenFlag = 1;
		this._isDirty = true;
	}
	,refreshBoudningInfo: function() {
		var data = this.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind);
		if(data == null) return;
		var extend = com.gamestudiohx.babylonhx.tools.Tools.ExtractMinAndMax(data,0,this._totalVertices);
		this._boundingInfo = new com.gamestudiohx.babylonhx.culling.BoundingInfo(extend.minimum,extend.maximum);
		var _g1 = 0;
		var _g = this.subMeshes.length;
		while(_g1 < _g) {
			var index = _g1++;
			this.subMeshes[index].refreshBoundingInfo();
		}
		this._updateBoundingInfo();
	}
	,_updateBoundingInfo: function() {
		if(this._boundingInfo != null) {
			this._scaleFactor = Math.max(this.scaling.x,this.scaling.y);
			this._scaleFactor = Math.max(this._scaleFactor,this.scaling.z);
			if(this.parent != null && Reflect.field(this.parent,"_scaleFactor") != null) this._scaleFactor = this._scaleFactor * Reflect.field(this.parent,"_scaleFactor");
			this._boundingInfo._update(this._worldMatrix,this._scaleFactor);
			var _g1 = 0;
			var _g = this.subMeshes.length;
			while(_g1 < _g) {
				var subIndex = _g1++;
				var subMesh = this.subMeshes[subIndex];
				subMesh._boundingInfo._update(this._worldMatrix,this._scaleFactor);
			}
		}
	}
	,computeWorldMatrix: function(force) {
		if(force == null) force = false;
		var ret = this._worldMatrix;
		if(!force && (this._currentRenderId == this._scene.getRenderId() || this.isSynchronized())) return this._worldMatrix;
		this._cache.position.copyFrom(this.position);
		this._cache.scaling.copyFrom(this.scaling);
		this._cache.pivotMatrixUpdated = false;
		this._currentRenderId = this._scene.getRenderId();
		com.gamestudiohx.babylonhx.tools.math.Matrix.ScalingToRef(this.scaling.x,this.scaling.y,this.scaling.z,this._localScaling);
		if(this.rotationQuaternion != null) {
			this.rotationQuaternion.toRotationMatrix(this._localRotation);
			this._cache.rotationQuaternion.copyFrom(this.rotationQuaternion);
		} else {
			com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYawPitchRollToRef(this.rotation.y,this.rotation.x,this.rotation.z,this._localRotation);
			this._cache.rotation.copyFrom(this.rotation);
		}
		if(this.infiniteDistance && this.parent == null) {
			var camera = this._scene.activeCamera;
			com.gamestudiohx.babylonhx.tools.math.Matrix.TranslationToRef(this.position.x + camera.position.x,this.position.y + camera.position.y,this.position.z + camera.position.z,this._localTranslation);
		} else com.gamestudiohx.babylonhx.tools.math.Matrix.TranslationToRef(this.position.x,this.position.y,this.position.z,this._localTranslation);
		this._pivotMatrix.multiplyToArray(this._localScaling,this._localPivotScaling.m,0);
		this._localPivotScaling.multiplyToArray(this._localRotation,this._localPivotScalingRotation.m,0);
		if(this.billboardMode != com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_NONE) {
			var localPosition = this.position.clone();
			var zero = this._scene.activeCamera.position.clone();
			if(this.parent != null && this.parent.position != null) {
				localPosition.addInPlace(this.parent.position);
				com.gamestudiohx.babylonhx.tools.math.Matrix.TranslationToRef(localPosition.x,localPosition.y,localPosition.z,this._localTranslation);
			}
			if((this.billboardMode & com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_ALL) == com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_ALL) zero = this._scene.activeCamera.position; else {
				if((this.billboardMode & com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_X) != 0) zero.x = localPosition.x + com.gamestudiohx.babylonhx.Engine.epsilon;
				if((this.billboardMode & com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_Y) != 0) zero.y = localPosition.y + com.gamestudiohx.babylonhx.Engine.epsilon;
				if((this.billboardMode & com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_Z) != 0) zero.z = localPosition.z + com.gamestudiohx.babylonhx.Engine.epsilon;
			}
			com.gamestudiohx.babylonhx.tools.math.Matrix.LookAtLHToRef(localPosition,zero,com.gamestudiohx.babylonhx.tools.math.Vector3.Up(),this._localBillboard);
			this._localBillboard.m[12] = this._localBillboard.m[13] = this._localBillboard.m[14] = 0;
			this._localBillboard.invert();
			this._localPivotScalingRotation.multiplyToArray(this._localBillboard,this._localWorld.m,0);
			this._rotateYByPI.multiplyToArray(this._localWorld,this._localPivotScalingRotation.m,0);
		}
		this._localPivotScalingRotation.multiplyToArray(this._localTranslation,this._localWorld.m,0);
		if(this.parent != null && this.parent.getWorldMatrix() != null && this.billboardMode == com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_NONE) {
			haxe.Log.trace("---hit",{ fileName : "AbstractMesh.hx", lineNumber : 603, className : "com.gamestudiohx.babylonhx.mesh.AbstractMesh", methodName : "computeWorldMatrix"});
			this._localWorld.multiplyToRef(this.parent.getWorldMatrix(),this._worldMatrix);
		} else this._worldMatrix.copyFrom(this._localWorld);
		this._updateBoundingInfo();
		this._absolutePosition.copyFromFloats(this._worldMatrix.m[12],this._worldMatrix.m[13],this._worldMatrix.m[14]);
		return this._worldMatrix;
	}
	,locallyTranslate: function(vector3) {
		this.computeWorldMatrix(null);
		this.position = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(vector3,this._localWorld);
	}
	,lookAt: function(targetPoint,yawCor,pitchCor,rollCor) {
		if(rollCor == null) rollCor = 0;
		if(pitchCor == null) pitchCor = 0;
		if(yawCor == null) yawCor = 0;
		var dv = targetPoint.subtract(this.position);
		var yaw = -Math.atan2(dv.z,dv.x) - Math.PI / 2;
		var len = Math.sqrt(dv.x * dv.x + dv.z * dv.z);
		var pitch = Math.atan2(dv.y,len);
		this.rotationQuaternion = com.gamestudiohx.babylonhx.tools.math.Quaternion.RotationYawPitchRoll(yaw + yawCor,pitch + pitchCor,rollCor);
	}
	,bindAndDraw: function(subMesh,effect,wireframe) {
		var engine = this._scene.getEngine();
		var indexToBind = this._indexBuffer;
		var useTriangles = true;
		if(wireframe) {
			indexToBind = subMesh.getLinesIndexBuffer(this._indices,engine);
			useTriangles = false;
		}
		engine.bindMultiBuffers(this._vertexBuffers,indexToBind,effect);
		engine.draw(useTriangles,useTriangles?subMesh.indexStart:0,useTriangles?subMesh.indexCount:subMesh.linesIndexCount);
	}
	,setLocalTranslation: function(vector3) {
		this.computeWorldMatrix(null);
		var worldMatrix = this._worldMatrix.clone();
		worldMatrix.setTranslation(com.gamestudiohx.babylonhx.tools.math.Vector3.Zero());
		this.position = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(vector3,worldMatrix);
	}
	,getLocalTranslation: function() {
		this.computeWorldMatrix(null);
		var invWorldMatrix = this._worldMatrix.clone();
		invWorldMatrix.setTranslation(com.gamestudiohx.babylonhx.tools.math.Vector3.Zero());
		invWorldMatrix.invertToRef(invWorldMatrix);
		return com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(this.position,invWorldMatrix);
	}
	,intersectsMesh: function(mesh,precise) {
		var ret = false;
		if(this._boundingInfo == null || mesh._boundingInfo == null) ret = false; else ret = this._boundingInfo.intersects(mesh._boundingInfo,precise);
		return ret;
	}
	,intersectsPoint: function(point) {
		var ret = false;
		if(this._boundingInfo != null) ret = this._boundingInfo.intersectsPoint(point);
		return ret;
	}
	,intersects: function(ray,fastCheck) {
		var pickingInfo = new com.gamestudiohx.babylonhx.collisions.PickingInfo();
		if(this._boundingInfo == null || !ray.intersectsSphere(this._boundingInfo.boundingSphere) || !ray.intersectsBox(this._boundingInfo.boundingBox)) return pickingInfo;
		this._generatePointsArray();
		var distance = Math.POSITIVE_INFINITY;
		var _g1 = 0;
		var _g = this.subMeshes.length;
		while(_g1 < _g) {
			var index = _g1++;
			var subMesh = this.subMeshes[index];
			if(this.subMeshes.length > 1 && !ray.intersectsBox(subMesh._boundingInfo.boundingBox)) continue;
			var currentDistance = subMesh.intersects(ray,this._positions,this._indices,fastCheck);
			if(currentDistance > 0) {
				if(fastCheck || currentDistance < distance) {
					distance = currentDistance;
					if(fastCheck) break;
				}
			}
		}
		if(distance >= 0 && distance < Math.POSITIVE_INFINITY) {
			var world;
			if(this._currentRenderId != this._scene.getRenderId()) this.computeWorldMatrix(null);
			world = this._worldMatrix;
			var worldOrigin = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(ray.origin,world);
			var direction = ray.direction.clone();
			direction.normalize();
			direction = new com.gamestudiohx.babylonhx.tools.math.Vector3(direction.x * distance,direction.y * distance,direction.z * distance);
			var worldDirection = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormal(direction,world);
			var pickedPoint = new com.gamestudiohx.babylonhx.tools.math.Vector3(worldOrigin.x + worldDirection.x,worldOrigin.y + worldDirection.y,worldOrigin.z + worldDirection.z);
			pickingInfo.hit = true;
			pickingInfo.distance = Math.sqrt(com.gamestudiohx.babylonhx.tools.math.Vector3.DistanceSquared(worldOrigin,pickedPoint));
			pickingInfo.pickedPoint = pickedPoint;
			pickingInfo.pickedMesh = js.Boot.__cast(this , com.gamestudiohx.babylonhx.mesh.Mesh);
			return pickingInfo;
		}
		return pickingInfo;
	}
	,clone: function(name,newParent,doNotCloneChildren) {
		if(doNotCloneChildren == null) doNotCloneChildren = false;
		return null;
	}
	,releaseSubMeshes: function() {
		if(this.subMeshes != null) while(this.subMeshes.length > 0) {
			if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("releaseSubMeshes",{ fileName : "AbstractMesh.hx", lineNumber : 775, className : "com.gamestudiohx.babylonhx.mesh.AbstractMesh", methodName : "releaseSubMeshes"});
			this.subMeshes[0].dispose();
		} else {
			if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("new releaseSubMeshes",{ fileName : "AbstractMesh.hx", lineNumber : 781, className : "com.gamestudiohx.babylonhx.mesh.AbstractMesh", methodName : "releaseSubMeshes"});
			this.subMeshes = new Array();
		}
	}
	,dispose: function(doNotRecurse) {
		if(doNotRecurse == null) doNotRecurse = false;
		if(this._vertexBuffers != null) {
			var $it0 = this._vertexBuffers.keys();
			while( $it0.hasNext() ) {
				var key = $it0.next();
				this._vertexBuffers.get(key).dispose();
				this._vertexBuffers.remove(key);
			}
			this._vertexBuffers = null;
		}
		if(this._indexBuffer != null) {
			this._scene.getEngine()._releaseBuffer(this._indexBuffer);
			this._indexBuffer = null;
		}
		HxOverrides.remove(this._scene.meshes,this);
		if(!doNotRecurse) {
			var index = 0;
			while(index < this._scene.particleSystems.length) {
				if(this._scene.particleSystems[index].emitter == this) {
					this._scene.particleSystems[index].dispose();
					index--;
				}
				index++;
			}
			var objects = this._scene.meshes.slice(0);
			var _g1 = 0;
			var _g = objects.length;
			while(_g1 < _g) {
				var index1 = _g1++;
				if(objects[index1].parent == this) objects[index1].dispose();
			}
		}
		this._isDisposed = true;
		if(this.onDispose != null) this.onDispose();
	}
	,__class__: com.gamestudiohx.babylonhx.mesh.AbstractMesh
	,__properties__: {get_parentId:"get_parentId"}
});
com.gamestudiohx.babylonhx.mesh.IGetSetVerticesData = function() { };
$hxClasses["com.gamestudiohx.babylonhx.mesh.IGetSetVerticesData"] = com.gamestudiohx.babylonhx.mesh.IGetSetVerticesData;
com.gamestudiohx.babylonhx.mesh.IGetSetVerticesData.__name__ = ["com","gamestudiohx","babylonhx","mesh","IGetSetVerticesData"];
com.gamestudiohx.babylonhx.mesh.IGetSetVerticesData.prototype = {
	__class__: com.gamestudiohx.babylonhx.mesh.IGetSetVerticesData
};
com.gamestudiohx.babylonhx.mesh.Geometry = function(id,engine,vertexData,updatable,mesh) {
	this._indices = new Array();
	this._totalVertices = 0;
	this.id = id;
	this._engine = engine;
	this._meshes = new Array();
	this.delayLoadState = com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_NONE;
	if(vertexData != null) this.setAllVerticesData(vertexData,updatable); else {
		this._totalVertices = 0;
		this._indices = new Array();
	}
	if(mesh != null) this.applyToMesh(mesh);
};
$hxClasses["com.gamestudiohx.babylonhx.mesh.Geometry"] = com.gamestudiohx.babylonhx.mesh.Geometry;
com.gamestudiohx.babylonhx.mesh.Geometry.__name__ = ["com","gamestudiohx","babylonhx","mesh","Geometry"];
com.gamestudiohx.babylonhx.mesh.Geometry.__interfaces__ = [com.gamestudiohx.babylonhx.mesh.IGetSetVerticesData];
com.gamestudiohx.babylonhx.mesh.Geometry.ExtractFromMesh = function(mesh,id) {
	var geometry = mesh._geometry;
	if(geometry == null) return null;
	return geometry.copy(id);
};
com.gamestudiohx.babylonhx.mesh.Geometry.RandomId = function() {
	var CHARS = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz".split("");
	var chars = CHARS;
	var uuid = new Array();
	var rnd = 0;
	var r;
	var _g = 0;
	while(_g < 36) {
		var i = _g++;
		if(i == 8 || i == 13 || i == 18 || i == 23) uuid[i] = "-"; else if(i == 14) uuid[i] = "4"; else {
			if(rnd <= 2) rnd = 33554432 + Std.parseInt(Std.string(Math.random() * Std.parseFloat("16777216"))) | 0;
			r = rnd & 15;
			rnd = rnd >> 4;
			uuid[i] = chars[i == 19?r & 3 | 8:r];
		}
	}
	return uuid.join("");
};
com.gamestudiohx.babylonhx.mesh.Geometry.prototype = {
	getEngine: function() {
		return this._engine;
	}
	,isReady: function() {
		return this.delayLoadState == com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_LOADED || this.delayLoadState == com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_NONE;
	}
	,setAllVerticesData: function(vertexData,updatable) {
		vertexData.applyToGeometry(this,updatable);
	}
	,setVerticesData: function(kind,data,updatable) {
		var extend = com.gamestudiohx.babylonhx.tools.Tools.ExtractMinAndMax(data,0,this._totalVertices);
		if(this._vertexBuffers == null) this._vertexBuffers = new haxe.ds.StringMap();
		if(this._vertexBuffers.get(kind) != null) this._vertexBuffers.get(kind).dispose();
		var value = new com.gamestudiohx.babylonhx.mesh.VertexBuffer(this._engine,data,kind,updatable);
		this._vertexBuffers.set(kind,value);
		if(kind == com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind) {
			var stride = this._vertexBuffers.get(kind).getStrideSize();
			this._totalVertices = data.length / stride | 0;
			var meshes = this._meshes;
			var numOfMeshes = meshes.length;
			var index = 0;
			while(index < numOfMeshes) {
				var mesh = meshes[index];
				mesh._resetPointsArrayCache();
				mesh._boundingInfo = new com.gamestudiohx.babylonhx.culling.BoundingInfo(extend.minimum,extend.maximum);
				mesh._createGlobalSubMesh();
				mesh.computeWorldMatrix(true);
				index++;
			}
		}
	}
	,updateVerticesData: function(kind,data,updateExtends,makeItUnique) {
		var vertexBuffer = this.getVertexBuffer(kind);
		if(vertexBuffer == null) return;
		vertexBuffer.update(data);
		if(kind == com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind) {
			var extend = com.gamestudiohx.babylonhx.tools.Tools.ExtractMinAndMax(data,0,this._totalVertices);
			if(updateExtends) {
				var stride = vertexBuffer.getStrideSize();
				this._totalVertices = data.length / stride | 0;
			}
			var meshes = this._meshes;
			var numOfMeshes = meshes.length;
			var index = 0;
			while(index < numOfMeshes) {
				var mesh = meshes[index];
				mesh._resetPointsArrayCache();
				if(updateExtends) mesh._boundingInfo = new com.gamestudiohx.babylonhx.culling.BoundingInfo(extend.minimum,extend.maximum);
				index++;
			}
		}
	}
	,getTotalVertices: function() {
		if(!this.isReady()) return 0;
		return this._totalVertices;
	}
	,getVerticesData: function(kind) {
		var vertexBuffer = this.getVertexBuffer(kind);
		if(vertexBuffer == null) return new Array();
		return vertexBuffer.getData();
	}
	,getVertexBuffer: function(kind) {
		if(!this.isReady()) return null;
		return this._vertexBuffers.get(kind);
	}
	,getVertexBuffers: function() {
		if(!this.isReady()) return null;
		return this._vertexBuffers;
	}
	,isVerticesDataPresent: function(kind) {
		if(this._vertexBuffers == null) {
			if(HxOverrides.indexOf(this._delayInfo,kind,0) != -1) return true;
			return false;
		}
		return this._vertexBuffers.get(kind) != null;
	}
	,getVerticesDataKinds: function() {
		var result = new Array();
		if(this._vertexBuffers == null && this._delayInfo != null) {
			var _g = 0;
			var _g1 = this._delayInfo;
			while(_g < _g1.length) {
				var kind = _g1[_g];
				++_g;
				result.push(kind);
			}
		} else {
			var $it0 = this._vertexBuffers.keys();
			while( $it0.hasNext() ) {
				var kind1 = $it0.next();
				result.push(kind1);
			}
		}
		return result;
	}
	,setIndices: function(indices) {
		if(this._indexBuffer != null) this._engine._releaseBuffer(this._indexBuffer);
		this._indices = indices;
		if(this._meshes.length != 0 && this._indices.length > 0) this._indexBuffer = this._engine.createIndexBuffer(this._indices);
		var meshes = this._meshes;
		var numOfMeshes = meshes.length;
		var index = 0;
		while(index < numOfMeshes) {
			meshes[index]._createGlobalSubMesh();
			index++;
		}
	}
	,getTotalIndices: function() {
		if(!this.isReady()) return 0;
		return this._indices.length;
	}
	,getIndices: function() {
		if(!this.isReady()) return null;
		return this._indices;
	}
	,getIndexBuffer: function() {
		if(!this.isReady()) return null;
		return this._indexBuffer;
	}
	,releaseForMesh: function(mesh) {
		var meshes = this._meshes;
		var index = HxOverrides.indexOf(meshes,mesh,0);
		if(index == -1) return;
		var $it0 = this._vertexBuffers.keys();
		while( $it0.hasNext() ) {
			var kind = $it0.next();
			this._vertexBuffers.get(kind).dispose();
		}
		if(this._indexBuffer != null && !this._engine._releaseBuffer(this._indexBuffer)) this._indexBuffer = null;
		meshes.splice(index,1);
		mesh._geometry = null;
	}
	,applyToMesh: function(mesh) {
		if(mesh._geometry == this) return;
		var previousGeometry = mesh._geometry;
		if(previousGeometry != null) previousGeometry.releaseForMesh(mesh);
		var meshes = this._meshes;
		mesh._geometry = this;
		mesh.getScene().pushGeometry(this);
		meshes.push(mesh);
		if(this.isReady()) this._applyToMesh(mesh); else mesh._boundingInfo = this._boundingInfo;
	}
	,_applyToMesh: function(mesh) {
		var numOfMeshes = this._meshes.length;
		var $it0 = this._vertexBuffers.keys();
		while( $it0.hasNext() ) {
			var kind = $it0.next();
			if(numOfMeshes == 1) this._vertexBuffers.get(kind).create();
			this._vertexBuffers.get(kind)._buffer.references = numOfMeshes;
			if(kind == com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind) {
				mesh._resetPointsArrayCache();
				var extend = com.gamestudiohx.babylonhx.tools.Tools.ExtractMinAndMax(this._vertexBuffers.get(kind).getData(),0,this._totalVertices);
				mesh._boundingInfo = new com.gamestudiohx.babylonhx.culling.BoundingInfo(extend.minimum,extend.maximum);
				mesh._createGlobalSubMesh();
			}
		}
		if(numOfMeshes == 1 && this._indices.length > 0) this._indexBuffer = this._engine.createIndexBuffer(this._indices);
		if(this._indexBuffer != null) this._indexBuffer.references = numOfMeshes;
	}
	,load: function(scene,onLoaded) {
		var _g = this;
		if(this.delayLoadState == com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_LOADING) return;
		if(this.isReady()) {
			if(onLoaded) onLoaded();
			return;
		}
		this.delayLoadState = com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_LOADING;
		scene._addPendingData(this);
		com.gamestudiohx.babylonhx.tools.Tools.LoadFile(this.delayLoadingFile,function(data) {
			_g._delayLoadingFunction(data,_g);
			_g.delayLoadState = com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_LOADED;
			_g._delayInfo = new Array();
			scene._removePendingData(_g);
			var meshes = _g._meshes;
			var numOfMeshes = meshes.length;
			var index = 0;
			while(index < numOfMeshes) {
				_g._applyToMesh(meshes[index]);
				index++;
			}
			if(onLoaded) onLoaded();
		},function() {
		},scene.database);
	}
	,dispose: function() {
		var meshes = this._meshes;
		var numOfMeshes = meshes.length;
		var index = 0;
		while(index < numOfMeshes) {
			this.releaseForMesh(meshes[index]);
			index++;
		}
		this._meshes = new Array();
		var $it0 = this._vertexBuffers.keys();
		while( $it0.hasNext() ) {
			var kind = $it0.next();
			this._vertexBuffers.get(kind).dispose();
		}
		this._vertexBuffers = new haxe.ds.StringMap();
		this._totalVertices = 0;
		if(this._indexBuffer != null) this._engine._releaseBuffer(this._indexBuffer);
		this._indexBuffer = null;
		this._indices = new Array();
		this.delayLoadState = com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_NONE;
		this.delayLoadingFile = null;
		this._delayLoadingFunction = null;
		this._delayInfo = new Array();
		this._boundingInfo = null;
	}
	,copy: function(id) {
		var vertexData = new com.gamestudiohx.babylonhx.mesh.VertexData();
		vertexData.indices = new Array();
		var indices = this.getIndices();
		var index = 0;
		while(index < indices.length) {
			vertexData.indices.push(indices[index]);
			index++;
		}
		var updatable = false;
		var stopChecking = false;
		var $it0 = this._vertexBuffers.keys();
		while( $it0.hasNext() ) {
			var kind = $it0.next();
			vertexData.set(this.getVerticesData(kind),kind);
			if(!stopChecking) {
				updatable = this.getVertexBuffer(kind).isUpdatable();
				stopChecking = !updatable;
			}
		}
		var geometry = new com.gamestudiohx.babylonhx.mesh.Geometry(id,this._engine,vertexData,updatable,null);
		geometry.delayLoadState = this.delayLoadState;
		geometry.delayLoadingFile = this.delayLoadingFile;
		geometry._delayLoadingFunction = this._delayLoadingFunction;
		var _g = 0;
		var _g1 = this._delayInfo;
		while(_g < _g1.length) {
			var kind1 = _g1[_g];
			++_g;
			if(geometry._delayInfo == null) geometry._delayInfo = new Array();
			geometry._delayInfo.push(kind1);
		}
		var extend = com.gamestudiohx.babylonhx.tools.Tools.ExtractMinAndMax(this.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind),0,this.getTotalVertices());
		geometry._boundingInfo = new com.gamestudiohx.babylonhx.culling.BoundingInfo(extend.minimum,extend.maximum);
		return geometry;
	}
	,__class__: com.gamestudiohx.babylonhx.mesh.Geometry
};
com.gamestudiohx.babylonhx.mesh.InstancedMesh = function(name,source) {
	com.gamestudiohx.babylonhx.mesh.AbstractMesh.call(this,name,source.getScene());
	source.instances.push(this);
	this._sourceMesh = source;
	this.position.copyFrom(source.position);
	this.rotation.copyFrom(source.rotation);
	this.scaling.copyFrom(source.scaling);
	if(source.rotationQuaternion != null) this.rotationQuaternion = source.rotationQuaternion.clone();
	this.infiniteDistance = source.infiniteDistance;
	this.setPivotMatrix(source.getPivotMatrix());
	this.refreshBoundingInfo();
	this._syncSubMeshes();
};
$hxClasses["com.gamestudiohx.babylonhx.mesh.InstancedMesh"] = com.gamestudiohx.babylonhx.mesh.InstancedMesh;
com.gamestudiohx.babylonhx.mesh.InstancedMesh.__name__ = ["com","gamestudiohx","babylonhx","mesh","InstancedMesh"];
com.gamestudiohx.babylonhx.mesh.InstancedMesh.__super__ = com.gamestudiohx.babylonhx.mesh.AbstractMesh;
com.gamestudiohx.babylonhx.mesh.InstancedMesh.prototype = $extend(com.gamestudiohx.babylonhx.mesh.AbstractMesh.prototype,{
	refreshBoundingInfo: function() {
		var data = this._sourceMesh.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind);
		if(data.length > 0) {
			var extend = com.gamestudiohx.babylonhx.tools.Tools.ExtractMinAndMax(data,0,this._sourceMesh.getTotalVertices());
			this._boundingInfo = new com.gamestudiohx.babylonhx.culling.BoundingInfo(extend.minimum,extend.maximum);
		}
		this._updateBoundingInfo();
	}
	,_activate: function(renderId) {
		this._sourceMesh._registerInstanceForRenderId(this,renderId);
	}
	,_syncSubMeshes: function() {
		this.releaseSubMeshes();
		var index = 0;
		while(index < this._sourceMesh.subMeshes.length) {
			this._sourceMesh.subMeshes[index].clone(this,this._sourceMesh);
			index++;
		}
	}
	,_generatePointsArray: function() {
		return this._sourceMesh._generatePointsArray();
	}
	,clone: function(name,newParent,doNotCloneChildren) {
		if(doNotCloneChildren == null) doNotCloneChildren = false;
		var result = this._sourceMesh.createInstance(name);
		com.gamestudiohx.babylonhx.tools.Tools.DeepCopy(this,result,["name"],[]);
		this.refreshBoundingInfo();
		if(newParent != null) result.parent = newParent;
		if(!doNotCloneChildren) {
			var index = 0;
			while(index < this.getScene().meshes.length) {
				var mesh;
				mesh = js.Boot.__cast(this.getScene().meshes[index] , com.gamestudiohx.babylonhx.mesh.InstancedMesh);
				if(mesh.parent == this) mesh.clone(mesh.name,result);
				index++;
			}
		}
		result.computeWorldMatrix(true);
		return result;
	}
	,dispose: function(doNotRecurse) {
		if(doNotRecurse == null) doNotRecurse = false;
		var index = HxOverrides.indexOf(this._sourceMesh.instances,this,0);
		this._sourceMesh.instances.splice(index,1);
		com.gamestudiohx.babylonhx.mesh.AbstractMesh.prototype.dispose.call(this,doNotRecurse);
	}
	,__class__: com.gamestudiohx.babylonhx.mesh.InstancedMesh
});
com.gamestudiohx.babylonhx.mesh.InstancesBatch = function() {
	this.renderSelf = true;
	this.mustReturn = false;
};
$hxClasses["com.gamestudiohx.babylonhx.mesh.InstancesBatch"] = com.gamestudiohx.babylonhx.mesh.InstancesBatch;
com.gamestudiohx.babylonhx.mesh.InstancesBatch.__name__ = ["com","gamestudiohx","babylonhx","mesh","InstancesBatch"];
com.gamestudiohx.babylonhx.mesh.InstancesBatch.prototype = {
	__class__: com.gamestudiohx.babylonhx.mesh.InstancesBatch
};
com.gamestudiohx.babylonhx.mesh.Mesh = function(name,scene) {
	this._instancesBufferSize = 2048;
	this._batchCache = new com.gamestudiohx.babylonhx.mesh.InstancesBatch();
	this._renderIdForInstances = -1;
	this._onBeforeRenderCallbacks = new Array();
	this.instances = new Array();
	this.delayLoadState = com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_NONE;
	com.gamestudiohx.babylonhx.mesh.AbstractMesh.call(this,name,scene);
};
$hxClasses["com.gamestudiohx.babylonhx.mesh.Mesh"] = com.gamestudiohx.babylonhx.mesh.Mesh;
com.gamestudiohx.babylonhx.mesh.Mesh.__name__ = ["com","gamestudiohx","babylonhx","mesh","Mesh"];
com.gamestudiohx.babylonhx.mesh.Mesh.__interfaces__ = [com.gamestudiohx.babylonhx.mesh.IGetSetVerticesData];
com.gamestudiohx.babylonhx.mesh.Mesh.CreateBox = function(name,size,scene,updatable) {
	var box = new com.gamestudiohx.babylonhx.mesh.Mesh(name,scene);
	var vertexData = com.gamestudiohx.babylonhx.mesh.VertexData.CreateBox(size);
	vertexData.applyToMesh(box,updatable);
	return box;
};
com.gamestudiohx.babylonhx.mesh.Mesh.CreateSphere = function(name,segments,diameter,scene,updatable) {
	var sphere = new com.gamestudiohx.babylonhx.mesh.Mesh(name,scene);
	var vertexData = com.gamestudiohx.babylonhx.mesh.VertexData.CreateSphere(segments,diameter);
	vertexData.applyToMesh(sphere,updatable);
	return sphere;
};
com.gamestudiohx.babylonhx.mesh.Mesh.CreateCylinder = function(name,height,diameterTop,diameterBottom,tessellation,scene,updatable) {
	var cylinder = new com.gamestudiohx.babylonhx.mesh.Mesh(name,scene);
	var vertexData = com.gamestudiohx.babylonhx.mesh.VertexData.CreateCylinder(height,diameterTop,diameterBottom,tessellation);
	vertexData.applyToMesh(cylinder,updatable);
	return cylinder;
};
com.gamestudiohx.babylonhx.mesh.Mesh.CreateTorus = function(name,diameter,thickness,tessellation,scene,updatable) {
	var torus = new com.gamestudiohx.babylonhx.mesh.Mesh(name,scene);
	var vertexData = com.gamestudiohx.babylonhx.mesh.VertexData.CreateTorus(diameter,thickness,tessellation);
	vertexData.applyToMesh(torus,updatable);
	return torus;
};
com.gamestudiohx.babylonhx.mesh.Mesh.CreateTorusKnot = function(name,radius,tube,radialSegments,tubularSegments,p,q,scene,updatable) {
	var torusKnot = new com.gamestudiohx.babylonhx.mesh.Mesh(name,scene);
	var vertexData = com.gamestudiohx.babylonhx.mesh.VertexData.CreateTorusKnot(radius,tube,radialSegments,tubularSegments,p,q);
	vertexData.applyToMesh(torusKnot,updatable);
	return torusKnot;
};
com.gamestudiohx.babylonhx.mesh.Mesh.CreatePlane = function(name,size,scene,updatable) {
	var plane = new com.gamestudiohx.babylonhx.mesh.Mesh(name,scene);
	var vertexData = com.gamestudiohx.babylonhx.mesh.VertexData.CreatePlane(size);
	vertexData.applyToMesh(plane,updatable);
	return plane;
};
com.gamestudiohx.babylonhx.mesh.Mesh.MinMax = function(meshes) {
	var _MinMax = { min : new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,0), max : new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,0)};
	var minVector = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,0);
	var maxVector = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,0);
	var _g1 = 0;
	var _g = meshes.length;
	while(_g1 < _g) {
		var i = _g1++;
		var mesh = meshes[i];
		var boundingBox = mesh.getBoundingInfo().boundingBox;
		if(minVector == null) {
			minVector = boundingBox.minimumWorld;
			maxVector = boundingBox.maximumWorld;
			continue;
		}
		minVector.MinimizeInPlace(boundingBox.minimumWorld);
		maxVector.MaximizeInPlace(boundingBox.maximumWorld);
	}
	_MinMax.min = minVector;
	_MinMax.max = maxVector;
	return _MinMax;
};
com.gamestudiohx.babylonhx.mesh.Mesh.Center = function(meshesOrMinMaxVector) {
	var minMaxVector;
	if(meshesOrMinMaxVector.min != null) minMaxVector = meshesOrMinMaxVector; else minMaxVector = com.gamestudiohx.babylonhx.mesh.Mesh.MinMax(meshesOrMinMaxVector);
	return com.gamestudiohx.babylonhx.tools.math.Vector3.Center(minMaxVector.min,minMaxVector.max);
};
com.gamestudiohx.babylonhx.mesh.Mesh.__super__ = com.gamestudiohx.babylonhx.mesh.AbstractMesh;
com.gamestudiohx.babylonhx.mesh.Mesh.prototype = $extend(com.gamestudiohx.babylonhx.mesh.AbstractMesh.prototype,{
	getTotalVertices: function() {
		if(this._geometry == null) return 0;
		return this._geometry.getTotalVertices();
	}
	,getVerticesData: function(kind) {
		if(this._geometry == null) return null;
		return this._geometry.getVerticesData(kind);
	}
	,getVertexBuffer: function(kind) {
		if(this._geometry == null) return null;
		return this._geometry.getVertexBuffer(kind);
	}
	,isVerticesDataPresent: function(kind) {
		if(this._geometry == null) {
			if(this._delayInfo.length > 0) return HxOverrides.indexOf(this._delayInfo,kind,0) != -1;
			return false;
		}
		return this._geometry.isVerticesDataPresent(kind);
	}
	,getVerticesDataKinds: function() {
		if(this._geometry == null) {
			var result = new Array();
			if(this._delayInfo.length > 0) {
				var _g = 0;
				var _g1 = this._delayInfo;
				while(_g < _g1.length) {
					var kind = _g1[_g];
					++_g;
					result.push(kind);
				}
			}
			return result;
		}
		return this._geometry.getVerticesDataKinds();
	}
	,getTotalIndices: function() {
		if(this._geometry == null) return 0;
		return this._geometry.getTotalIndices();
	}
	,getIndices: function() {
		if(this._geometry == null) return new Array();
		return this._geometry.getIndices();
	}
	,isReady: function() {
		if(this.delayLoadState == com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_LOADING) return false;
		return com.gamestudiohx.babylonhx.mesh.AbstractMesh.prototype.isReady.call(this);
	}
	,_preActivate: function() {
		var sceneRenderId = this.getScene().getRenderId();
		if(this._preActivateId == sceneRenderId) return;
		this._preActivateId = sceneRenderId;
		this._visibleInstances = null;
	}
	,_registerInstanceForRenderId: function(instance,renderId) {
		if(this._visibleInstances != null) {
			this._visibleInstances = { };
			this._visibleInstances.defaultRenderId = renderId;
			this._visibleInstances.selfDefaultRenderId = this._renderId;
		}
		if(this._visibleInstances[renderId] == null) this._visibleInstances[renderId] = new Array();
		this._visibleInstances[renderId].push(instance);
	}
	,refreshBoundingInfo: function() {
		var data = this.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind);
		if(data.length > 0) {
			var extend = com.gamestudiohx.babylonhx.tools.Tools.ExtractMinAndMax(data,0,this.getTotalVertices());
			this._boundingInfo = new com.gamestudiohx.babylonhx.culling.BoundingInfo(extend.minimum,extend.maximum);
		}
		if(this.subMeshes.length > 0) {
			var index = 0;
			while(index < this.subMeshes.length) {
				this.subMeshes[index].refreshBoundingInfo();
				index++;
			}
		}
		this._updateBoundingInfo();
	}
	,_createGlobalSubMesh: function() {
		var totalVertices = this.getTotalVertices();
		if(totalVertices == 0 || this.getIndices().length == 0) return null;
		this.releaseSubMeshes();
		return new com.gamestudiohx.babylonhx.mesh.SubMesh(0,0,totalVertices,0,this.getTotalIndices(),this);
	}
	,subdivide: function(count) {
		if(count < 1) return;
		var totalIndices = this.getTotalIndices();
		var subdivisionSize = totalIndices / count | 0 | 0;
		var offset = 0;
		while(subdivisionSize % 3 != 0) subdivisionSize++;
		this.releaseSubMeshes();
		var index = 0;
		while(index < count) {
			if(offset >= totalIndices) break;
			com.gamestudiohx.babylonhx.mesh.SubMesh.CreateFromIndices(0,offset,Std["int"](Math.min(subdivisionSize,totalIndices - offset)),this);
			offset += subdivisionSize;
			index++;
		}
		this.synchronizeInstances();
	}
	,setVerticesData: function(kind,data,updatable) {
		if((kind instanceof Array) && kind.__enum__ == null) {
			var temp = data;
			data = kind;
			kind = temp;
			haxe.Log.trace("Deprecated usage of setVerticesData detected (since v1.12). Current signature is setVerticesData(kind, data, updatable).",{ fileName : "Mesh.hx", lineNumber : 230, className : "com.gamestudiohx.babylonhx.mesh.Mesh", methodName : "setVerticesData"});
		}
		if(this._geometry == null) {
			var vertexData = new com.gamestudiohx.babylonhx.mesh.VertexData();
			vertexData.set(data,kind);
			var scene = this.getScene();
			this._geometry = new com.gamestudiohx.babylonhx.mesh.Geometry(com.gamestudiohx.babylonhx.mesh.Geometry.RandomId(),scene.getEngine(),vertexData,updatable,this);
		} else this._geometry.setVerticesData(kind,data,updatable);
	}
	,updateVerticesData: function(kind,data,updateExtends,makeItUnique) {
		if(this._geometry == null) return;
		if(!makeItUnique) this._geometry.updateVerticesData(kind,data,updateExtends); else {
			this.makeGeometryUnique();
			this.updateVerticesData(kind,data,updateExtends,false);
		}
	}
	,makeGeometryUnique: function() {
		if(this._geometry == null) return;
		var geometry = this._geometry.copy(com.gamestudiohx.babylonhx.mesh.Geometry.RandomId());
		geometry.applyToMesh(this);
	}
	,setIndices: function(indices) {
		if(this._geometry == null) {
			var vertexData = new com.gamestudiohx.babylonhx.mesh.VertexData();
			vertexData.indices = indices;
			var scene = this.getScene();
			new com.gamestudiohx.babylonhx.mesh.Geometry(com.gamestudiohx.babylonhx.mesh.Geometry.RandomId(),scene.getEngine(),vertexData,false,this);
		} else this._geometry.setIndices(indices);
	}
	,_bind: function(subMesh,effect,wireframe) {
		var engine = this.getScene().getEngine();
		var indexToBind = this._geometry.getIndexBuffer();
		if(wireframe) indexToBind = subMesh.getLinesIndexBuffer(this.getIndices(),engine);
		engine.bindMultiBuffers(this._geometry.getVertexBuffers(),indexToBind,effect);
	}
	,_draw: function(subMesh,useTriangles,instancesCount) {
		if(this._geometry == null || Lambda.count(this._geometry.getVertexBuffers()) == 0 || this._geometry.getIndexBuffer() == null) return;
		var engine = this.getScene().getEngine();
		engine.draw(useTriangles,useTriangles?subMesh.indexStart:0,useTriangles?subMesh.indexCount:subMesh.linesIndexCount,instancesCount);
	}
	,registerBeforeRender: function(func) {
		this._onBeforeRenderCallbacks.push(func);
	}
	,unregisterBeforeRender: function(func) {
		var index;
		var x = func;
		index = HxOverrides.indexOf(this._onBeforeRenderCallbacks,x,0);
		if(index > -1) this._onBeforeRenderCallbacks.splice(index,1);
	}
	,_getInstancesRenderList: function() {
		var scene = this.getScene();
		this._batchCache.mustReturn = false;
		this._batchCache.renderSelf = true;
		this._batchCache.visibleInstances = null;
		if(this._visibleInstances) {
			var currentRenderId = scene.getRenderId();
			this._batchCache.visibleInstances = this._visibleInstances[currentRenderId];
			var selfRenderId = this._renderId;
			if(this._batchCache.visibleInstances == null && this._visibleInstances.defaultRenderId) {
				this._batchCache.visibleInstances = this._visibleInstances[this._visibleInstances.defaultRenderId];
				currentRenderId = this._visibleInstances.defaultRenderId;
				selfRenderId = this._visibleInstances.selfDefaultRenderId;
			}
			if(this._batchCache.visibleInstances != null && this._batchCache.visibleInstances.length > 0) {
				if(this._renderIdForInstances == currentRenderId) {
					this._batchCache.mustReturn = true;
					return this._batchCache;
				}
				if(currentRenderId != selfRenderId) this._batchCache.renderSelf = false;
			}
			this._renderIdForInstances = currentRenderId;
		}
		return this._batchCache;
	}
	,_renderWithInstances: function(subMesh,wireFrame,batch,effect,engine) {
		var matricesCount = this.instances.length + 1;
		var bufferSize = matricesCount * 16 * 4;
		while(this._instancesBufferSize < bufferSize) this._instancesBufferSize *= 2;
		if(this._worldMatricesInstancesBuffer == null || this._worldMatricesInstancesBuffer.capacity < this._instancesBufferSize) {
			if(this._worldMatricesInstancesBuffer != null) engine._releaseBuffer(this._worldMatricesInstancesBuffer);
			this._worldMatricesInstancesBuffer = engine.createDynamicVertexBuffer(this._instancesBufferSize);
			this._worldMatricesInstancesArray = new Float32Array(this._instancesBufferSize / 4);
		}
		var offset = 0;
		var instancesCount = 0;
		var world;
		if(this._currentRenderId != this._scene.getRenderId()) this.computeWorldMatrix(null);
		world = this._worldMatrix;
		if(batch.renderSelf) {
			world.copyToArray(this._worldMatricesInstancesArray,offset);
			offset += 16;
			instancesCount++;
		}
		var instanceIndex = 0;
		while(instanceIndex < batch.visibleInstances.length) {
			var instance = batch.visibleInstances[instanceIndex];
			((function($this) {
				var $r;
				if(instance._currentRenderId != instance._scene.getRenderId()) instance.computeWorldMatrix(null);
				$r = instance._worldMatrix;
				return $r;
			}(this))).copyToArray(this._worldMatricesInstancesArray,offset);
			offset += 16;
			instancesCount++;
			instanceIndex++;
		}
		var offsetLocation0 = effect.getAttributeLocationByName("world0");
		var offsetLocation1 = effect.getAttributeLocationByName("world1");
		var offsetLocation2 = effect.getAttributeLocationByName("world2");
		var offsetLocation3 = effect.getAttributeLocationByName("world3");
		var offsetLocations = [offsetLocation0,offsetLocation1,offsetLocation2,offsetLocation3];
		engine.updateAndBindInstancesBuffer(this._worldMatricesInstancesBuffer,this._worldMatricesInstancesArray,offsetLocations);
		this._draw(subMesh,!wireFrame,instancesCount);
		engine.unBindInstancesBuffer(this._worldMatricesInstancesBuffer,offsetLocations);
	}
	,render: function(subMesh) {
		var scene = this.getScene();
		var batch = this._getInstancesRenderList();
		if(batch.mustReturn) return;
		if(this._geometry == null || this._geometry.getVertexBuffers() == null || this._geometry.getIndexBuffer() == null) return;
		var _g1 = 0;
		var _g = this._onBeforeRenderCallbacks.length;
		while(_g1 < _g) {
			var callbackIndex = _g1++;
			this._onBeforeRenderCallbacks[callbackIndex]();
		}
		var engine = scene.getEngine();
		var hardwareInstancedRendering = engine.getCaps().instancedArrays != null && batch.visibleInstances != null;
		var effectiveMaterial = subMesh.getMaterial();
		if(effectiveMaterial == null || !effectiveMaterial.isReady(this)) return;
		var world;
		if(this._currentRenderId != this._scene.getRenderId()) this.computeWorldMatrix(null);
		world = this._worldMatrix;
		var effect = effectiveMaterial.getEffect();
		var wireFrame = engine.forceWireframe || effectiveMaterial.wireframe;
		this._bind(subMesh,effect,wireFrame);
		if(js.Boot.__instanceof(effectiveMaterial,com.gamestudiohx.babylonhx.materials.Material)) {
			effectiveMaterial._preBind();
			effectiveMaterial.bind(world,this);
		}
		if(hardwareInstancedRendering) this._renderWithInstances(subMesh,wireFrame,batch,effect,engine); else {
			if(batch.renderSelf) this._draw(subMesh,!wireFrame);
			if(batch.visibleInstances != null) {
				var instanceIndex = 0;
				while(instanceIndex < batch.visibleInstances.length) {
					var instance = batch.visibleInstances[instanceIndex];
					if(instance._currentRenderId != instance._scene.getRenderId()) instance.computeWorldMatrix(null);
					world = instance._worldMatrix;
					effectiveMaterial.bindOnlyWorldMatrix(world);
					this._draw(subMesh,!wireFrame);
					instanceIndex++;
				}
			}
		}
		effectiveMaterial.unbind();
	}
	,getEmittedParticleSystems: function() {
		var results = new Array();
		var index = 0;
		while(index < this.getScene().particleSystems.length) {
			var particleSystem = this.getScene().particleSystems[index];
			if(particleSystem.emitter == this) results.push(particleSystem);
			index++;
		}
		return results;
	}
	,getHierarchyEmittedParticleSystems: function() {
		var results = new Array();
		var descendants = this.getDescendants();
		descendants.push(this);
		var index = 0;
		while(index < this.getScene().particleSystems.length) {
			var particleSystem = this.getScene().particleSystems[index];
			if((function($this) {
				var $r;
				var x = particleSystem.emitter;
				$r = HxOverrides.indexOf(descendants,x,0);
				return $r;
			}(this)) != -1) results.push(particleSystem);
			index++;
		}
		return results;
	}
	,getChildren: function() {
		var results = new Array();
		var index = 0;
		while(index < this.getScene().meshes.length) {
			var mesh = this.getScene().meshes[index];
			if(mesh.parent == this) results.push(mesh);
			index++;
		}
		return results;
	}
	,_checkDelayState: function() {
		var that = this;
		var scene = this.getScene();
		if(this._geometry != null) this._geometry.load(scene); else if(that.delayLoadState == com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_NOTLOADED) {
			that.delayLoadState = com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_LOADING;
			scene._addPendingData(that);
			com.gamestudiohx.babylonhx.tools.Tools.LoadFile(this._delayLoadingFunction);
		}
	}
	,isInFrustum: function(frustumPlanes) {
		if(this.delayLoadState == com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_LOADING) return false;
		if(!com.gamestudiohx.babylonhx.mesh.AbstractMesh.prototype.isInFrustum.call(this,frustumPlanes)) return false;
		this._checkDelayState();
		return true;
	}
	,setMaterialByID: function(id) {
		var materials = this.getScene().materials;
		var index = 0;
		while(index < materials.length) {
			if(materials[index].id == id) {
				this.material = materials[index];
				return;
			}
			index++;
		}
		var multiMaterials = this.getScene().multiMaterials;
		index = 0;
		while(index < multiMaterials.length) {
			if(multiMaterials[index].id == id) {
				this.material = multiMaterials[index];
				return;
			}
			index++;
		}
	}
	,getAnimatables: function() {
		var results = new Array();
		if(this.material != null) results.push(this.material);
		return results;
	}
	,bakeTransformIntoVertices: function(transform) {
		if(!this.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind)) return;
		this._resetPointsArrayCache();
		var data = this.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind);
		var temp = [];
		var index = 0;
		while(index < data.length) {
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(new com.gamestudiohx.babylonhx.tools.math.Vector3(data[index],data[index + 1],data[index + 2]),transform).toArray(temp,index);
			index += 3;
		}
		this.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind,temp,this.getVertexBuffer(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind).isUpdatable());
		if(!this.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind)) return;
		data = this.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind);
		index = 0;
		while(index < data.length) {
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormal(new com.gamestudiohx.babylonhx.tools.math.Vector3(data[index],data[index + 1],data[index + 2]),transform).toArray(temp,index);
			index += 3;
		}
		this.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind,temp,this.getVertexBuffer(com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind).isUpdatable());
	}
	,_generatePointsArray: function() {
		if(this._positions != null) return true;
		this._positions = new Array();
		var data = this.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind);
		if(data == null) return false;
		var index = 0;
		while(index < data.length) {
			this._positions.push(new com.gamestudiohx.babylonhx.tools.math.Vector3(data[index],data[index + 1],data[index + 2]));
			index += 3;
		}
		return true;
	}
	,clone: function(name,newParent,doNotCloneChildren) {
		if(doNotCloneChildren == null) doNotCloneChildren = false;
		var resultMesh = new com.gamestudiohx.babylonhx.mesh.Mesh(name,this.getScene());
		var index = 0;
		this._geometry.applyToMesh(resultMesh);
		com.gamestudiohx.babylonhx.tools.Tools.DeepCopy(this,resultMesh,["_onBeforeRenderCallbacks","name","material","skeleton"]);
		resultMesh.material = this.material;
		if(newParent != null) resultMesh.parent = newParent;
		if(!doNotCloneChildren) while(index < this.getScene().meshes.length) {
			var mesh = this.getScene().meshes[index];
			if(mesh.parent == this) mesh.clone(mesh.name,resultMesh);
			index++;
		}
		index = 0;
		while(index < this.getScene().particleSystems.length) {
			var system = this.getScene().particleSystems[index];
			if(system.emitter == this) system.clone(system.name,resultMesh);
			index++;
		}
		resultMesh.computeWorldMatrix(true);
		return resultMesh;
	}
	,dispose: function(doNotRecurse) {
		if(doNotRecurse == null) doNotRecurse = false;
		if(this._geometry != null) this._geometry.releaseForMesh(this);
		if(this._worldMatricesInstancesBuffer != null) {
			this.getScene().getEngine()._releaseBuffer(this._worldMatricesInstancesBuffer);
			this._worldMatricesInstancesBuffer = null;
		}
		while(this.instances.length > 0) this.instances[0].dispose();
		com.gamestudiohx.babylonhx.mesh.AbstractMesh.prototype.dispose.call(this,doNotRecurse);
	}
	,convertToFlatShadedMesh: function() {
		var kinds = this.getVerticesDataKinds();
		var vbs = new haxe.ds.StringMap();
		var data = new haxe.ds.StringMap();
		var newdata = new haxe.ds.StringMap();
		var updatableNormals = false;
		var _g1 = 0;
		var _g = kinds.length;
		while(_g1 < _g) {
			var kindIndex = _g1++;
			var kind = kinds[kindIndex];
			if(kind == com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind) {
				updatableNormals = this.getVertexBuffer(kind).isUpdatable();
				HxOverrides.remove(kinds,kind);
				continue;
			}
		}
		var _g2 = 0;
		while(_g2 < kinds.length) {
			var kind1 = kinds[_g2];
			++_g2;
			var value = this.getVertexBuffer(kind1);
			vbs.set(kind1,value);
			var value1 = vbs.get(kind1).getData();
			data.set(kind1,value1);
			newdata.set(kind1,[]);
		}
		var previousSubmeshes = this.subMeshes.slice(0);
		var indices = this.getIndices();
		var _g11 = 0;
		var _g3 = indices.length;
		while(_g11 < _g3) {
			var index = _g11++;
			var vertexIndex = indices[index];
			var _g31 = 0;
			var _g21 = kinds.length;
			while(_g31 < _g21) {
				var kindIndex1 = _g31++;
				var kind2 = kinds[kindIndex1];
				var stride = vbs.get(kind2).getStrideSize();
				var _g4 = 0;
				while(_g4 < stride) {
					var offset = _g4++;
					newdata.get(kind2).push(data.get(kind2)[vertexIndex * stride + offset]);
				}
			}
		}
		var normals = [];
		var positions = newdata.get(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind);
		var index1 = 0;
		while(index1 < indices.length) {
			indices[index1] = index1;
			indices[index1 + 1] = index1 + 1;
			indices[index1 + 2] = index1 + 2;
			var p1 = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(positions,index1 * 3);
			var p2 = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(positions,(index1 + 1) * 3);
			var p3 = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(positions,(index1 + 2) * 3);
			var p1p2 = new com.gamestudiohx.babylonhx.tools.math.Vector3(p1.x - p2.x,p1.y - p2.y,p1.z - p2.z);
			var p3p2 = new com.gamestudiohx.babylonhx.tools.math.Vector3(p3.x - p2.x,p3.y - p2.y,p3.z - p2.z);
			var normal = com.gamestudiohx.babylonhx.tools.math.Vector3.Normalize(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(p1p2,p3p2));
			var _g5 = 0;
			while(_g5 < 3) {
				var localIndex = _g5++;
				normals.push(normal.x);
				normals.push(normal.y);
				normals.push(normal.z);
			}
			index1 += 3;
		}
		this.setIndices(indices);
		this.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind,normals,updatableNormals);
		var _g12 = 0;
		var _g6 = kinds.length;
		while(_g12 < _g6) {
			var kindIndex2 = _g12++;
			var kind3 = kinds[kindIndex2];
			this.setVerticesData(kind3,newdata.get(kind3),vbs.get(kind3).isUpdatable());
		}
		this.subMeshes = new Array();
		var _g13 = 0;
		var _g7 = previousSubmeshes.length;
		while(_g13 < _g7) {
			var submeshIndex = _g13++;
			var previousOne = previousSubmeshes[submeshIndex];
			var subMesh = new com.gamestudiohx.babylonhx.mesh.SubMesh(previousOne.materialIndex,previousOne.indexStart,previousOne.indexCount,previousOne.indexStart,previousOne.indexCount,this);
		}
	}
	,createInstance: function(name) {
		return new com.gamestudiohx.babylonhx.mesh.InstancedMesh(name,this);
	}
	,synchronizeInstances: function() {
		var instanceIndex = 0;
		while(instanceIndex < this.instances.length) {
			var instance = this.instances[instanceIndex];
			instance._syncSubMeshes();
			instanceIndex++;
		}
	}
	,__class__: com.gamestudiohx.babylonhx.mesh.Mesh
});
com.gamestudiohx.babylonhx.mesh.SubMesh = function(materialIndex,verticesStart,verticesCount,indexStart,indexCount,mesh,renderingMesh,createBoundingBox) {
	if(createBoundingBox == null) createBoundingBox = false;
	this._mesh = mesh;
	if(renderingMesh != null) this._renderingMesh = renderingMesh; else this._renderingMesh = js.Boot.__cast(mesh , com.gamestudiohx.babylonhx.mesh.Mesh);
	mesh.subMeshes.push(this);
	this.materialIndex = materialIndex;
	this.verticesStart = verticesStart;
	this.verticesCount = verticesCount;
	this.indexStart = indexStart;
	this.indexCount = indexCount;
	this.refreshBoundingInfo();
};
$hxClasses["com.gamestudiohx.babylonhx.mesh.SubMesh"] = com.gamestudiohx.babylonhx.mesh.SubMesh;
com.gamestudiohx.babylonhx.mesh.SubMesh.__name__ = ["com","gamestudiohx","babylonhx","mesh","SubMesh"];
com.gamestudiohx.babylonhx.mesh.SubMesh.CreateFromIndices = function(materialIndex,startIndex,indexCount,mesh) {
	var minVertexIndex = Math.POSITIVE_INFINITY;
	var maxVertexIndex = Math.NEGATIVE_INFINITY;
	var indices = mesh.getIndices();
	var _g1 = startIndex;
	var _g = startIndex + indexCount;
	while(_g1 < _g) {
		var index = _g1++;
		var vertexIndex = indices[index];
		if(vertexIndex < minVertexIndex) minVertexIndex = vertexIndex; else if(vertexIndex > maxVertexIndex) maxVertexIndex = vertexIndex;
	}
	return new com.gamestudiohx.babylonhx.mesh.SubMesh(materialIndex,minVertexIndex,maxVertexIndex - minVertexIndex,startIndex,indexCount,mesh);
};
com.gamestudiohx.babylonhx.mesh.SubMesh.prototype = {
	getRenderingMesh: function() {
		return this._renderingMesh;
	}
	,getBoundingInfo: function() {
		return this._boundingInfo;
	}
	,getMesh: function() {
		return this._mesh;
	}
	,getMaterial: function() {
		var rootMaterial = this._renderingMesh.material;
		if(rootMaterial != null && js.Boot.__instanceof(rootMaterial,com.gamestudiohx.babylonhx.materials.MultiMaterial)) return rootMaterial.getSubMaterial(this.materialIndex);
		if(rootMaterial == null) return this._mesh._scene.defaultMaterial;
		return rootMaterial;
	}
	,refreshBoundingInfo: function() {
		var data = this._renderingMesh.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind);
		if(data != null) {
			var extend = com.gamestudiohx.babylonhx.tools.Tools.ExtractMinAndMax(data,this.verticesStart,this.verticesCount);
			this._boundingInfo = new com.gamestudiohx.babylonhx.culling.BoundingInfo(extend.minimum,extend.maximum);
		}
	}
	,_checkCollision: function(collider) {
		return this._boundingInfo._checkCollision(collider);
	}
	,updateBoundingInfo: function(world,scale) {
		this._boundingInfo._update(world,scale);
	}
	,isInFrustrum: function(frustumPlanes) {
		return this._boundingInfo.isInFrustrum(frustumPlanes);
	}
	,render: function() {
		this._renderingMesh.render(this);
	}
	,getLinesIndexBuffer: function(indices,engine) {
		if(this._linesIndexBuffer == null) {
			var linesIndices = [];
			var index = this.indexStart;
			while(index < this.indexStart + this.indexCount) {
				linesIndices.push(indices[index]);
				linesIndices.push(indices[index + 1]);
				linesIndices.push(indices[index + 1]);
				linesIndices.push(indices[index + 2]);
				linesIndices.push(indices[index + 2]);
				linesIndices.push(indices[index]);
				index += 3;
			}
			this._linesIndexBuffer = engine.createIndexBuffer(linesIndices);
			this.linesIndexCount = linesIndices.length;
		}
		return this._linesIndexBuffer;
	}
	,canIntersects: function(ray) {
		return ray.intersectsBox(this._boundingInfo.boundingBox);
	}
	,intersects: function(ray,positions,indices,fastCheck) {
		if(fastCheck == null) fastCheck = false;
		var distance = Math.POSITIVE_INFINITY;
		var index = this.indexStart;
		while(index < this.indexStart + this.indexCount) {
			var p0 = positions[indices[index]];
			var p1 = positions[indices[index + 1]];
			var p2 = positions[indices[index + 2]];
			var currentDistance = ray.intersectsTriangle(p0,p1,p2);
			if(currentDistance > 0) {
				if(fastCheck || currentDistance < distance) {
					distance = currentDistance;
					if(fastCheck) break;
				}
			}
			index += 3;
		}
		if(!(distance > 0 && distance < Math.POSITIVE_INFINITY)) distance = 0;
		return distance;
	}
	,clone: function(newMesh,newRenderingMesh) {
		var result = new com.gamestudiohx.babylonhx.mesh.SubMesh(this.materialIndex,this.verticesStart,this.verticesCount,this.indexStart,this.indexCount,newMesh,newRenderingMesh,false);
		result._boundingInfo = new com.gamestudiohx.babylonhx.culling.BoundingInfo(this._boundingInfo.minimum,this._boundingInfo.maximum);
		return result;
	}
	,dispose: function() {
		if(this._linesIndexBuffer != null) {
			this._mesh.getScene().getEngine()._releaseBuffer(this._linesIndexBuffer);
			this._linesIndexBuffer = null;
		}
		var index = HxOverrides.indexOf(this._mesh.subMeshes,this,0);
		this._mesh.subMeshes.splice(index,1);
	}
	,__class__: com.gamestudiohx.babylonhx.mesh.SubMesh
};
com.gamestudiohx.babylonhx.mesh.VertexBuffer = function(mesh,data,kind,updatable,postponeInternalCreation) {
	if(postponeInternalCreation == null) postponeInternalCreation = false;
	if(js.Boot.__instanceof(mesh,com.gamestudiohx.babylonhx.mesh.Mesh)) {
		this._mesh = mesh;
		this._engine = mesh.getScene().getEngine();
	} else this._engine = mesh;
	this._updatable = updatable;
	if(updatable) {
		this._buffer = this._engine.createDynamicVertexBuffer(data.length * 4);
		openfl.gl.GL.bindBuffer(34962,this._buffer.buffer);
		if(js.Boot.__instanceof(data,Float32Array)) openfl.gl.GL.bufferSubData(34962,0,new Float32Array(data)); else openfl.gl.GL.bufferSubData(34962,0,new Float32Array(data,0,0));
		this._engine._resetVertexBufferBinding();
	} else this._buffer = this._engine.createVertexBuffer(data);
	this._data = data;
	if(!postponeInternalCreation) this.create();
	this._kind = kind;
	switch(kind) {
	case com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind:
		this._strideSize = 3;
		break;
	case com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind:
		this._strideSize = 3;
		break;
	case com.gamestudiohx.babylonhx.mesh.VertexBuffer.UVKind:
		this._strideSize = 2;
		break;
	case com.gamestudiohx.babylonhx.mesh.VertexBuffer.UV2Kind:
		this._strideSize = 2;
		break;
	case com.gamestudiohx.babylonhx.mesh.VertexBuffer.ColorKind:
		this._strideSize = 3;
		break;
	case com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind:
		this._strideSize = 4;
		break;
	case com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind:
		this._strideSize = 4;
		break;
	default:
	}
};
$hxClasses["com.gamestudiohx.babylonhx.mesh.VertexBuffer"] = com.gamestudiohx.babylonhx.mesh.VertexBuffer;
com.gamestudiohx.babylonhx.mesh.VertexBuffer.__name__ = ["com","gamestudiohx","babylonhx","mesh","VertexBuffer"];
com.gamestudiohx.babylonhx.mesh.VertexBuffer.prototype = {
	getBuffer: function() {
		return this._buffer;
	}
	,isUpdatable: function() {
		return this._updatable;
	}
	,getData: function() {
		return this._data;
	}
	,getStrideSize: function() {
		return this._strideSize;
	}
	,create: function(data) {
		if(data == null && this._buffer != null) return;
		if(data == null) data = this._data;
		if(this._buffer == null) {
			if(this._updatable) this._buffer = this._engine.createDynamicVertexBuffer(data.length * 4); else this._buffer = this._engine.createVertexBuffer(data);
		}
		if(this._updatable) {
			openfl.gl.GL.bindBuffer(34962,this._buffer.buffer);
			if(js.Boot.__instanceof(data,Float32Array)) openfl.gl.GL.bufferSubData(34962,0,new Float32Array(data)); else openfl.gl.GL.bufferSubData(34962,0,new Float32Array(data,0,0));
			this._engine._resetVertexBufferBinding();
			this._data = data;
		}
	}
	,update: function(data) {
		openfl.gl.GL.bindBuffer(34962,this._buffer.buffer);
		if(js.Boot.__instanceof(data,Float32Array)) openfl.gl.GL.bufferSubData(34962,0,new Float32Array(data)); else openfl.gl.GL.bufferSubData(34962,0,new Float32Array(data,0,0));
		this._engine._resetVertexBufferBinding();
		this._data = data;
		if(this._kind == com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind) this._mesh._resetPointsArrayCache();
	}
	,dispose: function() {
		this._engine._releaseBuffer(this._buffer);
	}
	,__class__: com.gamestudiohx.babylonhx.mesh.VertexBuffer
};
com.gamestudiohx.babylonhx.mesh.VertexData = function() {
	this.indices = new Array();
	this.matricesWeights = new Array();
	this.matricesIndices = new Array();
	this.colors = new Array();
	this.uv2s = new Array();
	this.uvs = new Array();
	this.normals = new Array();
	this.positions = new Array();
};
$hxClasses["com.gamestudiohx.babylonhx.mesh.VertexData"] = com.gamestudiohx.babylonhx.mesh.VertexData;
com.gamestudiohx.babylonhx.mesh.VertexData.__name__ = ["com","gamestudiohx","babylonhx","mesh","VertexData"];
com.gamestudiohx.babylonhx.mesh.VertexData.ExtractFromMesh = function(mesh) {
	return com.gamestudiohx.babylonhx.mesh.VertexData._ExtractFrom(mesh);
};
com.gamestudiohx.babylonhx.mesh.VertexData.ExtractFromGeometry = function(geometry) {
	return com.gamestudiohx.babylonhx.mesh.VertexData._ExtractFrom(geometry);
};
com.gamestudiohx.babylonhx.mesh.VertexData._ExtractFrom = function(meshOrGeometry) {
	var result = new com.gamestudiohx.babylonhx.mesh.VertexData();
	if(meshOrGeometry.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind)) result.positions = meshOrGeometry.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind);
	if(meshOrGeometry.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind)) result.normals = meshOrGeometry.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind);
	if(meshOrGeometry.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UVKind)) result.uvs = meshOrGeometry.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UVKind);
	if(meshOrGeometry.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UV2Kind)) result.uv2s = meshOrGeometry.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UV2Kind);
	if(meshOrGeometry.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.ColorKind)) result.colors = meshOrGeometry.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.ColorKind);
	if(meshOrGeometry.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind)) result.matricesIndices = meshOrGeometry.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind);
	if(meshOrGeometry.isVerticesDataPresent(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind)) result.matricesWeights = meshOrGeometry.getVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind);
	result.indices = meshOrGeometry.getIndices();
	return result;
};
com.gamestudiohx.babylonhx.mesh.VertexData.CreateBox = function(size) {
	if(size == null) size = 1;
	var normalsSource = [new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,1),new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,-1),new com.gamestudiohx.babylonhx.tools.math.Vector3(1,0,0),new com.gamestudiohx.babylonhx.tools.math.Vector3(-1,0,0),new com.gamestudiohx.babylonhx.tools.math.Vector3(0,1,0),new com.gamestudiohx.babylonhx.tools.math.Vector3(0,-1,0)];
	var indices = new Array();
	var positions = new Array();
	var normals = new Array();
	var uvs = new Array();
	var index = 0;
	while(index < normalsSource.length) {
		var normal = normalsSource[index];
		var side1 = new com.gamestudiohx.babylonhx.tools.math.Vector3(normal.y,normal.z,normal.x);
		var side2 = com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(normal,side1);
		var verticesLength = positions.length / 3 | 0;
		indices.push(verticesLength);
		indices.push(verticesLength + 1);
		indices.push(verticesLength + 2);
		indices.push(verticesLength);
		indices.push(verticesLength + 2);
		indices.push(verticesLength + 3);
		var vertex = new com.gamestudiohx.babylonhx.tools.math.Vector3(normal.x - side1.x,normal.y - side1.y,normal.z - side1.z).subtract(side2).scale(size / 2);
		positions.push(vertex.x);
		positions.push(vertex.y);
		positions.push(vertex.z);
		normals.push(normal.x);
		normals.push(normal.y);
		normals.push(normal.z);
		uvs.push(1.0);
		uvs.push(1.0);
		vertex = new com.gamestudiohx.babylonhx.tools.math.Vector3(normal.x - side1.x,normal.y - side1.y,normal.z - side1.z).add(side2).scale(size / 2);
		positions.push(vertex.x);
		positions.push(vertex.y);
		positions.push(vertex.z);
		normals.push(normal.x);
		normals.push(normal.y);
		normals.push(normal.z);
		uvs.push(0.0);
		uvs.push(1.0);
		vertex = new com.gamestudiohx.babylonhx.tools.math.Vector3(normal.x + side1.x,normal.y + side1.y,normal.z + side1.z).add(side2).scale(size / 2);
		positions.push(vertex.x);
		positions.push(vertex.y);
		positions.push(vertex.z);
		normals.push(normal.x);
		normals.push(normal.y);
		normals.push(normal.z);
		uvs.push(0.0);
		uvs.push(0.0);
		vertex = new com.gamestudiohx.babylonhx.tools.math.Vector3(normal.x + side1.x,normal.y + side1.y,normal.z + side1.z).subtract(side2).scale(size / 2);
		positions.push(vertex.x);
		positions.push(vertex.y);
		positions.push(vertex.z);
		normals.push(normal.x);
		normals.push(normal.y);
		normals.push(normal.z);
		uvs.push(1.0);
		uvs.push(0.0);
		index++;
	}
	var vertexData = new com.gamestudiohx.babylonhx.mesh.VertexData();
	vertexData.indices = indices;
	vertexData.positions = positions;
	vertexData.normals = normals;
	vertexData.uvs = uvs;
	return vertexData;
};
com.gamestudiohx.babylonhx.mesh.VertexData.CreateSphere = function(segments,diameter) {
	if(diameter == null) diameter = 1;
	if(segments == null) segments = 32;
	var radius = diameter / 2;
	var totalZRotationSteps = 2 + segments;
	var totalYRotationSteps = 2 * totalZRotationSteps;
	var indices = new Array();
	var positions = new Array();
	var normals = new Array();
	var uvs = new Array();
	var zRotationStep = 0;
	while(zRotationStep <= totalZRotationSteps) {
		var normalizedZ = zRotationStep / totalZRotationSteps;
		var angleZ = normalizedZ * Math.PI;
		var yRotationStep = 0;
		while(yRotationStep <= totalYRotationSteps) {
			var normalizedY = yRotationStep / totalYRotationSteps;
			var angleY = normalizedY * Math.PI * 2;
			var rotationZ = com.gamestudiohx.babylonhx.tools.math.Matrix.RotationZ(-angleZ);
			var rotationY = com.gamestudiohx.babylonhx.tools.math.Matrix.RotationY(angleY);
			var afterRotZ = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(com.gamestudiohx.babylonhx.tools.math.Vector3.Up(),rotationZ);
			var complete = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(afterRotZ,rotationY);
			var vertex = new com.gamestudiohx.babylonhx.tools.math.Vector3(complete.x * radius,complete.y * radius,complete.z * radius);
			var normal = com.gamestudiohx.babylonhx.tools.math.Vector3.Normalize(vertex);
			positions.push(vertex.x);
			positions.push(vertex.y);
			positions.push(vertex.z);
			normals.push(normal.x);
			normals.push(normal.y);
			normals.push(normal.z);
			uvs.push(normalizedZ);
			uvs.push(normalizedY);
			yRotationStep++;
		}
		if(zRotationStep > 0) {
			var verticesCount = positions.length / 3;
			var firstIndex = verticesCount - 2 * (totalYRotationSteps + 1);
			while(firstIndex + totalYRotationSteps + 2 < verticesCount) {
				indices.push(firstIndex | 0);
				indices.push(firstIndex + 1 | 0);
				indices.push(firstIndex + totalYRotationSteps + 1 | 0);
				indices.push(firstIndex + totalYRotationSteps + 1 | 0);
				indices.push(firstIndex + 1 | 0);
				indices.push(firstIndex + totalYRotationSteps + 2 | 0);
				firstIndex++;
			}
		}
		zRotationStep++;
	}
	var vertexData = new com.gamestudiohx.babylonhx.mesh.VertexData();
	vertexData.indices = indices;
	vertexData.positions = positions;
	vertexData.normals = normals;
	vertexData.uvs = uvs;
	return vertexData;
};
com.gamestudiohx.babylonhx.mesh.VertexData.CreateCylinder = function(height,diameterTop,diameterBottom,tessellation) {
	if(tessellation == null) tessellation = 16;
	if(diameterBottom == null) diameterBottom = 1;
	if(diameterTop == null) diameterTop = 0.5;
	if(height == null) height = 1;
	var radiusTop = diameterTop / 2;
	var radiusBottom = diameterBottom / 2;
	var indices = new Array();
	var positions = new Array();
	var normals = new Array();
	var uvs = new Array();
	var getCircleVector = function(i) {
		var angle = i * 2.0 * Math.PI / tessellation;
		var dx = Math.sin(angle);
		var dz = Math.cos(angle);
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(dx,0,dz);
	};
	var createCylinderCap = function(isTop) {
		var radius;
		if(isTop) radius = radiusTop; else radius = radiusBottom;
		if(radius == 0) return;
		var i1 = 0;
		while(i1 < tessellation - 2) {
			var i11 = (i1 + 1) % tessellation;
			var i2 = (i1 + 2) % tessellation;
			if(!isTop) {
				var tmp = i11;
				i11 = i2;
				i2 = tmp;
			}
			var vbase = positions.length / 3;
			indices.push(vbase | 0);
			indices.push(vbase + i11 | 0);
			indices.push(vbase + i2 | 0);
			i1++;
		}
		var normal = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,-1,0);
		var textureScale = new com.gamestudiohx.babylonhx.tools.math.Vector2(-0.5,-0.5);
		if(!isTop) {
			normal = new com.gamestudiohx.babylonhx.tools.math.Vector3(normal.x * -1,normal.y * -1,normal.z * -1);
			textureScale.x = -textureScale.x;
		}
		i1 = 0;
		while(i1 < tessellation) {
			var circleVector = getCircleVector(i1);
			var position = new com.gamestudiohx.babylonhx.tools.math.Vector3(circleVector.x * radius,circleVector.y * radius,circleVector.z * radius).add(new com.gamestudiohx.babylonhx.tools.math.Vector3(normal.x * height,normal.y * height,normal.z * height));
			var textureCoordinate = new com.gamestudiohx.babylonhx.tools.math.Vector2(circleVector.x * textureScale.x + 0.5,circleVector.z * textureScale.y + 0.5);
			positions.push(position.x);
			positions.push(position.y);
			positions.push(position.z);
			normals.push(normal.x);
			normals.push(normal.y);
			normals.push(normal.z);
			uvs.push(textureCoordinate.x);
			uvs.push(textureCoordinate.y);
			i1++;
		}
	};
	height /= 2;
	var topOffset = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,1,0).scale(height);
	var stride = tessellation + 1;
	var i3 = 0;
	while(i3 <= tessellation) {
		var normal1 = getCircleVector(i3);
		var sideOffsetBottom = new com.gamestudiohx.babylonhx.tools.math.Vector3(normal1.x * radiusBottom,normal1.y * radiusBottom,normal1.z * radiusBottom);
		var sideOffsetTop = new com.gamestudiohx.babylonhx.tools.math.Vector3(normal1.x * radiusTop,normal1.y * radiusTop,normal1.z * radiusTop);
		var textureCoordinate1 = new com.gamestudiohx.babylonhx.tools.math.Vector2(i3 / tessellation,0);
		var position1 = new com.gamestudiohx.babylonhx.tools.math.Vector3(sideOffsetBottom.x + topOffset.x,sideOffsetBottom.y + topOffset.y,sideOffsetBottom.z + topOffset.z);
		positions.push(position1.x);
		positions.push(position1.y);
		positions.push(position1.z);
		normals.push(normal1.x);
		normals.push(normal1.y);
		normals.push(normal1.z);
		uvs.push(textureCoordinate1.x);
		uvs.push(textureCoordinate1.y);
		position1 = new com.gamestudiohx.babylonhx.tools.math.Vector3(sideOffsetTop.x - topOffset.x,sideOffsetTop.y - topOffset.y,sideOffsetTop.z - topOffset.z);
		textureCoordinate1.y += 1;
		positions.push(position1.x);
		positions.push(position1.y);
		positions.push(position1.z);
		normals.push(normal1.x);
		normals.push(normal1.y);
		normals.push(normal1.z);
		uvs.push(textureCoordinate1.x);
		uvs.push(textureCoordinate1.y);
		indices.push(i3 * 2 | 0);
		indices.push((i3 * 2 + 2) % (stride * 2) | 0);
		indices.push(i3 * 2 + 1 | 0);
		indices.push(i3 * 2 + 1 | 0);
		indices.push((i3 * 2 + 2) % (stride * 2) | 0);
		indices.push((i3 * 2 + 3) % (stride * 2) | 0);
		i3++;
	}
	createCylinderCap(true);
	createCylinderCap(false);
	var vertexData = new com.gamestudiohx.babylonhx.mesh.VertexData();
	vertexData.indices = indices;
	vertexData.positions = positions;
	vertexData.normals = normals;
	vertexData.uvs = uvs;
	return vertexData;
};
com.gamestudiohx.babylonhx.mesh.VertexData.CreateTorus = function(diameter,thickness,tessellation) {
	if(tessellation == null) tessellation = 16;
	if(thickness == null) thickness = 0.5;
	if(diameter == null) diameter = 1;
	var indices = new Array();
	var positions = new Array();
	var normals = new Array();
	var uvs = new Array();
	var stride = tessellation + 1;
	var i = 0;
	while(i <= tessellation) {
		var u = i / tessellation;
		var outerAngle = i * Math.PI * 2.0 / tessellation - Math.PI / 2.0;
		var transform = com.gamestudiohx.babylonhx.tools.math.Matrix.Translation(diameter / 2.0,0,0).multiply(com.gamestudiohx.babylonhx.tools.math.Matrix.RotationY(outerAngle));
		var j = 0;
		while(j <= tessellation) {
			var v = 1 - j / tessellation;
			var innerAngle = j * Math.PI * 2.0 / tessellation + Math.PI;
			var dx = Math.cos(innerAngle);
			var dy = Math.sin(innerAngle);
			var normal = new com.gamestudiohx.babylonhx.tools.math.Vector3(dx,dy,0);
			var position = normal.scale(thickness / 2);
			var textureCoordinate = new com.gamestudiohx.babylonhx.tools.math.Vector2(u,v);
			position = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(position,transform);
			normal = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormal(normal,transform);
			positions.push(position.x);
			positions.push(position.y);
			positions.push(position.z);
			normals.push(normal.x);
			normals.push(normal.y);
			normals.push(normal.z);
			uvs.push(textureCoordinate.x);
			uvs.push(textureCoordinate.y);
			var nextI = (i + 1) % stride;
			var nextJ = (j + 1) % stride;
			indices.push(i * stride + j | 0);
			indices.push(i * stride + nextJ | 0);
			indices.push(nextI * stride + j | 0);
			indices.push(i * stride + nextJ | 0);
			indices.push(nextI * stride + nextJ | 0);
			indices.push(nextI * stride + j | 0);
			j++;
		}
		i++;
	}
	var vertexData = new com.gamestudiohx.babylonhx.mesh.VertexData();
	vertexData.indices = indices;
	vertexData.positions = positions;
	vertexData.normals = normals;
	vertexData.uvs = uvs;
	return vertexData;
};
com.gamestudiohx.babylonhx.mesh.VertexData.CreateGround = function(width,height,subdivisions) {
	if(subdivisions == null) subdivisions = 1;
	if(height == null) height = 1;
	if(width == null) width = 1;
	var indices = new Array();
	var positions = new Array();
	var normals = new Array();
	var uvs = new Array();
	var row;
	var col;
	row = 0;
	while(row <= subdivisions) {
		col = 0;
		while(col <= subdivisions) {
			var position = new com.gamestudiohx.babylonhx.tools.math.Vector3(col * width / subdivisions - width / 2.0,0,(subdivisions - row) * height / subdivisions - height / 2.0);
			var normal = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,1.0,0);
			positions.push(position.x);
			positions.push(position.y);
			positions.push(position.z);
			normals.push(normal.x);
			normals.push(normal.y);
			normals.push(normal.z);
			uvs.push(col / subdivisions);
			uvs.push(1.0 - row / subdivisions);
			col++;
		}
		row++;
	}
	row = 0;
	while(row < subdivisions) {
		col = 0;
		while(col < subdivisions) {
			indices.push(col + 1 + (row + 1) * (subdivisions + 1) | 0);
			indices.push(col + 1 + row * (subdivisions + 1) | 0);
			indices.push(col + row * (subdivisions + 1) | 0);
			indices.push(col + (row + 1) * (subdivisions + 1) | 0);
			indices.push(col + 1 + (row + 1) * (subdivisions + 1) | 0);
			indices.push(col + row * (subdivisions + 1) | 0);
			col++;
		}
		row++;
	}
	var vertexData = new com.gamestudiohx.babylonhx.mesh.VertexData();
	vertexData.indices = indices;
	vertexData.positions = positions;
	vertexData.normals = normals;
	vertexData.uvs = uvs;
	return vertexData;
};
com.gamestudiohx.babylonhx.mesh.VertexData.CreatePlane = function(size) {
	if(size == null) size = 1;
	var indices = new Array();
	var positions = new Array();
	var normals = new Array();
	var uvs = new Array();
	var halfSize = size / 2.0;
	positions.push(-halfSize);
	positions.push(-halfSize);
	positions.push(0);
	normals.push(0);
	normals.push(0);
	normals.push(-1.0);
	uvs.push(0.0);
	uvs.push(0.0);
	positions.push(halfSize);
	positions.push(-halfSize);
	positions.push(0);
	normals.push(0);
	normals.push(0);
	normals.push(-1.0);
	uvs.push(1.0);
	uvs.push(0.0);
	positions.push(halfSize);
	positions.push(halfSize);
	positions.push(0);
	normals.push(0);
	normals.push(0);
	normals.push(-1.0);
	uvs.push(1.0);
	uvs.push(1.0);
	positions.push(-halfSize);
	positions.push(halfSize);
	positions.push(0);
	normals.push(0);
	normals.push(0);
	normals.push(-1.0);
	uvs.push(0.0);
	uvs.push(1.0);
	indices.push(0);
	indices.push(1);
	indices.push(2);
	indices.push(0);
	indices.push(2);
	indices.push(3);
	var vertexData = new com.gamestudiohx.babylonhx.mesh.VertexData();
	vertexData.indices = indices;
	vertexData.positions = positions;
	vertexData.normals = normals;
	vertexData.uvs = uvs;
	return vertexData;
};
com.gamestudiohx.babylonhx.mesh.VertexData.CreateTorusKnot = function(radius,tube,radialSegments,tubularSegments,p,q) {
	if(q == null) q = 3;
	if(p == null) p = 2;
	if(tubularSegments == null) tubularSegments = 32;
	if(radialSegments == null) radialSegments = 32;
	if(tube == null) tube = 0.5;
	if(radius == null) radius = 2;
	var indices = new Array();
	var positions = new Array();
	var normals = new Array();
	var uvs = new Array();
	var j = 0;
	var getPos = function(angle) {
		var cu = Math.cos(angle);
		var su = Math.sin(angle);
		var quOverP = q / p * angle;
		var cs = Math.cos(quOverP);
		var tx = radius * (2 + cs) * 0.5 * cu;
		var ty = radius * (2 + cs) * su * 0.5;
		var tz = radius * Math.sin(quOverP) * 0.5;
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(tx,ty,tz);
	};
	var i = 0;
	while(i <= radialSegments) {
		var modI = i % radialSegments;
		var u = modI / radialSegments * 2 * p * Math.PI;
		var p1 = getPos(u);
		var p2 = getPos(u + 0.01);
		var tang = new com.gamestudiohx.babylonhx.tools.math.Vector3(p2.x - p1.x,p2.y - p1.y,p2.z - p1.z);
		var n = new com.gamestudiohx.babylonhx.tools.math.Vector3(p2.x + p1.x,p2.y + p1.y,p2.z + p1.z);
		var bitan = com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(tang,n);
		n = com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(bitan,tang);
		bitan.normalize();
		n.normalize();
		while(j < tubularSegments) {
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
	i = 0;
	while(i < radialSegments) {
		j = 0;
		while(j < tubularSegments) {
			var jNext = (j + 1) % tubularSegments;
			var a = i * tubularSegments + j;
			var b = (i + 1) * tubularSegments + j;
			var c = (i + 1) * tubularSegments + jNext;
			var d = i * tubularSegments + jNext;
			indices.push(d | 0);
			indices.push(b | 0);
			indices.push(a | 0);
			indices.push(d | 0);
			indices.push(c | 0);
			indices.push(b | 0);
			j++;
		}
		i++;
	}
	com.gamestudiohx.babylonhx.mesh.VertexData.ComputeNormals(positions,indices,normals);
	var vertexData = new com.gamestudiohx.babylonhx.mesh.VertexData();
	vertexData.indices = indices;
	vertexData.positions = positions;
	vertexData.normals = normals;
	vertexData.uvs = uvs;
	return vertexData;
};
com.gamestudiohx.babylonhx.mesh.VertexData.ComputeNormals = function(positions,indices,normals) {
	var positionVectors = new Array();
	var facesOfVertices = new Array();
	var index;
	index = 0;
	while(index < positions.length) {
		var vector3 = new com.gamestudiohx.babylonhx.tools.math.Vector3(positions[index],positions[index + 1],positions[index + 2]);
		positionVectors.push(vector3);
		facesOfVertices.push(new Array());
		index += 3;
	}
	var facesNormals = [];
	index = 0;
	while(index < indices.length / 3) {
		var i1 = indices[index * 3];
		var i2 = indices[index * 3 + 1];
		var i3 = indices[index * 3 + 2];
		var p1 = positionVectors[i1 | 0];
		var p2 = positionVectors[i2 | 0];
		var p3 = positionVectors[i3 | 0];
		var p1p2 = new com.gamestudiohx.babylonhx.tools.math.Vector3(p1.x - p2.x,p1.y - p2.y,p1.z - p2.z);
		var p3p2 = new com.gamestudiohx.babylonhx.tools.math.Vector3(p3.x - p2.x,p3.y - p2.y,p3.z - p2.z);
		facesNormals[index] = com.gamestudiohx.babylonhx.tools.math.Vector3.Normalize(com.gamestudiohx.babylonhx.tools.math.Vector3.Cross(p1p2,p3p2));
		facesOfVertices[i1 | 0].push(index);
		facesOfVertices[i2 | 0].push(index);
		facesOfVertices[i3 | 0].push(index);
		index++;
	}
	index = 0;
	while(index < positionVectors.length) {
		var faces = facesOfVertices[index];
		var normal = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
		var faceIndex = 0;
		while(faceIndex < faces.length) {
			normal.addInPlace(facesNormals[faces[faceIndex]]);
			faceIndex++;
		}
		normal = com.gamestudiohx.babylonhx.tools.math.Vector3.Normalize(normal.scale(1.0 / faces.length));
		normals[index * 3] = normal.x;
		normals[index * 3 + 1] = normal.y;
		normals[index * 3 + 2] = normal.z;
		index++;
	}
};
com.gamestudiohx.babylonhx.mesh.VertexData.prototype = {
	set: function(data,kind) {
		switch(kind) {
		case com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind:
			this.positions = data;
			break;
		case com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind:
			this.normals = data;
			break;
		case com.gamestudiohx.babylonhx.mesh.VertexBuffer.UVKind:
			this.uvs = data;
			break;
		case com.gamestudiohx.babylonhx.mesh.VertexBuffer.UV2Kind:
			this.uv2s = data;
			break;
		case com.gamestudiohx.babylonhx.mesh.VertexBuffer.ColorKind:
			this.colors = data;
			break;
		case com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind:
			this.matricesIndices = data;
			break;
		case com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind:
			this.matricesWeights = data;
			break;
		}
	}
	,applyToMesh: function(mesh,updatable) {
		this._applyTo(mesh,updatable);
	}
	,applyToGeometry: function(geometry,updatable) {
		this._applyTo(geometry,updatable);
	}
	,updateMesh: function(mesh,updateExtends,makeItUnique) {
		this._update(mesh);
	}
	,updateGeometry: function(geometry,updateExtends,makeItUnique) {
		this._update(geometry);
	}
	,_applyTo: function(meshOrGeometry,updatable) {
		if(this.positions.length > 0) meshOrGeometry.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind,this.positions,updatable);
		if(this.normals.length > 0) meshOrGeometry.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind,this.normals,updatable);
		if(this.uvs.length > 0) meshOrGeometry.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UVKind,this.uvs,updatable);
		if(this.uv2s.length > 0) meshOrGeometry.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UV2Kind,this.uv2s,updatable);
		if(this.colors.length > 0) meshOrGeometry.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.ColorKind,this.colors,updatable);
		if(this.matricesIndices.length > 0) meshOrGeometry.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind,this.matricesIndices,updatable);
		if(this.matricesWeights.length > 0) meshOrGeometry.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind,this.matricesWeights,updatable);
		if(this.indices.length > 0) meshOrGeometry.setIndices(this.indices);
	}
	,_update: function(meshOrGeometry,updateExtends,makeItUnique) {
		if(this.positions.length > 0) meshOrGeometry.updateVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind,this.positions,updateExtends,makeItUnique);
		if(this.normals.length > 0) meshOrGeometry.updateVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind,this.normals,updateExtends,makeItUnique);
		if(this.uvs.length > 0) meshOrGeometry.updateVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UVKind,this.uvs,updateExtends,makeItUnique);
		if(this.uv2s.length > 0) meshOrGeometry.updateVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UV2Kind,this.uv2s,updateExtends,makeItUnique);
		if(this.colors.length > 0) meshOrGeometry.updateVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.ColorKind,this.colors,updateExtends,makeItUnique);
		if(this.matricesIndices.length > 0) meshOrGeometry.updateVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind,this.matricesIndices,updateExtends,makeItUnique);
		if(this.matricesWeights.length > 0) meshOrGeometry.updateVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind,this.matricesWeights,updateExtends,makeItUnique);
		if(this.indices.length > 0) meshOrGeometry.setIndices(this.indices);
	}
	,transform: function(matrix) {
		var transformed = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
		var index = 0;
		if(this.positions.length > 0) {
			var position = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			while(index < this.positions.length) {
				com.gamestudiohx.babylonhx.tools.math.Vector3.FromArrayToRef(this.positions,index,position);
				com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesToRef(position,matrix,transformed);
				this.positions[index] = transformed.x;
				this.positions[index + 1] = transformed.y;
				this.positions[index + 2] = transformed.z;
				index += 3;
			}
		}
		if(this.normals.length > 0) {
			var normal = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			index = 0;
			while(index < this.normals.length) {
				com.gamestudiohx.babylonhx.tools.math.Vector3.FromArrayToRef(this.normals,index,normal);
				transformed.x = normal.x * matrix.m[0] + normal.y * matrix.m[4] + normal.z * matrix.m[8];
				transformed.y = normal.x * matrix.m[1] + normal.y * matrix.m[5] + normal.z * matrix.m[9];
				transformed.z = normal.x * matrix.m[2] + normal.y * matrix.m[6] + normal.z * matrix.m[10];
				this.normals[index] = transformed.x;
				this.normals[index + 1] = transformed.y;
				this.normals[index + 2] = transformed.z;
				index += 3;
			}
		}
	}
	,merge: function(other) {
		var index = 0;
		var offset = 0;
		if(other.indices.length > 0) {
			if(this.indices == null) this.indices = new Array();
			if(this.positions != null) offset = js.Boot.__cast(this.positions.length / 3 , Int); else offset = 0;
			while(index < other.indices.length) {
				this.indices.push(other.indices[index] + offset);
				index++;
			}
		}
		if(other.positions.length > 0) {
			if(this.positions == null) this.positions = new Array();
			index = 0;
			while(index < other.positions.length) {
				this.positions.push(other.positions[index]);
				index++;
			}
		}
		if(other.normals.length > 0) {
			if(this.normals == null) this.normals = new Array();
			index = 0;
			while(index < other.normals.length) {
				this.normals.push(other.normals[index]);
				index++;
			}
		}
		if(other.uvs.length > 0) {
			if(this.uvs == null) this.uvs = new Array();
			index = 0;
			while(index < other.uvs.length) {
				this.uvs.push(other.uvs[index]);
				index++;
			}
		}
		if(other.uv2s.length > 0) {
			if(this.uv2s == null) this.uv2s = new Array();
			index = 0;
			while(index < other.uv2s.length) {
				this.uv2s.push(other.uv2s[index]);
				index++;
			}
		}
		if(other.matricesIndices.length > 0) {
			if(this.matricesIndices == null) this.matricesIndices = new Array();
			index = 0;
			while(index < other.matricesIndices.length) {
				this.matricesIndices.push(other.matricesIndices[index]);
				index++;
			}
		}
		if(other.matricesWeights.length > 0) {
			if(this.matricesWeights == null) this.matricesWeights = new Array();
			index = 0;
			while(index < other.matricesWeights.length) {
				this.matricesWeights.push(other.matricesWeights[index]);
				index++;
			}
		}
		if(other.colors.length == 0) {
			if(this.colors == null) this.colors = new Array();
			index = 0;
			while(index < other.colors.length) {
				this.colors.push(other.colors[index]);
				index++;
			}
		}
	}
	,CreateGroundFromHeightMap: function(width,height,subdivisions,minHeight,maxHeight,buffer,bufferWidth,bufferHeight) {
		var indices = new Array();
		var positions = new Array();
		var normals = new Array();
		var uvs = new Array();
		var row;
		var col;
		row = 0;
		while(row <= subdivisions) {
			col = 0;
			while(col <= subdivisions) {
				var position = new com.gamestudiohx.babylonhx.tools.math.Vector3(col * width / subdivisions - width / 2.0,0,(subdivisions - row) * height / subdivisions - height / 2.0);
				var heightMapX = (position.x + width / 2) / width * (bufferWidth - 1) | 0 | 0;
				var heightMapY = (1.0 - (position.z + height / 2) / height) * (bufferHeight - 1) | 0 | 0;
				var pos = (heightMapX + heightMapY * bufferWidth) * 4 | 0;
				var r = buffer[pos] / 255.0 | 0;
				var g = buffer[pos + 1] / 255.0 | 0;
				var b = buffer[pos + 2] / 255.0 | 0;
				var gradient = r * 0.3 + g * 0.59 + b * 0.11;
				position.y = minHeight + (maxHeight - minHeight) * gradient;
				positions.push(position.x);
				positions.push(position.y);
				positions.push(position.z);
				normals.push(0);
				normals.push(0);
				normals.push(0);
				uvs.push(col / subdivisions);
				uvs.push(1.0 - row / subdivisions);
				col++;
			}
			row++;
		}
		row = 0;
		while(row < subdivisions) {
			col = 0;
			while(col < subdivisions) {
				indices.push(col + 1 + (row + 1) * (subdivisions + 1) | 0);
				indices.push(col + 1 + row * (subdivisions + 1) | 0);
				indices.push(col + row * (subdivisions + 1) | 0);
				indices.push(col + (row + 1) * (subdivisions + 1) | 0);
				indices.push(col + 1 + (row + 1) * (subdivisions + 1) | 0);
				indices.push(col + row * (subdivisions + 1) | 0);
				col++;
			}
			row++;
		}
		com.gamestudiohx.babylonhx.mesh.VertexData.ComputeNormals(positions,indices,normals);
		var vertexData = new com.gamestudiohx.babylonhx.mesh.VertexData();
		vertexData.indices = indices;
		vertexData.positions = positions;
		vertexData.normals = normals;
		vertexData.uvs = uvs;
		return vertexData;
	}
	,__class__: com.gamestudiohx.babylonhx.mesh.VertexData
};
com.gamestudiohx.babylonhx.particles = {};
com.gamestudiohx.babylonhx.particles.Particle = function() {
	this.angularSpeed = 0;
	this.angle = 0;
	this.size = 0;
	this.age = 0;
	this.lifeTime = 1.0;
	this.position = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this.direction = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this.color = new com.gamestudiohx.babylonhx.tools.math.Color4(0,0,0,0);
	this.colorStep = new com.gamestudiohx.babylonhx.tools.math.Color4(0,0,0,0);
};
$hxClasses["com.gamestudiohx.babylonhx.particles.Particle"] = com.gamestudiohx.babylonhx.particles.Particle;
com.gamestudiohx.babylonhx.particles.Particle.__name__ = ["com","gamestudiohx","babylonhx","particles","Particle"];
com.gamestudiohx.babylonhx.particles.Particle.prototype = {
	__class__: com.gamestudiohx.babylonhx.particles.Particle
};
com.gamestudiohx.babylonhx.particles.ParticleSystem = function(name,capacity,scene) {
	this.maxAngularSpeed = 0;
	this.minAngularSpeed = 0;
	this.maxSize = 1;
	this.minSize = 1;
	this.maxLifeTime = 1;
	this.minLifeTime = 1;
	this.maxEmitPower = 1;
	this.minEmitPower = 1;
	this.disposeOnStop = false;
	this.targetStopDuration = 0;
	this.updateSpeed = 0.01;
	this.manualEmitCount = -1;
	this.emitRate = 10;
	this.emitter = null;
	this.renderingGroupId = 0;
	this.name = name;
	this.id = name;
	this._capacity = capacity;
	this._scene = scene;
	this._engine = scene.getEngine();
	scene.particleSystems.push(this);
	this.gravity = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this.direction1 = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,1.0,0);
	this.direction2 = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,1.0,0);
	this.minEmitBox = new com.gamestudiohx.babylonhx.tools.math.Vector3(-0.5,-0.5,-0.5);
	this.maxEmitBox = new com.gamestudiohx.babylonhx.tools.math.Vector3(0.5,0.5,0.5);
	this.color1 = new com.gamestudiohx.babylonhx.tools.math.Color4(1.0,1.0,1.0,1.0);
	this.color2 = new com.gamestudiohx.babylonhx.tools.math.Color4(1.0,1.0,1.0,1.0);
	this.colorDead = new com.gamestudiohx.babylonhx.tools.math.Color4(0,0,0,1.0);
	this.textureMask = new com.gamestudiohx.babylonhx.tools.math.Color4(1.0,1.0,1.0,1.0);
	this.particles = [];
	this._stockParticles = [];
	this._newPartsExcess = 0;
	this._vertexDeclaration = [3,4,4];
	this._vertexStrideSize = 44;
	this._vertexBuffer = this._engine.createDynamicVertexBuffer(capacity * this._vertexStrideSize * 4);
	var indices = [];
	var index = 0;
	var _g = 0;
	while(_g < capacity) {
		var count = _g++;
		indices.push(index);
		indices.push(index + 1);
		indices.push(index + 2);
		indices.push(index);
		indices.push(index + 2);
		indices.push(index + 3);
		index += 4;
	}
	this._indexBuffer = this._engine.createIndexBuffer(indices);
	this._vertices = new Float32Array(capacity * this._vertexStrideSize);
	this._scaledColorStep = new com.gamestudiohx.babylonhx.tools.math.Color4(0,0,0,0);
	this._colorDiff = new com.gamestudiohx.babylonhx.tools.math.Color4(0,0,0,0);
	this._scaledDirection = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._scaledGravity = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this._currentRenderId = -1;
	this.renderingGroupId = 0;
	this.emitter = null;
	this.emitRate = 10;
	this.manualEmitCount = -1;
	this.updateSpeed = 0.01;
	this.targetStopDuration = 0;
	this.disposeOnStop = false;
	this.minEmitPower = 1;
	this.maxEmitPower = 1;
	this.minLifeTime = 1;
	this.maxLifeTime = 1;
	this.minSize = 1;
	this.maxSize = 1;
	this.minAngularSpeed = 0;
	this.maxAngularSpeed = 0;
	this.particleTexture = null;
	this.onDispose = null;
	this.blendMode = com.gamestudiohx.babylonhx.particles.ParticleSystem.BLENDMODE_ONEONE;
};
$hxClasses["com.gamestudiohx.babylonhx.particles.ParticleSystem"] = com.gamestudiohx.babylonhx.particles.ParticleSystem;
com.gamestudiohx.babylonhx.particles.ParticleSystem.__name__ = ["com","gamestudiohx","babylonhx","particles","ParticleSystem"];
com.gamestudiohx.babylonhx.particles.ParticleSystem.prototype = {
	get_emitterId: function() {
		if(Reflect.field(this.emitter,"id") != null) return Reflect.field(this.emitter,"id");
		return "";
	}
	,isAlive: function() {
		return this._alive;
	}
	,start: function() {
		this._started = true;
		this._stopped = false;
		this._actualFrame = 0;
	}
	,stop: function() {
		this._stopped = true;
	}
	,_appendParticleVertex: function(index,particle,offsetX,offsetY) {
		var offset = index * 11;
		this._vertices[offset] = particle.position.x;
		this._vertices[offset + 1] = particle.position.y;
		this._vertices[offset + 2] = particle.position.z;
		this._vertices[offset + 3] = particle.color.r;
		this._vertices[offset + 4] = particle.color.g;
		this._vertices[offset + 5] = particle.color.b;
		this._vertices[offset + 6] = particle.color.a;
		this._vertices[offset + 7] = particle.angle;
		this._vertices[offset + 8] = particle.size;
		this._vertices[offset + 9] = offsetX;
		this._vertices[offset + 10] = offsetY;
	}
	,getParent: function(id) {
		var _emmiter = this._scene.getLastMeshByID(id);
		if(_emmiter.parent != null) return this.getParent(_emmiter.parent.id); else return _emmiter;
	}
	,_update: function(newParticles) {
		var particle = null;
		this._alive = this.particles.length > 0;
		var index = -1;
		while(++index < this.particles.length) {
			particle = this.particles[index];
			particle.age += this._scaledUpdateSpeed;
			if(particle.age >= particle.lifeTime) {
				this._stockParticles.push(this.particles.splice(index,1)[0]);
				index--;
				continue;
			} else {
				particle.colorStep.scaleToRef(this._scaledUpdateSpeed,this._scaledColorStep);
				particle.color.addInPlace(this._scaledColorStep);
				if(particle.color.a < 0) particle.color.a = 0;
				particle.direction.scaleToRef(this._scaledUpdateSpeed,this._scaledDirection);
				particle.position.addInPlace(this._scaledDirection);
				particle.angle += particle.angularSpeed * this._scaledUpdateSpeed;
				this.gravity.scaleToRef(this._scaledUpdateSpeed,this._scaledGravity);
				particle.direction.addInPlace(this._scaledGravity);
			}
		}
		var worldMatrix;
		if(this.emitter.position != null) worldMatrix = this.emitter.getWorldMatrix(); else worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.Translation(this.emitter.x,this.emitter.y,this.emitter.z);
		var _g = 0;
		while(_g < newParticles) {
			var index1 = _g++;
			if(this.particles.length == this._capacity) break;
			if(this._stockParticles.length != 0) {
				particle = this._stockParticles.pop();
				particle.age = 0;
			} else particle = new com.gamestudiohx.babylonhx.particles.Particle();
			this.particles.push(particle);
			var emitPower = com.gamestudiohx.babylonhx.tools.Tools.randomNumber(this.minEmitPower,this.maxEmitPower);
			var randX = com.gamestudiohx.babylonhx.tools.Tools.randomNumber(this.direction1.x,this.direction2.x);
			var randY = com.gamestudiohx.babylonhx.tools.Tools.randomNumber(this.direction1.y,this.direction2.y);
			var randZ = com.gamestudiohx.babylonhx.tools.Tools.randomNumber(this.direction1.z,this.direction2.z);
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormalFromFloatsToRef(randX * emitPower,randY * emitPower,randZ * emitPower,worldMatrix,particle.direction);
			particle.lifeTime = com.gamestudiohx.babylonhx.tools.Tools.randomNumber(this.minLifeTime,this.maxLifeTime);
			particle.size = com.gamestudiohx.babylonhx.tools.Tools.randomNumber(this.minSize,this.maxSize);
			particle.angularSpeed = com.gamestudiohx.babylonhx.tools.Tools.randomNumber(this.minAngularSpeed,this.maxAngularSpeed);
			randX = com.gamestudiohx.babylonhx.tools.Tools.randomNumber(this.minEmitBox.x,this.maxEmitBox.x);
			randY = com.gamestudiohx.babylonhx.tools.Tools.randomNumber(this.minEmitBox.y,this.maxEmitBox.y);
			randZ = com.gamestudiohx.babylonhx.tools.Tools.randomNumber(this.minEmitBox.z,this.maxEmitBox.z);
			com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesFromFloatsToRef(randX,randY,randZ,worldMatrix,particle.position);
			var step = com.gamestudiohx.babylonhx.tools.Tools.randomNumber(0,1.0);
			com.gamestudiohx.babylonhx.tools.math.Color4.LerpToRef(this.color1,this.color2,step,particle.color);
			this.colorDead.subtractToRef(particle.color,this._colorDiff);
			this._colorDiff.scaleToRef(1.0 / particle.lifeTime,particle.colorStep);
		}
	}
	,_getEffect: function() {
		var defines = [];
		if(com.gamestudiohx.babylonhx.Engine.clipPlane != null) defines.push("#define CLIPPLANE");
		var join = defines.join("\n");
		if(this._cachedDefines != join) {
			this._cachedDefines = join;
			this._effect = this._engine.createEffect("particles",["position","color","options"],["invView","view","projection","vClipPlane","textureMask"],["diffuseSampler"],join);
		}
		return this._effect;
	}
	,animate: function() {
		if(!this._started) return;
		var effect = this._getEffect();
		if(this.emitter == null || !effect.isReady() || this.particleTexture == null || !this.particleTexture.isReady()) return;
		if(this._currentRenderId == this._scene.getRenderId()) return;
		this._currentRenderId = this._scene.getRenderId();
		this._scaledUpdateSpeed = this.updateSpeed * this._scene.getAnimationRatio();
		var emitCout = this.emitRate;
		if(this.manualEmitCount > -1) {
			emitCout = this.manualEmitCount;
			this.manualEmitCount = 0;
		}
		var newParticles = emitCout * this._scaledUpdateSpeed;
		this._newPartsExcess += emitCout * this._scaledUpdateSpeed - newParticles;
		if(this._newPartsExcess > 1.0) {
			newParticles += this._newPartsExcess;
			this._newPartsExcess -= this._newPartsExcess;
		}
		this._alive = false;
		if(!this._stopped) {
			this._actualFrame += this._scaledUpdateSpeed;
			if(this.targetStopDuration != 0 && this._actualFrame >= this.targetStopDuration) this.stop();
		} else newParticles = 0;
		this._update(newParticles);
		if(this._stopped) {
			if(!this._alive) {
				this._started = false;
				if(this.disposeOnStop) this._scene._toBeDisposed.push(this);
			}
		}
		var offset = 0;
		var _g1 = 0;
		var _g = this.particles.length;
		while(_g1 < _g) {
			var index = _g1++;
			var particle = this.particles[index];
			this._appendParticleVertex(offset++,particle,0,0);
			this._appendParticleVertex(offset++,particle,1,0);
			this._appendParticleVertex(offset++,particle,1,1);
			this._appendParticleVertex(offset++,particle,0,1);
		}
		this._engine.updateDynamicVertexBuffer(this._vertexBuffer,this._vertices,this.particles.length * this._vertexStrideSize);
	}
	,render: function() {
		var effect = this._getEffect();
		if(this.emitter == null || !effect.isReady() || this.particleTexture == null || !this.particleTexture.isReady() || this.particles.length == 0) return 0;
		this._engine.enableEffect(effect);
		var viewMatrix = this._scene.getViewMatrix();
		effect.setTexture("diffuseSampler",this.particleTexture);
		effect._engine.setMatrix(effect.getUniform("view"),viewMatrix);
		effect.setMatrix("projection",this._scene.getProjectionMatrix());
		effect.setFloat4("textureMask",this.textureMask.r,this.textureMask.g,this.textureMask.b,this.textureMask.a);
		if(com.gamestudiohx.babylonhx.Engine.clipPlane != null) {
			var invView = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(viewMatrix.m[0],viewMatrix.m[1],viewMatrix.m[2],viewMatrix.m[3],viewMatrix.m[4],viewMatrix.m[5],viewMatrix.m[6],viewMatrix.m[7],viewMatrix.m[8],viewMatrix.m[9],viewMatrix.m[10],viewMatrix.m[11],viewMatrix.m[12],viewMatrix.m[13],viewMatrix.m[14],viewMatrix.m[15]);
			invView.invertToRef(invView);
			effect._engine.setMatrix(effect.getUniform("invView"),invView);
			effect.setFloat4("vClipPlane",com.gamestudiohx.babylonhx.Engine.clipPlane.normal.x,com.gamestudiohx.babylonhx.Engine.clipPlane.normal.y,com.gamestudiohx.babylonhx.Engine.clipPlane.normal.z,com.gamestudiohx.babylonhx.Engine.clipPlane.d);
		}
		this._engine.bindBuffers(this._vertexBuffer,this._indexBuffer,this._vertexDeclaration,this._vertexStrideSize,effect);
		if(this.blendMode == com.gamestudiohx.babylonhx.particles.ParticleSystem.BLENDMODE_ONEONE) this._engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_ADD); else this._engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_COMBINE);
		this._engine.draw(true,0,this.particles.length * 6);
		this._engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_DISABLE);
		return this.particles.length;
	}
	,dispose: function() {
		if(this._vertexBuffer != null) {
			this._engine._releaseBuffer(this._vertexBuffer);
			this._vertexBuffer = null;
		}
		if(this._indexBuffer != null) {
			this._engine._releaseBuffer(this._indexBuffer);
			this._indexBuffer = null;
		}
		if(this.particleTexture != null) {
			this.particleTexture.dispose();
			this.particleTexture = null;
		}
		HxOverrides.remove(this._scene.particleSystems,this);
		if(this.onDispose != null) this.onDispose();
	}
	,clone: function(name,newEmitter) {
		var result = new com.gamestudiohx.babylonhx.particles.ParticleSystem(name,this._capacity,this._scene);
		com.gamestudiohx.babylonhx.tools.Tools.DeepCopy(this,result,["particles"],["_vertexDeclaration","_vertexStrideSize"]);
		if(newEmitter == null) newEmitter = this.emitter;
		result.emitter = newEmitter;
		if(this.particleTexture != null) result.particleTexture = new com.gamestudiohx.babylonhx.materials.textures.Texture(this.particleTexture.name,this._scene);
		result.start();
		return result;
	}
	,__class__: com.gamestudiohx.babylonhx.particles.ParticleSystem
	,__properties__: {get_emitterId:"get_emitterId"}
};
com.gamestudiohx.babylonhx.postprocess = {};
com.gamestudiohx.babylonhx.postprocess.PostProcess = function(name,fragmentUrl,parameters,samplers,ratio,camera,samplingMode,engine,reusable) {
	if(reusable == null) reusable = false;
	if(samplingMode == null) samplingMode = 1;
	this._currentRenderTextureInd = 0;
	this.name = name;
	if(camera != null) {
		this._camera = camera;
		this._scene = camera.getScene();
		camera.attachPostProcess(this);
		this._engine = this._scene.getEngine();
	} else this._engine = engine;
	this._renderRatio = ratio;
	this.width = -1;
	this.height = -1;
	this.renderTargetSamplingMode = samplingMode;
	this._reusable = reusable;
	this._textures = new com.gamestudiohx.babylonhx.tools.SmartArray();
	this._currentRenderTextureInd = 0;
	if(samplers == null) this.samplers = []; else this.samplers = samplers;
	this.samplers.push("textureSampler");
	this._effect = this._engine.createEffect({ vertex : "postprocess", fragment : fragmentUrl},["position"],parameters == null?new Array():parameters,this.samplers,"");
};
$hxClasses["com.gamestudiohx.babylonhx.postprocess.PostProcess"] = com.gamestudiohx.babylonhx.postprocess.PostProcess;
com.gamestudiohx.babylonhx.postprocess.PostProcess.__name__ = ["com","gamestudiohx","babylonhx","postprocess","PostProcess"];
com.gamestudiohx.babylonhx.postprocess.PostProcess.prototype = {
	activate: function(camera) {
		if(camera != null) camera = camera; else camera = this._camera;
		var scene = camera.getScene();
		var desiredWidth = this._engine.getRenderWidth() * this._renderRatio;
		var desiredHeight = this._engine.getRenderHeight() * this._renderRatio;
		if(this.width != desiredWidth || this.height != desiredHeight) {
			if(this._textures.length > 0) {
				var _g1 = 0;
				var _g = this._textures.length;
				while(_g1 < _g) {
					var i = _g1++;
					this._engine._releaseTexture(this._textures.data[i]);
				}
				this._textures.reset();
			}
			this.width = desiredWidth;
			this.height = desiredHeight;
			this._textures.push(this._engine.createRenderTargetTexture({ width : this.width, height : this.height},{ generateMipMaps : false, generateDepthBuffer : Lambda.indexOf(camera._postProcesses,this) == 0, samplingMode : this.renderTargetSamplingMode}));
			if(this._reusable) this._textures.push(this._engine.createRenderTargetTexture({ width : this.width, height : this.height},{ generateMipMaps : false, generateDepthBuffer : Lambda.indexOf(camera._postProcesses,this) == camera._postProcessesTakenIndices[0], samplingMode : this.renderTargetSamplingMode}));
			if(this.onSizeChanged != null) this.onSizeChanged();
		}
		this._engine.bindFramebuffer(this._textures.data[this._currentRenderTextureInd]);
		this._engine.clear(this._scene.clearColor,this._scene.autoClear || this._scene.forceWireframe,true);
		if(this._reusable) this._currentRenderTextureInd = (this._currentRenderTextureInd + 1) % 2;
	}
	,apply: function() {
		if(!this._effect.isReady()) return null;
		this._engine.enableEffect(this._effect);
		this._engine.setState(false);
		this._engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_DISABLE);
		this._engine.setDepthBuffer(false);
		this._engine.setDepthWrite(false);
		this._effect._bindTexture("textureSampler",this._textures.data[this._currentRenderTextureInd]);
		if(this.onApply != null) this.onApply(this._effect);
		return this._effect;
	}
	,dispose: function(camera) {
		if(camera == null) camera = this._camera; else camera = camera;
		if(this._onDispose != null) this._onDispose();
		if(this._textures.length > 0) {
			var _g1 = 0;
			var _g = this._textures.length;
			while(_g1 < _g) {
				var i = _g1++;
				this._engine._releaseTexture(this._textures.data[i]);
			}
			this._textures.reset();
		}
		camera.detachPostProcess(this);
		var index = Lambda.indexOf(camera._postProcesses,this);
		if(index == camera._postProcessesTakenIndices[0] && camera._postProcessesTakenIndices.length > 0) this._camera._postProcesses[camera._postProcessesTakenIndices[0]].width = -1;
	}
	,__class__: com.gamestudiohx.babylonhx.postprocess.PostProcess
};
com.gamestudiohx.babylonhx.postprocess.PostProcessManager = function(scene) {
	this._scene = scene;
	var vertices = [1,1,-1,1,-1,-1,1,-1];
	this._vertexDeclaration = [2];
	this._vertexStrideSize = 8;
	this._vertexBuffer = scene.getEngine().createVertexBuffer(vertices);
	var indices = [0,1,2,0,2,3];
	this._indexBuffer = scene.getEngine().createIndexBuffer(indices);
};
$hxClasses["com.gamestudiohx.babylonhx.postprocess.PostProcessManager"] = com.gamestudiohx.babylonhx.postprocess.PostProcessManager;
com.gamestudiohx.babylonhx.postprocess.PostProcessManager.__name__ = ["com","gamestudiohx","babylonhx","postprocess","PostProcessManager"];
com.gamestudiohx.babylonhx.postprocess.PostProcessManager.prototype = {
	_prepareFrame: function() {
		var postProcesses = this._scene.activeCamera._postProcesses;
		var postProcessesTakenIndices = this._scene.activeCamera._postProcessesTakenIndices;
		if(postProcessesTakenIndices.length == 0 || !this._scene.postProcessesEnabled) return;
		postProcesses[0].activate();
	}
	,_finalizeFrame: function() {
		var postProcesses = this._scene.activeCamera._postProcesses;
		if(postProcesses.length == 0 || !this._scene.postProcessesEnabled) return;
		var engine = this._scene.getEngine();
		var _g1 = 0;
		var _g = postProcesses.length;
		while(_g1 < _g) {
			var index = _g1++;
			if(index < postProcesses.length - 1) postProcesses[index + 1].activate(); else engine.restoreDefaultFramebuffer();
			var effect = postProcesses[index].apply();
			if(effect != null) {
				engine.bindBuffers(this._vertexBuffer,this._indexBuffer,this._vertexDeclaration,this._vertexStrideSize,effect);
				engine.draw(true,0,6);
			}
		}
		engine.setDepthBuffer(true);
		engine.setDepthWrite(true);
	}
	,dispose: function() {
		if(this._vertexBuffer != null) {
			this._scene.getEngine()._releaseBuffer(this._vertexBuffer);
			this._vertexBuffer = null;
		}
		if(this._indexBuffer != null) {
			this._scene.getEngine()._releaseBuffer(this._indexBuffer);
			this._indexBuffer = null;
		}
	}
	,__class__: com.gamestudiohx.babylonhx.postprocess.PostProcessManager
};
com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess = function(name,refractionTextureUrl,color,depth,colorLevel,ratio,camera,samplingMode) {
	if(samplingMode == null) samplingMode = 1;
	var _g = this;
	com.gamestudiohx.babylonhx.postprocess.PostProcess.call(this,name,"refraction",["baseColor","depth","colorLevel"],["refractionSampler"],ratio,camera,samplingMode);
	this.color = color;
	this.depth = depth;
	this.colorLevel = colorLevel;
	this._refTexture = new com.gamestudiohx.babylonhx.materials.textures.Texture(refractionTextureUrl,camera.getScene());
	this.onApply = function(effect) {
		effect.setColor3("baseColor",_g.color);
		effect.setFloat("depth",_g.depth);
		effect.setFloat("colorLevel",_g.colorLevel);
		effect.setTexture("refractionSampler",_g._refTexture);
	};
	this._onDispose = function() {
		if(_g._refTexture != null) _g._refTexture.dispose();
	};
};
$hxClasses["com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess"] = com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess;
com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess.__name__ = ["com","gamestudiohx","babylonhx","postprocess","RefractionPostProcess"];
com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess.__super__ = com.gamestudiohx.babylonhx.postprocess.PostProcess;
com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess.prototype = $extend(com.gamestudiohx.babylonhx.postprocess.PostProcess.prototype,{
	__class__: com.gamestudiohx.babylonhx.postprocess.RefractionPostProcess
});
com.gamestudiohx.babylonhx.rendering = {};
com.gamestudiohx.babylonhx.rendering.BoundingBoxRenderer = function(scene) {
	this.renderList = new com.gamestudiohx.babylonhx.tools.SmartArray();
	this.showBackLines = true;
	this.backColor = new com.gamestudiohx.babylonhx.tools.math.Color3(0.1,0.1,0.1);
	this.frontColor = new com.gamestudiohx.babylonhx.tools.math.Color3(1,1,1);
	this._scene = scene;
	this.renderList.length = 32;
	this._colorShader = new com.gamestudiohx.babylonhx.materials.ShaderMaterial("colorShader",scene,"color",{ attributes : ["position"], uniforms : ["worldViewProjection","color"]});
	var engine = this._scene.getEngine();
	var boxdata = com.gamestudiohx.babylonhx.mesh.VertexData.CreateBox(1.0);
	this._vb = new com.gamestudiohx.babylonhx.mesh.VertexBuffer(engine,boxdata.positions,com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind,false);
	this._ib = engine.createIndexBuffer([0,1,1,2,2,3,3,0,4,5,5,6,6,7,7,4,0,7,1,6,2,5,3,4]);
};
$hxClasses["com.gamestudiohx.babylonhx.rendering.BoundingBoxRenderer"] = com.gamestudiohx.babylonhx.rendering.BoundingBoxRenderer;
com.gamestudiohx.babylonhx.rendering.BoundingBoxRenderer.__name__ = ["com","gamestudiohx","babylonhx","rendering","BoundingBoxRenderer"];
com.gamestudiohx.babylonhx.rendering.BoundingBoxRenderer.prototype = {
	reset: function() {
		this.renderList.reset();
	}
	,render: function() {
		var engine = this._scene.getEngine();
		engine.setDepthWrite(false);
		this._colorShader._preBind();
		var boundingBoxIndex = 0;
		while(boundingBoxIndex < this.renderList.length) {
			var boundingBox = this.renderList.data[boundingBoxIndex];
			var min = boundingBox.minimum;
			var max = boundingBox.maximum;
			var diff = max.subtract(min);
			var median = min.add(diff.scale(0.5));
			var worldMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.Scaling(diff.x,diff.y,diff.z).multiply(com.gamestudiohx.babylonhx.tools.math.Matrix.Translation(median.x,median.y,median.z)).multiply(boundingBox.getWorldMatrix());
			engine.bindBuffers(this._vb.getBuffer(),this._ib,[3],12,this._colorShader.getEffect());
			if(this.showBackLines) {
				engine.setDepthFunctionToGreaterOrEqual();
				this._colorShader.setColor3("color",this.backColor);
				this._colorShader.bind(worldMatrix,null);
				engine.draw(false,0,24);
			}
			engine.setDepthFunctionToLess();
			this._colorShader.setColor3("color",this.frontColor);
			this._colorShader.bind(worldMatrix,null);
			engine.draw(false,0,24);
			boundingBoxIndex++;
		}
		this._colorShader.unbind();
		engine.setDepthFunctionToLessOrEqual();
		engine.setDepthWrite(true);
	}
	,dispose: function() {
		this._colorShader.dispose();
		this._vb.dispose();
		this._scene.getEngine()._releaseBuffer(this._ib);
	}
	,__class__: com.gamestudiohx.babylonhx.rendering.BoundingBoxRenderer
};
com.gamestudiohx.babylonhx.rendering.RenderingGroup = function(index,scene) {
	this.index = index;
	this._scene = scene;
	this._activeVertices = 0;
	this._opaqueSubMeshes = new com.gamestudiohx.babylonhx.tools.SmartArray();
	this._transparentSubMeshes = new com.gamestudiohx.babylonhx.tools.SmartArray();
	this._alphaTestSubMeshes = new com.gamestudiohx.babylonhx.tools.SmartArray();
};
$hxClasses["com.gamestudiohx.babylonhx.rendering.RenderingGroup"] = com.gamestudiohx.babylonhx.rendering.RenderingGroup;
com.gamestudiohx.babylonhx.rendering.RenderingGroup.__name__ = ["com","gamestudiohx","babylonhx","rendering","RenderingGroup"];
com.gamestudiohx.babylonhx.rendering.RenderingGroup.prototype = {
	render: function(customRenderFunction,beforeTransparents) {
		if(customRenderFunction != null) {
			customRenderFunction(this._opaqueSubMeshes,this._alphaTestSubMeshes,this._transparentSubMeshes,beforeTransparents);
			return true;
		}
		if(this._opaqueSubMeshes.length == 0 && this._alphaTestSubMeshes.length == 0 && this._transparentSubMeshes.length == 0) return false;
		var engine = this._scene.getEngine();
		var submesh = null;
		var _g1 = 0;
		var _g = this._opaqueSubMeshes.length;
		while(_g1 < _g) {
			var subIndex = _g1++;
			submesh = this._opaqueSubMeshes.data[subIndex];
			this._activeVertices += submesh.verticesCount;
			submesh.render();
		}
		engine.setAlphaTesting(true);
		var _g11 = 0;
		var _g2 = this._alphaTestSubMeshes.length;
		while(_g11 < _g2) {
			var subIndex1 = _g11++;
			submesh = this._alphaTestSubMeshes.data[subIndex1];
			this._activeVertices += submesh.verticesCount;
			submesh.render();
		}
		engine.setAlphaTesting(false);
		if(beforeTransparents != null) beforeTransparents();
		if(this._transparentSubMeshes.length > 0) {
			var _g12 = 0;
			var _g3 = this._transparentSubMeshes.length;
			while(_g12 < _g3) {
				var subIndex2 = _g12++;
				submesh = this._transparentSubMeshes.data[subIndex2];
				submesh._distanceToCamera = submesh.getBoundingInfo().boundingSphere.centerWorld.subtract(this._scene.activeCamera.position).length();
			}
			var sortedArray = this._transparentSubMeshes.data.slice(0,this._transparentSubMeshes.length);
			sortedArray.sort(function(a,b) {
				if(a._distanceToCamera < b._distanceToCamera) return 1;
				if(a._distanceToCamera > b._distanceToCamera) return -1;
				return 0;
			});
			engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_COMBINE);
			var _g13 = 0;
			var _g4 = sortedArray.length;
			while(_g13 < _g4) {
				var subIndex3 = _g13++;
				submesh = sortedArray[subIndex3];
				this._activeVertices += submesh.verticesCount;
				submesh.render();
			}
			engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_DISABLE);
		}
		return true;
	}
	,prepare: function() {
		this._opaqueSubMeshes.reset();
		this._transparentSubMeshes.reset();
		this._alphaTestSubMeshes.reset();
	}
	,dispatch: function(subMesh) {
		var material = subMesh.getMaterial();
		var mesh = subMesh.getMesh();
		if(js.Boot.__instanceof(material,com.gamestudiohx.babylonhx.materials.Material) && material.needAlphaBlending() || mesh.visibility < 1.0) {
			if(material.alpha > 0 || mesh.visibility < 1.0) this._transparentSubMeshes.push(subMesh);
		} else if(js.Boot.__instanceof(material,com.gamestudiohx.babylonhx.materials.Material) && material.needAlphaTesting()) this._alphaTestSubMeshes.push(subMesh); else this._opaqueSubMeshes.push(subMesh);
	}
	,__class__: com.gamestudiohx.babylonhx.rendering.RenderingGroup
};
com.gamestudiohx.babylonhx.rendering.RenderingManager = function(scene) {
	this._scene = scene;
	this._renderingGroups = [];
	this._depthBufferAlreadyCleaned = false;
};
$hxClasses["com.gamestudiohx.babylonhx.rendering.RenderingManager"] = com.gamestudiohx.babylonhx.rendering.RenderingManager;
com.gamestudiohx.babylonhx.rendering.RenderingManager.__name__ = ["com","gamestudiohx","babylonhx","rendering","RenderingManager"];
com.gamestudiohx.babylonhx.rendering.RenderingManager.prototype = {
	_renderParticles: function(index,activeMeshes) {
		if(this._scene._activeParticleSystems.length != 0) {
			var beforeParticlesDate = openfl.Lib.getTimer();
			var _g1 = 0;
			var _g = this._scene._activeParticleSystems.length;
			while(_g1 < _g) {
				var particleIndex = _g1++;
				var particleSystem = this._scene._activeParticleSystems.data[particleIndex];
				if(particleSystem.renderingGroupId == index) {
					this._clearDepthBuffer();
					if(particleSystem.emitter.position == null || activeMeshes == null || Lambda.indexOf(activeMeshes,particleSystem.emitter) != -1) this._scene._activeParticles += particleSystem.render();
				}
			}
			this._scene._particlesDuration += openfl.Lib.getTimer() - beforeParticlesDate;
		}
	}
	,_renderSprites: function(index) {
		if(this._scene.spriteManagers.length == 0) return;
		var beforeSpritessDate = openfl.Lib.getTimer();
		var _g1 = 0;
		var _g = this._scene.spriteManagers.length;
		while(_g1 < _g) {
			var id = _g1++;
			var spriteManager = this._scene.spriteManagers[id];
			if(spriteManager.renderingGroupId == index) {
				this._clearDepthBuffer();
				spriteManager.render();
			}
		}
		this._scene._spritesDuration += openfl.Lib.getTimer() - beforeSpritessDate;
	}
	,_clearDepthBuffer: function() {
		if(this._depthBufferAlreadyCleaned) return;
		this._scene.getEngine().clear(new com.gamestudiohx.babylonhx.tools.math.Color4(0,0,0),false,true);
		this._depthBufferAlreadyCleaned = true;
	}
	,render: function(customRenderFunction,activeMeshes,renderParticles,renderSprites) {
		var _g2 = this;
		var _g1 = 0;
		var _g = com.gamestudiohx.babylonhx.rendering.RenderingManager.MAX_RENDERINGGROUPS;
		while(_g1 < _g) {
			var index = [_g1++];
			this._depthBufferAlreadyCleaned = false;
			var renderingGroup = this._renderingGroups[index[0]];
			if(renderingGroup != null) {
				this._clearDepthBuffer();
				if(!renderingGroup.render(customRenderFunction,(function(index) {
					return function() {
						if(renderSprites) _g2._renderSprites(index[0]);
					};
				})(index))) this._renderingGroups.splice(index[0],1);
			} else if(renderSprites) this._renderSprites(index[0]);
			if(renderParticles) this._renderParticles(index[0],activeMeshes);
		}
	}
	,reset: function() {
		var _g = 0;
		var _g1 = this._renderingGroups;
		while(_g < _g1.length) {
			var renderingGroup = _g1[_g];
			++_g;
			renderingGroup.prepare();
		}
	}
	,dispatch: function(subMesh) {
		var mesh = subMesh.getMesh();
		var renderingGroupId = mesh.renderingGroupId;
		if(this._renderingGroups.length <= renderingGroupId) this._renderingGroups[renderingGroupId] = new com.gamestudiohx.babylonhx.rendering.RenderingGroup(renderingGroupId,this._scene);
		this._renderingGroups[renderingGroupId].dispatch(subMesh);
	}
	,__class__: com.gamestudiohx.babylonhx.rendering.RenderingManager
};
com.gamestudiohx.babylonhx.sprites = {};
com.gamestudiohx.babylonhx.sprites.Sprite = function(name,manager) {
	this.name = name;
	this._manager = manager;
	this._manager.sprites.push(this);
	this.position = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	this.color = new com.gamestudiohx.babylonhx.tools.math.Color4(1.0,1.0,1.0,1.0);
	this._frameCount = 0;
	this._direction = 1;
};
$hxClasses["com.gamestudiohx.babylonhx.sprites.Sprite"] = com.gamestudiohx.babylonhx.sprites.Sprite;
com.gamestudiohx.babylonhx.sprites.Sprite.__name__ = ["com","gamestudiohx","babylonhx","sprites","Sprite"];
com.gamestudiohx.babylonhx.sprites.Sprite.prototype = {
	playAnimation: function(from,to,loop,delay) {
		this._fromIndex = from;
		this._toIndex = to;
		this._loopAnimation = loop;
		this._delay = delay;
		this._animationStarted = true;
		if(from < to) this._direction = 1; else this._direction = -1;
		this.cellIndex = from;
		this._time = 0;
	}
	,stopAnimation: function() {
		this._animationStarted = false;
	}
	,animate: function(deltaTime) {
		if(this._animationStarted) {
			this._time += deltaTime;
			if(this._time > this._delay) {
				this._time = this._time % this._delay;
				this.cellIndex += this._direction;
				if(this.cellIndex == this._toIndex) {
					if(this._loopAnimation) this.cellIndex = this._fromIndex; else {
						this._animationStarted = false;
						if(this.disposeWhenFinishedAnimating) this.dispose();
					}
				}
			}
		}
	}
	,dispose: function() {
		var _g1 = 0;
		var _g = this._manager.sprites.length;
		while(_g1 < _g) {
			var i = _g1++;
			if(this._manager.sprites[i] == this) this._manager.sprites.splice(i,1);
		}
	}
	,__class__: com.gamestudiohx.babylonhx.sprites.Sprite
};
com.gamestudiohx.babylonhx.sprites.SpriteManager = function(name,imgUrl,capacity,cellSize,scene,epsilon) {
	if(epsilon == null) epsilon = 0.01;
	this.name = name;
	this._capacity = capacity;
	this.cellSize = cellSize;
	this._spriteTexture = new com.gamestudiohx.babylonhx.materials.textures.Texture(imgUrl,scene,true,false);
	this._spriteTexture.wrapU = com.gamestudiohx.babylonhx.materials.textures.Texture.CLAMP_ADDRESSMODE;
	this._spriteTexture.wrapV = com.gamestudiohx.babylonhx.materials.textures.Texture.CLAMP_ADDRESSMODE;
	this._epsilon = epsilon;
	this._scene = scene;
	this._scene.spriteManagers.push(this);
	this._vertexDeclaration = [3,4,4,4];
	this._vertexStrideSize = 60;
	this._vertexBuffer = scene.getEngine().createDynamicVertexBuffer(capacity * this._vertexStrideSize * 4);
	var indices = [];
	var index = 0;
	var _g = 0;
	while(_g < capacity) {
		var count = _g++;
		indices.push(index);
		indices.push(index + 1);
		indices.push(index + 2);
		indices.push(index);
		indices.push(index + 2);
		indices.push(index + 3);
		index += 4;
	}
	this._indexBuffer = scene.getEngine().createIndexBuffer(indices);
	this._vertices = [];
	this.sprites = [];
	this._effectBase = this._scene.getEngine().createEffect("sprites",["position","options","cellInfo","color"],["view","projection","textureInfos","alphaTest"],["diffuseSampler"],"");
	this._effectFog = this._scene.getEngine().createEffect("sprites",["position","options","cellInfo","color"],["view","projection","textureInfos","alphaTest","vFogInfos","vFogColor"],["diffuseSampler"],"#define FOG");
};
$hxClasses["com.gamestudiohx.babylonhx.sprites.SpriteManager"] = com.gamestudiohx.babylonhx.sprites.SpriteManager;
com.gamestudiohx.babylonhx.sprites.SpriteManager.__name__ = ["com","gamestudiohx","babylonhx","sprites","SpriteManager"];
com.gamestudiohx.babylonhx.sprites.SpriteManager.prototype = {
	onDispose: function() {
	}
	,render: function() {
		if(!this._effectBase.isReady() || !this._effectFog.isReady() || this._spriteTexture != null || !this._spriteTexture.isReady()) return 0;
		var engine = this._scene.getEngine();
		var baseSize = this._spriteTexture.getBaseSize();
		var deltaTime = com.gamestudiohx.babylonhx.tools.Tools.GetDeltaTime();
		var max = Std["int"](Math.min(this._capacity,this.sprites.length));
		var rowSize = baseSize.width / this.cellSize;
		var offset = 0;
		var _g = 0;
		while(_g < max) {
			var index = _g++;
			var sprite = this.sprites[index];
			if(sprite == null) continue;
			sprite.animate(deltaTime);
			this._appendSpriteVertex(offset++,sprite,0,0,rowSize);
			this._appendSpriteVertex(offset++,sprite,1,0,rowSize);
			this._appendSpriteVertex(offset++,sprite,1,1,rowSize);
			this._appendSpriteVertex(offset++,sprite,0,1,rowSize);
		}
		engine.updateDynamicVertexBuffer(this._vertexBuffer,this._vertices,max * this._vertexStrideSize);
		var effect = this._effectBase;
		if(this._scene.fogMode != com.gamestudiohx.babylonhx.Scene.FOGMODE_NONE) effect = this._effectFog;
		engine.enableEffect(effect);
		var viewMatrix = this._scene.getViewMatrix();
		effect.setTexture("diffuseSampler",this._spriteTexture);
		effect._engine.setMatrix(effect.getUniform("view"),viewMatrix);
		effect.setMatrix("projection",this._scene.getProjectionMatrix());
		effect.setFloat2("textureInfos",this.cellSize / baseSize.width,this.cellSize / baseSize.height);
		if(this._scene.fogMode != com.gamestudiohx.babylonhx.Scene.FOGMODE_NONE) {
			effect.setFloat4("vFogInfos",this._scene.fogMode,this._scene.fogStart,this._scene.fogEnd,this._scene.fogDensity);
			effect.setColor3("vFogColor",this._scene.fogColor);
		}
		engine.bindBuffers(this._vertexBuffer,this._indexBuffer,this._vertexDeclaration,this._vertexStrideSize,effect);
		if(!(effect._valueCache.exists("alphaTest") && effect._valueCache.get("alphaTest")[0] == 1.0)) {
			effect._valueCache.set("alphaTest",[1.0]);
			effect._engine.setBool(effect.getUniform("alphaTest"),true);
		}
		engine.setColorWrite(false);
		engine.draw(true,0,max * 6);
		engine.setColorWrite(true);
		if(!(effect._valueCache.exists("alphaTest") && effect._valueCache.get("alphaTest")[0] == 0.0)) {
			effect._valueCache.set("alphaTest",[0.0]);
			effect._engine.setBool(effect.getUniform("alphaTest"),false);
		}
		engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_COMBINE);
		engine.draw(true,0,max * 6);
		engine.setAlphaMode(com.gamestudiohx.babylonhx.Engine.ALPHA_DISABLE);
		return 1;
	}
	,dispose: function() {
		if(this._vertexBuffer != null) {
			this._scene.getEngine()._releaseBuffer(this._vertexBuffer);
			this._vertexBuffer = null;
		}
		if(this._indexBuffer != null) {
			this._scene.getEngine()._releaseBuffer(this._indexBuffer);
			this._indexBuffer = null;
		}
		if(this._spriteTexture != null) {
			this._spriteTexture.dispose();
			this._spriteTexture = null;
		}
		HxOverrides.remove(this._scene.spriteManagers,this);
		if($bind(this,this.onDispose) != null) this.onDispose();
	}
	,_appendSpriteVertex: function(index,sprite,offsetX,offsetY,rowSize) {
		var arrayOffset = index * 15;
		if(offsetX == 0) offsetX = this._epsilon; else if(offsetX == 1) offsetX = 1 - this._epsilon;
		if(offsetY == 0) offsetY = this._epsilon; else if(offsetY == 1) offsetY = 1 - this._epsilon;
		this._vertices[arrayOffset] = sprite.position.x;
		this._vertices[arrayOffset + 1] = sprite.position.y;
		this._vertices[arrayOffset + 2] = sprite.position.z;
		this._vertices[arrayOffset + 3] = sprite.angle;
		this._vertices[arrayOffset + 4] = sprite.size;
		this._vertices[arrayOffset + 5] = offsetX;
		this._vertices[arrayOffset + 6] = offsetY;
		if(sprite.invertU) this._vertices[arrayOffset + 7] = 1; else this._vertices[arrayOffset + 7] = 0;
		if(sprite.invertV) this._vertices[arrayOffset + 8] = 1; else this._vertices[arrayOffset + 8] = 0;
		var offset = sprite.cellIndex / rowSize | 0;
		this._vertices[arrayOffset + 9] = sprite.cellIndex - offset * rowSize;
		this._vertices[arrayOffset + 10] = offset;
		this._vertices[arrayOffset + 11] = sprite.color.r;
		this._vertices[arrayOffset + 12] = sprite.color.g;
		this._vertices[arrayOffset + 13] = sprite.color.b;
		this._vertices[arrayOffset + 14] = sprite.color.a;
	}
	,__class__: com.gamestudiohx.babylonhx.sprites.SpriteManager
};
com.gamestudiohx.babylonhx.tools = {};
com.gamestudiohx.babylonhx.tools.SceneLoader = function() { };
$hxClasses["com.gamestudiohx.babylonhx.tools.SceneLoader"] = com.gamestudiohx.babylonhx.tools.SceneLoader;
com.gamestudiohx.babylonhx.tools.SceneLoader.__name__ = ["com","gamestudiohx","babylonhx","tools","SceneLoader"];
com.gamestudiohx.babylonhx.tools.SceneLoader.loadCubeTexture = function(rootUrl,parsedTexture,scene) {
	var texture = new com.gamestudiohx.babylonhx.materials.textures.CubeTexture(rootUrl + Std.string(parsedTexture.name),scene);
	texture.name = parsedTexture.name;
	texture.hasAlpha = parsedTexture.hasAlpha;
	texture.level = parsedTexture.level;
	texture.coordinatesMode = parsedTexture.coordinatesMode;
	return texture;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.loadTexture = function(rootUrl,parsedTexture,scene) {
	if(parsedTexture.name != null && parsedTexture.isRenderTarget == true) return null;
	if(parsedTexture.isCube != null && parsedTexture.isCube == true) return com.gamestudiohx.babylonhx.tools.SceneLoader.loadCubeTexture(rootUrl,parsedTexture,scene);
	var texture = null;
	if(parsedTexture.mirrorPlane != null) {
		texture = new com.gamestudiohx.babylonhx.materials.textures.MirrorTexture(parsedTexture.name,parsedTexture.renderTargetSize,scene,true);
		(js.Boot.__cast(texture , com.gamestudiohx.babylonhx.materials.textures.MirrorTexture))._waitingRenderList = parsedTexture.renderList;
		(js.Boot.__cast(texture , com.gamestudiohx.babylonhx.materials.textures.MirrorTexture)).mirrorPlane = com.gamestudiohx.babylonhx.tools.math.Plane.FromArray(parsedTexture.mirrorPlane);
	} else if(parsedTexture.isRenderTarget) {
		texture = new com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture(parsedTexture.name,parsedTexture.renderTargetSize,scene,true);
		(js.Boot.__cast(texture , com.gamestudiohx.babylonhx.materials.textures.RenderTargetTexture))._waitingRenderList = parsedTexture.renderList;
	} else texture = new com.gamestudiohx.babylonhx.materials.textures.Texture(rootUrl + Std.string(parsedTexture.name),scene);
	texture.name = parsedTexture.name;
	texture.hasAlpha = parsedTexture.hasAlpha;
	texture.level = parsedTexture.level;
	texture.coordinatesIndex = parsedTexture.coordinatesIndex;
	texture.coordinatesMode = parsedTexture.coordinatesMode;
	texture.uOffset = parsedTexture.uOffset;
	texture.vOffset = parsedTexture.vOffset;
	texture.uScale = parsedTexture.uScale;
	texture.vScale = parsedTexture.vScale;
	texture.uAng = parsedTexture.uAng;
	texture.vAng = parsedTexture.vAng;
	texture.wAng = parsedTexture.wAng;
	texture.wrapU = parsedTexture.wrapU;
	texture.wrapV = parsedTexture.wrapV;
	if(parsedTexture.animations != null) {
		var _g1 = 0;
		var _g = parsedTexture.animations.length;
		while(_g1 < _g) {
			var animationIndex = _g1++;
			var parsedAnimation = parsedTexture.animations[animationIndex];
			texture.animations.push(com.gamestudiohx.babylonhx.tools.SceneLoader.parseAnimation(parsedAnimation));
		}
	}
	return texture;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.parseSkeleton = function(parsedSkeleton,scene) {
	var skeleton = new com.gamestudiohx.babylonhx.bones.Skeleton(parsedSkeleton.name,parsedSkeleton.id,scene);
	var _g1 = 0;
	var _g = parsedSkeleton.bones.length;
	while(_g1 < _g) {
		var index = _g1++;
		var parsedBone = parsedSkeleton.bones[index];
		var parentBone = null;
		if(parsedBone.parentBoneIndex > -1) parentBone = skeleton.bones[parsedBone.parentBoneIndex];
		var bone = new com.gamestudiohx.babylonhx.bones.Bone(parsedBone.name,skeleton,parentBone,com.gamestudiohx.babylonhx.tools.math.Matrix.FromArray(parsedBone.matrix,null));
		if(parsedBone.animation != null) bone.animations.push(com.gamestudiohx.babylonhx.tools.SceneLoader.parseAnimation(parsedBone.animation));
	}
	return skeleton;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.parseMaterial = function(parsedMaterial,scene,rootUrl) {
	var material = new com.gamestudiohx.babylonhx.materials.StandardMaterial(parsedMaterial.name,scene);
	material.ambientColor = com.gamestudiohx.babylonhx.tools.math.Color3.FromArray(parsedMaterial.ambient);
	material.diffuseColor = com.gamestudiohx.babylonhx.tools.math.Color3.FromArray(parsedMaterial.diffuse);
	material.specularColor = com.gamestudiohx.babylonhx.tools.math.Color3.FromArray(parsedMaterial.specular);
	material.specularPower = parsedMaterial.specularPower;
	material.emissiveColor = com.gamestudiohx.babylonhx.tools.math.Color3.FromArray(parsedMaterial.emissive);
	material.alpha = parsedMaterial.alpha;
	material.id = parsedMaterial.id;
	material.backFaceCulling = parsedMaterial.backFaceCulling;
	if(parsedMaterial.diffuseTexture != null) material.diffuseTexture = com.gamestudiohx.babylonhx.tools.SceneLoader.loadTexture(rootUrl,parsedMaterial.diffuseTexture,scene);
	if(parsedMaterial.ambientTexture != null) material.ambientTexture = com.gamestudiohx.babylonhx.tools.SceneLoader.loadTexture(rootUrl,parsedMaterial.ambientTexture,scene);
	if(parsedMaterial.opacityTexture != null) material.opacityTexture = com.gamestudiohx.babylonhx.tools.SceneLoader.loadTexture(rootUrl,parsedMaterial.opacityTexture,scene);
	if(parsedMaterial.reflectionTexture != null) material.reflectionTexture = com.gamestudiohx.babylonhx.tools.SceneLoader.loadTexture(rootUrl,parsedMaterial.reflectionTexture,scene);
	if(parsedMaterial.emissiveTexture != null) material.emissiveTexture = com.gamestudiohx.babylonhx.tools.SceneLoader.loadTexture(rootUrl,parsedMaterial.emissiveTexture,scene);
	if(parsedMaterial.specularTexture != null) material.specularTexture = com.gamestudiohx.babylonhx.tools.SceneLoader.loadTexture(rootUrl,parsedMaterial.specularTexture,scene);
	if(parsedMaterial.bumpTexture != null) material.bumpTexture = com.gamestudiohx.babylonhx.tools.SceneLoader.loadTexture(rootUrl,parsedMaterial.bumpTexture,scene);
	return material;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.parseMaterialById = function(id,parsedData,scene,rootUrl) {
	var _g1 = 0;
	var _g = parsedData.materials.length;
	while(_g1 < _g) {
		var index = _g1++;
		var parsedMaterial = parsedData.materials[index];
		if(parsedMaterial.id == id) return com.gamestudiohx.babylonhx.tools.SceneLoader.parseMaterial(parsedMaterial,scene,rootUrl);
	}
	return null;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.parseMultiMaterial = function(parsedMultiMaterial,scene) {
	var multiMaterial = new com.gamestudiohx.babylonhx.materials.MultiMaterial(parsedMultiMaterial.name,scene);
	multiMaterial.id = parsedMultiMaterial.id;
	var _g1 = 0;
	var _g = parsedMultiMaterial.materials.length;
	while(_g1 < _g) {
		var matIndex = _g1++;
		var subMatId = parsedMultiMaterial.materials[matIndex];
		if(subMatId != null) multiMaterial.subMaterials.push(scene.getMaterialByID(subMatId)); else multiMaterial.subMaterials.push(null);
	}
	return multiMaterial;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.parseLensFlareSystem = function(parsedLensFlareSystem,scene,rootUrl) {
	var emitter = scene.getLastEntryByID(parsedLensFlareSystem.emitterId);
	var lensFlareSystem = new com.gamestudiohx.babylonhx.lensflare.LensFlareSystem("lensFlareSystem#" + Std.string(parsedLensFlareSystem.emitterId),emitter,scene);
	lensFlareSystem.borderLimit = parsedLensFlareSystem.borderLimit;
	var _g1 = 0;
	var _g = parsedLensFlareSystem.flares.length;
	while(_g1 < _g) {
		var index = _g1++;
		var parsedFlare = parsedLensFlareSystem.flares[index];
		var flare = new com.gamestudiohx.babylonhx.lensflare.LensFlare(parsedFlare.size,parsedFlare.position,com.gamestudiohx.babylonhx.tools.math.Color3.FromArray(parsedFlare.color),rootUrl + parsedFlare.textureName,lensFlareSystem);
	}
	return lensFlareSystem;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.parseParticleSystem = function(parsedParticleSystem,scene,rootUrl) {
	var emitter = scene.getLastMeshByID(parsedParticleSystem.emitterId);
	haxe.Log.trace(Std.string(emitter) + " --Emitter",{ fileName : "SceneLoader.hx", lineNumber : 222, className : "com.gamestudiohx.babylonhx.tools.SceneLoader", methodName : "parseParticleSystem"});
	var particleSystem = new com.gamestudiohx.babylonhx.particles.ParticleSystem("particles_" + emitter.name,parsedParticleSystem.capacity,scene);
	if(parsedParticleSystem.textureName != null && parsedParticleSystem.textureName != "") particleSystem.particleTexture = new com.gamestudiohx.babylonhx.materials.textures.Texture(rootUrl + Std.string(parsedParticleSystem.textureName),scene);
	particleSystem.minAngularSpeed = parsedParticleSystem.minAngularSpeed;
	particleSystem.maxAngularSpeed = parsedParticleSystem.maxAngularSpeed;
	particleSystem.minSize = parsedParticleSystem.minSize;
	particleSystem.maxSize = parsedParticleSystem.maxSize;
	particleSystem.minLifeTime = parsedParticleSystem.minLifeTime;
	particleSystem.maxLifeTime = parsedParticleSystem.maxLifeTime;
	particleSystem.emitter = emitter;
	particleSystem.emitRate = parsedParticleSystem.emitRate;
	particleSystem.minEmitBox = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedParticleSystem.minEmitBox,null);
	particleSystem.maxEmitBox = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedParticleSystem.maxEmitBox,null);
	particleSystem.gravity = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedParticleSystem.gravity,null);
	particleSystem.direction1 = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedParticleSystem.direction1,null);
	particleSystem.direction2 = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedParticleSystem.direction2,null);
	particleSystem.color1 = com.gamestudiohx.babylonhx.tools.math.Color4.FromArray(parsedParticleSystem.color1,null);
	particleSystem.color2 = com.gamestudiohx.babylonhx.tools.math.Color4.FromArray(parsedParticleSystem.color2,null);
	particleSystem.colorDead = com.gamestudiohx.babylonhx.tools.math.Color4.FromArray(parsedParticleSystem.colorDead,null);
	particleSystem.updateSpeed = parsedParticleSystem.updateSpeed;
	particleSystem.targetStopDuration = parsedParticleSystem.targetStopFrame;
	particleSystem.textureMask = com.gamestudiohx.babylonhx.tools.math.Color4.FromArray(parsedParticleSystem.textureMask,null);
	particleSystem.blendMode = parsedParticleSystem.blendMode;
	particleSystem.start();
	return particleSystem;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.parseShadowGenerator = function(parsedShadowGenerator,scene) {
	var light = scene.getLightByID(parsedShadowGenerator.lightId);
	var shadowGenerator = new com.gamestudiohx.babylonhx.lights.shadows.ShadowGenerator(parsedShadowGenerator.mapSize,light);
	var _g1 = 0;
	var _g = parsedShadowGenerator.renderList.length;
	while(_g1 < _g) {
		var meshIndex = _g1++;
		var mesh = scene.getMeshByID(parsedShadowGenerator.renderList[meshIndex]);
		shadowGenerator.getShadowMap().renderList.push(mesh);
	}
	shadowGenerator.useVarianceShadowMap = parsedShadowGenerator.useVarianceShadowMap;
	return shadowGenerator;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.parseAnimation = function(parsedAnimation) {
	var animation = new com.gamestudiohx.babylonhx.animations.Animation(parsedAnimation.name,parsedAnimation.property,parsedAnimation.framePerSecond,parsedAnimation.dataType,parsedAnimation.loopBehavior);
	var dataType = parsedAnimation.dataType;
	var keys = [];
	var _g1 = 0;
	var _g = parsedAnimation.keys.length;
	while(_g1 < _g) {
		var index = _g1++;
		var key = parsedAnimation.keys[index];
		var data = null;
		switch(dataType) {
		case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_FLOAT:
			data = key.values[0];
			break;
		case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_QUATERNION:
			data = com.gamestudiohx.babylonhx.tools.math.Quaternion.FromArray(key.values,null);
			break;
		case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_MATRIX:
			data = com.gamestudiohx.babylonhx.tools.math.Matrix.FromArray(key.values,null);
			break;
		case com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_VECTOR3:
			data = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(key.values,null);
			break;
		default:
			data = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(key.values,null);
		}
		keys.push({ frame : key.frame, value : data});
	}
	animation.setKeys(keys);
	return animation;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.parseLight = function(parsedLight,scene) {
	var light = null;
	var _g = parsedLight.type;
	switch(_g) {
	case 0:
		light = new com.gamestudiohx.babylonhx.lights.PointLight(parsedLight.name,com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedLight.position,null),scene);
		break;
	case 1:
		light = new com.gamestudiohx.babylonhx.lights.DirectionalLight(parsedLight.name,com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedLight.direction,null),scene);
		light.position = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedLight.position,null);
		break;
	case 2:
		light = new com.gamestudiohx.babylonhx.lights.SpotLight(parsedLight.name,com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedLight.position,null),com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedLight.direction,null),parsedLight.angle,parsedLight.exponent,scene);
		break;
	case 3:
		light = new com.gamestudiohx.babylonhx.lights.HemisphericLight(parsedLight.name,com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedLight.direction,null),scene);
		(js.Boot.__cast(light , com.gamestudiohx.babylonhx.lights.HemisphericLight)).groundColor = com.gamestudiohx.babylonhx.tools.math.Color3.FromArray(parsedLight.groundColor);
		break;
	}
	light.id = parsedLight.id;
	if(parsedLight.intensity != null) light.intensity = parsedLight.intensity;
	light.diffuse = com.gamestudiohx.babylonhx.tools.math.Color3.FromArray(parsedLight.diffuse);
	light.specular = com.gamestudiohx.babylonhx.tools.math.Color3.FromArray(parsedLight.specular);
	return light;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.parseCamera = function(parsedCamera,scene) {
	var camera = new com.gamestudiohx.babylonhx.cameras.FreeCamera(parsedCamera.name,com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedCamera.position,null),scene);
	camera.id = parsedCamera.id;
	if(parsedCamera.parentId != null) camera._waitingParentId = parsedCamera.parentId;
	if(parsedCamera.target != null) camera.setTarget(com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedCamera.target,null)); else camera.rotation = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedCamera.rotation,null);
	if(parsedCamera.lockedTargetId != null) camera._waitingLockedTargetId = parsedCamera.lockedTargetId;
	camera.fov = parsedCamera.fov;
	camera.minZ = parsedCamera.minZ;
	camera.maxZ = parsedCamera.maxZ;
	camera.speed = parsedCamera.speed;
	camera.inertia = parsedCamera.inertia;
	camera.checkCollisions = parsedCamera.checkCollisions;
	camera.applyGravity = parsedCamera.applyGravity;
	if(parsedCamera.ellipsoid != null) camera.ellipsoid = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedCamera.ellipsoid,null);
	if(parsedCamera.animations != null) {
		var _g1 = 0;
		var _g = parsedCamera.animations.length;
		while(_g1 < _g) {
			var animationIndex = _g1++;
			var parsedAnimation = parsedCamera.animations[animationIndex];
			camera.animations.push(com.gamestudiohx.babylonhx.tools.SceneLoader.parseAnimation(parsedAnimation));
		}
	}
	if(parsedCamera.autoAnimate != null) scene.beginAnimation(camera,parsedCamera.autoAnimateFrom,parsedCamera.autoAnimateTo,parsedCamera.autoAnimateLoop,1.0);
	return camera;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.parseMesh = function(parsedMesh,scene,rootUrl) {
	var mesh = new com.gamestudiohx.babylonhx.mesh.Mesh(parsedMesh.name,scene);
	mesh.id = parsedMesh.id;
	mesh.position = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedMesh.position,null);
	if(parsedMesh.rotation != null) mesh.rotation = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedMesh.rotation,null); else if(parsedMesh.rotationQuaternion != null) mesh.rotationQuaternion = com.gamestudiohx.babylonhx.tools.math.Quaternion.FromArray(parsedMesh.rotationQuaternion,null);
	mesh.scaling = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedMesh.scaling,null);
	if(parsedMesh.localMatrix != null) mesh.setPivotMatrix(com.gamestudiohx.babylonhx.tools.math.Matrix.FromArray(parsedMesh.localMatrix,null));
	mesh.setEnabled(parsedMesh.isEnabled);
	mesh.isVisible = parsedMesh.isVisible;
	mesh.infiniteDistance = parsedMesh.infiniteDistance;
	mesh.receiveShadows = parsedMesh.receiveShadows;
	mesh.billboardMode = parsedMesh.billboardMode;
	if(parsedMesh.visibility != null) mesh.visibility = parsedMesh.visibility;
	mesh.checkCollisions = parsedMesh.checkCollisions;
	if(parsedMesh.parentId != null && parsedMesh.parentId != "") mesh.parent = scene.getLastEntryByID(Reflect.field(parsedMesh,"parentId"));
	com.gamestudiohx.babylonhx.tools.SceneLoader._ImportGeometry(parsedMesh,mesh);
	if(parsedMesh.materialId != null) mesh.setMaterialByID(parsedMesh.materialId); else mesh.material = null;
	if(parsedMesh.skeletonId > -1) mesh.skeleton = scene.getLastSkeletonByID(parsedMesh.skeletonId);
	if(parsedMesh.animations != null) {
		var _g1 = 0;
		var _g = parsedMesh.animations.length;
		while(_g1 < _g) {
			var animationIndex = _g1++;
			var parsedAnimation = parsedMesh.animations[animationIndex];
			mesh.animations.push(com.gamestudiohx.babylonhx.tools.SceneLoader.parseAnimation(parsedAnimation));
		}
	}
	if(parsedMesh.autoAnimate != null && parsedMesh.autoAnimate != false) scene.beginAnimation(mesh,parsedMesh.autoAnimateFrom,parsedMesh.autoAnimateTo,parsedMesh.autoAnimateLoop,1.0);
	return mesh;
};
com.gamestudiohx.babylonhx.tools.SceneLoader.isDescendantOf = function(mesh,name,hierarchyIds) {
	if(mesh.name == name) {
		hierarchyIds.push(mesh.id);
		return true;
	}
	if(mesh.parentId != null && Lambda.indexOf(hierarchyIds,mesh.parentId) != -1) {
		hierarchyIds.push(mesh.id);
		return true;
	}
	return false;
};
com.gamestudiohx.babylonhx.tools.SceneLoader._ImportGeometry = function(parsedGeometry,mesh) {
	var scene = mesh.getScene();
	if(parsedGeometry.geometryId != null) {
		var geometry = scene.getGeometryByID(parsedGeometry.geometryId);
		if(geometry != null) geometry.applyToMesh(mesh);
	} else if(parsedGeometry.positions != null && parsedGeometry.normals != null && parsedGeometry.indices != null) {
		mesh.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind,parsedGeometry.positions,false);
		mesh.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind,parsedGeometry.normals,false);
		if(parsedGeometry.uvs != null) mesh.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UVKind,parsedGeometry.uvs,false);
		if(parsedGeometry.uvs2 != null) mesh.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.UV2Kind,parsedGeometry.uvs2,false);
		if(parsedGeometry.colors != null) mesh.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.ColorKind,parsedGeometry.colors,false);
		if(parsedGeometry.matricesIndices != null) {
			var floatIndices = [];
			var _g1 = 0;
			var _g = parsedGeometry.matricesIndices.length;
			while(_g1 < _g) {
				var i = _g1++;
				var matricesIndex = parsedGeometry.matricesIndices[i];
				floatIndices.push(matricesIndex & 255);
				floatIndices.push((matricesIndex & 65280) >> 8);
				floatIndices.push((matricesIndex & 16711680) >> 16);
				floatIndices.push(matricesIndex >> 24);
			}
			mesh.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind,floatIndices,false);
		}
		if(parsedGeometry.matricesWeights != null) mesh.setVerticesData(com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind,parsedGeometry.matricesWeights,false);
		mesh.setIndices(parsedGeometry.indices);
	}
	if(parsedGeometry.subMeshes != null) {
		mesh.subMeshes = [];
		var _g11 = 0;
		var _g2 = parsedGeometry.subMeshes.length;
		while(_g11 < _g2) {
			var subIndex = _g11++;
			var parsedSubMesh = parsedGeometry.subMeshes[subIndex];
			var subMesh = new com.gamestudiohx.babylonhx.mesh.SubMesh(parsedSubMesh.materialIndex,parsedSubMesh.verticesStart,parsedSubMesh.verticesCount,parsedSubMesh.indexStart,parsedSubMesh.indexCount,mesh);
		}
	}
	mesh.computeWorldMatrix(true);
	if(scene._selectionOctree != null) scene._selectionOctree.addMesh(mesh);
};
com.gamestudiohx.babylonhx.tools.SceneLoader.ImportMesh = function(meshName,rootUrl,sceneFilename,scene,then,progressCallBack) {
	com.gamestudiohx.babylonhx.tools.Tools.LoadFile(rootUrl + sceneFilename,function(data) {
		var parsedData = JSON.parse(data);
		var meshes = [];
		var particleSystems = [];
		var skeletons = [];
		var loadedSkeletonsIds = [];
		var loadedMaterialsIds = [];
		var hierarchyIds = [];
		var _meshes = parsedData.meshes;
		var _g1 = 0;
		var _g = _meshes.length;
		while(_g1 < _g) {
			var index = _g1++;
			var parsedMesh = _meshes[index];
			if(meshName == null || com.gamestudiohx.babylonhx.tools.SceneLoader.isDescendantOf(parsedMesh,meshName,hierarchyIds)) {
				if(parsedMesh.materialId != null) {
					var materialFound = Lambda.indexOf(loadedMaterialsIds,parsedMesh.materialId) != -1;
					if(!materialFound) {
						var _multiMaterials = parsedData.multiMaterials;
						var _g3 = 0;
						var _g2 = _multiMaterials.length;
						while(_g3 < _g2) {
							var multimatIndex = _g3++;
							var parsedMultiMaterial = _multiMaterials[multimatIndex];
							if(parsedMultiMaterial.id == parsedMesh.materialId) {
								var _materials = parsedMultiMaterial.materials;
								var _g5 = 0;
								var _g4 = _materials.length;
								while(_g5 < _g4) {
									var matIndex = _g5++;
									var subMatId = _materials[matIndex];
									loadedMaterialsIds.push(subMatId);
									com.gamestudiohx.babylonhx.tools.SceneLoader.parseMaterialById(subMatId,parsedData,scene,rootUrl);
								}
								loadedMaterialsIds.push(parsedMultiMaterial.id);
								com.gamestudiohx.babylonhx.tools.SceneLoader.parseMultiMaterial(parsedMultiMaterial,scene);
								materialFound = true;
								break;
							}
						}
					}
					if(!materialFound) {
						loadedMaterialsIds.push(parsedMesh.materialId);
						com.gamestudiohx.babylonhx.tools.SceneLoader.parseMaterialById(parsedMesh.materialId,parsedData,scene,rootUrl);
					}
				}
				if(parsedMesh.skeletonId > -1 && scene.skeletons != null) {
					var skeletonAlreadyLoaded = Lambda.indexOf(loadedSkeletonsIds,parsedMesh.skeletonId) > -1;
					if(!skeletonAlreadyLoaded) {
						var _skeletons = parsedData.skeletons;
						var _g31 = 0;
						var _g21 = _skeletons.length;
						while(_g31 < _g21) {
							var skeletonIndex = _g31++;
							var parsedSkeleton = _skeletons[skeletonIndex];
							if(parsedSkeleton.id == parsedMesh.skeletonId) {
								skeletons.push(com.gamestudiohx.babylonhx.tools.SceneLoader.parseSkeleton(parsedSkeleton,scene));
								loadedSkeletonsIds.push(parsedSkeleton.id);
							}
						}
					}
				}
				var mesh = com.gamestudiohx.babylonhx.tools.SceneLoader.parseMesh(parsedMesh,scene,rootUrl);
				meshes.push(mesh);
			}
		}
		if(parsedData.particleSystems != null) {
			var ps = parsedData.particleSystems;
			var _g11 = 0;
			var _g6 = ps.length;
			while(_g11 < _g6) {
				var index1 = _g11++;
				var parsedParticleSystem = ps[index1];
				if(Lambda.indexOf(hierarchyIds,parsedParticleSystem.get_emitterId()) != -1) particleSystems.push(com.gamestudiohx.babylonhx.tools.SceneLoader.parseParticleSystem(parsedParticleSystem,scene,rootUrl));
			}
		}
		if(then != null) then(meshes,particleSystems,skeletons);
	});
};
com.gamestudiohx.babylonhx.tools.SceneLoader.Load = function(rootUrl,sceneFilename,engine,then) {
	var loadSceneFromData = function(data) {
		var parsedData = JSON.parse(data);
		var scene = new com.gamestudiohx.babylonhx.Scene(engine);
		scene.useDelayedTextureLoading = parsedData.useDelayedTextureLoading;
		scene.autoClear = parsedData.autoClear;
		scene.clearColor = com.gamestudiohx.babylonhx.tools.math.Color4.FromArray(parsedData.clearColor,null);
		scene.ambientColor = com.gamestudiohx.babylonhx.tools.math.Color3.FromArray(parsedData.ambientColor);
		scene.gravity = com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray(parsedData.gravity,null);
		var fogMode = parsedData.fogMode;
		if(fogMode != null && fogMode != 0) {
			scene.fogMode = fogMode;
			scene.fogColor = com.gamestudiohx.babylonhx.tools.math.Color3.FromArray(parsedData.fogColor);
			scene.fogStart = parsedData.fogStart;
			scene.fogEnd = parsedData.fogEnd;
			scene.fogDensity = parsedData.fogDensity;
		}
		var _lights = parsedData.lights;
		var _g1 = 0;
		var _g = _lights.length;
		while(_g1 < _g) {
			var index = _g1++;
			var parsedLight = _lights[index];
			com.gamestudiohx.babylonhx.tools.SceneLoader.parseLight(parsedLight,scene);
		}
		var _cameras = parsedData.cameras;
		var _g11 = 0;
		var _g2 = _cameras.length;
		while(_g11 < _g2) {
			var index1 = _g11++;
			var parsedCamera = _cameras[index1];
			com.gamestudiohx.babylonhx.tools.SceneLoader.parseCamera(parsedCamera,scene);
		}
		if(parsedData.activeCameraID != null) scene.activeCameraByID(parsedData.activeCameraID);
		if(parsedData.materials != null) {
			var _materials = parsedData.materials;
			var _g12 = 0;
			var _g3 = _materials.length;
			while(_g12 < _g3) {
				var index2 = _g12++;
				var parsedMaterial = _materials[index2];
				com.gamestudiohx.babylonhx.tools.SceneLoader.parseMaterial(parsedMaterial,scene,rootUrl);
			}
		}
		if(parsedData.multiMaterials != null) {
			var _multiMaterials = parsedData.multiMaterials;
			var _g13 = 0;
			var _g4 = _multiMaterials.length;
			while(_g13 < _g4) {
				var index3 = _g13++;
				var parsedMultiMaterial = parsedData.multiMaterials[index3];
				com.gamestudiohx.babylonhx.tools.SceneLoader.parseMultiMaterial(parsedMultiMaterial,scene);
			}
		}
		if(parsedData.skeletons != null) {
			var _skeletons = parsedData.skeletons;
			var _g14 = 0;
			var _g5 = _skeletons.length;
			while(_g14 < _g5) {
				var index4 = _g14++;
				var parsedSkeleton = parsedData.skeletons[index4];
				com.gamestudiohx.babylonhx.tools.SceneLoader.parseSkeleton(parsedSkeleton,scene);
			}
		}
		var _meshes = parsedData.meshes;
		var _g15 = 0;
		var _g6 = _meshes.length;
		while(_g15 < _g6) {
			var index5 = _g15++;
			var parsedMesh = _meshes[index5];
			com.gamestudiohx.babylonhx.tools.SceneLoader.parseMesh(parsedMesh,scene,rootUrl);
		}
		var _g16 = 0;
		var _g7 = scene.cameras.length;
		while(_g16 < _g7) {
			var index6 = _g16++;
			var camera = scene.cameras[index6];
			if(Reflect.field(camera,"_waitingParentId") != null) {
				var _target = scene.getLastEntryByID(Reflect.field(camera,"_waitingParentId"));
				camera.parent = scene.getLastEntryByID(Reflect.field(camera,"_waitingParentId"));
				camera._waitingParentId = null;
			}
			if(Reflect.field(camera,"_waitingLockedTargetId") != null) {
				Reflect.setField(camera,"lockedTarget",scene.getLastEntryByID(Reflect.field(camera,"_waitingLockedTargetId")));
				camera._waitingLockedTargetId = null;
			}
		}
		if(parsedData.particleSystems != null) {
			var _particleSystems = parsedData.particleSystems;
			var _g17 = 0;
			var _g8 = _particleSystems.length;
			while(_g17 < _g8) {
				var index7 = _g17++;
				var parsedParticleSystem = _particleSystems[index7];
				com.gamestudiohx.babylonhx.tools.SceneLoader.parseParticleSystem(parsedParticleSystem,scene,rootUrl);
			}
		}
		if(parsedData.lensFlareSystems != null) {
			var _lensFlareSystems = parsedData.lensFlareSystems;
			var _g18 = 0;
			var _g9 = _lensFlareSystems.length;
			while(_g18 < _g9) {
				var index8 = _g18++;
				var parsedLensFlareSystem = _lensFlareSystems[index8];
				com.gamestudiohx.babylonhx.tools.SceneLoader.parseLensFlareSystem(parsedLensFlareSystem,scene,rootUrl);
			}
		}
		if(parsedData.shadowGenerators != null) {
			var _shadowGenerators = parsedData.shadowGenerators;
			var _g19 = 0;
			var _g10 = _shadowGenerators.length;
			while(_g19 < _g10) {
				var index9 = _g19++;
				var parsedShadowGenerator = _shadowGenerators[index9];
				com.gamestudiohx.babylonhx.tools.SceneLoader.parseShadowGenerator(parsedShadowGenerator,scene);
			}
		}
		if(then != null) then(scene);
	};
	com.gamestudiohx.babylonhx.tools.Tools.LoadFile(rootUrl + sceneFilename,loadSceneFromData);
};
com.gamestudiohx.babylonhx.tools.SmartArray = function() {
	this.data = [];
	this.length = 0;
};
$hxClasses["com.gamestudiohx.babylonhx.tools.SmartArray"] = com.gamestudiohx.babylonhx.tools.SmartArray;
com.gamestudiohx.babylonhx.tools.SmartArray.__name__ = ["com","gamestudiohx","babylonhx","tools","SmartArray"];
com.gamestudiohx.babylonhx.tools.SmartArray.prototype = {
	push: function(value) {
		this.data[this.length++] = value;
	}
	,pushNoDuplicate: function(value) {
		if(Lambda.indexOf(this.data,value) == -1) this.push(value);
	}
	,sort: function(compareFn) {
		this.data.sort(compareFn);
	}
	,reset: function() {
		this.length = 0;
	}
	,concat: function(array) {
		if((array instanceof Array) && array.__enum__ == null && array.length != 0) {
			var _g1 = 0;
			var _g = array.length;
			while(_g1 < _g) {
				var index = _g1++;
				if((array instanceof Array) && array.__enum__ == null) this.data[this.length++] = array[index]; else this.data[this.length++] = array.data[index];
			}
		}
	}
	,concatWithNoDuplicate: function(array) {
		if((array instanceof Array) && array.__enum__ == null && array.length == 0) return;
		var _g1 = 0;
		var _g = array.length;
		while(_g1 < _g) {
			var index = _g1++;
			var item;
			if((array instanceof Array) && array.__enum__ == null) item = array[index]; else item = array.data[index];
			var pos = Lambda.indexOf(this.data,item);
			if(pos == -1 || pos >= this.length) this.data[this.length++] = item;
		}
	}
	,indexOf: function(value) {
		var position = Lambda.indexOf(this.data,value);
		if(position >= this.length) return -1;
		return position;
	}
	,__class__: com.gamestudiohx.babylonhx.tools.SmartArray
};
com.gamestudiohx.babylonhx.tools.IAnimatable = function() { };
$hxClasses["com.gamestudiohx.babylonhx.tools.IAnimatable"] = com.gamestudiohx.babylonhx.tools.IAnimatable;
com.gamestudiohx.babylonhx.tools.IAnimatable.__name__ = ["com","gamestudiohx","babylonhx","tools","IAnimatable"];
com.gamestudiohx.babylonhx.tools.IAnimatable.prototype = {
	__class__: com.gamestudiohx.babylonhx.tools.IAnimatable
};
com.gamestudiohx.babylonhx.tools.Space = $hxClasses["com.gamestudiohx.babylonhx.tools.Space"] = { __ename__ : true, __constructs__ : ["LOCAL","WORLD"] };
com.gamestudiohx.babylonhx.tools.Space.LOCAL = ["LOCAL",0];
com.gamestudiohx.babylonhx.tools.Space.LOCAL.toString = $estr;
com.gamestudiohx.babylonhx.tools.Space.LOCAL.__enum__ = com.gamestudiohx.babylonhx.tools.Space;
com.gamestudiohx.babylonhx.tools.Space.WORLD = ["WORLD",1];
com.gamestudiohx.babylonhx.tools.Space.WORLD.toString = $estr;
com.gamestudiohx.babylonhx.tools.Space.WORLD.__enum__ = com.gamestudiohx.babylonhx.tools.Space;
com.gamestudiohx.babylonhx.tools.math = {};
com.gamestudiohx.babylonhx.tools.math.Vector3 = function(initialX,initialY,initialZ) {
	this.x = initialX;
	this.y = initialY;
	this.z = initialZ;
};
$hxClasses["com.gamestudiohx.babylonhx.tools.math.Vector3"] = com.gamestudiohx.babylonhx.tools.math.Vector3;
com.gamestudiohx.babylonhx.tools.math.Vector3.__name__ = ["com","gamestudiohx","babylonhx","tools","math","Vector3"];
com.gamestudiohx.babylonhx.tools.math.Vector3.Center = function(value1,value2) {
	var center = new com.gamestudiohx.babylonhx.tools.math.Vector3(value1.x + value2.x,value1.y + value2.y,value1.z + value2.z);
	center.x *= 0.5;
	center.y *= 0.5;
	center.z *= 0.5;
	return center;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.FromArray = function(array,offset) {
	if(offset == null) offset = 0;
	return new com.gamestudiohx.babylonhx.tools.math.Vector3(array[offset],array[offset + 1],array[offset + 2]);
};
com.gamestudiohx.babylonhx.tools.math.Vector3.FromArrayToRef = function(array,offset,result) {
	if(offset == null) offset = 0;
	result.x = array[offset];
	result.y = array[offset + 1];
	result.z = array[offset + 2];
};
com.gamestudiohx.babylonhx.tools.math.Vector3.FromFloatsToRef = function(x,y,z,result) {
	result.x = x;
	result.y = y;
	result.z = z;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Zero = function() {
	return new com.gamestudiohx.babylonhx.tools.math.Vector3(0.0,0.0,0.0);
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Up = function() {
	return new com.gamestudiohx.babylonhx.tools.math.Vector3(0,1.0,0);
};
com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates = function(vector,transformation) {
	var result = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesToRef(vector,transformation,result);
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesToRef = function(vector,transformation,result) {
	var x = vector.x * transformation.m[0] + vector.y * transformation.m[4] + vector.z * transformation.m[8] + transformation.m[12];
	var y = vector.x * transformation.m[1] + vector.y * transformation.m[5] + vector.z * transformation.m[9] + transformation.m[13];
	var z = vector.x * transformation.m[2] + vector.y * transformation.m[6] + vector.z * transformation.m[10] + transformation.m[14];
	var w = vector.x * transformation.m[3] + vector.y * transformation.m[7] + vector.z * transformation.m[11] + transformation.m[15];
	result.x = x / w;
	result.y = y / w;
	result.z = z / w;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinatesFromFloatsToRef = function(x,y,z,transformation,result) {
	var rx = x * transformation.m[0] + y * transformation.m[4] + z * transformation.m[8] + transformation.m[12];
	var ry = x * transformation.m[1] + y * transformation.m[5] + z * transformation.m[9] + transformation.m[13];
	var rz = x * transformation.m[2] + y * transformation.m[6] + z * transformation.m[10] + transformation.m[14];
	var rw = x * transformation.m[3] + y * transformation.m[7] + z * transformation.m[11] + transformation.m[15];
	result.x = rx / rw;
	result.y = ry / rw;
	result.z = rz / rw;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormal = function(vector,transformation) {
	var result = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	result.x = vector.x * transformation.m[0] + vector.y * transformation.m[4] + vector.z * transformation.m[8];
	result.y = vector.x * transformation.m[1] + vector.y * transformation.m[5] + vector.z * transformation.m[9];
	result.z = vector.x * transformation.m[2] + vector.y * transformation.m[6] + vector.z * transformation.m[10];
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormalToRef = function(vector,transformation,result) {
	result.x = vector.x * transformation.m[0] + vector.y * transformation.m[4] + vector.z * transformation.m[8];
	result.y = vector.x * transformation.m[1] + vector.y * transformation.m[5] + vector.z * transformation.m[9];
	result.z = vector.x * transformation.m[2] + vector.y * transformation.m[6] + vector.z * transformation.m[10];
};
com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormalFromFloatsToRef = function(x,y,z,transformation,result) {
	result.x = x * transformation.m[0] + y * transformation.m[4] + z * transformation.m[8];
	result.y = x * transformation.m[1] + y * transformation.m[5] + z * transformation.m[9];
	result.z = x * transformation.m[2] + y * transformation.m[6] + z * transformation.m[10];
};
com.gamestudiohx.babylonhx.tools.math.Vector3.CatmullRom = function(value1,value2,value3,value4,amount) {
	var squared = amount * amount;
	var cubed = amount * squared;
	var x = 0.5 * (2.0 * value2.x + (-value1.x + value3.x) * amount + (2.0 * value1.x - 5.0 * value2.x + 4.0 * value3.x - value4.x) * squared + (-value1.x + 3.0 * value2.x - 3.0 * value3.x + value4.x) * cubed);
	var y = 0.5 * (2.0 * value2.y + (-value1.y + value3.y) * amount + (2.0 * value1.y - 5.0 * value2.y + 4.0 * value3.y - value4.y) * squared + (-value1.y + 3.0 * value2.y - 3.0 * value3.y + value4.y) * cubed);
	var z = 0.5 * (2.0 * value2.z + (-value1.z + value3.z) * amount + (2.0 * value1.z - 5.0 * value2.z + 4.0 * value3.z - value4.z) * squared + (-value1.z + 3.0 * value2.z - 3.0 * value3.z + value4.z) * cubed);
	return new com.gamestudiohx.babylonhx.tools.math.Vector3(x,y,z);
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Clamp = function(value,min,max) {
	var x = value.x;
	if(x > max.x) x = max.x; else x = x;
	if(x < min.x) x = min.x; else x = x;
	var y = value.y;
	if(y > max.y) y = max.y; else y = y;
	if(y < min.y) y = min.y; else y = y;
	var z = value.z;
	if(z > max.z) z = max.z; else z = z;
	if(z < min.z) z = min.z; else z = z;
	return new com.gamestudiohx.babylonhx.tools.math.Vector3(x,y,z);
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Hermite = function(value1,tangent1,value2,tangent2,amount) {
	var squared = amount * amount;
	var cubed = amount * squared;
	var part1 = 2.0 * cubed - 3.0 * squared + 1.0;
	var part2 = -2. * cubed + 3.0 * squared;
	var part3 = cubed - 2.0 * squared + amount;
	var part4 = cubed - squared;
	var x = value1.x * part1 + value2.x * part2 + tangent1.x * part3 + tangent2.x * part4;
	var y = value1.y * part1 + value2.y * part2 + tangent1.y * part3 + tangent2.y * part4;
	var z = value1.z * part1 + value2.z * part2 + tangent1.z * part3 + tangent2.z * part4;
	return new com.gamestudiohx.babylonhx.tools.math.Vector3(x,y,z);
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Lerp = function(start,end,amount) {
	var x = start.x + (end.x - start.x) * amount;
	var y = start.y + (end.y - start.y) * amount;
	var z = start.z + (end.z - start.z) * amount;
	return new com.gamestudiohx.babylonhx.tools.math.Vector3(x,y,z);
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Dot = function(left,right) {
	return left.x * right.x + left.y * right.y + left.z * right.z;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Cross = function(left,right) {
	var result = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	result.x = left.y * right.z - left.z * right.y;
	result.y = left.z * right.x - left.x * right.z;
	result.z = left.x * right.y - left.y * right.x;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.CrossToRef = function(left,right,result) {
	result.x = left.y * right.z - left.z * right.y;
	result.y = left.z * right.x - left.x * right.z;
	result.z = left.x * right.y - left.y * right.x;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Normalize = function(vector) {
	var result = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	result.x = vector.x;
	result.y = vector.y;
	result.z = vector.z;
	result.normalize();
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.NormalizeToRef = function(vector,result) {
	result.x = vector.x;
	result.y = vector.y;
	result.z = vector.z;
	result.normalize();
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Project = function(vector,world,transform,viewport) {
	var cw = viewport.width;
	var ch = viewport.height;
	var cx = viewport.x;
	var cy = viewport.y;
	var viewportMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(cw / 2.0,0,0,0,0,-ch / 2.0,0,0,0,0,1,0,cx + cw / 2.0,ch / 2.0 + cy,0,1);
	var finalMatrix = world.multiply(transform).multiply(viewportMatrix);
	return com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(vector,finalMatrix);
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Unproject = function(source,viewportWidth,viewportHeight,world,view,projection) {
	var matrix = world.multiply(view).multiply(projection);
	matrix.invertToRef(matrix);
	source.x = source.x / viewportWidth * 2 - 1;
	source.y = -(source.y / viewportHeight * 2 - 1);
	var vector = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(source,matrix);
	var num = source.x * matrix.m[3] + source.y * matrix.m[7] + source.z * matrix.m[11] + matrix.m[15];
	if(com.gamestudiohx.babylonhx.tools.Tools.WithinEpsilon(num,1.0)) vector = vector.scale(1.0 / num);
	return vector;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Minimize = function(left,right) {
	var x;
	if(left.x < right.x) x = left.x; else x = right.x;
	var y;
	if(left.y < right.y) y = left.y; else y = right.y;
	var z;
	if(left.z < right.z) z = left.z; else z = right.z;
	return new com.gamestudiohx.babylonhx.tools.math.Vector3(x,y,z);
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Maximize = function(left,right) {
	var x;
	if(left.x > right.x) x = left.x; else x = right.x;
	var y;
	if(left.y > right.y) y = left.y; else y = right.y;
	var z;
	if(left.z > right.z) z = left.z; else z = right.z;
	return new com.gamestudiohx.babylonhx.tools.math.Vector3(x,y,z);
};
com.gamestudiohx.babylonhx.tools.math.Vector3.Distance = function(value1,value2) {
	return Math.sqrt(com.gamestudiohx.babylonhx.tools.math.Vector3.DistanceSquared(value1,value2));
};
com.gamestudiohx.babylonhx.tools.math.Vector3.DistanceSquared = function(value1,value2) {
	var x = value1.x - value2.x;
	var y = value1.y - value2.y;
	var z = value1.z - value2.z;
	return x * x + y * y + z * z;
};
com.gamestudiohx.babylonhx.tools.math.Vector3.prototype = {
	toString: function() {
		return "{X:" + this.x + " Y:" + this.y + " Z:" + this.z + "}";
	}
	,asArray: function() {
		var result = [];
		result[0] = this.x;
		result[1] = this.y;
		result[2] = this.z;
		result;
		return result;
	}
	,toArray: function(array,index) {
		if(index == null) index = 0;
		array[index] = this.x;
		array[index + 1] = this.y;
		array[index + 2] = this.z;
		return array;
	}
	,MinimizeInPlace: function(other) {
		if(other.x < this.x) this.x = other.x;
		if(other.y < this.y) this.y = other.y;
		if(other.z < this.z) this.z = other.z;
	}
	,MaximizeInPlace: function(other) {
		if(other.x > this.x) this.x = other.x;
		if(other.y > this.y) this.y = other.y;
		if(other.z > this.z) this.z = other.z;
	}
	,addInPlace: function(otherVector) {
		this.x += otherVector.x;
		this.y += otherVector.y;
		this.z += otherVector.z;
	}
	,add: function(otherVector) {
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(this.x + otherVector.x,this.y + otherVector.y,this.z + otherVector.z);
	}
	,addToRef: function(otherVector,result) {
		result.x = this.x + otherVector.x;
		result.y = this.y + otherVector.y;
		result.z = this.z + otherVector.z;
		return result;
	}
	,subtractInPlace: function(otherVector) {
		this.x -= otherVector.x;
		this.y -= otherVector.y;
		this.z -= otherVector.z;
	}
	,subtract: function(otherVector) {
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(this.x - otherVector.x,this.y - otherVector.y,this.z - otherVector.z);
	}
	,subtractToRef: function(otherVector,result) {
		result.x = this.x - otherVector.x;
		result.y = this.y - otherVector.y;
		result.z = this.z - otherVector.z;
	}
	,subtractFromFloats: function(x,y,z) {
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(this.x - x,this.y - y,this.z - z);
	}
	,subtractFromFloatsToRef: function(x,y,z,result) {
		result.x = this.x - x;
		result.y = this.y - y;
		result.z = this.z - z;
	}
	,negate: function() {
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(-this.x,-this.y,-this.z);
	}
	,scaleInPlace: function(scale) {
		this.x *= scale;
		this.y *= scale;
		this.z *= scale;
	}
	,scale: function(scale) {
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(this.x * scale,this.y * scale,this.z * scale);
	}
	,scaleToRef: function(scale,result) {
		result.x = this.x * scale;
		result.y = this.y * scale;
		result.z = this.z * scale;
	}
	,equals: function(otherVector) {
		return this.x == otherVector.x && this.y == otherVector.y && this.z == otherVector.z;
	}
	,equalsToFloats: function(x,y,z) {
		return this.x == x && this.y == y && this.z == z;
	}
	,multiplyInPlace: function(otherVector) {
		this.x *= otherVector.x;
		this.y *= otherVector.y;
		this.z *= otherVector.z;
	}
	,multiply: function(otherVector) {
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(this.x * otherVector.x,this.y * otherVector.y,this.z * otherVector.z);
	}
	,multiplyToRef: function(otherVector,result) {
		result.x = this.x * otherVector.x;
		result.y = this.y * otherVector.y;
		result.z = this.z * otherVector.z;
	}
	,multiplyByFloats: function(x,y,z) {
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(this.x * x,this.y * y,this.z * z);
	}
	,divide: function(otherVector) {
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(this.x / otherVector.x,this.y / otherVector.y,this.z / otherVector.z);
	}
	,divideToRef: function(otherVector,result) {
		result.x = this.x / otherVector.x;
		result.y = this.y / otherVector.y;
		result.z = this.z / otherVector.z;
	}
	,length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y + this.z * this.z);
	}
	,lengthSquared: function() {
		return this.x * this.x + this.y * this.y + this.z * this.z;
	}
	,normalize: function() {
		var len = Math.sqrt(this.x * this.x + this.y * this.y + this.z * this.z);
		if(len != 0) {
			var num = 1.0 / len;
			this.x *= num;
			this.y *= num;
			this.z *= num;
		}
	}
	,clone: function() {
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(this.x,this.y,this.z);
	}
	,copyFrom: function(source) {
		this.x = source.x;
		this.y = source.y;
		this.z = source.z;
	}
	,copyFromFloats: function(x,y,z) {
		this.x = x;
		this.y = y;
		this.z = z;
	}
	,__class__: com.gamestudiohx.babylonhx.tools.math.Vector3
};
com.gamestudiohx.babylonhx.tools.Axis = function() { };
$hxClasses["com.gamestudiohx.babylonhx.tools.Axis"] = com.gamestudiohx.babylonhx.tools.Axis;
com.gamestudiohx.babylonhx.tools.Axis.__name__ = ["com","gamestudiohx","babylonhx","tools","Axis"];
com.gamestudiohx.babylonhx.tools.Tools = function() { };
$hxClasses["com.gamestudiohx.babylonhx.tools.Tools"] = com.gamestudiohx.babylonhx.tools.Tools;
com.gamestudiohx.babylonhx.tools.Tools.__name__ = ["com","gamestudiohx","babylonhx","tools","Tools"];
com.gamestudiohx.babylonhx.tools.Tools.timer = null;
com.gamestudiohx.babylonhx.tools.Tools.ExtractMinAndMax = function(positions,start,count) {
	var minimum = new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY,Math.POSITIVE_INFINITY);
	var maximum = new com.gamestudiohx.babylonhx.tools.math.Vector3(Math.NEGATIVE_INFINITY,Math.NEGATIVE_INFINITY,Math.NEGATIVE_INFINITY);
	var _g1 = start;
	var _g = start + count;
	while(_g1 < _g) {
		var index = _g1++;
		var current = new com.gamestudiohx.babylonhx.tools.math.Vector3(positions[index * 3],positions[index * 3 + 1],positions[index * 3 + 2]);
		minimum = com.gamestudiohx.babylonhx.tools.math.Vector3.Minimize(current,minimum);
		maximum = com.gamestudiohx.babylonhx.tools.math.Vector3.Maximize(current,maximum);
	}
	return { minimum : minimum, maximum : maximum};
};
com.gamestudiohx.babylonhx.tools.Tools.randomNumber = function(min,max) {
	var ret = min;
	if(min == max) ret = min; else {
		var random = Math.random();
		ret = random * (max - min) + min;
	}
	return ret;
};
com.gamestudiohx.babylonhx.tools.Tools.WithinEpsilon = function(a,b) {
	var num = a - b;
	return -1.401298e-45 <= num && num <= 1.401298E-45;
};
com.gamestudiohx.babylonhx.tools.Tools.LoadFile = function(url,callbackFn,progressCallBack,database,useArrayBuffer) {
	if(useArrayBuffer == null) useArrayBuffer = false;
	if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) haxe.Log.trace("LoadFile URL - " + url,{ fileName : "Tools.hx", lineNumber : 84, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "LoadFile"});
	var loader = new openfl.net.URLLoader();
	loader.addEventListener(openfl.events.Event.COMPLETE,function(data) {
		callbackFn(loader.data);
	});
	loader.load(new openfl.net.URLRequest(url));
};
com.gamestudiohx.babylonhx.tools.Tools.LoadImage = function(url,onload) {
	if(url != null) {
		if(openfl.Assets.exists(url)) {
			var img = openfl.Assets.getBitmapData(url);
			onload(img);
		} else haxe.Log.trace("Error: Image '" + url + "' doesn't exist !",{ fileName : "Tools.hx", lineNumber : 147, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "LoadImage"});
	}
};
com.gamestudiohx.babylonhx.tools.Tools.DeepCopy = function(source,destination,doNotCopyList,mustCopyList) {
	var i = 0;
	var _g = 0;
	var _g1 = Reflect.fields(source);
	while(_g < _g1.length) {
		var prop = _g1[_g];
		++_g;
		i++;
		if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) {
			haxe.Log.trace("DeepCopy - PROP = " + Std.string(Type["typeof"](prop)),{ fileName : "Tools.hx", lineNumber : 158, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
			haxe.Log.trace("DeepCopy - int " + i,{ fileName : "Tools.hx", lineNumber : 159, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
		}
		if(prop.charAt(0) == "_" && (mustCopyList == null || Lambda.indexOf(mustCopyList,prop) == -1)) continue;
		if(doNotCopyList != null && Lambda.indexOf(doNotCopyList,prop) != -1) continue;
		if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) {
			haxe.Log.trace("=== DeepCopy hitCount " + i,{ fileName : "Tools.hx", lineNumber : 169, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
			haxe.Log.trace("=== DeepCopy hitCount " + prop,{ fileName : "Tools.hx", lineNumber : 170, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
		}
		var sourceValue = Reflect.field(source,prop);
		if(Reflect.isFunction(sourceValue)) {
			if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) {
				haxe.Log.trace("=== DeepCopy - sourcevalue and prop  " + sourceValue + "  " + prop,{ fileName : "Tools.hx", lineNumber : 181, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
				haxe.Log.trace("=== DeepCopy - int " + i,{ fileName : "Tools.hx", lineNumber : 182, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
			}
			continue;
		}
		if(com.gamestudiohx.babylonhx.tools.Tools.isDebug) {
			haxe.Log.trace("DeepCopy - sourcevalue and prop " + sourceValue + "  " + prop,{ fileName : "Tools.hx", lineNumber : 187, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
			haxe.Log.trace("DeepCopy  " + i,{ fileName : "Tools.hx", lineNumber : 188, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
			haxe.Log.trace("DeepCopy type " + Std.string(Type["typeof"](sourceValue)),{ fileName : "Tools.hx", lineNumber : 189, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
			haxe.Log.trace("DeepCopy -" + sourceValue + ">>>>>PROP>>>> " + prop,{ fileName : "Tools.hx", lineNumber : 190, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
			haxe.Log.trace("________________",{ fileName : "Tools.hx", lineNumber : 191, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
		}
		try {
			destination[prop] = sourceValue;
		} catch( e ) {
			if( js.Boot.__instanceof(e,String) ) {
				haxe.Log.trace("Error: " + e,{ fileName : "Tools.hx", lineNumber : 197, className : "com.gamestudiohx.babylonhx.tools.Tools", methodName : "DeepCopy"});
			} else throw(e);
		}
	}
};
com.gamestudiohx.babylonhx.tools.Tools.GetFps = function() {
	return com.gamestudiohx.babylonhx.tools.Tools.fps;
};
com.gamestudiohx.babylonhx.tools.Tools.GetDeltaTime = function() {
	return com.gamestudiohx.babylonhx.tools.Tools.deltaTime;
};
com.gamestudiohx.babylonhx.tools.Tools._MeasureFps = function() {
	com.gamestudiohx.babylonhx.tools.Tools.previousFramesDuration.push(openfl.Lib.getTimer());
	var length = com.gamestudiohx.babylonhx.tools.Tools.previousFramesDuration.length;
	if(length >= 2) com.gamestudiohx.babylonhx.tools.Tools.deltaTime = com.gamestudiohx.babylonhx.tools.Tools.previousFramesDuration[length - 1] - com.gamestudiohx.babylonhx.tools.Tools.previousFramesDuration[length - 2];
	if(length >= com.gamestudiohx.babylonhx.tools.Tools.fpsRange) {
		if(length > com.gamestudiohx.babylonhx.tools.Tools.fpsRange) {
			com.gamestudiohx.babylonhx.tools.Tools.previousFramesDuration.splice(0,1);
			length = com.gamestudiohx.babylonhx.tools.Tools.previousFramesDuration.length;
		}
		var sum = 0;
		var _g1 = 0;
		var _g = length - 1;
		while(_g1 < _g) {
			var id = _g1++;
			sum += com.gamestudiohx.babylonhx.tools.Tools.previousFramesDuration[id + 1] - com.gamestudiohx.babylonhx.tools.Tools.previousFramesDuration[id];
		}
		com.gamestudiohx.babylonhx.tools.Tools.fps = 1000.0 / (sum / (length - 1));
	}
};
com.gamestudiohx.babylonhx.tools.math.Color3 = function(initialR,initialG,initialB) {
	if(initialB == null) initialB = 0;
	if(initialG == null) initialG = 0;
	if(initialR == null) initialR = 0;
	this.r = initialR;
	this.g = initialG;
	this.b = initialB;
};
$hxClasses["com.gamestudiohx.babylonhx.tools.math.Color3"] = com.gamestudiohx.babylonhx.tools.math.Color3;
com.gamestudiohx.babylonhx.tools.math.Color3.__name__ = ["com","gamestudiohx","babylonhx","tools","math","Color3"];
com.gamestudiohx.babylonhx.tools.math.Color3.FromArray = function(array) {
	return new com.gamestudiohx.babylonhx.tools.math.Color3(array[0],array[1],array[2]);
};
com.gamestudiohx.babylonhx.tools.math.Color3.prototype = {
	equals: function(otherColor) {
		return this.r == otherColor.r && this.g == otherColor.g && this.b == otherColor.b;
	}
	,toString: function() {
		return "{R: " + this.r + " G:" + this.g + " B:" + this.b + "}";
	}
	,clone: function() {
		return new com.gamestudiohx.babylonhx.tools.math.Color3(this.r,this.g,this.b);
	}
	,asArray: function() {
		var result = [];
		result[0] = this.r;
		result[1] = this.g;
		result[2] = this.b;
		return result;
	}
	,toArray: function(array,index) {
		if(index == null) index = 0;
		array[index] = this.r;
		array[index + 1] = this.g;
		array[index + 2] = this.b;
	}
	,multiply: function(otherColor) {
		return new com.gamestudiohx.babylonhx.tools.math.Color3(this.r * otherColor.r,this.g * otherColor.g,this.b * otherColor.b);
	}
	,multiplyToRef: function(otherColor,result) {
		result.r = this.r * otherColor.r;
		result.g = this.g * otherColor.g;
		result.b = this.b * otherColor.b;
	}
	,scale: function(scale) {
		return new com.gamestudiohx.babylonhx.tools.math.Color3(this.r * scale,this.g * scale,this.b * scale);
	}
	,scaleToRef: function(scale,result) {
		result.r = this.r * scale;
		result.g = this.g * scale;
		result.b = this.b * scale;
	}
	,copyFrom: function(source) {
		this.r = source.r;
		this.g = source.g;
		this.b = source.b;
	}
	,copyFromFloats: function(r,g,b) {
		this.r = r;
		this.g = g;
		this.b = b;
	}
	,__class__: com.gamestudiohx.babylonhx.tools.math.Color3
};
com.gamestudiohx.babylonhx.tools.math.Color4 = function(initialR,initialG,initialB,initialA) {
	if(initialA == null) initialA = 1.0;
	this.r = initialR;
	this.g = initialG;
	this.b = initialB;
	this.a = initialA;
};
$hxClasses["com.gamestudiohx.babylonhx.tools.math.Color4"] = com.gamestudiohx.babylonhx.tools.math.Color4;
com.gamestudiohx.babylonhx.tools.math.Color4.__name__ = ["com","gamestudiohx","babylonhx","tools","math","Color4"];
com.gamestudiohx.babylonhx.tools.math.Color4.Lerp = function(left,right,amount) {
	var result = new com.gamestudiohx.babylonhx.tools.math.Color4(0,0,0,0);
	result.r = left.r + (right.r - left.r) * amount;
	result.g = left.g + (right.g - left.g) * amount;
	result.b = left.b + (right.b - left.b) * amount;
	result.a = left.a + (right.a - left.a) * amount;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Color4.LerpToRef = function(left,right,amount,result) {
	result.r = left.r + (right.r - left.r) * amount;
	result.g = left.g + (right.g - left.g) * amount;
	result.b = left.b + (right.b - left.b) * amount;
	result.a = left.a + (right.a - left.a) * amount;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Color4.FromArray = function(array,offset) {
	if(offset == null) offset = 0;
	return new com.gamestudiohx.babylonhx.tools.math.Color4(array[offset],array[offset + 1],array[offset + 2],array[offset + 3]);
};
com.gamestudiohx.babylonhx.tools.math.Color4.prototype = {
	addInPlace: function(right) {
		this.r += right.r;
		this.g += right.g;
		this.b += right.b;
		this.a += right.a;
	}
	,asArray: function() {
		var result = [];
		result[0] = this.r;
		result[1] = this.g;
		result[2] = this.b;
		result[3] = this.a;
		return result;
	}
	,toArray: function(array,index) {
		if(index == null) index = 0;
		array[index] = this.r;
		array[index + 1] = this.g;
		array[index + 2] = this.b;
		array[index + 3] = this.a;
	}
	,add: function(right) {
		return new com.gamestudiohx.babylonhx.tools.math.Color4(this.r + right.r,this.g + right.g,this.b + right.b,this.a + right.a);
	}
	,subtract: function(right) {
		return new com.gamestudiohx.babylonhx.tools.math.Color4(this.r - right.r,this.g - right.g,this.b - right.b,this.a - right.a);
	}
	,subtractToRef: function(right,result) {
		result.r = this.r - right.r;
		result.g = this.g - right.g;
		result.b = this.b - right.b;
		result.a = this.a - right.a;
		return result;
	}
	,scale: function(scale) {
		return new com.gamestudiohx.babylonhx.tools.math.Color4(this.r * scale,this.g * scale,this.b * scale,this.a * scale);
	}
	,scaleToRef: function(scale,result) {
		result.r = this.r * scale;
		result.g = this.g * scale;
		result.b = this.b * scale;
		result.a = this.a * scale;
		return result;
	}
	,toString: function() {
		return "{R: " + this.r + " G:" + this.g + " B:" + this.b + " A:" + this.a + "}";
	}
	,clone: function() {
		return new com.gamestudiohx.babylonhx.tools.math.Color4(this.r,this.g,this.b,this.a);
	}
	,__class__: com.gamestudiohx.babylonhx.tools.math.Color4
};
com.gamestudiohx.babylonhx.tools.math.Frustum = function() { };
$hxClasses["com.gamestudiohx.babylonhx.tools.math.Frustum"] = com.gamestudiohx.babylonhx.tools.math.Frustum;
com.gamestudiohx.babylonhx.tools.math.Frustum.__name__ = ["com","gamestudiohx","babylonhx","tools","math","Frustum"];
com.gamestudiohx.babylonhx.tools.math.Frustum.GetPlanes = function(transform) {
	var frustumPlanes = [];
	var _g = 0;
	while(_g < 6) {
		var index = _g++;
		frustumPlanes.push(new com.gamestudiohx.babylonhx.tools.math.Plane(0,0,0,0));
	}
	frustumPlanes[0].normal.x = transform.m[3] + transform.m[2];
	frustumPlanes[0].normal.y = transform.m[7] + transform.m[6];
	frustumPlanes[0].normal.z = transform.m[10] + transform.m[10];
	frustumPlanes[0].d = transform.m[15] + transform.m[14];
	frustumPlanes[0].normalize();
	frustumPlanes[1].normal.x = transform.m[3] - transform.m[2];
	frustumPlanes[1].normal.y = transform.m[7] - transform.m[6];
	frustumPlanes[1].normal.z = transform.m[11] - transform.m[10];
	frustumPlanes[1].d = transform.m[15] - transform.m[14];
	frustumPlanes[1].normalize();
	frustumPlanes[2].normal.x = transform.m[3] + transform.m[0];
	frustumPlanes[2].normal.y = transform.m[7] + transform.m[4];
	frustumPlanes[2].normal.z = transform.m[11] + transform.m[8];
	frustumPlanes[2].d = transform.m[15] + transform.m[12];
	frustumPlanes[2].normalize();
	frustumPlanes[3].normal.x = transform.m[3] - transform.m[0];
	frustumPlanes[3].normal.y = transform.m[7] - transform.m[4];
	frustumPlanes[3].normal.z = transform.m[11] - transform.m[8];
	frustumPlanes[3].d = transform.m[15] - transform.m[12];
	frustumPlanes[3].normalize();
	frustumPlanes[4].normal.x = transform.m[3] - transform.m[1];
	frustumPlanes[4].normal.y = transform.m[7] - transform.m[5];
	frustumPlanes[4].normal.z = transform.m[11] - transform.m[9];
	frustumPlanes[4].d = transform.m[15] - transform.m[13];
	frustumPlanes[4].normalize();
	frustumPlanes[5].normal.x = transform.m[3] + transform.m[1];
	frustumPlanes[5].normal.y = transform.m[7] + transform.m[5];
	frustumPlanes[5].normal.z = transform.m[11] + transform.m[9];
	frustumPlanes[5].d = transform.m[15] + transform.m[13];
	frustumPlanes[5].normalize();
	frustumPlanes;
	return frustumPlanes;
};
com.gamestudiohx.babylonhx.tools.math.Frustum.GetPlanesToRef = function(transform,frustumPlanes) {
	frustumPlanes[0].normal.x = transform.m[3] + transform.m[2];
	frustumPlanes[0].normal.y = transform.m[7] + transform.m[6];
	frustumPlanes[0].normal.z = transform.m[10] + transform.m[10];
	frustumPlanes[0].d = transform.m[15] + transform.m[14];
	frustumPlanes[0].normalize();
	frustumPlanes[1].normal.x = transform.m[3] - transform.m[2];
	frustumPlanes[1].normal.y = transform.m[7] - transform.m[6];
	frustumPlanes[1].normal.z = transform.m[11] - transform.m[10];
	frustumPlanes[1].d = transform.m[15] - transform.m[14];
	frustumPlanes[1].normalize();
	frustumPlanes[2].normal.x = transform.m[3] + transform.m[0];
	frustumPlanes[2].normal.y = transform.m[7] + transform.m[4];
	frustumPlanes[2].normal.z = transform.m[11] + transform.m[8];
	frustumPlanes[2].d = transform.m[15] + transform.m[12];
	frustumPlanes[2].normalize();
	frustumPlanes[3].normal.x = transform.m[3] - transform.m[0];
	frustumPlanes[3].normal.y = transform.m[7] - transform.m[4];
	frustumPlanes[3].normal.z = transform.m[11] - transform.m[8];
	frustumPlanes[3].d = transform.m[15] - transform.m[12];
	frustumPlanes[3].normalize();
	frustumPlanes[4].normal.x = transform.m[3] - transform.m[1];
	frustumPlanes[4].normal.y = transform.m[7] - transform.m[5];
	frustumPlanes[4].normal.z = transform.m[11] - transform.m[9];
	frustumPlanes[4].d = transform.m[15] - transform.m[13];
	frustumPlanes[4].normalize();
	frustumPlanes[5].normal.x = transform.m[3] + transform.m[1];
	frustumPlanes[5].normal.y = transform.m[7] + transform.m[5];
	frustumPlanes[5].normal.z = transform.m[11] + transform.m[9];
	frustumPlanes[5].d = transform.m[15] + transform.m[13];
	frustumPlanes[5].normalize();
	return frustumPlanes;
};
com.gamestudiohx.babylonhx.tools.math.Matrix = function() {
	this.m = new Float32Array(16);
};
$hxClasses["com.gamestudiohx.babylonhx.tools.math.Matrix"] = com.gamestudiohx.babylonhx.tools.math.Matrix;
com.gamestudiohx.babylonhx.tools.math.Matrix.__name__ = ["com","gamestudiohx","babylonhx","tools","math","Matrix"];
com.gamestudiohx.babylonhx.tools.math.Matrix.FromArray = function(array,offset) {
	if(offset == null) offset = 0;
	var result = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	com.gamestudiohx.babylonhx.tools.math.Matrix.FromArrayToRef(array,offset,result);
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.FromArrayToRef = function(array,offset,result) {
	if(offset == null) offset = 0;
	var _g = 0;
	while(_g < 16) {
		var index = _g++;
		result.m[index] = array[index + offset];
	}
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues = function(m11,m12,m13,m14,m21,m22,m23,m24,m31,m32,m33,m34,m41,m42,m43,m44) {
	var result = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	result.m[0] = m11;
	result.m[1] = m12;
	result.m[2] = m13;
	result.m[3] = m14;
	result.m[4] = m21;
	result.m[5] = m22;
	result.m[6] = m23;
	result.m[7] = m24;
	result.m[8] = m31;
	result.m[9] = m32;
	result.m[10] = m33;
	result.m[11] = m34;
	result.m[12] = m41;
	result.m[13] = m42;
	result.m[14] = m43;
	result.m[15] = m44;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.FromValuesToRef = function(m11,m12,m13,m14,m21,m22,m23,m24,m31,m32,m33,m34,m41,m42,m43,m44,result) {
	result.m[0] = m11;
	result.m[1] = m12;
	result.m[2] = m13;
	result.m[3] = m14;
	result.m[4] = m21;
	result.m[5] = m22;
	result.m[6] = m23;
	result.m[7] = m24;
	result.m[8] = m31;
	result.m[9] = m32;
	result.m[10] = m33;
	result.m[11] = m34;
	result.m[12] = m41;
	result.m[13] = m42;
	result.m[14] = m43;
	result.m[15] = m44;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.Identity = function() {
	return com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
};
com.gamestudiohx.babylonhx.tools.math.Matrix.IdentityToRef = function(result) {
	result.m[0] = 1.0;
	result.m[1] = 0;
	result.m[2] = 0;
	result.m[3] = 0;
	result.m[4] = 0;
	result.m[5] = 1.0;
	result.m[6] = 0;
	result.m[7] = 0;
	result.m[8] = 0;
	result.m[9] = 0;
	result.m[10] = 1.0;
	result.m[11] = 0;
	result.m[12] = 0;
	result.m[13] = 0;
	result.m[14] = 0;
	result.m[15] = 1.0;
	result;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.Zero = function() {
	return com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
};
com.gamestudiohx.babylonhx.tools.math.Matrix.RotationX = function(angle) {
	var result = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	com.gamestudiohx.babylonhx.tools.math.Matrix.RotationXToRef(angle,result);
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.RotationXToRef = function(angle,result) {
	var s = Math.sin(angle);
	var c = Math.cos(angle);
	result.m[0] = 1.0;
	result.m[15] = 1.0;
	result.m[5] = c;
	result.m[10] = c;
	result.m[9] = -s;
	result.m[6] = s;
	result.m[1] = 0;
	result.m[2] = 0;
	result.m[3] = 0;
	result.m[4] = 0;
	result.m[7] = 0;
	result.m[8] = 0;
	result.m[11] = 0;
	result.m[12] = 0;
	result.m[13] = 0;
	result.m[14] = 0;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.RotationY = function(angle) {
	var result = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYToRef(angle,result);
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYToRef = function(angle,result) {
	var s = Math.sin(angle);
	var c = Math.cos(angle);
	result.m[5] = 1.0;
	result.m[15] = 1.0;
	result.m[0] = c;
	result.m[2] = -s;
	result.m[8] = s;
	result.m[10] = c;
	result.m[1] = 0;
	result.m[3] = 0;
	result.m[4] = 0;
	result.m[6] = 0;
	result.m[7] = 0;
	result.m[9] = 0;
	result.m[11] = 0;
	result.m[12] = 0;
	result.m[13] = 0;
	result.m[14] = 0;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.RotationZ = function(angle) {
	var result = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	com.gamestudiohx.babylonhx.tools.math.Matrix.RotationZToRef(angle,result);
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.RotationZToRef = function(angle,result) {
	var s = Math.sin(angle);
	var c = Math.cos(angle);
	result.m[10] = 1.0;
	result.m[15] = 1.0;
	result.m[0] = c;
	result.m[1] = s;
	result.m[4] = -s;
	result.m[5] = c;
	result.m[2] = 0;
	result.m[3] = 0;
	result.m[6] = 0;
	result.m[7] = 0;
	result.m[8] = 0;
	result.m[9] = 0;
	result.m[11] = 0;
	result.m[12] = 0;
	result.m[13] = 0;
	result.m[14] = 0;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.RotationAxis = function(axis,angle) {
	var s = Math.sin(-angle);
	var c = Math.cos(-angle);
	var c1 = 1 - c;
	axis.normalize();
	var result = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	result.m[0] = axis.x * axis.x * c1 + c;
	result.m[1] = axis.x * axis.y * c1 - axis.z * s;
	result.m[2] = axis.x * axis.z * c1 + axis.y * s;
	result.m[3] = 0.0;
	result.m[4] = axis.y * axis.x * c1 + axis.z * s;
	result.m[5] = axis.y * axis.y * c1 + c;
	result.m[6] = axis.y * axis.z * c1 - axis.x * s;
	result.m[7] = 0.0;
	result.m[8] = axis.z * axis.x * c1 - axis.y * s;
	result.m[9] = axis.z * axis.y * c1 + axis.x * s;
	result.m[10] = axis.z * axis.z * c1 + c;
	result.m[11] = 0.0;
	result.m[15] = 1.0;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYawPitchRoll = function(yaw,pitch,roll) {
	var result = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYawPitchRollToRef(yaw,pitch,roll,result);
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.RotationYawPitchRollToRef = function(yaw,pitch,roll,result) {
	var tempQuaternion = new com.gamestudiohx.babylonhx.tools.math.Quaternion();
	tempQuaternion = com.gamestudiohx.babylonhx.tools.math.Quaternion.RotationYawPitchRollToRef(yaw,pitch,roll,tempQuaternion);
	return tempQuaternion.toRotationMatrix(result);
};
com.gamestudiohx.babylonhx.tools.math.Matrix.Scaling = function(x,y,z) {
	var result = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	result.m[0] = x;
	result.m[1] = 0;
	result.m[2] = 0;
	result.m[3] = 0;
	result.m[4] = 0;
	result.m[5] = y;
	result.m[6] = 0;
	result.m[7] = 0;
	result.m[8] = 0;
	result.m[9] = 0;
	result.m[10] = z;
	result.m[11] = 0;
	result.m[12] = 0;
	result.m[13] = 0;
	result.m[14] = 0;
	result.m[15] = 1.0;
	result;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.ScalingToRef = function(x,y,z,result) {
	result.m[0] = x;
	result.m[1] = 0;
	result.m[2] = 0;
	result.m[3] = 0;
	result.m[4] = 0;
	result.m[5] = y;
	result.m[6] = 0;
	result.m[7] = 0;
	result.m[8] = 0;
	result.m[9] = 0;
	result.m[10] = z;
	result.m[11] = 0;
	result.m[12] = 0;
	result.m[13] = 0;
	result.m[14] = 0;
	result.m[15] = 1.0;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.Translation = function(x,y,z) {
	var result = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(1.0,0,0,0,0,1.0,0,0,0,0,1.0,0,0,0,0,1.0);
	result.m[0] = 1.0;
	result.m[1] = 0;
	result.m[2] = 0;
	result.m[3] = 0;
	result.m[4] = 0;
	result.m[5] = 1.0;
	result.m[6] = 0;
	result.m[7] = 0;
	result.m[8] = 0;
	result.m[9] = 0;
	result.m[10] = 1.0;
	result.m[11] = 0;
	result.m[12] = x;
	result.m[13] = y;
	result.m[14] = z;
	result.m[15] = 1.0;
	result;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.TranslationToRef = function(x,y,z,result) {
	result.m[0] = 1.0;
	result.m[1] = 0;
	result.m[2] = 0;
	result.m[3] = 0;
	result.m[4] = 0;
	result.m[5] = 1.0;
	result.m[6] = 0;
	result.m[7] = 0;
	result.m[8] = 0;
	result.m[9] = 0;
	result.m[10] = 1.0;
	result.m[11] = 0;
	result.m[12] = x;
	result.m[13] = y;
	result.m[14] = z;
	result.m[15] = 1.0;
	result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.LookAtLH = function(eye,target,up) {
	var result = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	com.gamestudiohx.babylonhx.tools.math.Matrix.LookAtLHToRef(eye,target,up,result);
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.LookAtLHToRef = function(eye,target,up,result) {
	var xAxis = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	var yAxis = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	var zAxis = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
	zAxis.x = target.x - eye.x;
	zAxis.y = target.y - eye.y;
	zAxis.z = target.z - eye.z;
	zAxis.normalize();
	xAxis.x = up.y * zAxis.z - up.z * zAxis.y;
	xAxis.y = up.z * zAxis.x - up.x * zAxis.z;
	xAxis.z = up.x * zAxis.y - up.y * zAxis.x;
	xAxis.normalize();
	yAxis.x = zAxis.y * xAxis.z - zAxis.z * xAxis.y;
	yAxis.y = zAxis.z * xAxis.x - zAxis.x * xAxis.z;
	yAxis.z = zAxis.x * xAxis.y - zAxis.y * xAxis.x;
	yAxis.normalize();
	var ex = -(xAxis.x * eye.x + xAxis.y * eye.y + xAxis.z * eye.z);
	var ey = -(yAxis.x * eye.x + yAxis.y * eye.y + yAxis.z * eye.z);
	var ez = -(zAxis.x * eye.x + zAxis.y * eye.y + zAxis.z * eye.z);
	result.m[0] = xAxis.x;
	result.m[1] = yAxis.x;
	result.m[2] = zAxis.x;
	result.m[3] = 0;
	result.m[4] = xAxis.y;
	result.m[5] = yAxis.y;
	result.m[6] = zAxis.y;
	result.m[7] = 0;
	result.m[8] = xAxis.z;
	result.m[9] = yAxis.z;
	result.m[10] = zAxis.z;
	result.m[11] = 0;
	result.m[12] = ex;
	result.m[13] = ey;
	result.m[14] = ez;
	result.m[15] = 1;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.OrthoLH = function(width,height,znear,zfar) {
	var hw = 2.0 / width;
	var hh = 2.0 / height;
	var id = 1.0 / (zfar - znear);
	var nid = znear / (znear - zfar);
	return com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(hw,0,0,0,0,hh,0,0,0,0,id,0,0,0,nid,1);
};
com.gamestudiohx.babylonhx.tools.math.Matrix.OrthoOffCenterLH = function(left,right,bottom,top,znear,zfar) {
	var matrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	matrix.m[0] = 2.0 / (right - left);
	matrix.m[1] = matrix.m[2] = matrix.m[3] = matrix.m[4] = 0;
	matrix.m[5] = 2.0 / (top - bottom);
	matrix.m[6] = matrix.m[7] = 0;
	matrix.m[8] = matrix.m[9] = 0;
	matrix.m[10] = -1 / (znear - zfar);
	matrix.m[11] = 0;
	matrix.m[12] = (left + right) / (left - right);
	matrix.m[13] = (top + bottom) / (bottom - top);
	matrix.m[14] = znear / (znear - zfar);
	matrix.m[15] = 1.0;
	matrix;
	return matrix;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.OrthoOffCenterLHToRef = function(left,right,bottom,top,znear,zfar,result) {
	result.m[0] = 2.0 / (right - left);
	result.m[1] = result.m[2] = result.m[3] = result.m[4] = 0;
	result.m[5] = 2.0 / (top - bottom);
	result.m[6] = result.m[7] = 0;
	result.m[8] = result.m[9] = 0;
	result.m[10] = -1 / (znear - zfar);
	result.m[11] = 0;
	result.m[12] = (left + right) / (left - right);
	result.m[13] = (top + bottom) / (bottom - top);
	result.m[14] = znear / (znear - zfar);
	result.m[15] = 1.0;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.PerspectiveLH = function(width,height,znear,zfar) {
	var matrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	matrix.m[0] = 2.0 * znear / width;
	matrix.m[1] = matrix.m[2] = matrix.m[3] = 0.0;
	matrix.m[5] = 2.0 * znear / height;
	matrix.m[4] = matrix.m[6] = matrix.m[7] = 0.0;
	matrix.m[10] = -zfar / (znear - zfar);
	matrix.m[8] = matrix.m[9] = 0.0;
	matrix.m[11] = 1.0;
	matrix.m[12] = matrix.m[13] = matrix.m[15] = 0.0;
	matrix.m[14] = znear * zfar / (znear - zfar);
	return matrix;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.PerspectiveFovLH = function(fov,aspect,znear,zfar) {
	var matrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
	com.gamestudiohx.babylonhx.tools.math.Matrix.PerspectiveFovLHToRef(fov,aspect,znear,zfar,matrix);
	return matrix;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.PerspectiveFovLHToRef = function(fov,aspect,znear,zfar,result) {
	var tan = 1.0 / Math.tan(fov * 0.5);
	result.m[0] = tan / aspect;
	result.m[1] = result.m[2] = result.m[3] = 0.0;
	result.m[5] = tan;
	result.m[4] = result.m[6] = result.m[7] = 0.0;
	result.m[8] = result.m[9] = 0.0;
	result.m[10] = -zfar / (znear - zfar);
	result.m[11] = 1.0;
	result.m[12] = result.m[13] = result.m[15] = 0.0;
	result.m[14] = znear * zfar / (znear - zfar);
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.GetFinalMatrix = function(viewport,world,view,projection,zmin,zmax) {
	var cw = viewport.width;
	var ch = viewport.height;
	var cx = viewport.x;
	var cy = viewport.y;
	var viewportMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(cw / 2.0,0,0,0,0,-ch / 2.0,0,0,0,0,zmax - zmin,0,cx + cw / 2.0,ch / 2.0 + cy,zmin,1);
	return world.multiply(view).multiply(projection).multiply(viewportMatrix);
};
com.gamestudiohx.babylonhx.tools.math.Matrix.Transpose = function(matrix) {
	var result = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	result.m[0] = matrix.m[0];
	result.m[1] = matrix.m[4];
	result.m[2] = matrix.m[8];
	result.m[3] = matrix.m[12];
	result.m[4] = matrix.m[1];
	result.m[5] = matrix.m[5];
	result.m[6] = matrix.m[9];
	result.m[7] = matrix.m[13];
	result.m[8] = matrix.m[2];
	result.m[9] = matrix.m[6];
	result.m[10] = matrix.m[10];
	result.m[11] = matrix.m[14];
	result.m[12] = matrix.m[3];
	result.m[13] = matrix.m[7];
	result.m[14] = matrix.m[11];
	result.m[15] = matrix.m[15];
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.Reflection = function(plane) {
	var matrix = new com.gamestudiohx.babylonhx.tools.math.Matrix();
	com.gamestudiohx.babylonhx.tools.math.Matrix.ReflectionToRef(plane,matrix);
	return matrix;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.ReflectionToRef = function(plane,result) {
	plane.normalize();
	var x = plane.normal.x;
	var y = plane.normal.y;
	var z = plane.normal.z;
	var temp = -2 * x;
	var temp2 = -2 * y;
	var temp3 = -2 * z;
	result.m[0] = temp * x + 1;
	result.m[1] = temp2 * x;
	result.m[2] = temp3 * x;
	result.m[3] = 0.0;
	result.m[4] = temp * y;
	result.m[5] = temp2 * y + 1;
	result.m[6] = temp3 * y;
	result.m[7] = 0.0;
	result.m[8] = temp * z;
	result.m[9] = temp2 * z;
	result.m[10] = temp3 * z + 1;
	result.m[11] = 0.0;
	result.m[12] = temp * plane.d;
	result.m[13] = temp2 * plane.d;
	result.m[14] = temp3 * plane.d;
	result.m[15] = 1.0;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Matrix.prototype = {
	isIdentity: function() {
		var ret = true;
		if(this.m[0] != 1.0 || this.m[5] != 1.0 || this.m[10] != 1.0 || this.m[15] != 1.0) ret = false;
		if(this.m[1] != 0.0 || this.m[2] != 0.0 || this.m[3] != 0.0 || this.m[4] != 0.0 || this.m[6] != 0.0 || this.m[7] != 0.0 || this.m[8] != 0.0 || this.m[9] != 0.0 || this.m[11] != 0.0 || this.m[12] != 0.0 || this.m[13] != 0.0 || this.m[14] != 0.0) ret = false;
		return ret;
	}
	,determinant: function() {
		var temp1 = this.m[10] * this.m[15] - this.m[11] * this.m[14];
		var temp2 = this.m[9] * this.m[15] - this.m[11] * this.m[13];
		var temp3 = this.m[9] * this.m[14] - this.m[10] * this.m[13];
		var temp4 = this.m[8] * this.m[15] - this.m[11] * this.m[12];
		var temp5 = this.m[8] * this.m[14] - this.m[10] * this.m[12];
		var temp6 = this.m[8] * this.m[13] - this.m[9] * this.m[12];
		return this.m[0] * (this.m[5] * temp1 - this.m[6] * temp2 + this.m[7] * temp3) - this.m[1] * (this.m[4] * temp1 - this.m[6] * temp4 + this.m[7] * temp5) + this.m[2] * (this.m[4] * temp2 - this.m[5] * temp4 + this.m[7] * temp6) - this.m[3] * (this.m[4] * temp3 - this.m[5] * temp5 + this.m[6] * temp6);
	}
	,toArray: function() {
		return this.m;
	}
	,copyToArray: function(array,offset) {
		if(offset == null) offset = 0;
		var _g = 0;
		while(_g < 16) {
			var index = _g++;
			array[offset + index] = this.m[index];
		}
	}
	,invert: function() {
		this.invertToRef(this);
	}
	,invertToRef: function(other) {
		var l1 = this.m[0];
		var l2 = this.m[1];
		var l3 = this.m[2];
		var l4 = this.m[3];
		var l5 = this.m[4];
		var l6 = this.m[5];
		var l7 = this.m[6];
		var l8 = this.m[7];
		var l9 = this.m[8];
		var l10 = this.m[9];
		var l11 = this.m[10];
		var l12 = this.m[11];
		var l13 = this.m[12];
		var l14 = this.m[13];
		var l15 = this.m[14];
		var l16 = this.m[15];
		var l17 = l11 * l16 - l12 * l15;
		var l18 = l10 * l16 - l12 * l14;
		var l19 = l10 * l15 - l11 * l14;
		var l20 = l9 * l16 - l12 * l13;
		var l21 = l9 * l15 - l11 * l13;
		var l22 = l9 * l14 - l10 * l13;
		var l23 = l6 * l17 - l7 * l18 + l8 * l19;
		var l24 = -(l5 * l17 - l7 * l20 + l8 * l21);
		var l25 = l5 * l18 - l6 * l20 + l8 * l22;
		var l26 = -(l5 * l19 - l6 * l21 + l7 * l22);
		var l27 = 1.0 / (l1 * l23 + l2 * l24 + l3 * l25 + l4 * l26);
		var l28 = l7 * l16 - l8 * l15;
		var l29 = l6 * l16 - l8 * l14;
		var l30 = l6 * l15 - l7 * l14;
		var l31 = l5 * l16 - l8 * l13;
		var l32 = l5 * l15 - l7 * l13;
		var l33 = l5 * l14 - l6 * l13;
		var l34 = l7 * l12 - l8 * l11;
		var l35 = l6 * l12 - l8 * l10;
		var l36 = l6 * l11 - l7 * l10;
		var l37 = l5 * l12 - l8 * l9;
		var l38 = l5 * l11 - l7 * l9;
		var l39 = l5 * l10 - l6 * l9;
		other.m[0] = l23 * l27;
		other.m[4] = l24 * l27;
		other.m[8] = l25 * l27;
		other.m[12] = l26 * l27;
		other.m[1] = -(l2 * l17 - l3 * l18 + l4 * l19) * l27;
		other.m[5] = (l1 * l17 - l3 * l20 + l4 * l21) * l27;
		other.m[9] = -(l1 * l18 - l2 * l20 + l4 * l22) * l27;
		other.m[13] = (l1 * l19 - l2 * l21 + l3 * l22) * l27;
		other.m[2] = (l2 * l28 - l3 * l29 + l4 * l30) * l27;
		other.m[6] = -(l1 * l28 - l3 * l31 + l4 * l32) * l27;
		other.m[10] = (l1 * l29 - l2 * l31 + l4 * l33) * l27;
		other.m[14] = -(l1 * l30 - l2 * l32 + l3 * l33) * l27;
		other.m[3] = -(l2 * l34 - l3 * l35 + l4 * l36) * l27;
		other.m[7] = (l1 * l34 - l3 * l37 + l4 * l38) * l27;
		other.m[11] = -(l1 * l35 - l2 * l37 + l4 * l39) * l27;
		other.m[15] = (l1 * l36 - l2 * l38 + l3 * l39) * l27;
	}
	,setTranslation: function(vector3) {
		this.m[12] = vector3.x;
		this.m[13] = vector3.y;
		this.m[14] = vector3.z;
	}
	,multiply: function(other) {
		var result = new com.gamestudiohx.babylonhx.tools.math.Matrix();
		this.multiplyToArray(other,result.m,0);
		return result;
	}
	,copyFrom: function(other) {
		var _g = 0;
		while(_g < 16) {
			var index = _g++;
			this.m[index] = other.m[index];
		}
	}
	,multiplyToRef: function(other,result) {
		this.multiplyToArray(other,result.m,0);
	}
	,multiplyToArray: function(other,result,offset) {
		var tm0 = this.m[0];
		var tm1 = this.m[1];
		var tm2 = this.m[2];
		var tm3 = this.m[3];
		var tm4 = this.m[4];
		var tm5 = this.m[5];
		var tm6 = this.m[6];
		var tm7 = this.m[7];
		var tm8 = this.m[8];
		var tm9 = this.m[9];
		var tm10 = this.m[10];
		var tm11 = this.m[11];
		var tm12 = this.m[12];
		var tm13 = this.m[13];
		var tm14 = this.m[14];
		var tm15 = this.m[15];
		var om0 = other.m[0];
		var om1 = other.m[1];
		var om2 = other.m[2];
		var om3 = other.m[3];
		var om4 = other.m[4];
		var om5 = other.m[5];
		var om6 = other.m[6];
		var om7 = other.m[7];
		var om8 = other.m[8];
		var om9 = other.m[9];
		var om10 = other.m[10];
		var om11 = other.m[11];
		var om12 = other.m[12];
		var om13 = other.m[13];
		var om14 = other.m[14];
		var om15 = other.m[15];
		result[offset] = tm0 * om0 + tm1 * om4 + tm2 * om8 + tm3 * om12;
		result[offset + 1] = tm0 * om1 + tm1 * om5 + tm2 * om9 + tm3 * om13;
		result[offset + 2] = tm0 * om2 + tm1 * om6 + tm2 * om10 + tm3 * om14;
		result[offset + 3] = tm0 * om3 + tm1 * om7 + tm2 * om11 + tm3 * om15;
		result[offset + 4] = tm4 * om0 + tm5 * om4 + tm6 * om8 + tm7 * om12;
		result[offset + 5] = tm4 * om1 + tm5 * om5 + tm6 * om9 + tm7 * om13;
		result[offset + 6] = tm4 * om2 + tm5 * om6 + tm6 * om10 + tm7 * om14;
		result[offset + 7] = tm4 * om3 + tm5 * om7 + tm6 * om11 + tm7 * om15;
		result[offset + 8] = tm8 * om0 + tm9 * om4 + tm10 * om8 + tm11 * om12;
		result[offset + 9] = tm8 * om1 + tm9 * om5 + tm10 * om9 + tm11 * om13;
		result[offset + 10] = tm8 * om2 + tm9 * om6 + tm10 * om10 + tm11 * om14;
		result[offset + 11] = tm8 * om3 + tm9 * om7 + tm10 * om11 + tm11 * om15;
		result[offset + 12] = tm12 * om0 + tm13 * om4 + tm14 * om8 + tm15 * om12;
		result[offset + 13] = tm12 * om1 + tm13 * om5 + tm14 * om9 + tm15 * om13;
		result[offset + 14] = tm12 * om2 + tm13 * om6 + tm14 * om10 + tm15 * om14;
		result[offset + 15] = tm12 * om3 + tm13 * om7 + tm14 * om11 + tm15 * om15;
		return result;
	}
	,equals: function(value) {
		return this.m[0] == value.m[0] && this.m[1] == value.m[1] && this.m[2] == value.m[2] && this.m[3] == value.m[3] && this.m[4] == value.m[4] && this.m[5] == value.m[5] && this.m[6] == value.m[6] && this.m[7] == value.m[7] && this.m[8] == value.m[8] && this.m[9] == value.m[9] && this.m[10] == value.m[10] && this.m[11] == value.m[11] && this.m[12] == value.m[12] && this.m[13] == value.m[13] && this.m[14] == value.m[14] && this.m[15] == value.m[15];
	}
	,clone: function() {
		return com.gamestudiohx.babylonhx.tools.math.Matrix.FromValues(this.m[0],this.m[1],this.m[2],this.m[3],this.m[4],this.m[5],this.m[6],this.m[7],this.m[8],this.m[9],this.m[10],this.m[11],this.m[12],this.m[13],this.m[14],this.m[15]);
	}
	,__class__: com.gamestudiohx.babylonhx.tools.math.Matrix
};
com.gamestudiohx.babylonhx.tools.math.Plane = function(a,b,c,d) {
	this.normal = new com.gamestudiohx.babylonhx.tools.math.Vector3(a,b,c);
	this.d = d;
};
$hxClasses["com.gamestudiohx.babylonhx.tools.math.Plane"] = com.gamestudiohx.babylonhx.tools.math.Plane;
com.gamestudiohx.babylonhx.tools.math.Plane.__name__ = ["com","gamestudiohx","babylonhx","tools","math","Plane"];
com.gamestudiohx.babylonhx.tools.math.Plane.FromArray = function(array) {
	return new com.gamestudiohx.babylonhx.tools.math.Plane(array[0],array[1],array[2],array[3]);
};
com.gamestudiohx.babylonhx.tools.math.Plane.FromPoints = function(point1,point2,point3) {
	var result = new com.gamestudiohx.babylonhx.tools.math.Plane(0,0,0,0);
	result.copyFromPoints(point1,point2,point3);
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Plane.FromPositionAndNormal = function(origin,normal) {
	var result = new com.gamestudiohx.babylonhx.tools.math.Plane(0,0,0,0);
	normal.normalize();
	result.normal = normal;
	result.d = -(normal.x * origin.x + normal.y * origin.y + normal.z * origin.z);
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Plane.SignedDistanceToPlaneFromPositionAndNormal = function(origin,normal,point) {
	var d = -(normal.x * origin.x + normal.y * origin.y + normal.z * origin.z);
	return point.x * normal.x + point.y * normal.y + point.z * normal.z + d;
};
com.gamestudiohx.babylonhx.tools.math.Plane.prototype = {
	clone: function() {
		return new com.gamestudiohx.babylonhx.tools.math.Plane(this.normal.x,this.normal.y,this.normal.z,this.d);
	}
	,normalize: function() {
		var norm = Math.sqrt(this.normal.x * this.normal.x + this.normal.y * this.normal.y + this.normal.z * this.normal.z);
		var magnitude = 0;
		if(norm != 0) magnitude = 1.0 / norm;
		this.normal.x *= magnitude;
		this.normal.y *= magnitude;
		this.normal.z *= magnitude;
		this.d *= magnitude;
	}
	,transform: function(transformation) {
		var transposedMatrix = com.gamestudiohx.babylonhx.tools.math.Matrix.Transpose(transformation);
		var x = this.normal.x;
		var y = this.normal.y;
		var z = this.normal.z;
		var d = this.d;
		var normalX = x * transposedMatrix.m[0] + y * transposedMatrix.m[1] + z * transposedMatrix.m[2] + d * transposedMatrix.m[3];
		var normalY = x * transposedMatrix.m[4] + y * transposedMatrix.m[5] + z * transposedMatrix.m[6] + d * transposedMatrix.m[7];
		var normalZ = x * transposedMatrix.m[8] + y * transposedMatrix.m[9] + z * transposedMatrix.m[10] + d * transposedMatrix.m[11];
		var finalD = x * transposedMatrix.m[12] + y * transposedMatrix.m[13] + z * transposedMatrix.m[14] + d * transposedMatrix.m[15];
		return new com.gamestudiohx.babylonhx.tools.math.Plane(normalX,normalY,normalZ,finalD);
	}
	,dotCoordinate: function(point) {
		return this.normal.x * point.x + this.normal.y * point.y + this.normal.z * point.z + this.d;
	}
	,copyFromPoints: function(point1,point2,point3) {
		var x1 = point2.x - point1.x;
		var y1 = point2.y - point1.y;
		var z1 = point2.z - point1.z;
		var x2 = point3.x - point1.x;
		var y2 = point3.y - point1.y;
		var z2 = point3.z - point1.z;
		var yz = y1 * z2 - z1 * y2;
		var xz = z1 * x2 - x1 * z2;
		var xy = x1 * y2 - y1 * x2;
		var pyth = Math.sqrt(yz * yz + xz * xz + xy * xy);
		var invPyth;
		if(pyth != 0) invPyth = 1.0 / pyth; else invPyth = 0;
		this.normal.x = yz * invPyth;
		this.normal.y = xz * invPyth;
		this.normal.z = xy * invPyth;
		this.d = -(this.normal.x * point1.x + this.normal.y * point1.y + this.normal.z * point1.z);
	}
	,isFrontFacingTo: function(direction,epsilon) {
		var dot = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this.normal,direction);
		return dot <= epsilon;
	}
	,signedDistanceTo: function(point) {
		return com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(point,this.normal) + this.d;
	}
	,__class__: com.gamestudiohx.babylonhx.tools.math.Plane
};
com.gamestudiohx.babylonhx.tools.math.Quaternion = function(initialX,initialY,initialZ,initialW) {
	if(initialW == null) initialW = 0;
	if(initialZ == null) initialZ = 0;
	if(initialY == null) initialY = 0;
	if(initialX == null) initialX = 0;
	this.x = initialX;
	this.y = initialY;
	this.z = initialZ;
	this.w = initialW;
};
$hxClasses["com.gamestudiohx.babylonhx.tools.math.Quaternion"] = com.gamestudiohx.babylonhx.tools.math.Quaternion;
com.gamestudiohx.babylonhx.tools.math.Quaternion.__name__ = ["com","gamestudiohx","babylonhx","tools","math","Quaternion"];
com.gamestudiohx.babylonhx.tools.math.Quaternion.FromArray = function(array,offset) {
	if(offset == null) offset = 0;
	return new com.gamestudiohx.babylonhx.tools.math.Quaternion(array[offset],array[offset + 1],array[offset + 2],array[offset + 3]);
};
com.gamestudiohx.babylonhx.tools.math.Quaternion.RotationYawPitchRoll = function(yaw,pitch,roll) {
	var result = new com.gamestudiohx.babylonhx.tools.math.Quaternion();
	com.gamestudiohx.babylonhx.tools.math.Quaternion.RotationYawPitchRollToRef(yaw,pitch,roll,result);
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Quaternion.RotationYawPitchRollToRef = function(yaw,pitch,roll,result) {
	var halfRoll = roll * 0.5;
	var halfPitch = pitch * 0.5;
	var halfYaw = yaw * 0.5;
	var sinRoll = Math.sin(halfRoll);
	var cosRoll = Math.cos(halfRoll);
	var sinPitch = Math.sin(halfPitch);
	var cosPitch = Math.cos(halfPitch);
	var sinYaw = Math.sin(halfYaw);
	var cosYaw = Math.cos(halfYaw);
	result.x = cosYaw * sinPitch * cosRoll + sinYaw * cosPitch * sinRoll;
	result.y = sinYaw * cosPitch * cosRoll - cosYaw * sinPitch * sinRoll;
	result.z = cosYaw * cosPitch * sinRoll - sinYaw * sinPitch * cosRoll;
	result.w = cosYaw * cosPitch * cosRoll + sinYaw * sinPitch * sinRoll;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Quaternion.Slerp = function(left,right,amount) {
	var num2;
	var num3;
	var num = amount;
	var num4 = left.x * right.x + left.y * right.y + left.z * right.z + left.w * right.w;
	var flag = false;
	if(num4 < 0) {
		flag = true;
		num4 = -num4;
	}
	if(num4 > 0.999999) {
		num3 = 1 - num;
		if(flag) num2 = -num; else num2 = num;
	} else {
		var num5 = Math.acos(num4);
		var num6 = 1.0 / Math.sin(num5);
		num3 = Math.sin((1.0 - num) * num5) * num6;
		if(flag) num2 = -Math.sin(num * num5) * num6; else num2 = Math.sin(num * num5) * num6;
	}
	return new com.gamestudiohx.babylonhx.tools.math.Quaternion(num3 * left.x + num2 * right.x,num3 * left.y + num2 * right.y,num3 * left.z + num2 * right.z,num3 * left.w + num2 * right.w);
};
com.gamestudiohx.babylonhx.tools.math.Quaternion.RotationAxis = function(axis,angle) {
	var result = new com.gamestudiohx.babylonhx.tools.math.Quaternion();
	var sin = Math.sin(angle / 2);
	result.w = Math.cos(angle / 2);
	result.x = axis.x * sin;
	result.y = axis.y * sin;
	result.z = axis.z * sin;
	return result;
};
com.gamestudiohx.babylonhx.tools.math.Quaternion.prototype = {
	toString: function() {
		return "{X: " + this.x + " Y:" + this.y + " Z:" + this.z + " W:" + this.w + "}";
	}
	,equals: function(otherQuaternion) {
		return this.x == otherQuaternion.x && this.y == otherQuaternion.y && this.z == otherQuaternion.z && this.w == otherQuaternion.w;
	}
	,clone: function() {
		return new com.gamestudiohx.babylonhx.tools.math.Quaternion(this.x,this.y,this.z,this.w);
	}
	,copyFrom: function(other) {
		this.x = other.x;
		this.y = other.y;
		this.z = other.z;
		this.w = other.w;
	}
	,add: function(other) {
		return new com.gamestudiohx.babylonhx.tools.math.Quaternion(this.x + other.x,this.y + other.y,this.z + other.z,this.w + other.w);
	}
	,scale: function(value) {
		return new com.gamestudiohx.babylonhx.tools.math.Quaternion(this.x * value,this.y * value,this.z * value,this.w * value);
	}
	,multiply: function(q1) {
		var result = new com.gamestudiohx.babylonhx.tools.math.Quaternion(0,0,0,1.0);
		result.x = this.x * q1.w + this.y * q1.z - this.z * q1.y + this.w * q1.x;
		result.y = -this.x * q1.z + this.y * q1.w + this.z * q1.x + this.w * q1.y;
		result.z = this.x * q1.y - this.y * q1.x + this.z * q1.w + this.w * q1.z;
		result.w = -this.x * q1.x - this.y * q1.y - this.z * q1.z + this.w * q1.w;
		result;
		return result;
	}
	,multiplyToRef: function(q1,result) {
		result.x = this.x * q1.w + this.y * q1.z - this.z * q1.y + this.w * q1.x;
		result.y = -this.x * q1.z + this.y * q1.w + this.z * q1.x + this.w * q1.y;
		result.z = this.x * q1.y - this.y * q1.x + this.z * q1.w + this.w * q1.z;
		result.w = -this.x * q1.x - this.y * q1.y - this.z * q1.z + this.w * q1.w;
		return result;
	}
	,length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y + this.z * this.z + this.w * this.w);
	}
	,normalize: function() {
		var length = 1.0 / Math.sqrt(this.x * this.x + this.y * this.y + this.z * this.z + this.w * this.w);
		this.x *= length;
		this.y *= length;
		this.z *= length;
		this.w *= length;
	}
	,toEulerAngles: function() {
		var qx = this.x;
		var qy = this.y;
		var qz = this.z;
		var qw = this.w;
		var sqx = qx * qx;
		var sqy = qy * qy;
		var sqz = qz * qz;
		var yaw = Math.atan2(2.0 * (qy * qw - qx * qz),1.0 - 2.0 * (sqy + sqz));
		var pitch = Math.asin(2.0 * (qx * qy + qz * qw));
		var roll = Math.atan2(2.0 * (qx * qw - qy * qz),1.0 - 2.0 * (sqx + sqz));
		var gimbaLockTest = qx * qy + qz * qw;
		if(gimbaLockTest > 0.499) {
			yaw = 2.0 * Math.atan2(qx,qw);
			roll = 0;
		} else if(gimbaLockTest < -0.499) {
			yaw = -2. * Math.atan2(qx,qw);
			roll = 0;
		}
		return new com.gamestudiohx.babylonhx.tools.math.Vector3(pitch,yaw,roll);
	}
	,toRotationMatrix: function(result) {
		var xx = this.x * this.x;
		var yy = this.y * this.y;
		var zz = this.z * this.z;
		var xy = this.x * this.y;
		var zw = this.z * this.w;
		var zx = this.z * this.x;
		var yw = this.y * this.w;
		var yz = this.y * this.z;
		var xw = this.x * this.w;
		result.m[0] = 1.0 - 2.0 * (yy + zz);
		result.m[1] = 2.0 * (xy + zw);
		result.m[2] = 2.0 * (zx - yw);
		result.m[3] = 0;
		result.m[4] = 2.0 * (xy - zw);
		result.m[5] = 1.0 - 2.0 * (zz + xx);
		result.m[6] = 2.0 * (yz + xw);
		result.m[7] = 0;
		result.m[8] = 2.0 * (zx + yw);
		result.m[9] = 2.0 * (yz - xw);
		result.m[10] = 1.0 - 2.0 * (yy + xx);
		result.m[11] = 0;
		result.m[12] = 0;
		result.m[13] = 0;
		result.m[14] = 0;
		result.m[15] = 1.0;
		return result;
	}
	,__class__: com.gamestudiohx.babylonhx.tools.math.Quaternion
};
com.gamestudiohx.babylonhx.tools.math.Ray = function(origin,direction) {
	this.origin = origin;
	this.direction = direction;
};
$hxClasses["com.gamestudiohx.babylonhx.tools.math.Ray"] = com.gamestudiohx.babylonhx.tools.math.Ray;
com.gamestudiohx.babylonhx.tools.math.Ray.__name__ = ["com","gamestudiohx","babylonhx","tools","math","Ray"];
com.gamestudiohx.babylonhx.tools.math.Ray.CreateNew = function(x,y,viewportWidth,viewportHeight,world,view,projection) {
	var start = com.gamestudiohx.babylonhx.tools.math.Vector3.Unproject(new com.gamestudiohx.babylonhx.tools.math.Vector3(x,y,0),viewportWidth,viewportHeight,world,view,projection);
	var end = com.gamestudiohx.babylonhx.tools.math.Vector3.Unproject(new com.gamestudiohx.babylonhx.tools.math.Vector3(x,y,1),viewportWidth,viewportHeight,world,view,projection);
	var direction = new com.gamestudiohx.babylonhx.tools.math.Vector3(end.x - start.x,end.y - start.y,end.z - start.z);
	direction.normalize();
	return new com.gamestudiohx.babylonhx.tools.math.Ray(start,direction);
};
com.gamestudiohx.babylonhx.tools.math.Ray.Transform = function(ray,matrix) {
	var newOrigin = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformCoordinates(ray.origin,matrix);
	var newDirection = com.gamestudiohx.babylonhx.tools.math.Vector3.TransformNormal(ray.direction,matrix);
	return new com.gamestudiohx.babylonhx.tools.math.Ray(newOrigin,newDirection);
};
com.gamestudiohx.babylonhx.tools.math.Ray.prototype = {
	intersectsBox: function(box) {
		var d = 0.0;
		var maxValue = Math.POSITIVE_INFINITY;
		if(Math.abs(this.direction.x) < 0.0000001) {
			if(this.origin.x < box.minimum.x || this.origin.x > box.maximum.x) return false;
		} else {
			var inv = 1.0 / this.direction.x;
			var min = (box.minimum.x - this.origin.x) * inv;
			var max = (box.maximum.x - this.origin.x) * inv;
			if(min > max) {
				var temp = min;
				min = max;
				max = temp;
			}
			d = Math.max(min,d);
			maxValue = Math.min(max,maxValue);
			if(d > maxValue) return false;
		}
		if(Math.abs(this.direction.y) < 0.0000001) {
			if(this.origin.y < box.minimum.y || this.origin.y > box.maximum.y) return false;
		} else {
			var inv1 = 1.0 / this.direction.y;
			var min1 = (box.minimum.y - this.origin.y) * inv1;
			var max1 = (box.maximum.y - this.origin.y) * inv1;
			if(min1 > max1) {
				var temp1 = min1;
				min1 = max1;
				max1 = temp1;
			}
			d = Math.max(min1,d);
			maxValue = Math.min(max1,maxValue);
			if(d > maxValue) return false;
		}
		if(Math.abs(this.direction.z) < 0.0000001) {
			if(this.origin.z < box.minimum.z || this.origin.z > box.maximum.z) return false;
		} else {
			var inv2 = 1.0 / this.direction.z;
			var min2 = (box.minimum.z - this.origin.z) * inv2;
			var max2 = (box.maximum.z - this.origin.z) * inv2;
			if(min2 > max2) {
				var temp2 = min2;
				min2 = max2;
				max2 = temp2;
			}
			d = Math.max(min2,d);
			maxValue = Math.min(max2,maxValue);
			if(d > maxValue) return false;
		}
		return true;
	}
	,intersectsSphere: function(sphere) {
		var x = sphere.center.x - this.origin.x;
		var y = sphere.center.y - this.origin.y;
		var z = sphere.center.z - this.origin.z;
		var pyth = x * x + y * y + z * z;
		var rr = sphere.radius * sphere.radius;
		if(pyth <= rr) return true;
		var dot = x * this.direction.x + y * this.direction.y + z * this.direction.z;
		if(dot < 0.0) return false;
		var temp = pyth - dot * dot;
		return temp <= rr;
	}
	,intersectsTriangle: function(vertex0,vertex1,vertex2) {
		if(this._edge1 == null) {
			this._edge1 = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			this._edge2 = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			this._pvec = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			this._tvec = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
			this._qvec = com.gamestudiohx.babylonhx.tools.math.Vector3.Zero();
		}
		vertex1.subtractToRef(vertex0,this._edge1);
		vertex2.subtractToRef(vertex0,this._edge2);
		com.gamestudiohx.babylonhx.tools.math.Vector3.CrossToRef(this.direction,this._edge2,this._pvec);
		var det = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._edge1,this._pvec);
		if(det == 0) return 0;
		var invdet = 1 / det;
		this.origin.subtractToRef(vertex0,this._tvec);
		var bu = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._tvec,this._pvec) * invdet;
		if(bu < 0 || bu > 1.0) return 0;
		com.gamestudiohx.babylonhx.tools.math.Vector3.CrossToRef(this._tvec,this._edge1,this._qvec);
		var bv = com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this.direction,this._qvec) * invdet;
		if(bv < 0 || bu + bv > 1.0) return 0;
		return com.gamestudiohx.babylonhx.tools.math.Vector3.Dot(this._edge2,this._qvec) * invdet;
	}
	,__class__: com.gamestudiohx.babylonhx.tools.math.Ray
};
com.gamestudiohx.babylonhx.tools.math.Vector2 = function(x,y) {
	this.x = x;
	this.y = y;
};
$hxClasses["com.gamestudiohx.babylonhx.tools.math.Vector2"] = com.gamestudiohx.babylonhx.tools.math.Vector2;
com.gamestudiohx.babylonhx.tools.math.Vector2.__name__ = ["com","gamestudiohx","babylonhx","tools","math","Vector2"];
com.gamestudiohx.babylonhx.tools.math.Vector2.Zero = function() {
	return new com.gamestudiohx.babylonhx.tools.math.Vector2(0,0);
};
com.gamestudiohx.babylonhx.tools.math.Vector2.CatmullRom = function(value1,value2,value3,value4,amount) {
	var squared = amount * amount;
	var cubed = amount * squared;
	var x = 0.5 * (2.0 * value2.x + (-value1.x + value3.x) * amount + (2.0 * value1.x - 5.0 * value2.x + 4.0 * value3.x - value4.x) * squared + (-value1.x + 3.0 * value2.x - 3.0 * value3.x + value4.x) * cubed);
	var y = 0.5 * (2.0 * value2.y + (-value1.y + value3.y) * amount + (2.0 * value1.y - 5.0 * value2.y + 4.0 * value3.y - value4.y) * squared + (-value1.y + 3.0 * value2.y - 3.0 * value3.y + value4.y) * cubed);
	return new com.gamestudiohx.babylonhx.tools.math.Vector2(x,y);
};
com.gamestudiohx.babylonhx.tools.math.Vector2.Clamp = function(value,min,max) {
	var x = value.x;
	if(x > max.x) x = max.x; else x = x;
	if(x < min.x) x = min.x; else x = x;
	var y = value.y;
	if(y > max.y) y = max.y; else y = y;
	if(y < min.y) y = min.y; else y = y;
	return new com.gamestudiohx.babylonhx.tools.math.Vector2(x,y);
};
com.gamestudiohx.babylonhx.tools.math.Vector2.Hermite = function(value1,tangent1,value2,tangent2,amount) {
	var squared = amount * amount;
	var cubed = amount * squared;
	var part1 = 2.0 * cubed - 3.0 * squared + 1.0;
	var part2 = -2. * cubed + 3.0 * squared;
	var part3 = cubed - 2.0 * squared + amount;
	var part4 = cubed - squared;
	var _x = value1.x * part1 + value2.x * part2 + tangent1.x * part3 + tangent2.x * part4;
	var _y = value1.y * part1 + value2.y * part2 + tangent1.y * part3 + tangent2.y * part4;
	return new com.gamestudiohx.babylonhx.tools.math.Vector2(_x,_y);
};
com.gamestudiohx.babylonhx.tools.math.Vector2.Lerp = function(start,end,amount) {
	var _x = start.x + (end.x - start.x) * amount;
	var _y = start.y + (end.y - start.y) * amount;
	return new com.gamestudiohx.babylonhx.tools.math.Vector2(_x,_y);
};
com.gamestudiohx.babylonhx.tools.math.Vector2.Dot = function(left,right) {
	return left.x * right.x + left.y * right.y;
};
com.gamestudiohx.babylonhx.tools.math.Vector2.Normalize = function(vector) {
	var newVector = new com.gamestudiohx.babylonhx.tools.math.Vector2(vector.x,vector.y);
	newVector.normalize();
	return newVector;
};
com.gamestudiohx.babylonhx.tools.math.Vector2.Minimize = function(left,right) {
	var _x;
	if(left.x < right.x) _x = left.x; else _x = right.x;
	var _y;
	if(left.y < right.y) _y = left.y; else _y = right.y;
	return new com.gamestudiohx.babylonhx.tools.math.Vector2(_x,_y);
};
com.gamestudiohx.babylonhx.tools.math.Vector2.Maximize = function(left,right) {
	var _x;
	if(left.x > right.x) _x = left.x; else _x = right.x;
	var _y;
	if(left.y > right.y) _y = left.y; else _y = right.y;
	return new com.gamestudiohx.babylonhx.tools.math.Vector2(_x,_y);
};
com.gamestudiohx.babylonhx.tools.math.Vector2.Transform = function(vector,transformation) {
	var _x = vector.x * transformation.m[0] + vector.y * transformation.m[4];
	var _y = vector.x * transformation.m[1] + vector.y * transformation.m[5];
	return new com.gamestudiohx.babylonhx.tools.math.Vector2(_x,_y);
};
com.gamestudiohx.babylonhx.tools.math.Vector2.Distance = function(value1,value2) {
	return Math.sqrt(com.gamestudiohx.babylonhx.tools.math.Vector2.DistanceSquared(value1,value2));
};
com.gamestudiohx.babylonhx.tools.math.Vector2.DistanceSquared = function(value1,value2) {
	var _x = value1.x - value2.x;
	var _y = value1.y - value2.y;
	return _x * _x + _y * _y;
};
com.gamestudiohx.babylonhx.tools.math.Vector2.prototype = {
	toString: function() {
		return "{X: " + this.x + " Y:" + this.y + "}";
	}
	,add: function(otherVector) {
		return new com.gamestudiohx.babylonhx.tools.math.Vector2(this.x + otherVector.x,this.y + otherVector.y);
	}
	,asArray: function() {
		var result = [];
		result[0] = this.x;
		result[1] = this.y;
		return result;
	}
	,toArray: function(array,index) {
		if(index == null) index = 0;
		array[index] = this.x;
		array[index + 1] = this.y;
	}
	,subtract: function(otherVector) {
		return new com.gamestudiohx.babylonhx.tools.math.Vector2(this.x - otherVector.x,this.y - otherVector.y);
	}
	,negate: function() {
		return new com.gamestudiohx.babylonhx.tools.math.Vector2(-this.x,-this.y);
	}
	,scaleInPlace: function(scale) {
		this.x *= scale;
		this.y *= scale;
	}
	,scale: function(scale) {
		return new com.gamestudiohx.babylonhx.tools.math.Vector2(this.x * scale,this.y * scale);
	}
	,equals: function(otherVector) {
		return this.x == otherVector.x && this.y == otherVector.y;
	}
	,length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y);
	}
	,lengthSquared: function() {
		return this.x * this.x + this.y * this.y;
	}
	,normalize: function() {
		var len = Math.sqrt(this.x * this.x + this.y * this.y);
		if(len != 0) {
			var num = 1.0 / len;
			this.x *= num;
			this.y *= num;
		}
	}
	,clone: function() {
		return new com.gamestudiohx.babylonhx.tools.math.Vector2(this.x,this.y);
	}
	,__class__: com.gamestudiohx.babylonhx.tools.math.Vector2
};
com.gamestudiohx.babylonhx.tools.math.Viewport = function(x,y,width,height) {
	this.width = width;
	this.height = height;
	this.x = x;
	this.y = y;
};
$hxClasses["com.gamestudiohx.babylonhx.tools.math.Viewport"] = com.gamestudiohx.babylonhx.tools.math.Viewport;
com.gamestudiohx.babylonhx.tools.math.Viewport.__name__ = ["com","gamestudiohx","babylonhx","tools","math","Viewport"];
com.gamestudiohx.babylonhx.tools.math.Viewport.prototype = {
	toGlobal: function(engine) {
		var width = engine.getRenderWidth() * engine.getHardwareScalingLevel();
		var height = engine.getRenderHeight() * engine.getHardwareScalingLevel();
		return new com.gamestudiohx.babylonhx.tools.math.Viewport(this.x * width,this.y * height,this.width * width,this.height * height);
	}
	,__class__: com.gamestudiohx.babylonhx.tools.math.Viewport
};
var haxe = {};
haxe.StackItem = $hxClasses["haxe.StackItem"] = { __ename__ : true, __constructs__ : ["CFunction","Module","FilePos","Method","LocalFunction"] };
haxe.StackItem.CFunction = ["CFunction",0];
haxe.StackItem.CFunction.toString = $estr;
haxe.StackItem.CFunction.__enum__ = haxe.StackItem;
haxe.StackItem.Module = function(m) { var $x = ["Module",1,m]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; };
haxe.StackItem.FilePos = function(s,file,line) { var $x = ["FilePos",2,s,file,line]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; };
haxe.StackItem.Method = function(classname,method) { var $x = ["Method",3,classname,method]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; };
haxe.StackItem.LocalFunction = function(v) { var $x = ["LocalFunction",4,v]; $x.__enum__ = haxe.StackItem; $x.toString = $estr; return $x; };
haxe.CallStack = function() { };
$hxClasses["haxe.CallStack"] = haxe.CallStack;
haxe.CallStack.__name__ = ["haxe","CallStack"];
haxe.CallStack.exceptionStack = function() {
	return [];
};
haxe.CallStack.toString = function(stack) {
	var b = new StringBuf();
	var _g = 0;
	while(_g < stack.length) {
		var s = stack[_g];
		++_g;
		b.b += "\nCalled from ";
		haxe.CallStack.itemToString(b,s);
	}
	return b.b;
};
haxe.CallStack.itemToString = function(b,s) {
	switch(s[1]) {
	case 0:
		b.b += "a C function";
		break;
	case 1:
		var m = s[2];
		b.b += "module ";
		if(m == null) b.b += "null"; else b.b += "" + m;
		break;
	case 2:
		var line = s[4];
		var file = s[3];
		var s1 = s[2];
		if(s1 != null) {
			haxe.CallStack.itemToString(b,s1);
			b.b += " (";
		}
		if(file == null) b.b += "null"; else b.b += "" + file;
		b.b += " line ";
		if(line == null) b.b += "null"; else b.b += "" + line;
		if(s1 != null) b.b += ")";
		break;
	case 3:
		var meth = s[3];
		var cname = s[2];
		if(cname == null) b.b += "null"; else b.b += "" + cname;
		b.b += ".";
		if(meth == null) b.b += "null"; else b.b += "" + meth;
		break;
	case 4:
		var n = s[2];
		b.b += "local function #";
		if(n == null) b.b += "null"; else b.b += "" + n;
		break;
	}
};
haxe.Log = function() { };
$hxClasses["haxe.Log"] = haxe.Log;
haxe.Log.__name__ = ["haxe","Log"];
haxe.Log.trace = function(v,infos) {
	js.Boot.__trace(v,infos);
};
haxe.Timer = function() { };
$hxClasses["haxe.Timer"] = haxe.Timer;
haxe.Timer.__name__ = ["haxe","Timer"];
haxe.Timer.stamp = function() {
	return new Date().getTime() / 1000;
};
haxe.Unserializer = function(buf) {
	this.buf = buf;
	this.length = buf.length;
	this.pos = 0;
	this.scache = new Array();
	this.cache = new Array();
	var r = haxe.Unserializer.DEFAULT_RESOLVER;
	if(r == null) {
		r = Type;
		haxe.Unserializer.DEFAULT_RESOLVER = r;
	}
	this.setResolver(r);
};
$hxClasses["haxe.Unserializer"] = haxe.Unserializer;
haxe.Unserializer.__name__ = ["haxe","Unserializer"];
haxe.Unserializer.initCodes = function() {
	var codes = new Array();
	var _g1 = 0;
	var _g = haxe.Unserializer.BASE64.length;
	while(_g1 < _g) {
		var i = _g1++;
		codes[haxe.Unserializer.BASE64.charCodeAt(i)] = i;
	}
	return codes;
};
haxe.Unserializer.prototype = {
	setResolver: function(r) {
		if(r == null) this.resolver = { resolveClass : function(_) {
			return null;
		}, resolveEnum : function(_1) {
			return null;
		}}; else this.resolver = r;
	}
	,get: function(p) {
		return this.buf.charCodeAt(p);
	}
	,readDigits: function() {
		var k = 0;
		var s = false;
		var fpos = this.pos;
		while(true) {
			var c = this.buf.charCodeAt(this.pos);
			if(c != c) break;
			if(c == 45) {
				if(this.pos != fpos) break;
				s = true;
				this.pos++;
				continue;
			}
			if(c < 48 || c > 57) break;
			k = k * 10 + (c - 48);
			this.pos++;
		}
		if(s) k *= -1;
		return k;
	}
	,unserializeObject: function(o) {
		while(true) {
			if(this.pos >= this.length) throw "Invalid object";
			if(this.buf.charCodeAt(this.pos) == 103) break;
			var k = this.unserialize();
			if(!(typeof(k) == "string")) throw "Invalid object key";
			var v = this.unserialize();
			o[k] = v;
		}
		this.pos++;
	}
	,unserializeEnum: function(edecl,tag) {
		if(this.get(this.pos++) != 58) throw "Invalid enum format";
		var nargs = this.readDigits();
		if(nargs == 0) return Type.createEnum(edecl,tag);
		var args = new Array();
		while(nargs-- > 0) args.push(this.unserialize());
		return Type.createEnum(edecl,tag,args);
	}
	,unserialize: function() {
		var _g = this.get(this.pos++);
		switch(_g) {
		case 110:
			return null;
		case 116:
			return true;
		case 102:
			return false;
		case 122:
			return 0;
		case 105:
			return this.readDigits();
		case 100:
			var p1 = this.pos;
			while(true) {
				var c = this.buf.charCodeAt(this.pos);
				if(c >= 43 && c < 58 || c == 101 || c == 69) this.pos++; else break;
			}
			return Std.parseFloat(HxOverrides.substr(this.buf,p1,this.pos - p1));
		case 121:
			var len = this.readDigits();
			if(this.get(this.pos++) != 58 || this.length - this.pos < len) throw "Invalid string length";
			var s = HxOverrides.substr(this.buf,this.pos,len);
			this.pos += len;
			s = decodeURIComponent(s.split("+").join(" "));
			this.scache.push(s);
			return s;
		case 107:
			return Math.NaN;
		case 109:
			return Math.NEGATIVE_INFINITY;
		case 112:
			return Math.POSITIVE_INFINITY;
		case 97:
			var buf = this.buf;
			var a = new Array();
			this.cache.push(a);
			while(true) {
				var c1 = this.buf.charCodeAt(this.pos);
				if(c1 == 104) {
					this.pos++;
					break;
				}
				if(c1 == 117) {
					this.pos++;
					var n = this.readDigits();
					a[a.length + n - 1] = null;
				} else a.push(this.unserialize());
			}
			return a;
		case 111:
			var o = { };
			this.cache.push(o);
			this.unserializeObject(o);
			return o;
		case 114:
			var n1 = this.readDigits();
			if(n1 < 0 || n1 >= this.cache.length) throw "Invalid reference";
			return this.cache[n1];
		case 82:
			var n2 = this.readDigits();
			if(n2 < 0 || n2 >= this.scache.length) throw "Invalid string reference";
			return this.scache[n2];
		case 120:
			throw this.unserialize();
			break;
		case 99:
			var name = this.unserialize();
			var cl = this.resolver.resolveClass(name);
			if(cl == null) throw "Class not found " + name;
			var o1 = Type.createEmptyInstance(cl);
			this.cache.push(o1);
			this.unserializeObject(o1);
			return o1;
		case 119:
			var name1 = this.unserialize();
			var edecl = this.resolver.resolveEnum(name1);
			if(edecl == null) throw "Enum not found " + name1;
			var e = this.unserializeEnum(edecl,this.unserialize());
			this.cache.push(e);
			return e;
		case 106:
			var name2 = this.unserialize();
			var edecl1 = this.resolver.resolveEnum(name2);
			if(edecl1 == null) throw "Enum not found " + name2;
			this.pos++;
			var index = this.readDigits();
			var tag = Type.getEnumConstructs(edecl1)[index];
			if(tag == null) throw "Unknown enum index " + name2 + "@" + index;
			var e1 = this.unserializeEnum(edecl1,tag);
			this.cache.push(e1);
			return e1;
		case 108:
			var l = new List();
			this.cache.push(l);
			var buf1 = this.buf;
			while(this.buf.charCodeAt(this.pos) != 104) l.add(this.unserialize());
			this.pos++;
			return l;
		case 98:
			var h = new haxe.ds.StringMap();
			this.cache.push(h);
			var buf2 = this.buf;
			while(this.buf.charCodeAt(this.pos) != 104) {
				var s1 = this.unserialize();
				h.set(s1,this.unserialize());
			}
			this.pos++;
			return h;
		case 113:
			var h1 = new haxe.ds.IntMap();
			this.cache.push(h1);
			var buf3 = this.buf;
			var c2 = this.get(this.pos++);
			while(c2 == 58) {
				var i = this.readDigits();
				h1.set(i,this.unserialize());
				c2 = this.get(this.pos++);
			}
			if(c2 != 104) throw "Invalid IntMap format";
			return h1;
		case 77:
			var h2 = new haxe.ds.ObjectMap();
			this.cache.push(h2);
			var buf4 = this.buf;
			while(this.buf.charCodeAt(this.pos) != 104) {
				var s2 = this.unserialize();
				h2.set(s2,this.unserialize());
			}
			this.pos++;
			return h2;
		case 118:
			var d;
			var s3 = HxOverrides.substr(this.buf,this.pos,19);
			d = HxOverrides.strDate(s3);
			this.cache.push(d);
			this.pos += 19;
			return d;
		case 115:
			var len1 = this.readDigits();
			var buf5 = this.buf;
			if(this.get(this.pos++) != 58 || this.length - this.pos < len1) throw "Invalid bytes length";
			var codes = haxe.Unserializer.CODES;
			if(codes == null) {
				codes = haxe.Unserializer.initCodes();
				haxe.Unserializer.CODES = codes;
			}
			var i1 = this.pos;
			var rest = len1 & 3;
			var size;
			size = (len1 >> 2) * 3 + (rest >= 2?rest - 1:0);
			var max = i1 + (len1 - rest);
			var bytes = haxe.io.Bytes.alloc(size);
			var bpos = 0;
			while(i1 < max) {
				var c11 = codes[StringTools.fastCodeAt(buf5,i1++)];
				var c21 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c11 << 2 | c21 >> 4);
				var c3 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c21 << 4 | c3 >> 2);
				var c4 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c3 << 6 | c4);
			}
			if(rest >= 2) {
				var c12 = codes[StringTools.fastCodeAt(buf5,i1++)];
				var c22 = codes[StringTools.fastCodeAt(buf5,i1++)];
				bytes.set(bpos++,c12 << 2 | c22 >> 4);
				if(rest == 3) {
					var c31 = codes[StringTools.fastCodeAt(buf5,i1++)];
					bytes.set(bpos++,c22 << 4 | c31 >> 2);
				}
			}
			this.pos += len1;
			this.cache.push(bytes);
			return bytes;
		case 67:
			var name3 = this.unserialize();
			var cl1 = this.resolver.resolveClass(name3);
			if(cl1 == null) throw "Class not found " + name3;
			var o2 = Type.createEmptyInstance(cl1);
			this.cache.push(o2);
			o2.hxUnserialize(this);
			if(this.get(this.pos++) != 103) throw "Invalid custom data";
			return o2;
		default:
		}
		this.pos--;
		throw "Invalid char " + this.buf.charAt(this.pos) + " at position " + this.pos;
	}
	,__class__: haxe.Unserializer
};
haxe.crypto = {};
haxe.crypto.BaseCode = function(base) {
	var len = base.length;
	var nbits = 1;
	while(len > 1 << nbits) nbits++;
	if(nbits > 8 || len != 1 << nbits) throw "BaseCode : base length must be a power of two.";
	this.base = base;
	this.nbits = nbits;
};
$hxClasses["haxe.crypto.BaseCode"] = haxe.crypto.BaseCode;
haxe.crypto.BaseCode.__name__ = ["haxe","crypto","BaseCode"];
haxe.crypto.BaseCode.prototype = {
	encodeBytes: function(b) {
		var nbits = this.nbits;
		var base = this.base;
		var size = b.length * 8 / nbits | 0;
		var out = haxe.io.Bytes.alloc(size + (b.length * 8 % nbits == 0?0:1));
		var buf = 0;
		var curbits = 0;
		var mask = (1 << nbits) - 1;
		var pin = 0;
		var pout = 0;
		while(pout < size) {
			while(curbits < nbits) {
				curbits += 8;
				buf <<= 8;
				buf |= b.get(pin++);
			}
			curbits -= nbits;
			out.set(pout++,base.b[buf >> curbits & mask]);
		}
		if(curbits > 0) out.set(pout++,base.b[buf << nbits - curbits & mask]);
		return out;
	}
	,__class__: haxe.crypto.BaseCode
};
haxe.ds = {};
haxe.ds.IntMap = function() {
	this.h = { };
};
$hxClasses["haxe.ds.IntMap"] = haxe.ds.IntMap;
haxe.ds.IntMap.__name__ = ["haxe","ds","IntMap"];
haxe.ds.IntMap.__interfaces__ = [IMap];
haxe.ds.IntMap.prototype = {
	set: function(key,value) {
		this.h[key] = value;
	}
	,__class__: haxe.ds.IntMap
};
haxe.ds.ObjectMap = function() {
	this.h = { };
	this.h.__keys__ = { };
};
$hxClasses["haxe.ds.ObjectMap"] = haxe.ds.ObjectMap;
haxe.ds.ObjectMap.__name__ = ["haxe","ds","ObjectMap"];
haxe.ds.ObjectMap.__interfaces__ = [IMap];
haxe.ds.ObjectMap.prototype = {
	set: function(key,value) {
		var id = key.__id__ || (key.__id__ = ++haxe.ds.ObjectMap.count);
		this.h[id] = value;
		this.h.__keys__[id] = key;
	}
	,__class__: haxe.ds.ObjectMap
};
haxe.ds.StringMap = function() {
	this.h = { };
};
$hxClasses["haxe.ds.StringMap"] = haxe.ds.StringMap;
haxe.ds.StringMap.__name__ = ["haxe","ds","StringMap"];
haxe.ds.StringMap.__interfaces__ = [IMap];
haxe.ds.StringMap.prototype = {
	set: function(key,value) {
		this.h["$" + key] = value;
	}
	,get: function(key) {
		return this.h["$" + key];
	}
	,exists: function(key) {
		return this.h.hasOwnProperty("$" + key);
	}
	,remove: function(key) {
		key = "$" + key;
		if(!this.h.hasOwnProperty(key)) return false;
		delete(this.h[key]);
		return true;
	}
	,keys: function() {
		var a = [];
		for( var key in this.h ) {
		if(this.h.hasOwnProperty(key)) a.push(key.substr(1));
		}
		return HxOverrides.iter(a);
	}
	,iterator: function() {
		return { ref : this.h, it : this.keys(), hasNext : function() {
			return this.it.hasNext();
		}, next : function() {
			var i = this.it.next();
			return this.ref["$" + i];
		}};
	}
	,__class__: haxe.ds.StringMap
};
haxe.ds._Vector = {};
haxe.ds._Vector.Vector_Impl_ = function() { };
$hxClasses["haxe.ds._Vector.Vector_Impl_"] = haxe.ds._Vector.Vector_Impl_;
haxe.ds._Vector.Vector_Impl_.__name__ = ["haxe","ds","_Vector","Vector_Impl_"];
haxe.ds._Vector.Vector_Impl_.blit = function(src,srcPos,dest,destPos,len) {
	var _g = 0;
	while(_g < len) {
		var i = _g++;
		dest[destPos + i] = src[srcPos + i];
	}
};
haxe.ds._Vector.Vector_Impl_.toArray = function(this1) {
	var a = new Array();
	var len = this1.length;
	var _g = 0;
	while(_g < len) {
		var i = _g++;
		a[i] = this1[i];
	}
	return a;
};
haxe.io = {};
haxe.io.Bytes = function(length,b) {
	this.length = length;
	this.b = b;
};
$hxClasses["haxe.io.Bytes"] = haxe.io.Bytes;
haxe.io.Bytes.__name__ = ["haxe","io","Bytes"];
haxe.io.Bytes.alloc = function(length) {
	var a = new Array();
	var _g = 0;
	while(_g < length) {
		var i = _g++;
		a.push(0);
	}
	return new haxe.io.Bytes(length,a);
};
haxe.io.Bytes.ofString = function(s) {
	var a = new Array();
	var i = 0;
	while(i < s.length) {
		var c = StringTools.fastCodeAt(s,i++);
		if(55296 <= c && c <= 56319) c = c - 55232 << 10 | StringTools.fastCodeAt(s,i++) & 1023;
		if(c <= 127) a.push(c); else if(c <= 2047) {
			a.push(192 | c >> 6);
			a.push(128 | c & 63);
		} else if(c <= 65535) {
			a.push(224 | c >> 12);
			a.push(128 | c >> 6 & 63);
			a.push(128 | c & 63);
		} else {
			a.push(240 | c >> 18);
			a.push(128 | c >> 12 & 63);
			a.push(128 | c >> 6 & 63);
			a.push(128 | c & 63);
		}
	}
	return new haxe.io.Bytes(a.length,a);
};
haxe.io.Bytes.ofData = function(b) {
	return new haxe.io.Bytes(b.length,b);
};
haxe.io.Bytes.prototype = {
	get: function(pos) {
		return this.b[pos];
	}
	,set: function(pos,v) {
		this.b[pos] = v & 255;
	}
	,getString: function(pos,len) {
		if(pos < 0 || len < 0 || pos + len > this.length) throw haxe.io.Error.OutsideBounds;
		var s = "";
		var b = this.b;
		var fcc = String.fromCharCode;
		var i = pos;
		var max = pos + len;
		while(i < max) {
			var c = b[i++];
			if(c < 128) {
				if(c == 0) break;
				s += fcc(c);
			} else if(c < 224) s += fcc((c & 63) << 6 | b[i++] & 127); else if(c < 240) {
				var c2 = b[i++];
				s += fcc((c & 31) << 12 | (c2 & 127) << 6 | b[i++] & 127);
			} else {
				var c21 = b[i++];
				var c3 = b[i++];
				var u = (c & 15) << 18 | (c21 & 127) << 12 | (c3 & 127) << 6 | b[i++] & 127;
				s += fcc((u >> 10) + 55232);
				s += fcc(u & 1023 | 56320);
			}
		}
		return s;
	}
	,toString: function() {
		return this.getString(0,this.length);
	}
	,__class__: haxe.io.Bytes
};
haxe.io.Eof = function() { };
$hxClasses["haxe.io.Eof"] = haxe.io.Eof;
haxe.io.Eof.__name__ = ["haxe","io","Eof"];
haxe.io.Eof.prototype = {
	toString: function() {
		return "Eof";
	}
	,__class__: haxe.io.Eof
};
haxe.io.Error = $hxClasses["haxe.io.Error"] = { __ename__ : true, __constructs__ : ["Blocked","Overflow","OutsideBounds","Custom"] };
haxe.io.Error.Blocked = ["Blocked",0];
haxe.io.Error.Blocked.toString = $estr;
haxe.io.Error.Blocked.__enum__ = haxe.io.Error;
haxe.io.Error.Overflow = ["Overflow",1];
haxe.io.Error.Overflow.toString = $estr;
haxe.io.Error.Overflow.__enum__ = haxe.io.Error;
haxe.io.Error.OutsideBounds = ["OutsideBounds",2];
haxe.io.Error.OutsideBounds.toString = $estr;
haxe.io.Error.OutsideBounds.__enum__ = haxe.io.Error;
haxe.io.Error.Custom = function(e) { var $x = ["Custom",3,e]; $x.__enum__ = haxe.io.Error; $x.toString = $estr; return $x; };
haxe.io.Path = function(path) {
	var c1 = path.lastIndexOf("/");
	var c2 = path.lastIndexOf("\\");
	if(c1 < c2) {
		this.dir = HxOverrides.substr(path,0,c2);
		path = HxOverrides.substr(path,c2 + 1,null);
		this.backslash = true;
	} else if(c2 < c1) {
		this.dir = HxOverrides.substr(path,0,c1);
		path = HxOverrides.substr(path,c1 + 1,null);
	} else this.dir = null;
	var cp = path.lastIndexOf(".");
	if(cp != -1) {
		this.ext = HxOverrides.substr(path,cp + 1,null);
		this.file = HxOverrides.substr(path,0,cp);
	} else {
		this.ext = null;
		this.file = path;
	}
};
$hxClasses["haxe.io.Path"] = haxe.io.Path;
haxe.io.Path.__name__ = ["haxe","io","Path"];
haxe.io.Path.withoutExtension = function(path) {
	var s = new haxe.io.Path(path);
	s.ext = null;
	return s.toString();
};
haxe.io.Path.prototype = {
	toString: function() {
		return (this.dir == null?"":this.dir + (this.backslash?"\\":"/")) + this.file + (this.ext == null?"":"." + this.ext);
	}
	,__class__: haxe.io.Path
};
var js = {};
js.Boot = function() { };
$hxClasses["js.Boot"] = js.Boot;
js.Boot.__name__ = ["js","Boot"];
js.Boot.__unhtml = function(s) {
	return s.split("&").join("&amp;").split("<").join("&lt;").split(">").join("&gt;");
};
js.Boot.__trace = function(v,i) {
	var msg;
	if(i != null) msg = i.fileName + ":" + i.lineNumber + ": "; else msg = "";
	msg += js.Boot.__string_rec(v,"");
	if(i != null && i.customParams != null) {
		var _g = 0;
		var _g1 = i.customParams;
		while(_g < _g1.length) {
			var v1 = _g1[_g];
			++_g;
			msg += "," + js.Boot.__string_rec(v1,"");
		}
	}
	var d;
	if(typeof(document) != "undefined" && (d = document.getElementById("haxe:trace")) != null) d.innerHTML += js.Boot.__unhtml(msg) + "<br/>"; else if(typeof console != "undefined" && console.log != null) console.log(msg);
};
js.Boot.getClass = function(o) {
	if((o instanceof Array) && o.__enum__ == null) return Array; else return o.__class__;
};
js.Boot.__string_rec = function(o,s) {
	if(o == null) return "null";
	if(s.length >= 5) return "<...>";
	var t = typeof(o);
	if(t == "function" && (o.__name__ || o.__ename__)) t = "object";
	switch(t) {
	case "object":
		if(o instanceof Array) {
			if(o.__enum__) {
				if(o.length == 2) return o[0];
				var str = o[0] + "(";
				s += "\t";
				var _g1 = 2;
				var _g = o.length;
				while(_g1 < _g) {
					var i = _g1++;
					if(i != 2) str += "," + js.Boot.__string_rec(o[i],s); else str += js.Boot.__string_rec(o[i],s);
				}
				return str + ")";
			}
			var l = o.length;
			var i1;
			var str1 = "[";
			s += "\t";
			var _g2 = 0;
			while(_g2 < l) {
				var i2 = _g2++;
				str1 += (i2 > 0?",":"") + js.Boot.__string_rec(o[i2],s);
			}
			str1 += "]";
			return str1;
		}
		var tostr;
		try {
			tostr = o.toString;
		} catch( e ) {
			return "???";
		}
		if(tostr != null && tostr != Object.toString) {
			var s2 = o.toString();
			if(s2 != "[object Object]") return s2;
		}
		var k = null;
		var str2 = "{\n";
		s += "\t";
		var hasp = o.hasOwnProperty != null;
		for( var k in o ) {
		if(hasp && !o.hasOwnProperty(k)) {
			continue;
		}
		if(k == "prototype" || k == "__class__" || k == "__super__" || k == "__interfaces__" || k == "__properties__") {
			continue;
		}
		if(str2.length != 2) str2 += ", \n";
		str2 += s + k + " : " + js.Boot.__string_rec(o[k],s);
		}
		s = s.substring(1);
		str2 += "\n" + s + "}";
		return str2;
	case "function":
		return "<function>";
	case "string":
		return o;
	default:
		return String(o);
	}
};
js.Boot.__interfLoop = function(cc,cl) {
	if(cc == null) return false;
	if(cc == cl) return true;
	var intf = cc.__interfaces__;
	if(intf != null) {
		var _g1 = 0;
		var _g = intf.length;
		while(_g1 < _g) {
			var i = _g1++;
			var i1 = intf[i];
			if(i1 == cl || js.Boot.__interfLoop(i1,cl)) return true;
		}
	}
	return js.Boot.__interfLoop(cc.__super__,cl);
};
js.Boot.__instanceof = function(o,cl) {
	if(cl == null) return false;
	switch(cl) {
	case Int:
		return (o|0) === o;
	case Float:
		return typeof(o) == "number";
	case Bool:
		return typeof(o) == "boolean";
	case String:
		return typeof(o) == "string";
	case Array:
		return (o instanceof Array) && o.__enum__ == null;
	case Dynamic:
		return true;
	default:
		if(o != null) {
			if(typeof(cl) == "function") {
				if(o instanceof cl) return true;
				if(js.Boot.__interfLoop(js.Boot.getClass(o),cl)) return true;
			}
		} else return false;
		if(cl == Class && o.__name__ != null) return true;
		if(cl == Enum && o.__ename__ != null) return true;
		return o.__enum__ == cl;
	}
};
js.Boot.__cast = function(o,t) {
	if(js.Boot.__instanceof(o,t)) return o; else throw "Cannot cast " + Std.string(o) + " to " + Std.string(t);
};
var net = {};
net.hires = {};
net.hires.debug = {};
net.hires.debug.Stats = function() {
	openfl.display.Sprite.call(this);
	this.mem_max = 0;
	this.fps = 0;
	this.cacheCount = 0;
	this.times = [];
	var format = new openfl.text.TextFormat("_sans",10,14413891);
	this.text = new openfl.text.TextField();
	this.text.set_defaultTextFormat(format);
	this.text.selectable = false;
	this.text.set_background(false);
	this.text.multiline = true;
	this._rectangle = new openfl.geom.Rectangle(0,0,100,30);
	this.addEventListener(openfl.events.Event.ADDED_TO_STAGE,$bind(this,this.init));
	this.addEventListener(openfl.events.Event.REMOVED_FROM_STAGE,$bind(this,this.destroy));
};
$hxClasses["net.hires.debug.Stats"] = net.hires.debug.Stats;
net.hires.debug.Stats.__name__ = ["net","hires","debug","Stats"];
net.hires.debug.Stats.__super__ = openfl.display.Sprite;
net.hires.debug.Stats.prototype = $extend(openfl.display.Sprite.prototype,{
	init: function(e) {
		this._stage = openfl.Lib.current.stage;
		this.get_graphics().beginFill(51);
		this.get_graphics().drawRect(0,0,100,30);
		this.get_graphics().endFill();
		this.addChild(this.text);
		this.graph = new openfl.display.BitmapData(100,30,false,51);
		this.get_graphics().beginBitmapFill(this.graph,new openfl.geom.Matrix(1,0,0,1,0,30));
		this.get_graphics().drawRect(0,30,100,30);
		this.get_graphics().endFill();
		this.addEventListener(openfl.events.Event.ENTER_FRAME,$bind(this,this.update));
	}
	,destroy: function(e) {
		this.get_graphics().clear();
		while(this.get_numChildren() > 0) this.removeChildAt(0);
		this.graph.dispose();
		this.removeEventListener(openfl.events.Event.ENTER_FRAME,$bind(this,this.update));
	}
	,update: function(e) {
		var currentTime = haxe.Timer.stamp();
		this.times.push(currentTime);
		while(this.times[0] < currentTime - 1) this.times.shift();
		var currentCount = this.times.length;
		this.currentFPS = Math.round((currentCount + this.cacheCount) / 2);
		this.timer = openfl.Lib.getTimer();
		if(this.timer - 1000 > this.ms_prev) {
			this.fps_graph = 30 - Std["int"](Math.min(30,this.fps / this._stage.frameRate * 30));
			this.graph.scroll(-1,0);
			this.graph.fillRect(this._rectangle,51);
			this.graph.lock();
			this.graph.setPixel(98,this.fps_graph,16776960);
			this.graph.unlock();
			this.fps = 0;
			this.ms_prev = this.timer;
			return;
		}
		this.fps++;
		this.ms = this.timer;
		this.text.set_text("FPS: " + this.fps + " / " + this.currentFPS);
		this.cacheCount = currentCount;
	}
	,normalizeMem: function(_mem) {
		return Std["int"](Math.min(30,Math.sqrt(Math.sqrt(_mem * 5000))) - 2);
	}
	,__class__: net.hires.debug.Stats
});
net.hires.debug.Colors = function() { };
$hxClasses["net.hires.debug.Colors"] = net.hires.debug.Colors;
net.hires.debug.Colors.__name__ = ["net","hires","debug","Colors"];
openfl.AssetCache = function() {
	this.enabled = true;
	this.bitmapData = new haxe.ds.StringMap();
	this.font = new haxe.ds.StringMap();
	this.sound = new haxe.ds.StringMap();
};
$hxClasses["openfl.AssetCache"] = openfl.AssetCache;
openfl.AssetCache.__name__ = ["openfl","AssetCache"];
openfl.AssetCache.prototype = {
	clear: function(prefix) {
		if(prefix == null) {
			this.bitmapData = new haxe.ds.StringMap();
			this.font = new haxe.ds.StringMap();
			this.sound = new haxe.ds.StringMap();
		} else {
			var keys = this.bitmapData.keys();
			while( keys.hasNext() ) {
				var key = keys.next();
				if(StringTools.startsWith(key,prefix)) this.bitmapData.remove(key);
			}
			var keys1 = this.font.keys();
			while( keys1.hasNext() ) {
				var key1 = keys1.next();
				if(StringTools.startsWith(key1,prefix)) this.font.remove(key1);
			}
			var keys2 = this.sound.keys();
			while( keys2.hasNext() ) {
				var key2 = keys2.next();
				if(StringTools.startsWith(key2,prefix)) this.sound.remove(key2);
			}
		}
	}
	,__class__: openfl.AssetCache
};
openfl.Assets = function() { };
$hxClasses["openfl.Assets"] = openfl.Assets;
openfl.Assets.__name__ = ["openfl","Assets"];
openfl.Assets.addEventListener = function(type,listener,useCapture,priority,useWeakReference) {
	if(useWeakReference == null) useWeakReference = false;
	if(priority == null) priority = 0;
	if(useCapture == null) useCapture = false;
	openfl.Assets.initialize();
	openfl.Assets.dispatcher.addEventListener(type,listener,useCapture,priority,useWeakReference);
};
openfl.Assets.dispatchEvent = function(event) {
	openfl.Assets.initialize();
	return openfl.Assets.dispatcher.dispatchEvent(event);
};
openfl.Assets.exists = function(id,type) {
	openfl.Assets.initialize();
	if(type == null) type = openfl.AssetType.BINARY;
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) return library.exists(symbolName,type);
	return false;
};
openfl.Assets.getBitmapData = function(id,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.enabled && openfl.Assets.cache.bitmapData.exists(id)) {
		var bitmapData = openfl.Assets.cache.bitmapData.get(id);
		if(openfl.Assets.isValidBitmapData(bitmapData)) return bitmapData;
	}
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.IMAGE)) {
			if(library.isLocal(symbolName,openfl.AssetType.IMAGE)) {
				var bitmapData1 = library.getBitmapData(symbolName);
				if(useCache && openfl.Assets.cache.enabled) openfl.Assets.cache.bitmapData.set(id,bitmapData1);
				return bitmapData1;
			} else haxe.Log.trace("[openfl.Assets] BitmapData asset \"" + id + "\" exists, but only asynchronously",{ fileName : "Assets.hx", lineNumber : 139, className : "openfl.Assets", methodName : "getBitmapData"});
		} else haxe.Log.trace("[openfl.Assets] There is no BitmapData asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 145, className : "openfl.Assets", methodName : "getBitmapData"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 151, className : "openfl.Assets", methodName : "getBitmapData"});
	return null;
};
openfl.Assets.getBytes = function(id) {
	openfl.Assets.initialize();
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.BINARY)) {
			if(library.isLocal(symbolName,openfl.AssetType.BINARY)) return library.getBytes(symbolName); else haxe.Log.trace("[openfl.Assets] String or ByteArray asset \"" + id + "\" exists, but only asynchronously",{ fileName : "Assets.hx", lineNumber : 188, className : "openfl.Assets", methodName : "getBytes"});
		} else haxe.Log.trace("[openfl.Assets] There is no String or ByteArray asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 194, className : "openfl.Assets", methodName : "getBytes"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 200, className : "openfl.Assets", methodName : "getBytes"});
	return null;
};
openfl.Assets.getFont = function(id,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.enabled && openfl.Assets.cache.font.exists(id)) return openfl.Assets.cache.font.get(id);
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.FONT)) {
			if(library.isLocal(symbolName,openfl.AssetType.FONT)) {
				var font = library.getFont(symbolName);
				if(useCache && openfl.Assets.cache.enabled) openfl.Assets.cache.font.set(id,font);
				return font;
			} else haxe.Log.trace("[openfl.Assets] Font asset \"" + id + "\" exists, but only asynchronously",{ fileName : "Assets.hx", lineNumber : 251, className : "openfl.Assets", methodName : "getFont"});
		} else haxe.Log.trace("[openfl.Assets] There is no Font asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 257, className : "openfl.Assets", methodName : "getFont"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 263, className : "openfl.Assets", methodName : "getFont"});
	return null;
};
openfl.Assets.getLibrary = function(name) {
	if(name == null || name == "") name = "default";
	return openfl.Assets.libraries.get(name);
};
openfl.Assets.getMovieClip = function(id) {
	openfl.Assets.initialize();
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.MOVIE_CLIP)) {
			if(library.isLocal(symbolName,openfl.AssetType.MOVIE_CLIP)) return library.getMovieClip(symbolName); else haxe.Log.trace("[openfl.Assets] MovieClip asset \"" + id + "\" exists, but only asynchronously",{ fileName : "Assets.hx", lineNumber : 313, className : "openfl.Assets", methodName : "getMovieClip"});
		} else haxe.Log.trace("[openfl.Assets] There is no MovieClip asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 319, className : "openfl.Assets", methodName : "getMovieClip"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 325, className : "openfl.Assets", methodName : "getMovieClip"});
	return null;
};
openfl.Assets.getMusic = function(id,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.enabled && openfl.Assets.cache.sound.exists(id)) {
		var sound = openfl.Assets.cache.sound.get(id);
		if(openfl.Assets.isValidSound(sound)) return sound;
	}
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.MUSIC)) {
			if(library.isLocal(symbolName,openfl.AssetType.MUSIC)) {
				var sound1 = library.getMusic(symbolName);
				if(useCache && openfl.Assets.cache.enabled) openfl.Assets.cache.sound.set(id,sound1);
				return sound1;
			} else haxe.Log.trace("[openfl.Assets] Sound asset \"" + id + "\" exists, but only asynchronously",{ fileName : "Assets.hx", lineNumber : 382, className : "openfl.Assets", methodName : "getMusic"});
		} else haxe.Log.trace("[openfl.Assets] There is no Sound asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 388, className : "openfl.Assets", methodName : "getMusic"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 394, className : "openfl.Assets", methodName : "getMusic"});
	return null;
};
openfl.Assets.getPath = function(id) {
	openfl.Assets.initialize();
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,null)) return library.getPath(symbolName); else haxe.Log.trace("[openfl.Assets] There is no asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 429, className : "openfl.Assets", methodName : "getPath"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 435, className : "openfl.Assets", methodName : "getPath"});
	return null;
};
openfl.Assets.getSound = function(id,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.enabled && openfl.Assets.cache.sound.exists(id)) {
		var sound = openfl.Assets.cache.sound.get(id);
		if(openfl.Assets.isValidSound(sound)) return sound;
	}
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.SOUND)) {
			if(library.isLocal(symbolName,openfl.AssetType.SOUND)) {
				var sound1 = library.getSound(symbolName);
				if(useCache && openfl.Assets.cache.enabled) openfl.Assets.cache.sound.set(id,sound1);
				return sound1;
			} else haxe.Log.trace("[openfl.Assets] Sound asset \"" + id + "\" exists, but only asynchronously",{ fileName : "Assets.hx", lineNumber : 492, className : "openfl.Assets", methodName : "getSound"});
		} else haxe.Log.trace("[openfl.Assets] There is no Sound asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 498, className : "openfl.Assets", methodName : "getSound"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 504, className : "openfl.Assets", methodName : "getSound"});
	return null;
};
openfl.Assets.getText = function(id) {
	openfl.Assets.initialize();
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.TEXT)) {
			if(library.isLocal(symbolName,openfl.AssetType.TEXT)) return library.getText(symbolName); else haxe.Log.trace("[openfl.Assets] String asset \"" + id + "\" exists, but only asynchronously",{ fileName : "Assets.hx", lineNumber : 541, className : "openfl.Assets", methodName : "getText"});
		} else haxe.Log.trace("[openfl.Assets] There is no String asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 547, className : "openfl.Assets", methodName : "getText"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 553, className : "openfl.Assets", methodName : "getText"});
	return null;
};
openfl.Assets.hasEventListener = function(type) {
	openfl.Assets.initialize();
	return openfl.Assets.dispatcher.hasEventListener(type);
};
openfl.Assets.initialize = function() {
	if(!openfl.Assets.initialized) {
		openfl.Assets.registerLibrary("default",new DefaultAssetLibrary());
		openfl.Assets.initialized = true;
	}
};
openfl.Assets.isLocal = function(id,type,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.enabled) {
		if(type == openfl.AssetType.IMAGE || type == null) {
			if(openfl.Assets.cache.bitmapData.exists(id)) return true;
		}
		if(type == openfl.AssetType.FONT || type == null) {
			if(openfl.Assets.cache.font.exists(id)) return true;
		}
		if(type == openfl.AssetType.SOUND || type == openfl.AssetType.MUSIC || type == null) {
			if(openfl.Assets.cache.sound.exists(id)) return true;
		}
	}
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) return library.isLocal(symbolName,type);
	return false;
};
openfl.Assets.isValidBitmapData = function(bitmapData) {
	return bitmapData.__sourceImage != null || bitmapData.__sourceCanvas != null;
	return true;
};
openfl.Assets.isValidSound = function(sound) {
	return true;
};
openfl.Assets.list = function(type) {
	openfl.Assets.initialize();
	var items = [];
	var $it0 = openfl.Assets.libraries.iterator();
	while( $it0.hasNext() ) {
		var library = $it0.next();
		var libraryItems = library.list(type);
		if(libraryItems != null) items = items.concat(libraryItems);
	}
	return items;
};
openfl.Assets.loadBitmapData = function(id,handler,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.enabled && openfl.Assets.cache.bitmapData.exists(id)) {
		var bitmapData = openfl.Assets.cache.bitmapData.get(id);
		if(openfl.Assets.isValidBitmapData(bitmapData)) {
			handler(bitmapData);
			return;
		}
	}
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.IMAGE)) {
			if(useCache && openfl.Assets.cache.enabled) library.loadBitmapData(symbolName,function(bitmapData1) {
				openfl.Assets.cache.bitmapData.set(id,bitmapData1);
				handler(bitmapData1);
			}); else library.loadBitmapData(symbolName,handler);
			return;
		} else haxe.Log.trace("[openfl.Assets] There is no BitmapData asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 750, className : "openfl.Assets", methodName : "loadBitmapData"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 756, className : "openfl.Assets", methodName : "loadBitmapData"});
	handler(null);
};
openfl.Assets.loadBytes = function(id,handler) {
	openfl.Assets.initialize();
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.BINARY)) {
			library.loadBytes(symbolName,handler);
			return;
		} else haxe.Log.trace("[openfl.Assets] There is no String or ByteArray asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 786, className : "openfl.Assets", methodName : "loadBytes"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 792, className : "openfl.Assets", methodName : "loadBytes"});
	handler(null);
};
openfl.Assets.loadFont = function(id,handler,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.enabled && openfl.Assets.cache.font.exists(id)) {
		handler(openfl.Assets.cache.font.get(id));
		return;
	}
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.FONT)) {
			if(useCache && openfl.Assets.cache.enabled) library.loadFont(symbolName,function(font) {
				openfl.Assets.cache.font.set(id,font);
				handler(font);
			}); else library.loadFont(symbolName,handler);
			return;
		} else haxe.Log.trace("[openfl.Assets] There is no Font asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 843, className : "openfl.Assets", methodName : "loadFont"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 849, className : "openfl.Assets", methodName : "loadFont"});
	handler(null);
};
openfl.Assets.loadLibrary = function(name,handler) {
	openfl.Assets.initialize();
	var data = openfl.Assets.getText("libraries/" + name + ".dat");
	if(data != null && data != "") {
		var unserializer = new haxe.Unserializer(data);
		unserializer.setResolver({ resolveEnum : openfl.Assets.resolveEnum, resolveClass : openfl.Assets.resolveClass});
		var library = unserializer.unserialize();
		openfl.Assets.libraries.set(name,library);
		library.eventCallback = openfl.Assets.library_onEvent;
		library.load(handler);
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + name + "\"",{ fileName : "Assets.hx", lineNumber : 880, className : "openfl.Assets", methodName : "loadLibrary"});
};
openfl.Assets.loadMusic = function(id,handler,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.enabled && openfl.Assets.cache.sound.exists(id)) {
		var sound = openfl.Assets.cache.sound.get(id);
		if(openfl.Assets.isValidSound(sound)) {
			handler(sound);
			return;
		}
	}
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.MUSIC)) {
			if(useCache && openfl.Assets.cache.enabled) library.loadMusic(symbolName,function(sound1) {
				openfl.Assets.cache.sound.set(id,sound1);
				handler(sound1);
			}); else library.loadMusic(symbolName,handler);
			return;
		} else haxe.Log.trace("[openfl.Assets] There is no Sound asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 935, className : "openfl.Assets", methodName : "loadMusic"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 941, className : "openfl.Assets", methodName : "loadMusic"});
	handler(null);
};
openfl.Assets.loadMovieClip = function(id,handler) {
	openfl.Assets.initialize();
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.MOVIE_CLIP)) {
			library.loadMovieClip(symbolName,handler);
			return;
		} else haxe.Log.trace("[openfl.Assets] There is no MovieClip asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 971, className : "openfl.Assets", methodName : "loadMovieClip"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 977, className : "openfl.Assets", methodName : "loadMovieClip"});
	handler(null);
};
openfl.Assets.loadSound = function(id,handler,useCache) {
	if(useCache == null) useCache = true;
	openfl.Assets.initialize();
	if(useCache && openfl.Assets.cache.enabled && openfl.Assets.cache.sound.exists(id)) {
		var sound = openfl.Assets.cache.sound.get(id);
		if(openfl.Assets.isValidSound(sound)) {
			handler(sound);
			return;
		}
	}
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.SOUND)) {
			if(useCache && openfl.Assets.cache.enabled) library.loadSound(symbolName,function(sound1) {
				openfl.Assets.cache.sound.set(id,sound1);
				handler(sound1);
			}); else library.loadSound(symbolName,handler);
			return;
		} else haxe.Log.trace("[openfl.Assets] There is no Sound asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 1034, className : "openfl.Assets", methodName : "loadSound"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 1040, className : "openfl.Assets", methodName : "loadSound"});
	handler(null);
};
openfl.Assets.loadText = function(id,handler) {
	openfl.Assets.initialize();
	var libraryName = id.substring(0,id.indexOf(":"));
	var symbolName;
	var pos = id.indexOf(":") + 1;
	symbolName = HxOverrides.substr(id,pos,null);
	var library = openfl.Assets.getLibrary(libraryName);
	if(library != null) {
		if(library.exists(symbolName,openfl.AssetType.TEXT)) {
			library.loadText(symbolName,handler);
			return;
		} else haxe.Log.trace("[openfl.Assets] There is no String asset with an ID of \"" + id + "\"",{ fileName : "Assets.hx", lineNumber : 1070, className : "openfl.Assets", methodName : "loadText"});
	} else haxe.Log.trace("[openfl.Assets] There is no asset library named \"" + libraryName + "\"",{ fileName : "Assets.hx", lineNumber : 1076, className : "openfl.Assets", methodName : "loadText"});
	handler(null);
};
openfl.Assets.registerLibrary = function(name,library) {
	if(openfl.Assets.libraries.exists(name)) openfl.Assets.unloadLibrary(name);
	if(library != null) library.eventCallback = openfl.Assets.library_onEvent;
	openfl.Assets.libraries.set(name,library);
};
openfl.Assets.removeEventListener = function(type,listener,capture) {
	if(capture == null) capture = false;
	openfl.Assets.initialize();
	openfl.Assets.dispatcher.removeEventListener(type,listener,capture);
};
openfl.Assets.resolveClass = function(name) {
	return Type.resolveClass(name);
};
openfl.Assets.resolveEnum = function(name) {
	var value = Type.resolveEnum(name);
	return value;
};
openfl.Assets.unloadLibrary = function(name) {
	openfl.Assets.initialize();
	var library = openfl.Assets.libraries.get(name);
	if(library != null) {
		openfl.Assets.cache.clear(name + ":");
		library.eventCallback = null;
	}
	openfl.Assets.libraries.remove(name);
};
openfl.Assets.library_onEvent = function(library,type) {
	if(type == "change") {
		openfl.Assets.cache.clear();
		openfl.Assets.dispatchEvent(new openfl.events.Event(openfl.events.Event.CHANGE));
	}
};
openfl.AssetData = function() {
};
$hxClasses["openfl.AssetData"] = openfl.AssetData;
openfl.AssetData.__name__ = ["openfl","AssetData"];
openfl.AssetData.prototype = {
	__class__: openfl.AssetData
};
openfl.AssetType = $hxClasses["openfl.AssetType"] = { __ename__ : true, __constructs__ : ["BINARY","FONT","IMAGE","MOVIE_CLIP","MUSIC","SOUND","TEMPLATE","TEXT"] };
openfl.AssetType.BINARY = ["BINARY",0];
openfl.AssetType.BINARY.toString = $estr;
openfl.AssetType.BINARY.__enum__ = openfl.AssetType;
openfl.AssetType.FONT = ["FONT",1];
openfl.AssetType.FONT.toString = $estr;
openfl.AssetType.FONT.__enum__ = openfl.AssetType;
openfl.AssetType.IMAGE = ["IMAGE",2];
openfl.AssetType.IMAGE.toString = $estr;
openfl.AssetType.IMAGE.__enum__ = openfl.AssetType;
openfl.AssetType.MOVIE_CLIP = ["MOVIE_CLIP",3];
openfl.AssetType.MOVIE_CLIP.toString = $estr;
openfl.AssetType.MOVIE_CLIP.__enum__ = openfl.AssetType;
openfl.AssetType.MUSIC = ["MUSIC",4];
openfl.AssetType.MUSIC.toString = $estr;
openfl.AssetType.MUSIC.__enum__ = openfl.AssetType;
openfl.AssetType.SOUND = ["SOUND",5];
openfl.AssetType.SOUND.toString = $estr;
openfl.AssetType.SOUND.__enum__ = openfl.AssetType;
openfl.AssetType.TEMPLATE = ["TEMPLATE",6];
openfl.AssetType.TEMPLATE.toString = $estr;
openfl.AssetType.TEMPLATE.__enum__ = openfl.AssetType;
openfl.AssetType.TEXT = ["TEXT",7];
openfl.AssetType.TEXT.toString = $estr;
openfl.AssetType.TEXT.__enum__ = openfl.AssetType;
openfl.Lib = function() { };
$hxClasses["openfl.Lib"] = openfl.Lib;
openfl.Lib.__name__ = ["openfl","Lib"];
openfl.Lib.current = null;
openfl.Lib["as"] = function(v,c) {
	if(js.Boot.__instanceof(v,c)) return v; else return null;
};
openfl.Lib.attach = function(name) {
	return new openfl.display.MovieClip();
};
openfl.Lib.create = function(element,width,height,backgroundColor) {
	if(width == null) width = 0;
	if(height == null) height = 0;
	
			var lastTime = 0;
			var vendors = ['ms', 'moz', 'webkit', 'o'];
			for(var x = 0; x < vendors.length && !window.requestAnimationFrame; ++x) {
				window.requestAnimationFrame = window[vendors[x]+'RequestAnimationFrame'];
				window.cancelAnimationFrame = window[vendors[x]+'CancelAnimationFrame'] 
										   || window[vendors[x]+'CancelRequestAnimationFrame'];
			}
			
			if (!window.requestAnimationFrame)
				window.requestAnimationFrame = function(callback, element) {
					var currTime = new Date().getTime();
					var timeToCall = Math.max(0, 16 - (currTime - lastTime));
					var id = window.setTimeout(function() { callback(currTime + timeToCall); }, 
					  timeToCall);
					lastTime = currTime + timeToCall;
					return id;
				};
			
			if (!window.cancelAnimationFrame)
				window.cancelAnimationFrame = function(id) {
					clearTimeout(id);
				};
			
			window.requestAnimFrame = window.requestAnimationFrame;
		;
	var stage = new openfl.display.Stage(width,height,element,backgroundColor);
	if(openfl.Lib.current == null) {
		openfl.Lib.current = new openfl.display.MovieClip();
		stage.addChild(openfl.Lib.current);
	}
};
openfl.Lib.getTimer = function() {
	return Std["int"]((haxe.Timer.stamp() - openfl.Lib.__startTime) * 1000);
};
openfl.Lib.getURL = function(request,target) {
	if(target == null) target = "_blank";
	window.open(request.url,target);
};
openfl.Lib.notImplemented = function(api) {
	if(!openfl.Lib.__sentWarnings.exists(api)) {
		openfl.Lib.__sentWarnings.set(api,true);
		haxe.Log.trace("Warning: " + api + " is not implemented",{ fileName : "Lib.hx", lineNumber : 114, className : "openfl.Lib", methodName : "notImplemented"});
	}
};
openfl.Lib.preventDefaultTouchMove = function() {
	window.document.addEventListener("touchmove",function(evt) {
		evt.preventDefault();
	},false);
};
openfl.Lib.trace = function(arg) {
	haxe.Log.trace(arg,{ fileName : "Lib.hx", lineNumber : 134, className : "openfl.Lib", methodName : "trace"});
};
openfl.Memory = function() { };
$hxClasses["openfl.Memory"] = openfl.Memory;
openfl.Memory.__name__ = ["openfl","Memory"];
openfl.Memory.gcRef = null;
openfl.Memory.len = null;
openfl.Memory._setPositionTemporarily = function(position,action) {
	var oldPosition = openfl.Memory.gcRef.position;
	openfl.Memory.gcRef.position = position;
	var value = action();
	openfl.Memory.gcRef.position = oldPosition;
	return value;
};
openfl.Memory.getByte = function(addr) {
	return openfl.Memory.gcRef.__get(addr);
};
openfl.Memory.getDouble = function(addr) {
	return openfl.Memory._setPositionTemporarily(addr,function() {
		return openfl.Memory.gcRef.readDouble();
	});
};
openfl.Memory.getFloat = function(addr) {
	return openfl.Memory._setPositionTemporarily(addr,function() {
		return openfl.Memory.gcRef.readFloat();
	});
};
openfl.Memory.getI32 = function(addr) {
	return openfl.Memory._setPositionTemporarily(addr,function() {
		return openfl.Memory.gcRef.readInt();
	});
};
openfl.Memory.getUI16 = function(addr) {
	return openfl.Memory._setPositionTemporarily(addr,function() {
		return openfl.Memory.gcRef.readUnsignedShort();
	});
};
openfl.Memory.select = function(inBytes) {
	openfl.Memory.gcRef = inBytes;
	if(inBytes != null) openfl.Memory.len = inBytes.length; else openfl.Memory.len = 0;
};
openfl.Memory.setByte = function(addr,v) {
	openfl.Memory.gcRef.__set(addr,v);
};
openfl.Memory.setDouble = function(addr,v) {
	openfl.Memory._setPositionTemporarily(addr,function() {
		openfl.Memory.gcRef.writeDouble(v);
	});
};
openfl.Memory.setFloat = function(addr,v) {
	openfl.Memory._setPositionTemporarily(addr,function() {
		openfl.Memory.gcRef.writeFloat(v);
	});
};
openfl.Memory.setI16 = function(addr,v) {
	openfl.Memory._setPositionTemporarily(addr,function() {
		openfl.Memory.gcRef.writeUnsignedShort(v);
	});
};
openfl.Memory.setI32 = function(addr,v) {
	openfl.Memory._setPositionTemporarily(addr,function() {
		openfl.Memory.gcRef.writeInt(v);
	});
};
openfl._Vector = {};
openfl._Vector.Vector_Impl_ = function() { };
$hxClasses["openfl._Vector.Vector_Impl_"] = openfl._Vector.Vector_Impl_;
openfl._Vector.Vector_Impl_.__name__ = ["openfl","_Vector","Vector_Impl_"];
openfl._Vector.Vector_Impl_.__properties__ = {set_fixed:"set_fixed",get_fixed:"get_fixed",set_length:"set_length",get_length:"get_length"}
openfl._Vector.Vector_Impl_._new = function(length,fixed) {
	if(fixed == null) fixed = false;
	if(length == null) length = 0;
	var this1;
	this1 = new openfl.VectorData();
	var this2;
	this2 = new Array(length);
	this1.data = this2;
	this1.length = length;
	this1.fixed = fixed;
	return this1;
};
openfl._Vector.Vector_Impl_.concat = function(this1,a) {
	var vectorData = new openfl.VectorData();
	if(a != null) vectorData.length = this1.length + a.length; else vectorData.length = this1.length;
	vectorData.fixed = false;
	var this2;
	this2 = new Array(vectorData.length);
	vectorData.data = this2;
	haxe.ds._Vector.Vector_Impl_.blit(this1.data,0,vectorData.data,0,this1.length);
	if(a != null) haxe.ds._Vector.Vector_Impl_.blit(a.data,0,vectorData.data,this1.length,a.length);
	return vectorData;
};
openfl._Vector.Vector_Impl_.copy = function(this1) {
	var vectorData = new openfl.VectorData();
	vectorData.length = this1.length;
	vectorData.fixed = this1.fixed;
	var this2;
	this2 = new Array(this1.length);
	vectorData.data = this2;
	haxe.ds._Vector.Vector_Impl_.blit(this1.data,0,vectorData.data,0,this1.length);
	return vectorData;
};
openfl._Vector.Vector_Impl_.iterator = function(this1) {
	return new openfl.VectorDataIterator(this1);
};
openfl._Vector.Vector_Impl_.join = function(this1,sep) {
	var output = "";
	var _g1 = 0;
	var _g = this1.length;
	while(_g1 < _g) {
		var i = _g1++;
		if(i > 0) output += sep;
		output += Std.string(this1.data[i]);
	}
	return output;
};
openfl._Vector.Vector_Impl_.pop = function(this1) {
	if(!this1.fixed) {
		if(this1.length > 0) {
			this1.length--;
			return this1.data[this1.length];
		}
	}
	return null;
};
openfl._Vector.Vector_Impl_.push = function(this1,x) {
	if(!this1.fixed) {
		this1.length++;
		if(this1.data.length < this1.length) {
			var data;
			var this2;
			this2 = new Array(this1.data.length + 10);
			data = this2;
			haxe.ds._Vector.Vector_Impl_.blit(this1.data,0,data,0,this1.data.length);
			this1.data = data;
		}
		this1.data[this1.length - 1] = x;
	}
	return this1.length;
};
openfl._Vector.Vector_Impl_.reverse = function(this1) {
	var data;
	var this2;
	this2 = new Array(this1.length);
	data = this2;
	var _g1 = 0;
	var _g = this1.length;
	while(_g1 < _g) {
		var i = _g1++;
		data[this1.length - 1 - i] = this1.data[i];
	}
	this1.data = data;
};
openfl._Vector.Vector_Impl_.shift = function(this1) {
	if(!this1.fixed && this1.length > 0) {
		var value = this1.data[0];
		this1.length--;
		haxe.ds._Vector.Vector_Impl_.blit(this1.data,1,this1.data,0,this1.length);
		return value;
	}
	return null;
};
openfl._Vector.Vector_Impl_.unshift = function(this1,x) {
	if(!this1.fixed) {
		this1.length++;
		if(this1.data.length < this1.length) {
			var data;
			var this2;
			this2 = new Array(this1.length + 10);
			data = this2;
			haxe.ds._Vector.Vector_Impl_.blit(this1.data,0,data,1,this1.data.length);
			this1.data = data;
		} else haxe.ds._Vector.Vector_Impl_.blit(this1.data,0,this1.data,1,this1.length - 1);
		this1.data[0] = x;
	}
};
openfl._Vector.Vector_Impl_.slice = function(this1,pos,end) {
	if(end == null) end = 0;
	if(pos == null) pos = 0;
	if(pos < 0) pos += this1.length;
	if(end <= 0) end += this1.length;
	if(end > this1.length) end = this1.length;
	var length = end - pos;
	if(length <= 0 || length > this1.length) length = this1.length;
	var vectorData = new openfl.VectorData();
	vectorData.length = end - pos;
	vectorData.fixed = true;
	var this2;
	this2 = new Array(length);
	vectorData.data = this2;
	haxe.ds._Vector.Vector_Impl_.blit(this1.data,pos,vectorData.data,0,length);
	return vectorData;
};
openfl._Vector.Vector_Impl_.sort = function(this1,f) {
	var array = haxe.ds._Vector.Vector_Impl_.toArray(this1.data);
	array.sort(f);
	var vec;
	var this2;
	this2 = new Array(array.length);
	vec = this2;
	var _g1 = 0;
	var _g = array.length;
	while(_g1 < _g) {
		var i = _g1++;
		vec[i] = array[i];
	}
	this1.data = vec;
};
openfl._Vector.Vector_Impl_.splice = function(this1,pos,len) {
	if(pos < 0) pos += this1.length;
	if(pos + len > this1.length) len = this1.length - pos;
	if(len < 0) len = 0;
	var vectorData = new openfl.VectorData();
	vectorData.length = len;
	vectorData.fixed = false;
	var this2;
	this2 = new Array(len);
	vectorData.data = this2;
	haxe.ds._Vector.Vector_Impl_.blit(this1.data,pos,vectorData.data,0,len);
	if(len > 0) {
		this1.length -= len;
		haxe.ds._Vector.Vector_Impl_.blit(this1.data,pos + len,this1.data,pos,this1.length - pos);
	}
	return vectorData;
};
openfl._Vector.Vector_Impl_.toString = function(this1) {
	return "";
};
openfl._Vector.Vector_Impl_.indexOf = function(this1,x,from) {
	if(from == null) from = 0;
	var _g1 = from;
	var _g = this1.length;
	while(_g1 < _g) {
		var i = _g1++;
		if(this1.data[i] == x) return i;
	}
	return -1;
};
openfl._Vector.Vector_Impl_.lastIndexOf = function(this1,x,from) {
	if(from == null) from = 0;
	var i = this1.length - 1;
	while(i >= from) {
		if(this1.data[i] == x) return i;
		i--;
	}
	return -1;
};
openfl._Vector.Vector_Impl_.ofArray = function(a) {
	var vectorData = new openfl.VectorData();
	vectorData.length = a.length;
	vectorData.fixed = true;
	var vec;
	var this1;
	this1 = new Array(a.length);
	vec = this1;
	var _g1 = 0;
	var _g = a.length;
	while(_g1 < _g) {
		var i = _g1++;
		vec[i] = a[i];
	}
	vectorData.data = vec;
	return vectorData;
};
openfl._Vector.Vector_Impl_.convert = function(v) {
	return v;
};
openfl._Vector.Vector_Impl_.arrayAccess = function(this1,key) {
	return this1.data[key];
};
openfl._Vector.Vector_Impl_.arrayWrite = function(this1,key,value) {
	if(key >= this1.length && !this1.fixed) this1.length = key + 1;
	return this1.data[key] = value;
};
openfl._Vector.Vector_Impl_.fromArray = function(value) {
	var vectorData = new openfl.VectorData();
	vectorData.length = value.length;
	vectorData.fixed = true;
	var vec;
	var this1;
	this1 = new Array(value.length);
	vec = this1;
	var _g1 = 0;
	var _g = value.length;
	while(_g1 < _g) {
		var i = _g1++;
		vec[i] = value[i];
	}
	vectorData.data = vec;
	return vectorData;
};
openfl._Vector.Vector_Impl_.toArray = function(this1) {
	var value = new Array();
	var _g1 = 0;
	var _g = this1.data.length;
	while(_g1 < _g) {
		var i = _g1++;
		value.push(this1.data[i]);
	}
	return value;
};
openfl._Vector.Vector_Impl_.fromHaxeVector = function(value) {
	var vectorData = new openfl.VectorData();
	vectorData.length = value.length;
	vectorData.fixed = true;
	vectorData.data = value;
	return vectorData;
};
openfl._Vector.Vector_Impl_.toHaxeVector = function(this1) {
	return this1.data;
};
openfl._Vector.Vector_Impl_.fromVectorData = function(value) {
	return value;
};
openfl._Vector.Vector_Impl_.toVectorData = function(this1) {
	return this1;
};
openfl._Vector.Vector_Impl_.get_length = function(this1) {
	return this1.length;
};
openfl._Vector.Vector_Impl_.set_length = function(this1,value) {
	if(!this1.fixed) {
		if(value > this1.length) {
			var data;
			var this2;
			this2 = new Array(value);
			data = this2;
			haxe.ds._Vector.Vector_Impl_.blit(this1.data,0,data,0,Std["int"](Math.min(this1.data.length,value)));
			this1.data = data;
		}
		this1.length = value;
	}
	return value;
};
openfl._Vector.Vector_Impl_.get_fixed = function(this1) {
	return this1.fixed;
};
openfl._Vector.Vector_Impl_.set_fixed = function(this1,value) {
	return this1.fixed = value;
};
openfl.VectorData = function() {
	this.length = 0;
};
$hxClasses["openfl.VectorData"] = openfl.VectorData;
openfl.VectorData.__name__ = ["openfl","VectorData"];
openfl.VectorData.prototype = {
	__class__: openfl.VectorData
};
openfl.VectorDataIterator = function(data) {
	this.index = 0;
	this.vectorData = data;
};
$hxClasses["openfl.VectorDataIterator"] = openfl.VectorDataIterator;
openfl.VectorDataIterator.__name__ = ["openfl","VectorDataIterator"];
openfl.VectorDataIterator.prototype = {
	hasNext: function() {
		return this.index < this.vectorData.length;
	}
	,next: function() {
		var index = this.index++;
		return this.vectorData.data[index];
	}
	,__class__: openfl.VectorDataIterator
};
openfl.display.Bitmap = function(bitmapData,pixelSnapping,smoothing) {
	if(smoothing == null) smoothing = false;
	openfl.display.DisplayObjectContainer.call(this);
	this.bitmapData = bitmapData;
	this.pixelSnapping = pixelSnapping;
	this.smoothing = smoothing;
	if(pixelSnapping == null) this.pixelSnapping = openfl.display.PixelSnapping.AUTO;
};
$hxClasses["openfl.display.Bitmap"] = openfl.display.Bitmap;
openfl.display.Bitmap.__name__ = ["openfl","display","Bitmap"];
openfl.display.Bitmap.__super__ = openfl.display.DisplayObjectContainer;
openfl.display.Bitmap.prototype = $extend(openfl.display.DisplayObjectContainer.prototype,{
	__getBounds: function(rect,matrix) {
		if(this.bitmapData != null) {
			var bounds = new openfl.geom.Rectangle(0,0,this.bitmapData.width,this.bitmapData.height);
			bounds = bounds.transform(this.__worldTransform);
			rect.__expand(bounds.x,bounds.y,bounds.width,bounds.height);
		}
	}
	,__hitTest: function(x,y,shapeFlag,stack,interactiveOnly) {
		if(!this.get_visible() || this.bitmapData == null) return false;
		var point = this.globalToLocal(new openfl.geom.Point(x,y));
		if(point.x > 0 && point.y > 0 && point.x <= this.bitmapData.width && point.y <= this.bitmapData.height) {
			if(stack != null) stack.push(this);
			return true;
		}
		return false;
	}
	,__renderCanvas: function(renderSession) {
		if(!this.__renderable || this.__worldAlpha <= 0) return;
		var context = renderSession.context;
		if(this.bitmapData != null && this.bitmapData.__valid) {
			if(this.__mask != null) renderSession.maskManager.pushMask(this.__mask);
			this.bitmapData.__syncImageData();
			context.globalAlpha = this.__worldAlpha;
			var transform = this.__worldTransform;
			if(renderSession.roundPixels) context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx | 0,transform.ty | 0); else context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx,transform.ty);
			if(!this.smoothing) {
				context.mozImageSmoothingEnabled = false;
				context.webkitImageSmoothingEnabled = false;
				context.imageSmoothingEnabled = false;
			}
			if(this.get_scrollRect() == null) {
				if(this.bitmapData.__sourceImage != null) context.drawImage(this.bitmapData.__sourceImage,0,0); else context.drawImage(this.bitmapData.__sourceCanvas,0,0);
			} else if(this.bitmapData.__sourceImage != null) context.drawImage(this.bitmapData.__sourceImage,this.get_scrollRect().x,this.get_scrollRect().y,this.get_scrollRect().width,this.get_scrollRect().height,this.get_scrollRect().x,this.get_scrollRect().y,this.get_scrollRect().width,this.get_scrollRect().height); else context.drawImage(this.bitmapData.__sourceCanvas,this.get_scrollRect().x,this.get_scrollRect().y,this.get_scrollRect().width,this.get_scrollRect().height,this.get_scrollRect().x,this.get_scrollRect().y,this.get_scrollRect().width,this.get_scrollRect().height);
			if(!this.smoothing) {
				context.mozImageSmoothingEnabled = true;
				context.webkitImageSmoothingEnabled = true;
				context.imageSmoothingEnabled = true;
			}
			if(this.__mask != null) renderSession.maskManager.popMask();
		}
	}
	,__renderDOM: function(renderSession) {
		if(this.stage != null && this.__worldVisible && this.__renderable && this.bitmapData != null && this.bitmapData.__valid) {
			if(this.bitmapData.__sourceImage != null) this.__renderDOMImage(renderSession); else this.__renderDOMCanvas(renderSession);
		} else {
			if(this.__image != null) {
				renderSession.element.removeChild(this.__image);
				this.__image = null;
				this.__style = null;
			}
			if(this.__canvas != null) {
				renderSession.element.removeChild(this.__canvas);
				this.__canvas = null;
				this.__style = null;
			}
		}
	}
	,__renderDOMCanvas: function(renderSession) {
		if(this.__image != null) {
			renderSession.element.removeChild(this.__image);
			this.__image = null;
		}
		if(this.__canvas == null) {
			this.__canvas = window.document.createElement("canvas");
			this.__canvasContext = this.__canvas.getContext("2d");
			if(!this.smoothing) {
				this.__canvasContext.mozImageSmoothingEnabled = false;
				this.__canvasContext.webkitImageSmoothingEnabled = false;
				this.__canvasContext.imageSmoothingEnabled = false;
			}
			this.__initializeElement(this.__canvas,renderSession);
		}
		this.bitmapData.__syncImageData();
		this.__canvas.width = this.bitmapData.width;
		this.__canvas.height = this.bitmapData.height;
		this.__canvasContext.globalAlpha = this.__worldAlpha;
		this.__canvasContext.drawImage(this.bitmapData.__sourceCanvas,0,0);
		this.__applyStyle(renderSession,true,false,true);
	}
	,__renderDOMImage: function(renderSession) {
		if(this.__canvas != null) {
			renderSession.element.removeChild(this.__canvas);
			this.__canvas = null;
		}
		if(this.__image == null) {
			this.__image = window.document.createElement("img");
			this.__image.src = this.bitmapData.__sourceImage.src;
			this.__initializeElement(this.__image,renderSession);
		}
		this.__applyStyle(renderSession,true,true,true);
	}
	,__renderMask: function(renderSession) {
		renderSession.context.rect(0,0,this.get_width(),this.get_height());
	}
	,get_height: function() {
		if(this.bitmapData != null) return this.bitmapData.height * this.get_scaleY();
		return 0;
	}
	,set_height: function(value) {
		if(this.bitmapData != null) {
			if(value != this.bitmapData.height) {
				if(!this.__transformDirty) {
					this.__transformDirty = true;
					openfl.display.DisplayObject.__worldTransformDirty++;
				}
				this.set_scaleY(value / this.bitmapData.height);
			}
			return value;
		}
		return 0;
	}
	,get_width: function() {
		if(this.bitmapData != null) return this.bitmapData.width * this.get_scaleX();
		return 0;
	}
	,set_width: function(value) {
		if(this.bitmapData != null) {
			if(value != this.bitmapData.width) {
				if(!this.__transformDirty) {
					this.__transformDirty = true;
					openfl.display.DisplayObject.__worldTransformDirty++;
				}
				this.set_scaleX(value / this.bitmapData.width);
			}
			return value;
		}
		return 0;
	}
	,__class__: openfl.display.Bitmap
});
openfl.display.BitmapData = function(width,height,transparent,fillColor) {
	if(fillColor == null) fillColor = -1;
	if(transparent == null) transparent = true;
	this.transparent = transparent;
	if(width > 0 && height > 0) {
		this.width = width;
		this.height = height;
		this.rect = new openfl.geom.Rectangle(0,0,width,height);
		this.__createCanvas(width,height);
		if(!transparent) fillColor = -16777216 | fillColor & 16777215;
		this.__fillRect(new openfl.geom.Rectangle(0,0,width,height),fillColor);
	}
};
$hxClasses["openfl.display.BitmapData"] = openfl.display.BitmapData;
openfl.display.BitmapData.__name__ = ["openfl","display","BitmapData"];
openfl.display.BitmapData.__interfaces__ = [openfl.display.IBitmapDrawable];
openfl.display.BitmapData.__base64Encoder = null;
openfl.display.BitmapData.fromBase64 = function(base64,type,onload) {
	var bitmapData = new openfl.display.BitmapData(0,0,true);
	bitmapData.__loadFromBase64(base64,type,onload);
	return bitmapData;
};
openfl.display.BitmapData.fromBytes = function(bytes,rawAlpha,onload) {
	var bitmapData = new openfl.display.BitmapData(0,0,true);
	bitmapData.__loadFromBytes(bytes,rawAlpha,onload);
	return bitmapData;
};
openfl.display.BitmapData.fromFile = function(path,onload,onfail) {
	var bitmapData = new openfl.display.BitmapData(0,0,true);
	bitmapData.__sourceImage = new Image();
	bitmapData.__sourceImage.onload = function(_) {
		bitmapData.width = bitmapData.__sourceImage.width;
		bitmapData.height = bitmapData.__sourceImage.height;
		bitmapData.rect = new openfl.geom.Rectangle(0,0,bitmapData.__sourceImage.width,bitmapData.__sourceImage.height);
		bitmapData.__valid = true;
		if(onload != null) onload(bitmapData);
	};
	bitmapData.__sourceImage.onerror = function(_1) {
		bitmapData.__valid = false;
		if(onfail != null) onfail();
	};
	bitmapData.__sourceImage.src = path;
	if(bitmapData.__sourceImage.complete) {
	}
	return bitmapData;
};
openfl.display.BitmapData.fromImage = function(image,transparent) {
	if(transparent == null) transparent = true;
	var bitmapData = new openfl.display.BitmapData(0,0,transparent);
	bitmapData.__sourceImage = image;
	bitmapData.width = image.width;
	bitmapData.height = image.height;
	bitmapData.rect = new openfl.geom.Rectangle(0,0,image.width,image.height);
	bitmapData.__valid = true;
	return bitmapData;
};
openfl.display.BitmapData.fromCanvas = function(canvas,transparent) {
	if(transparent == null) transparent = true;
	var bitmapData = new openfl.display.BitmapData(0,0,transparent);
	bitmapData.width = canvas.width;
	bitmapData.height = canvas.height;
	bitmapData.rect = new openfl.geom.Rectangle(0,0,canvas.width,canvas.height);
	bitmapData.__createCanvas(canvas.width,canvas.height);
	bitmapData.__sourceContext.drawImage(canvas,0,0);
	return bitmapData;
};
openfl.display.BitmapData.__base64Encode = function(bytes) {
	var extension;
	var _g = bytes.length % 3;
	switch(_g) {
	case 1:
		extension = "==";
		break;
	case 2:
		extension = "=";
		break;
	default:
		extension = "";
	}
	if(openfl.display.BitmapData.__base64Encoder == null) openfl.display.BitmapData.__base64Encoder = new haxe.crypto.BaseCode(haxe.io.Bytes.ofString(openfl.display.BitmapData.__base64Chars));
	return openfl.display.BitmapData.__base64Encoder.encodeBytes(haxe.io.Bytes.ofData(bytes.byteView)).toString() + extension;
};
openfl.display.BitmapData.__flipPixel = function(pixel) {
	return (pixel & 255) << 24 | (pixel >> 8 & 255) << 16 | (pixel >> 16 & 255) << 8 | pixel >> 24 & 255;
};
openfl.display.BitmapData.__isJPG = function(bytes) {
	bytes.position = 0;
	return bytes.readByte() == 255 && bytes.readByte() == 216;
};
openfl.display.BitmapData.__isPNG = function(bytes) {
	bytes.position = 0;
	return bytes.readByte() == 137 && bytes.readByte() == 80 && bytes.readByte() == 78 && bytes.readByte() == 71 && bytes.readByte() == 13 && bytes.readByte() == 10 && bytes.readByte() == 26 && bytes.readByte() == 10;
};
openfl.display.BitmapData.__isGIF = function(bytes) {
	bytes.position = 0;
	if(bytes.readByte() == 71 && bytes.readByte() == 73 && bytes.readByte() == 70 && bytes.readByte() == 38) {
		var b = bytes.readByte();
		return (b == 7 || b == 9) && bytes.readByte() == 97;
	}
	return false;
};
openfl.display.BitmapData.__ucompare = function(n1,n2) {
	var tmp1;
	var tmp2;
	tmp1 = n1 >> 24 & 255;
	tmp2 = n2 >> 24 & 255;
	if(tmp1 != tmp2) if(tmp1 > tmp2) return 1; else return -1; else {
		tmp1 = n1 >> 16 & 255;
		tmp2 = n2 >> 16 & 255;
		if(tmp1 != tmp2) if(tmp1 > tmp2) return 1; else return -1; else {
			tmp1 = n1 >> 8 & 255;
			tmp2 = n2 >> 8 & 255;
			if(tmp1 != tmp2) if(tmp1 > tmp2) return 1; else return -1; else {
				tmp1 = n1 & 255;
				tmp2 = n2 & 255;
				if(tmp1 != tmp2) if(tmp1 > tmp2) return 1; else return -1; else return 0;
			}
		}
	}
};
openfl.display.BitmapData.prototype = {
	applyFilter: function(sourceBitmapData,sourceRect,destPoint,filter) {
		if(!this.__valid || sourceBitmapData == null || !sourceBitmapData.__valid) return;
		this.__convertToCanvas();
		this.__createImageData();
		sourceBitmapData.__convertToCanvas();
		sourceBitmapData.__createImageData();
		filter.__applyFilter(this.__sourceImageData,sourceBitmapData.__sourceImageData,sourceRect,destPoint);
		this.__sourceImageDataChanged = true;
	}
	,clone: function() {
		this.__syncImageData();
		if(!this.__valid) return new openfl.display.BitmapData(this.width,this.height,this.transparent); else if(this.__sourceImage != null) return openfl.display.BitmapData.fromImage(this.__sourceImage,this.transparent); else return openfl.display.BitmapData.fromCanvas(this.__sourceCanvas,this.transparent);
	}
	,colorTransform: function(rect,colorTransform) {
		rect = this.__clipRect(rect);
		if(!this.__valid || rect == null) return;
		this.__convertToCanvas();
		this.__createImageData();
		var data = this.__sourceImageData.data;
		var stride = this.width * 4;
		var offset;
		var _g1 = rect.y | 0;
		var _g = rect.height | 0;
		while(_g1 < _g) {
			var row = _g1++;
			var _g3 = rect.x | 0;
			var _g2 = rect.width | 0;
			while(_g3 < _g2) {
				var column = _g3++;
				offset = row * stride + column * 4;
				data[offset] = data[offset] * colorTransform.redMultiplier + colorTransform.redOffset | 0;
				data[offset + 1] = data[offset + 1] * colorTransform.greenMultiplier + colorTransform.greenOffset | 0;
				data[offset + 2] = data[offset + 2] * colorTransform.blueMultiplier + colorTransform.blueOffset | 0;
				data[offset + 3] = data[offset + 3] * colorTransform.alphaMultiplier + colorTransform.alphaOffset | 0;
			}
		}
		this.__sourceImageDataChanged = true;
	}
	,copyChannel: function(sourceBitmapData,sourceRect,destPoint,sourceChannel,destChannel) {
		sourceRect = this.__clipRect(sourceRect);
		if(!this.__valid || sourceRect == null) return;
		if(destChannel == 8 && !this.transparent) return;
		if(sourceRect.width <= 0 || sourceRect.height <= 0) return;
		if(sourceRect.x + sourceRect.width > sourceBitmapData.width) sourceRect.width = sourceBitmapData.width - sourceRect.x;
		if(sourceRect.y + sourceRect.height > sourceBitmapData.height) sourceRect.height = sourceBitmapData.height - sourceRect.y;
		var destIdx = -1;
		if(destChannel == 8) destIdx = 3; else if(destChannel == 4) destIdx = 2; else if(destChannel == 2) destIdx = 1; else if(destChannel == 1) destIdx = 0; else throw "Invalid destination BitmapDataChannel passed to BitmapData::copyChannel.";
		var srcIdx = -1;
		if(sourceChannel == 8) srcIdx = 3; else if(sourceChannel == 4) srcIdx = 2; else if(sourceChannel == 2) srcIdx = 1; else if(sourceChannel == 1) srcIdx = 0; else throw "Invalid source BitmapDataChannel passed to BitmapData::copyChannel.";
		sourceBitmapData.__convertToCanvas();
		sourceBitmapData.__createImageData();
		var srcData = sourceBitmapData.__sourceImageData.data;
		var srcStride = sourceBitmapData.width * 4 | 0;
		var srcPosition = sourceRect.x * 4 + srcStride * sourceRect.y + srcIdx | 0;
		var srcRowOffset = srcStride - (4 * sourceRect.width | 0);
		var srcRowEnd = 4 * (sourceRect.x + sourceRect.width) | 0;
		this.__convertToCanvas();
		this.__createImageData();
		var destData = this.__sourceImageData.data;
		var destStride = this.width * 4 | 0;
		var destPosition = destPoint.x * 4 + destStride * destPoint.y + destIdx | 0;
		var destRowOffset = destStride - (4 * sourceRect.width | 0);
		var destRowEnd = 4 * (destPoint.x + sourceRect.width) | 0;
		var length = sourceRect.width * sourceRect.height | 0;
		var _g = 0;
		while(_g < length) {
			var i = _g++;
			destData[destPosition] = srcData[srcPosition];
			srcPosition += 4;
			destPosition += 4;
			if(srcPosition % srcStride > srcRowEnd) srcPosition += srcRowOffset;
			if(destPosition % destStride > destRowEnd) destPosition += destRowOffset;
		}
		this.__sourceImageDataChanged = true;
	}
	,copyPixels: function(sourceBitmapData,sourceRect,destPoint,alphaBitmapData,alphaPoint,mergeAlpha) {
		if(mergeAlpha == null) mergeAlpha = false;
		if(!this.__valid || sourceBitmapData == null) return;
		if(sourceRect.x + sourceRect.width > sourceBitmapData.width) sourceRect.width = sourceBitmapData.width - sourceRect.x;
		if(sourceRect.y + sourceRect.height > sourceBitmapData.height) sourceRect.height = sourceBitmapData.height - sourceRect.y;
		if(sourceRect.width <= 0 || sourceRect.height <= 0) return;
		if(alphaBitmapData != null && alphaBitmapData.transparent) {
			if(alphaPoint == null) alphaPoint = new openfl.geom.Point();
			var tempData = this.clone();
			tempData.copyChannel(alphaBitmapData,new openfl.geom.Rectangle(alphaPoint.x,alphaPoint.y,sourceRect.width,sourceRect.height),new openfl.geom.Point(sourceRect.x,sourceRect.y),8,8);
			sourceBitmapData = tempData;
		}
		this.__syncImageData();
		if(!mergeAlpha) {
			if(this.transparent && sourceBitmapData.transparent) this.__sourceContext.clearRect(destPoint.x,destPoint.y,sourceRect.width,sourceRect.height);
		}
		sourceBitmapData.__syncImageData();
		if(sourceBitmapData.__sourceImage != null) this.__sourceContext.drawImage(sourceBitmapData.__sourceImage,sourceRect.x | 0,sourceRect.y | 0,sourceRect.width | 0,sourceRect.height | 0,destPoint.x | 0,destPoint.y | 0,sourceRect.width | 0,sourceRect.height | 0); else if(sourceBitmapData.__sourceCanvas != null) this.__sourceContext.drawImage(sourceBitmapData.__sourceCanvas,sourceRect.x | 0,sourceRect.y | 0,sourceRect.width | 0,sourceRect.height | 0,destPoint.x | 0,destPoint.y | 0,sourceRect.width | 0,sourceRect.height | 0);
	}
	,dispose: function() {
		this.__sourceImage = null;
		this.__sourceCanvas = null;
		this.__sourceContext = null;
		this.width = 0;
		this.height = 0;
		this.rect = null;
		this.__valid = false;
	}
	,draw: function(source,matrix,colorTransform,blendMode,clipRect,smoothing) {
		if(smoothing == null) smoothing = false;
		if(!this.__valid) return;
		this.__convertToCanvas();
		this.__syncImageData();
		var renderSession = new openfl.display.RenderSession();
		renderSession.context = this.__sourceContext;
		renderSession.roundPixels = true;
		if(!smoothing) {
			this.__sourceContext.mozImageSmoothingEnabled = false;
			this.__sourceContext.webkitImageSmoothingEnabled = false;
			this.__sourceContext.imageSmoothingEnabled = false;
		}
		var matrixCache = source.__worldTransform;
		if(matrix != null) source.__worldTransform = matrix; else source.__worldTransform = new openfl.geom.Matrix();
		source.__updateChildren(false);
		source.__renderCanvas(renderSession);
		source.__worldTransform = matrixCache;
		source.__updateChildren(true);
		if(!smoothing) {
			this.__sourceContext.mozImageSmoothingEnabled = true;
			this.__sourceContext.webkitImageSmoothingEnabled = true;
			this.__sourceContext.imageSmoothingEnabled = true;
		}
		this.__sourceContext.setTransform(1,0,0,1,0,0);
	}
	,encode: function(rect,compressor,byteArray) {
		openfl.Lib.notImplemented("BitmapData.encode");
		return null;
	}
	,fillRect: function(rect,color) {
		rect = this.__clipRect(rect);
		if(!this.__valid || rect == null) return;
		this.__convertToCanvas();
		this.__syncImageData();
		if(rect.x == 0 && rect.y == 0 && rect.width == this.width && rect.height == this.height) {
			if(this.transparent && (color & -16777216) == 0) {
				this.__sourceCanvas.width = this.width;
				return;
			}
		}
		this.__fillRect(rect,color);
	}
	,floodFill: function(x,y,color) {
		if(!this.__valid) return;
		this.__convertToCanvas();
		this.__createImageData();
		var data = this.__sourceImageData.data;
		var offset = y * (this.width * 4) + x * 4;
		var hitColorR = data[offset];
		var hitColorG = data[offset + 1];
		var hitColorB = data[offset + 2];
		var hitColorA;
		if(this.transparent) hitColorA = data[offset + 3]; else hitColorA = 255;
		var r = (color & 16711680) >>> 16;
		var g = (color & 65280) >>> 8;
		var b = color & 255;
		var a;
		if(this.transparent) a = (color & -16777216) >>> 24; else a = 255;
		if(hitColorR == r && hitColorG == g && hitColorB == b && hitColorA == a) return;
		var dx = [0,-1,1,0];
		var dy = [-1,0,0,1];
		var queue = new Array();
		queue.push(x);
		queue.push(y);
		while(queue.length > 0) {
			var curPointY = queue.pop();
			var curPointX = queue.pop();
			var _g = 0;
			while(_g < 4) {
				var i = _g++;
				var nextPointX = curPointX + dx[i];
				var nextPointY = curPointY + dy[i];
				if(nextPointX < 0 || nextPointY < 0 || nextPointX >= this.width || nextPointY >= this.height) continue;
				var nextPointOffset = (nextPointY * this.width + nextPointX) * 4;
				if(data[nextPointOffset] == hitColorR && data[nextPointOffset + 1] == hitColorG && data[nextPointOffset + 2] == hitColorB && data[nextPointOffset + 3] == hitColorA) {
					data[nextPointOffset] = r;
					data[nextPointOffset + 1] = g;
					data[nextPointOffset + 2] = b;
					data[nextPointOffset + 3] = a;
					queue.push(nextPointX);
					queue.push(nextPointY);
				}
			}
		}
		this.__sourceImageDataChanged = true;
	}
	,generateFilterRect: function(sourceRect,filter) {
		return sourceRect.clone();
	}
	,getColorBoundsRect: function(mask,color,findColor) {
		if(findColor == null) findColor = true;
		return this.rect.clone();
	}
	,getPixel: function(x,y) {
		if(!this.__valid || x < 0 || y < 0 || x >= this.width || y >= this.height) return 0;
		this.__convertToCanvas();
		this.__createImageData();
		var offset = 4 * y * this.width + x * 4;
		return this.__sourceImageData.data[offset] << 16 | this.__sourceImageData.data[offset + 1] << 8 | this.__sourceImageData.data[offset + 2];
	}
	,getPixel32: function(x,y) {
		if(!this.__valid || x < 0 || y < 0 || x >= this.width || y >= this.height) return 0;
		this.__convertToCanvas();
		this.__createImageData();
		return this.__getInt32(4 * y * this.width + x * 4,this.__sourceImageData.data);
	}
	,getPixels: function(rect) {
		if(!this.__valid) return null;
		this.__convertToCanvas();
		this.__createImageData();
		var byteArray = new openfl.utils.ByteArray();
		if(rect == null || rect.equals(this.rect)) {
			byteArray.set_length(this.__sourceImageData.data.length);
			byteArray.byteView.set(this.__sourceImageData.data);
		} else {
			var srcData = this.__sourceImageData.data;
			var srcStride = this.width * 4 | 0;
			var srcPosition = rect.x * 4 + srcStride * rect.y | 0;
			var srcRowOffset = srcStride - (4 * rect.width | 0);
			var srcRowEnd = 4 * (rect.x + rect.width) | 0;
			var length = 4 * rect.width * rect.height | 0;
			if(byteArray.allocated < length) byteArray.___resizeBuffer(byteArray.allocated = Std["int"](Math.max(length,byteArray.allocated * 2))); else if(byteArray.allocated > length) byteArray.___resizeBuffer(byteArray.allocated = length);
			byteArray.length = length;
			length;
			var _g = 0;
			while(_g < length) {
				var i = _g++;
				byteArray.__set(i,srcData[srcPosition++]);
				if(srcPosition % srcStride > srcRowEnd) srcPosition += srcRowOffset;
			}
		}
		byteArray.position = 0;
		return byteArray;
	}
	,getVector: function(rect) {
		var pixels = this.getPixels(rect);
		var result = openfl._Vector.Vector_Impl_._new();
		var _g1 = 0;
		var _g = pixels.length / 4 | 0;
		while(_g1 < _g) {
			var i = _g1++;
			var x = pixels.readUnsignedInt();
			if(!result.fixed) {
				result.length++;
				if(result.data.length < result.length) {
					var data;
					var this1;
					this1 = new Array(result.data.length + 10);
					data = this1;
					haxe.ds._Vector.Vector_Impl_.blit(result.data,0,data,0,result.data.length);
					result.data = data;
				}
				result.data[result.length - 1] = x;
			}
			result.length;
		}
		return result;
	}
	,histogram: function(hRect) {
		var rect;
		if(hRect != null) rect = hRect; else rect = new openfl.geom.Rectangle(0,0,this.width,this.height);
		var pixels = this.getPixels(rect);
		var result;
		var _g = [];
		var _g1 = 0;
		while(_g1 < 4) {
			var i = _g1++;
			_g.push((function($this) {
				var $r;
				var _g2 = [];
				{
					var _g3 = 0;
					while(_g3 < 256) {
						var j = _g3++;
						_g2.push(0);
					}
				}
				$r = _g2;
				return $r;
			}(this)));
		}
		result = _g;
		var _g21 = 0;
		var _g11 = pixels.length;
		while(_g21 < _g11) {
			var i1 = _g21++;
			++result[i1 % 4][pixels.readUnsignedByte()];
		}
		return result;
	}
	,hitTest: function(firstPoint,firstAlphaThreshold,secondObject,secondBitmapDataPoint,secondAlphaThreshold) {
		if(secondAlphaThreshold == null) secondAlphaThreshold = 1;
		if(!this.__valid) return false;
		openfl.Lib.notImplemented("BitmapData.hitTest");
		return false;
	}
	,lock: function() {
	}
	,noise: function(randomSeed,low,high,channelOptions,grayScale) {
		if(grayScale == null) grayScale = false;
		if(channelOptions == null) channelOptions = 7;
		if(high == null) high = 255;
		if(low == null) low = 0;
		if(!this.__valid) return;
		openfl.Lib.notImplemented("BitmapData.noise");
	}
	,paletteMap: function(sourceBitmapData,sourceRect,destPoint,redArray,greenArray,blueArray,alphaArray) {
		var memory = new openfl.utils.ByteArray();
		var sw = sourceRect.width | 0;
		var sh = sourceRect.height | 0;
		memory.set_length(sw * sh * 4);
		memory = this.getPixels(sourceRect);
		memory.position = 0;
		openfl.Memory.select(memory);
		var position;
		var pixelValue;
		var r;
		var g;
		var b;
		var color;
		var _g1 = 0;
		var _g = sh * sw;
		while(_g1 < _g) {
			var i = _g1++;
			position = i * 4;
			pixelValue = openfl.Memory._setPositionTemporarily(position,function() {
				return openfl.Memory.gcRef.readInt();
			});
			r = pixelValue >> 8 & 255;
			g = pixelValue >> 16 & 255;
			b = pixelValue >> 24 & 255;
			color = openfl.display.BitmapData.__flipPixel(-16777216 | redArray[r] | greenArray[g] | blueArray[b]);
			openfl.Memory.setI32(position,color);
		}
		memory.position = 0;
		var destRect = new openfl.geom.Rectangle(destPoint.x,destPoint.y,sw,sh);
		this.setPixels(destRect,memory);
		openfl.Memory.select(null);
	}
	,perlinNoise: function(baseX,baseY,numOctaves,randomSeed,stitch,fractalNoise,channelOptions,grayScale,offsets) {
		if(grayScale == null) grayScale = false;
		if(channelOptions == null) channelOptions = 7;
		openfl.Lib.notImplemented("BitmapData.perlinNoise");
	}
	,scroll: function(x,y) {
		openfl.Lib.notImplemented("BitmapData.scroll");
	}
	,setVector: function(rect,inputVector) {
		var byteArray = new openfl.utils.ByteArray();
		byteArray.set_length(inputVector.length * 4);
		var _g = 0;
		while(_g < inputVector.length) {
			var color = inputVector.data[_g];
			++_g;
			byteArray.writeUnsignedInt(color);
		}
		byteArray.position = 0;
		this.setPixels(rect,byteArray);
	}
	,setPixel: function(x,y,color) {
		if(!this.__valid || x < 0 || y < 0 || x >= this.width || y >= this.height) return;
		this.__convertToCanvas();
		this.__createImageData();
		var offset = 4 * y * this.width + x * 4;
		this.__sourceImageData.data[offset] = (color & 16711680) >>> 16;
		this.__sourceImageData.data[offset + 1] = (color & 65280) >>> 8;
		this.__sourceImageData.data[offset + 2] = color & 255;
		if(this.transparent) this.__sourceImageData.data[offset + 3] = 255;
		this.__sourceImageDataChanged = true;
	}
	,setPixel32: function(x,y,color) {
		if(!this.__valid || x < 0 || y < 0 || x >= this.width || y >= this.height) return;
		this.__convertToCanvas();
		this.__createImageData();
		var offset = 4 * y * this.width + x * 4;
		this.__sourceImageData.data[offset] = (color & 16711680) >>> 16;
		this.__sourceImageData.data[offset + 1] = (color & 65280) >>> 8;
		this.__sourceImageData.data[offset + 2] = color & 255;
		if(this.transparent) this.__sourceImageData.data[offset + 3] = (color & -16777216) >>> 24; else this.__sourceImageData.data[offset + 3] = 255;
		this.__sourceImageDataChanged = true;
	}
	,setPixels: function(rect,byteArray) {
		rect = this.__clipRect(rect);
		if(!this.__valid || rect == null) return;
		this.__convertToCanvas();
		var len = Math.round(4 * rect.width * rect.height);
		if(rect.x == 0 && rect.y == 0 && rect.width == this.width && rect.height == this.height) {
			if(this.__sourceImageData == null) this.__sourceImageData = this.__sourceContext.createImageData(this.width,this.height);
			this.__sourceImageData.data.set(byteArray.byteView);
		} else {
			this.__createImageData();
			var offset = Math.round(4 * this.width * rect.y + rect.x * 4);
			var pos = offset;
			var boundR = Math.round(4 * (rect.x + rect.width));
			var data = this.__sourceImageData.data;
			var _g = 0;
			while(_g < len) {
				var i = _g++;
				if(pos % (this.width * 4) > boundR - 1) pos += this.width * 4 - boundR;
				data[pos] = byteArray.readByte();
				pos++;
			}
		}
		this.__sourceImageDataChanged = true;
	}
	,threshold: function(sourceBitmapData,sourceRect,destPoint,operation,threshold,color,mask,copySource) {
		if(copySource == null) copySource = false;
		if(mask == null) mask = -1;
		if(color == null) color = 0;
		if(sourceBitmapData == this && sourceRect.equals(this.rect) && destPoint.x == 0 && destPoint.y == 0) {
			var hits = 0;
			threshold = (threshold & 255) << 24 | (threshold >> 8 & 255) << 16 | (threshold >> 16 & 255) << 8 | threshold >> 24 & 255;
			color = (color & 255) << 24 | (color >> 8 & 255) << 16 | (color >> 16 & 255) << 8 | color >> 24 & 255;
			var memory = new openfl.utils.ByteArray();
			memory.set_length(this.width * this.height * 4);
			memory = this.getPixels(this.rect);
			memory.position = 0;
			openfl.Memory.select(memory);
			var thresholdMask = threshold & mask;
			var width_yy;
			var position;
			var pixelMask;
			var pixelValue;
			var i;
			var test;
			var _g1 = 0;
			var _g = this.height;
			while(_g1 < _g) {
				var yy = _g1++;
				width_yy = this.width * yy;
				var _g3 = 0;
				var _g2 = this.width;
				while(_g3 < _g2) {
					var xx = _g3++;
					position = (width_yy + xx) * 4;
					pixelValue = openfl.Memory._setPositionTemporarily(position,function() {
						return openfl.Memory.gcRef.readInt();
					});
					pixelMask = pixelValue & mask;
					i = openfl.display.BitmapData.__ucompare(pixelMask,thresholdMask);
					test = false;
					if(operation == "==") test = i == 0; else if(operation == "<") test = i == -1; else if(operation == ">") test = i == 1; else if(operation == "!=") test = i != 0; else if(operation == "<=") test = i == 0 || i == -1; else if(operation == ">=") test = i == 0 || i == 1;
					if(test) {
						openfl.Memory.setI32(position,color);
						hits++;
					}
				}
			}
			memory.position = 0;
			this.setPixels(this.rect,memory);
			openfl.Memory.select(null);
			return hits;
		} else {
			var sx = sourceRect.x | 0;
			var sy = sourceRect.y | 0;
			var sw = sourceBitmapData.width | 0;
			var sh = sourceBitmapData.height | 0;
			var dx = destPoint.x | 0;
			var dy = destPoint.y | 0;
			var bw = this.width - sw - dx;
			var bh = this.height - sh - dy;
			var dw;
			if(bw < 0) dw = sw + (this.width - sw - dx); else dw = sw;
			var dh;
			if(bw < 0) dh = sh + (this.height - sh - dy); else dh = sh;
			var hits1 = 0;
			threshold = (threshold & 255) << 24 | (threshold >> 8 & 255) << 16 | (threshold >> 16 & 255) << 8 | threshold >> 24 & 255;
			color = (color & 255) << 24 | (color >> 8 & 255) << 16 | (color >> 16 & 255) << 8 | color >> 24 & 255;
			var canvasMemory = sw * sh * 4;
			var sourceMemory = 0;
			if(copySource) sourceMemory = sw * sh * 4;
			var totalMemory = canvasMemory + sourceMemory;
			var memory1 = new openfl.utils.ByteArray();
			if(memory1.allocated < totalMemory) memory1.___resizeBuffer(memory1.allocated = Std["int"](Math.max(totalMemory,memory1.allocated * 2))); else if(memory1.allocated > totalMemory) memory1.___resizeBuffer(memory1.allocated = totalMemory);
			memory1.length = totalMemory;
			totalMemory;
			memory1.position = 0;
			var bitmapData = sourceBitmapData.clone();
			var pixels = bitmapData.getPixels(sourceRect);
			memory1.writeBytes(pixels);
			memory1.position = canvasMemory;
			if(copySource) memory1.writeBytes(pixels);
			memory1.position = 0;
			openfl.Memory.select(memory1);
			var thresholdMask1 = threshold & mask;
			var position1;
			var pixelMask1;
			var pixelValue1;
			var i1;
			var test1;
			var _g4 = 0;
			while(_g4 < dh) {
				var yy1 = _g4++;
				var _g11 = 0;
				while(_g11 < dw) {
					var xx1 = _g11++;
					position1 = (xx1 + sx + (yy1 + sy) * sw) * 4;
					pixelValue1 = openfl.Memory._setPositionTemporarily(position1,function() {
						return openfl.Memory.gcRef.readInt();
					});
					pixelMask1 = pixelValue1 & mask;
					i1 = openfl.display.BitmapData.__ucompare(pixelMask1,thresholdMask1);
					test1 = false;
					if(operation == "==") test1 = i1 == 0; else if(operation == "<") test1 = i1 == -1; else if(operation == ">") test1 = i1 == 1; else if(operation == "!=") test1 = i1 != 0; else if(operation == "<=") test1 = i1 == 0 || i1 == -1; else if(operation == ">=") test1 = i1 == 0 || i1 == 1;
					if(test1) {
						openfl.Memory.setI32(position1,color);
						hits1++;
					} else if(copySource) openfl.Memory.setI32(position1,openfl.Memory._setPositionTemporarily(canvasMemory + position1,function() {
						return openfl.Memory.gcRef.readInt();
					}));
				}
			}
			memory1.position = 0;
			bitmapData.setPixels(sourceRect,memory1);
			this.copyPixels(bitmapData,bitmapData.rect,destPoint);
			openfl.Memory.select(null);
			return hits1;
		}
	}
	,unlock: function(changeRect) {
	}
	,__clipRect: function(r) {
		if(r == null) return null;
		if(r.x < 0) {
			r.width -= -r.x;
			r.x = 0;
			if(r.x + r.width <= 0) return null;
		}
		if(r.y < 0) {
			r.height -= -r.y;
			r.y = 0;
			if(r.y + r.height <= 0) return null;
		}
		if(r.x + r.width >= this.width) {
			r.width -= r.x + r.width - this.width;
			if(r.width <= 0) return null;
		}
		if(r.y + r.height >= this.height) {
			r.height -= r.y + r.height - this.height;
			if(r.height <= 0) return null;
		}
		return r;
	}
	,__convertToCanvas: function() {
		if(this.__loading) return;
		if(this.__sourceImage != null) {
			if(this.__sourceCanvas == null) {
				this.__createCanvas(this.__sourceImage.width,this.__sourceImage.height);
				this.__sourceContext.drawImage(this.__sourceImage,0,0);
			}
			this.__sourceImage = null;
		}
	}
	,__createCanvas: function(width,height) {
		if(this.__sourceCanvas == null) {
			this.__sourceCanvas = window.document.createElement("canvas");
			this.__sourceCanvas.width = width;
			this.__sourceCanvas.height = height;
			if(!this.transparent) {
				if(!this.transparent) this.__sourceCanvas.setAttribute("moz-opaque","true");
				this.__sourceContext = this.__sourceCanvas.getContext ("2d", { alpha: false });
			} else this.__sourceContext = this.__sourceCanvas.getContext("2d");
			this.__sourceContext.mozImageSmoothingEnabled = false;
			this.__sourceContext.webkitImageSmoothingEnabled = false;
			this.__sourceContext.imageSmoothingEnabled = false;
			this.__valid = true;
		}
	}
	,__createImageData: function() {
		if(this.__sourceImageData == null) this.__sourceImageData = this.__sourceContext.getImageData(0,0,this.width,this.height);
	}
	,__fillRect: function(rect,color) {
		var a;
		if(this.transparent) a = (color & -16777216) >>> 24; else a = 255;
		var r = (color & 16711680) >>> 16;
		var g = (color & 65280) >>> 8;
		var b = color & 255;
		this.__sourceContext.fillStyle = "rgba(" + r + ", " + g + ", " + b + ", " + a / 255 + ")";
		this.__sourceContext.fillRect(rect.x,rect.y,rect.width,rect.height);
	}
	,__getInt32: function(offset,data) {
		return (this.transparent?data[offset + 3]:255) << 24 | data[offset] << 16 | data[offset + 1] << 8 | data[offset + 2];
	}
	,__loadFromBase64: function(base64,type,onload) {
		var _g = this;
		this.__sourceImage = window.document.createElement("img");
		var image_onLoaded = function(event) {
			if(_g.__sourceImage == null) _g.__sourceImage = event.target;
			_g.width = _g.__sourceImage.width;
			_g.height = _g.__sourceImage.height;
			_g.rect = new openfl.geom.Rectangle(0,0,_g.width,_g.height);
			_g.__valid = true;
			if(onload != null) onload(_g);
		};
		this.__sourceImage.addEventListener("load",image_onLoaded,false);
		this.__sourceImage.src = "data:" + type + ";base64," + base64;
	}
	,__loadFromBytes: function(bytes,rawAlpha,onload) {
		var _g = this;
		var type = "";
		if(openfl.display.BitmapData.__isPNG(bytes)) type = "image/png"; else if(openfl.display.BitmapData.__isJPG(bytes)) type = "image/jpeg"; else if(openfl.display.BitmapData.__isGIF(bytes)) type = "image/gif"; else throw new openfl.errors.IOError("BitmapData tried to read a PNG/JPG ByteArray, but found an invalid header.");
		if(rawAlpha != null) this.__loadFromBase64(openfl.display.BitmapData.__base64Encode(bytes),type,function(_) {
			_g.__convertToCanvas();
			_g.__createImageData();
			var data = _g.__sourceImageData.data;
			var _g2 = 0;
			var _g1 = rawAlpha.length;
			while(_g2 < _g1) {
				var i = _g2++;
				data[i * 4 + 3] = rawAlpha.readUnsignedByte();
			}
			_g.__sourceImageDataChanged = true;
			if(onload != null) onload(_g);
		}); else this.__loadFromBase64(openfl.display.BitmapData.__base64Encode(bytes),type,onload);
	}
	,__renderCanvas: function(renderSession) {
		if(!this.__valid) return;
		this.__syncImageData();
		var context = renderSession.context;
		if(this.__worldTransform == null) this.__worldTransform = new openfl.geom.Matrix();
		context.globalAlpha = 1;
		var transform = this.__worldTransform;
		if(renderSession.roundPixels) context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx | 0,transform.ty | 0); else context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx,transform.ty);
		if(this.__sourceImage != null) context.drawImage(this.__sourceImage,0,0); else context.drawImage(this.__sourceCanvas,0,0);
	}
	,__renderMask: function(renderSession) {
	}
	,__syncImageData: function() {
		if(this.__sourceImageDataChanged) {
			this.__sourceContext.putImageData(this.__sourceImageData,0,0);
			this.__sourceImageData = null;
			this.__sourceImageDataChanged = false;
		}
	}
	,__updateChildren: function(transformOnly) {
	}
	,__class__: openfl.display.BitmapData
};
openfl.display.BitmapDataChannel = function() { };
$hxClasses["openfl.display.BitmapDataChannel"] = openfl.display.BitmapDataChannel;
openfl.display.BitmapDataChannel.__name__ = ["openfl","display","BitmapDataChannel"];
openfl.display.BlendMode = $hxClasses["openfl.display.BlendMode"] = { __ename__ : true, __constructs__ : ["ADD","ALPHA","DARKEN","DIFFERENCE","ERASE","HARDLIGHT","INVERT","LAYER","LIGHTEN","MULTIPLY","NORMAL","OVERLAY","SCREEN","SUBTRACT"] };
openfl.display.BlendMode.ADD = ["ADD",0];
openfl.display.BlendMode.ADD.toString = $estr;
openfl.display.BlendMode.ADD.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.ALPHA = ["ALPHA",1];
openfl.display.BlendMode.ALPHA.toString = $estr;
openfl.display.BlendMode.ALPHA.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.DARKEN = ["DARKEN",2];
openfl.display.BlendMode.DARKEN.toString = $estr;
openfl.display.BlendMode.DARKEN.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.DIFFERENCE = ["DIFFERENCE",3];
openfl.display.BlendMode.DIFFERENCE.toString = $estr;
openfl.display.BlendMode.DIFFERENCE.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.ERASE = ["ERASE",4];
openfl.display.BlendMode.ERASE.toString = $estr;
openfl.display.BlendMode.ERASE.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.HARDLIGHT = ["HARDLIGHT",5];
openfl.display.BlendMode.HARDLIGHT.toString = $estr;
openfl.display.BlendMode.HARDLIGHT.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.INVERT = ["INVERT",6];
openfl.display.BlendMode.INVERT.toString = $estr;
openfl.display.BlendMode.INVERT.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.LAYER = ["LAYER",7];
openfl.display.BlendMode.LAYER.toString = $estr;
openfl.display.BlendMode.LAYER.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.LIGHTEN = ["LIGHTEN",8];
openfl.display.BlendMode.LIGHTEN.toString = $estr;
openfl.display.BlendMode.LIGHTEN.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.MULTIPLY = ["MULTIPLY",9];
openfl.display.BlendMode.MULTIPLY.toString = $estr;
openfl.display.BlendMode.MULTIPLY.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.NORMAL = ["NORMAL",10];
openfl.display.BlendMode.NORMAL.toString = $estr;
openfl.display.BlendMode.NORMAL.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.OVERLAY = ["OVERLAY",11];
openfl.display.BlendMode.OVERLAY.toString = $estr;
openfl.display.BlendMode.OVERLAY.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.SCREEN = ["SCREEN",12];
openfl.display.BlendMode.SCREEN.toString = $estr;
openfl.display.BlendMode.SCREEN.__enum__ = openfl.display.BlendMode;
openfl.display.BlendMode.SUBTRACT = ["SUBTRACT",13];
openfl.display.BlendMode.SUBTRACT.toString = $estr;
openfl.display.BlendMode.SUBTRACT.__enum__ = openfl.display.BlendMode;
openfl.display._CapsStyle = {};
openfl.display._CapsStyle.CapsStyle_Impl_ = function() { };
$hxClasses["openfl.display._CapsStyle.CapsStyle_Impl_"] = openfl.display._CapsStyle.CapsStyle_Impl_;
openfl.display._CapsStyle.CapsStyle_Impl_.__name__ = ["openfl","display","_CapsStyle","CapsStyle_Impl_"];
openfl.display.DirectRenderer = function(type) {
	if(type == null) type = "DirectRenderer";
	openfl.display.DisplayObject.call(this);
};
$hxClasses["openfl.display.DirectRenderer"] = openfl.display.DirectRenderer;
openfl.display.DirectRenderer.__name__ = ["openfl","display","DirectRenderer"];
openfl.display.DirectRenderer.__super__ = openfl.display.DisplayObject;
openfl.display.DirectRenderer.prototype = $extend(openfl.display.DisplayObject.prototype,{
	get_render: function() {
		return this.__render;
	}
	,set_render: function(value) {
		return this.__render = value;
	}
	,__class__: openfl.display.DirectRenderer
	,__properties__: $extend(openfl.display.DisplayObject.prototype.__properties__,{set_render:"set_render",get_render:"get_render"})
});
openfl.text.TextField = function() {
	openfl.display.InteractiveObject.call(this);
	this.__width = 100;
	this.__height = 100;
	this.__text = "";
	this.set_type(openfl.text.TextFieldType.DYNAMIC);
	this.set_autoSize(openfl.text.TextFieldAutoSize.NONE);
	this.displayAsPassword = false;
	this.embedFonts = false;
	this.selectable = true;
	this.set_borderColor(0);
	this.set_border(false);
	this.set_backgroundColor(16777215);
	this.set_background(false);
	this.gridFitType = openfl.text.GridFitType.PIXEL;
	this.maxChars = 0;
	this.multiline = false;
	this.sharpness = 0;
	this.scrollH = 0;
	this.scrollV = 1;
	this.set_wordWrap(false);
	if(openfl.text.TextField.__defaultTextFormat == null) {
		openfl.text.TextField.__defaultTextFormat = new openfl.text.TextFormat("Times New Roman",12,0,false,false,false,"","",openfl.text.TextFormatAlign.LEFT,0,0,0,0);
		openfl.text.TextField.__defaultTextFormat.blockIndent = 0;
		openfl.text.TextField.__defaultTextFormat.bullet = false;
		openfl.text.TextField.__defaultTextFormat.letterSpacing = 0;
		openfl.text.TextField.__defaultTextFormat.kerning = false;
	}
	this.__textFormat = openfl.text.TextField.__defaultTextFormat.clone();
};
$hxClasses["openfl.text.TextField"] = openfl.text.TextField;
openfl.text.TextField.__name__ = ["openfl","text","TextField"];
openfl.text.TextField.__defaultTextFormat = null;
openfl.text.TextField.__super__ = openfl.display.InteractiveObject;
openfl.text.TextField.prototype = $extend(openfl.display.InteractiveObject.prototype,{
	appendText: function(text) {
		var _g = this;
		_g.set_text(_g.get_text() + text);
	}
	,getCharBoundaries: function(a) {
		openfl.Lib.notImplemented("TextField.getCharBoundaries");
		return null;
	}
	,getCharIndexAtPoint: function(x,y) {
		openfl.Lib.notImplemented("TextField.getCharIndexAtPoint");
		return 0;
	}
	,getLineIndexAtPoint: function(x,y) {
		openfl.Lib.notImplemented("TextField.getLineIndexAtPoint");
		return 0;
	}
	,getLineMetrics: function(lineIndex) {
		openfl.Lib.notImplemented("TextField.getLineMetrics");
		return null;
	}
	,getLineOffset: function(lineIndex) {
		openfl.Lib.notImplemented("TextField.getLineOffset");
		return 0;
	}
	,getLineText: function(lineIndex) {
		openfl.Lib.notImplemented("TextField.getLineText");
		return "";
	}
	,getTextFormat: function(beginIndex,endIndex) {
		if(endIndex == null) endIndex = 0;
		if(beginIndex == null) beginIndex = 0;
		return this.__textFormat.clone();
	}
	,setSelection: function(beginIndex,endIndex) {
		openfl.Lib.notImplemented("TextField.setSelection");
	}
	,setTextFormat: function(format,beginIndex,endIndex) {
		if(endIndex == null) endIndex = 0;
		if(beginIndex == null) beginIndex = 0;
		if(format.font != null) this.__textFormat.font = format.font;
		if(format.size != null) this.__textFormat.size = format.size;
		if(format.color != null) this.__textFormat.color = format.color;
		if(format.bold != null) this.__textFormat.bold = format.bold;
		if(format.italic != null) this.__textFormat.italic = format.italic;
		if(format.underline != null) this.__textFormat.underline = format.underline;
		if(format.url != null) this.__textFormat.url = format.url;
		if(format.target != null) this.__textFormat.target = format.target;
		if(format.align != null) this.__textFormat.align = format.align;
		if(format.leftMargin != null) this.__textFormat.leftMargin = format.leftMargin;
		if(format.rightMargin != null) this.__textFormat.rightMargin = format.rightMargin;
		if(format.indent != null) this.__textFormat.indent = format.indent;
		if(format.leading != null) this.__textFormat.leading = format.leading;
		if(format.blockIndent != null) this.__textFormat.blockIndent = format.blockIndent;
		if(format.bullet != null) this.__textFormat.bullet = format.bullet;
		if(format.kerning != null) this.__textFormat.kerning = format.kerning;
		if(format.letterSpacing != null) this.__textFormat.letterSpacing = format.letterSpacing;
		if(format.tabStops != null) this.__textFormat.tabStops = format.tabStops;
		this.__dirty = true;
	}
	,__getBounds: function(rect,matrix) {
		var bounds = new openfl.geom.Rectangle(0,0,this.__width,this.__height);
		bounds.transform(this.__worldTransform);
		rect.__expand(bounds.x,bounds.y,bounds.width,bounds.height);
	}
	,__getFont: function(format) {
		var font;
		if(format.italic) font = "italic "; else font = "normal ";
		font += "normal ";
		if(format.bold) font += "bold "; else font += "normal ";
		font += format.size + "px";
		font += "/" + (format.size + format.leading + 4) + "px ";
		font += "'" + (function($this) {
			var $r;
			var _g = format.font;
			$r = (function($this) {
				var $r;
				switch(_g) {
				case "_sans":
					$r = "sans-serif";
					break;
				case "_serif":
					$r = "serif";
					break;
				case "_typewriter":
					$r = "monospace";
					break;
				default:
					$r = format.font;
				}
				return $r;
			}($this));
			return $r;
		}(this));
		font += "'";
		return font;
	}
	,__hitTest: function(x,y,shapeFlag,stack,interactiveOnly) {
		if(!this.get_visible() || interactiveOnly && !this.mouseEnabled) return false;
		var point = this.globalToLocal(new openfl.geom.Point(x,y));
		if(point.x > 0 && point.y > 0 && point.x <= this.__width && point.y <= this.__height) {
			if(stack != null) stack.push(this);
			return true;
		}
		return false;
	}
	,__measureText: function() {
		if(this.__ranges == null) {
			this.__context.font = this.__getFont(this.__textFormat);
			return [this.__context.measureText(this.__text).width];
		} else {
			var measurements = [];
			var _g = 0;
			var _g1 = this.__ranges;
			while(_g < _g1.length) {
				var range = _g1[_g];
				++_g;
				this.__context.font = this.__getFont(range.format);
				measurements.push(this.__context.measureText(this.get_text().substring(range.start,range.end)).width);
			}
			return measurements;
		}
	}
	,__measureTextWithDOM: function() {
		var div = this.__div;
		if(this.__div == null) {
			div = window.document.createElement("div");
			div.innerHTML = this.__text;
			div.style.setProperty("font",this.__getFont(this.__textFormat),null);
			div.style.position = "absolute";
			div.style.top = "110%";
			window.document.body.appendChild(div);
		}
		this.__measuredWidth = div.clientWidth;
		if(this.__div == null) div.style.width = Std.string(this.__width) + "px";
		this.__measuredHeight = div.clientHeight;
		if(this.__div == null) window.document.body.removeChild(div);
	}
	,__renderCanvas: function(renderSession) {
		if(!this.__renderable || this.__worldAlpha <= 0) return;
		if(this.__dirty) {
			if((this.__text == null || this.__text == "") && !this.background && !this.border || (this.get_width() <= 0 || this.get_height() <= 0) && this.autoSize != openfl.text.TextFieldAutoSize.LEFT) {
				this.__canvas = null;
				this.__context = null;
			} else {
				if(this.__canvas == null) {
					this.__canvas = window.document.createElement("canvas");
					this.__context = this.__canvas.getContext("2d");
				}
				if(this.__text != null && this.__text != "") {
					var measurements = this.__measureText();
					var textWidth = 0.0;
					var _g = 0;
					while(_g < measurements.length) {
						var measurement = measurements[_g];
						++_g;
						textWidth += measurement;
					}
					if(this.autoSize == openfl.text.TextFieldAutoSize.LEFT) this.__width = textWidth + 4;
					this.__canvas.width = Math.ceil(this.__width);
					this.__canvas.height = Math.ceil(this.__height);
					if(this.border || this.background) {
						this.__context.rect(0.5,0.5,this.__width - 1,this.__height - 1);
						if(this.background) {
							this.__context.fillStyle = "#" + StringTools.hex(this.backgroundColor,6);
							this.__context.fill();
						}
						if(this.border) {
							this.__context.lineWidth = 1;
							this.__context.strokeStyle = "#" + StringTools.hex(this.borderColor,6);
							this.__context.stroke();
						}
					}
					if(this.__ranges == null) this.__renderText(this.get_text(),this.__textFormat,0); else {
						var currentIndex = 0;
						var range;
						var offsetX = 0.0;
						var _g1 = 0;
						var _g2 = this.__ranges.length;
						while(_g1 < _g2) {
							var i = _g1++;
							range = this.__ranges[i];
							this.__renderText(this.get_text().substring(range.start,range.end),range.format,offsetX);
							offsetX += measurements[i];
						}
					}
				} else {
					if(this.autoSize == openfl.text.TextFieldAutoSize.LEFT) this.__width = 4;
					this.__canvas.width = Math.ceil(this.__width);
					this.__canvas.height = Math.ceil(this.__height);
					if(this.border || this.background) {
						if(this.border) this.__context.rect(0.5,0.5,this.__width - 1,this.__height - 1); else this.__context.rect(0,0,this.__width,this.__height);
						if(this.background) {
							this.__context.fillStyle = "#" + StringTools.hex(this.backgroundColor,6);
							this.__context.fill();
						}
						if(this.border) {
							this.__context.lineWidth = 1;
							this.__context.lineCap = "square";
							this.__context.strokeStyle = "#" + StringTools.hex(this.borderColor,6);
							this.__context.stroke();
						}
					}
				}
			}
			this.__dirty = false;
		}
		if(this.__canvas != null) {
			var context = renderSession.context;
			context.globalAlpha = this.__worldAlpha;
			var transform = this.__worldTransform;
			if(renderSession.roundPixels) context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx | 0,transform.ty | 0); else context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx,transform.ty);
			if(this.get_scrollRect() == null) context.drawImage(this.__canvas,0,0); else context.drawImage(this.__canvas,this.get_scrollRect().x,this.get_scrollRect().y,this.get_scrollRect().width,this.get_scrollRect().height,this.get_scrollRect().x,this.get_scrollRect().y,this.get_scrollRect().width,this.get_scrollRect().height);
		}
	}
	,__renderDOM: function(renderSession) {
		if(this.stage != null && this.__worldVisible && this.__renderable) {
			if(this.__dirty || this.__div == null) {
				if(this.__text != "" || this.background || this.border) {
					if(this.__div == null) {
						this.__div = window.document.createElement("div");
						this.__initializeElement(this.__div,renderSession);
						this.__style.setProperty("cursor","inherit",null);
					}
					this.__div.innerHTML = this.__text;
					if(this.background) this.__style.setProperty("background-color","#" + StringTools.hex(this.backgroundColor,6),null); else this.__style.removeProperty("background-color");
					if(this.border) this.__style.setProperty("border","solid 1px #" + StringTools.hex(this.borderColor,6),null); else this.__style.removeProperty("border");
					this.__style.setProperty("font",this.__getFont(this.__textFormat),null);
					this.__style.setProperty("color","#" + StringTools.hex(this.__textFormat.color,6),null);
					if(this.autoSize != openfl.text.TextFieldAutoSize.NONE) this.__style.setProperty("width","auto",null); else this.__style.setProperty("width",this.__width + "px",null);
					this.__style.setProperty("height",this.__height + "px",null);
					var _g = this.__textFormat.align;
					switch(_g[1]) {
					case 3:
						this.__style.setProperty("text-align","center",null);
						break;
					case 1:
						this.__style.setProperty("text-align","right",null);
						break;
					default:
						this.__style.setProperty("text-align","left",null);
					}
					this.__dirty = false;
				} else if(this.__div != null) {
					renderSession.element.removeChild(this.__div);
					this.__div = null;
				}
			}
			if(this.__div != null) this.__applyStyle(renderSession,true,true,false);
		} else if(this.__div != null) {
			renderSession.element.removeChild(this.__div);
			this.__div = null;
			this.__style = null;
		}
	}
	,__renderText: function(text,format,offsetX) {
		this.__context.font = this.__getFont(format);
		this.__context.textBaseline = "top";
		this.__context.fillStyle = "#" + StringTools.hex(format.color,6);
		var lines = text.split("\n");
		var yOffset = 0;
		var _g = 0;
		while(_g < lines.length) {
			var line = lines[_g];
			++_g;
			var _g1 = format.align;
			switch(_g1[1]) {
			case 3:
				this.__context.textAlign = "center";
				this.__context.fillText(line,this.__width / 2,2 + yOffset,this.__width - 4);
				break;
			case 1:
				this.__context.textAlign = "end";
				this.__context.fillText(line,this.__width - 2,2 + yOffset,this.__width - 4);
				break;
			default:
				this.__context.textAlign = "start";
				this.__context.fillText(line,2 + offsetX,2 + yOffset,this.__width - 4);
			}
			yOffset += this.get_textHeight();
		}
	}
	,set_autoSize: function(value) {
		if(value != this.autoSize) this.__dirty = true;
		return this.autoSize = value;
	}
	,set_background: function(value) {
		if(value != this.background) this.__dirty = true;
		return this.background = value;
	}
	,set_backgroundColor: function(value) {
		if(value != this.backgroundColor) this.__dirty = true;
		return this.backgroundColor = value;
	}
	,set_border: function(value) {
		if(value != this.border) this.__dirty = true;
		return this.border = value;
	}
	,set_borderColor: function(value) {
		if(value != this.borderColor) this.__dirty = true;
		return this.borderColor = value;
	}
	,get_bottomScrollV: function() {
		return this.get_numLines();
	}
	,get_caretPos: function() {
		return 0;
	}
	,get_defaultTextFormat: function() {
		return this.__textFormat.clone();
	}
	,set_defaultTextFormat: function(value) {
		this.__textFormat.__merge(value);
		return value;
	}
	,get_height: function() {
		return this.__height * this.get_scaleY();
	}
	,set_height: function(value) {
		if(this.get_scaleY() != 1 || value != this.__height) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty++;
			}
			this.__dirty = true;
		}
		this.set_scaleY(1);
		return this.__height = value;
	}
	,get_htmlText: function() {
		return this.__text;
	}
	,set_htmlText: function(value) {
		if(!this.__isHTML || this.__text != value) this.__dirty = true;
		this.__ranges = null;
		this.__isHTML = true;
		return this.__text = value;
	}
	,get_maxScrollH: function() {
		return 0;
	}
	,get_maxScrollV: function() {
		return 1;
	}
	,get_numLines: function() {
		if(this.get_text() != "" && this.get_text() != null) {
			var count = this.get_text().split("\n").length;
			if(this.__isHTML) count += this.get_text().split("<br>").length - 1;
			return count;
		}
		return 1;
	}
	,get_text: function() {
		if(this.__isHTML) {
		}
		return this.__text;
	}
	,set_text: function(value) {
		if(this.__isHTML || this.__text != value) this.__dirty = true;
		this.__ranges = null;
		this.__isHTML = false;
		return this.__text = value;
	}
	,get_textColor: function() {
		return this.__textFormat.color;
	}
	,set_textColor: function(value) {
		if(value != this.__textFormat.color) this.__dirty = true;
		if(this.__ranges != null) {
			var _g = 0;
			var _g1 = this.__ranges;
			while(_g < _g1.length) {
				var range = _g1[_g];
				++_g;
				range.format.color = value;
			}
		}
		return this.__textFormat.color = value;
	}
	,get_textWidth: function() {
		if(this.__canvas != null) {
			var sizes = this.__measureText();
			var total = 0;
			var _g = 0;
			while(_g < sizes.length) {
				var size = sizes[_g];
				++_g;
				total += size;
			}
			return total;
		} else if(this.__div != null) return this.__div.clientWidth; else {
			this.__measureTextWithDOM();
			return this.__measuredWidth;
		}
	}
	,get_textHeight: function() {
		if(this.__canvas != null) return this.__textFormat.size * 1.185; else if(this.__div != null) return this.__div.clientHeight; else {
			this.__measureTextWithDOM();
			return this.__measuredHeight + this.__textFormat.size * 0.185;
		}
	}
	,set_type: function(value) {
		return this.type = value;
	}
	,get_width: function() {
		if(this.autoSize == openfl.text.TextFieldAutoSize.LEFT) return (this.get_textWidth() + 4) * this.get_scaleX(); else return this.__width * this.get_scaleX();
	}
	,set_width: function(value) {
		if(this.get_scaleX() != 1 || this.__width != value) {
			if(!this.__transformDirty) {
				this.__transformDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty++;
			}
			this.__dirty = true;
		}
		this.set_scaleX(1);
		return this.__width = value;
	}
	,get_wordWrap: function() {
		return this.wordWrap;
	}
	,set_wordWrap: function(value) {
		return this.wordWrap = value;
	}
	,__class__: openfl.text.TextField
	,__properties__: $extend(openfl.display.InteractiveObject.prototype.__properties__,{set_wordWrap:"set_wordWrap",get_wordWrap:"get_wordWrap",set_type:"set_type",get_textWidth:"get_textWidth",get_textHeight:"get_textHeight",set_textColor:"set_textColor",get_textColor:"get_textColor",set_text:"set_text",get_text:"get_text",get_numLines:"get_numLines",get_maxScrollV:"get_maxScrollV",get_maxScrollH:"get_maxScrollH",set_htmlText:"set_htmlText",get_htmlText:"get_htmlText",set_defaultTextFormat:"set_defaultTextFormat",get_defaultTextFormat:"get_defaultTextFormat",get_caretPos:"get_caretPos",get_bottomScrollV:"get_bottomScrollV",set_borderColor:"set_borderColor",set_border:"set_border",set_backgroundColor:"set_backgroundColor",set_background:"set_background",set_autoSize:"set_autoSize"})
});
openfl.display.FPS = function(x,y,color) {
	if(color == null) color = 0;
	if(y == null) y = 10;
	if(x == null) x = 10;
	openfl.text.TextField.call(this);
	this.embedFonts = true;
	this.set_x(x);
	this.set_y(y);
	this.currentFPS = 0;
	this.selectable = false;
	this.set_defaultTextFormat(new openfl.text.TextFormat("_sans",20.0,color));
	this.set_text("FPS: ");
	this.cacheCount = 0;
	this.times = [];
	this.addEventListener(openfl.events.Event.ENTER_FRAME,$bind(this,this.this_onEnterFrame));
};
$hxClasses["openfl.display.FPS"] = openfl.display.FPS;
openfl.display.FPS.__name__ = ["openfl","display","FPS"];
openfl.display.FPS.__super__ = openfl.text.TextField;
openfl.display.FPS.prototype = $extend(openfl.text.TextField.prototype,{
	this_onEnterFrame: function(event) {
		var currentTime = haxe.Timer.stamp();
		this.times.push(currentTime);
		while(this.times[0] < currentTime - 1) this.times.shift();
		var currentCount = this.times.length;
		this.currentFPS = Math.round((currentCount + this.cacheCount) / 2);
		if(currentCount != this.cacheCount && this.get_visible()) this.set_text("FPS: " + this.currentFPS);
		this.cacheCount = currentCount;
	}
	,__class__: openfl.display.FPS
});
openfl.display.FrameLabel = function(name,frame) {
	openfl.events.EventDispatcher.call(this);
	this.__name = name;
	this.__frame = frame;
};
$hxClasses["openfl.display.FrameLabel"] = openfl.display.FrameLabel;
openfl.display.FrameLabel.__name__ = ["openfl","display","FrameLabel"];
openfl.display.FrameLabel.__super__ = openfl.events.EventDispatcher;
openfl.display.FrameLabel.prototype = $extend(openfl.events.EventDispatcher.prototype,{
	get_frame: function() {
		return this.__frame;
	}
	,get_name: function() {
		return this.__name;
	}
	,__class__: openfl.display.FrameLabel
	,__properties__: {get_name:"get_name",get_frame:"get_frame"}
});
openfl.display.GradientType = $hxClasses["openfl.display.GradientType"] = { __ename__ : true, __constructs__ : ["RADIAL","LINEAR"] };
openfl.display.GradientType.RADIAL = ["RADIAL",0];
openfl.display.GradientType.RADIAL.toString = $estr;
openfl.display.GradientType.RADIAL.__enum__ = openfl.display.GradientType;
openfl.display.GradientType.LINEAR = ["LINEAR",1];
openfl.display.GradientType.LINEAR.toString = $estr;
openfl.display.GradientType.LINEAR.__enum__ = openfl.display.GradientType;
openfl.display.Graphics = function() {
	this.__commands = new Array();
	this.__halfStrokeWidth = 0;
	this.__positionX = 0;
	this.__positionY = 0;
};
$hxClasses["openfl.display.Graphics"] = openfl.display.Graphics;
openfl.display.Graphics.__name__ = ["openfl","display","Graphics"];
openfl.display.Graphics.prototype = {
	beginBitmapFill: function(bitmap,matrix,repeat,smooth) {
		if(smooth == null) smooth = false;
		if(repeat == null) repeat = true;
		this.__commands.push(openfl.display.DrawCommand.BeginBitmapFill(bitmap,matrix,repeat,smooth));
		this.__visible = true;
	}
	,beginFill: function(rgb,alpha) {
		if(alpha == null) alpha = 1;
		this.__commands.push(openfl.display.DrawCommand.BeginFill(rgb & 16777215,alpha));
		if(alpha > 0) this.__visible = true;
	}
	,beginGradientFill: function(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio) {
		openfl.Lib.notImplemented("Graphics.beginGradientFill");
	}
	,clear: function() {
		this.__commands = new Array();
		this.__halfStrokeWidth = 0;
		if(this.__bounds != null) {
			this.__dirty = true;
			this.__bounds = null;
		}
		this.__visible = false;
	}
	,curveTo: function(cx,cy,x,y) {
		this.__inflateBounds(this.__positionX - this.__halfStrokeWidth,this.__positionY - this.__halfStrokeWidth);
		this.__inflateBounds(this.__positionX + this.__halfStrokeWidth,this.__positionY + this.__halfStrokeWidth);
		this.__inflateBounds(cx,cy);
		this.__positionX = x;
		this.__positionY = y;
		this.__inflateBounds(this.__positionX - this.__halfStrokeWidth,this.__positionY - this.__halfStrokeWidth);
		this.__inflateBounds(this.__positionX + this.__halfStrokeWidth,this.__positionY + this.__halfStrokeWidth);
		this.__commands.push(openfl.display.DrawCommand.CurveTo(cx,cy,x,y));
		this.__dirty = true;
	}
	,drawCircle: function(x,y,radius) {
		if(radius <= 0) return;
		this.__inflateBounds(x - radius - this.__halfStrokeWidth,y - radius - this.__halfStrokeWidth);
		this.__inflateBounds(x + radius + this.__halfStrokeWidth,y + radius + this.__halfStrokeWidth);
		this.__commands.push(openfl.display.DrawCommand.DrawCircle(x,y,radius));
		this.__dirty = true;
	}
	,drawEllipse: function(x,y,width,height) {
		if(width <= 0 || height <= 0) return;
		this.__inflateBounds(x - this.__halfStrokeWidth,y - this.__halfStrokeWidth);
		this.__inflateBounds(x + width + this.__halfStrokeWidth,y + height + this.__halfStrokeWidth);
		this.__commands.push(openfl.display.DrawCommand.DrawEllipse(x,y,width,height));
		this.__dirty = true;
	}
	,drawGraphicsData: function(graphicsData) {
		openfl.Lib.notImplemented("Graphics.drawGraphicsData");
	}
	,drawPath: function(commands,data,winding) {
		openfl.Lib.notImplemented("Graphics.drawPath");
	}
	,drawRect: function(x,y,width,height) {
		if(width <= 0 || height <= 0) return;
		this.__inflateBounds(x - this.__halfStrokeWidth,y - this.__halfStrokeWidth);
		this.__inflateBounds(x + width + this.__halfStrokeWidth,y + height + this.__halfStrokeWidth);
		this.__commands.push(openfl.display.DrawCommand.DrawRect(x,y,width,height));
		this.__dirty = true;
	}
	,drawRoundRect: function(x,y,width,height,rx,ry) {
		if(ry == null) ry = -1;
		openfl.Lib.notImplemented("Graphics.drawRoundRect");
	}
	,drawRoundRectComplex: function(x,y,width,height,topLeftRadius,topRightRadius,bottomLeftRadius,bottomRightRadius) {
		openfl.Lib.notImplemented("Graphics.drawRoundRectComplex");
	}
	,drawTiles: function(sheet,tileData,smooth,flags,count) {
		if(count == null) count = -1;
		if(flags == null) flags = 0;
		if(smooth == null) smooth = false;
		this.__inflateBounds(0,0);
		this.__inflateBounds(openfl.Lib.current.stage.stageWidth,openfl.Lib.current.stage.stageHeight);
		this.__commands.push(openfl.display.DrawCommand.DrawTiles(sheet,tileData,smooth,flags,count));
		this.__dirty = true;
		this.__visible = true;
	}
	,drawTriangles: function(vertices,indices,uvtData,culling) {
		openfl.Lib.notImplemented("Graphics.drawTriangles");
	}
	,endFill: function() {
		this.__commands.push(openfl.display.DrawCommand.EndFill);
	}
	,lineBitmapStyle: function(bitmap,matrix,repeat,smooth) {
		if(smooth == null) smooth = false;
		if(repeat == null) repeat = true;
		openfl.Lib.notImplemented("Graphics.lineBitmapStyle");
	}
	,lineGradientStyle: function(type,colors,alphas,ratios,matrix,spreadMethod,interpolationMethod,focalPointRatio) {
		openfl.Lib.notImplemented("Graphics.lineGradientStyle");
	}
	,lineStyle: function(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit) {
		if(thickness != null) this.__halfStrokeWidth = thickness / 2; else this.__halfStrokeWidth = 0;
		this.__commands.push(openfl.display.DrawCommand.LineStyle(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit));
		if(thickness != null) this.__visible = true;
	}
	,lineTo: function(x,y) {
		this.__inflateBounds(this.__positionX - this.__halfStrokeWidth,this.__positionY - this.__halfStrokeWidth);
		this.__inflateBounds(this.__positionX + this.__halfStrokeWidth,this.__positionY + this.__halfStrokeWidth);
		this.__positionX = x;
		this.__positionY = y;
		this.__inflateBounds(this.__positionX - this.__halfStrokeWidth,this.__positionY - this.__halfStrokeWidth);
		this.__inflateBounds(this.__positionX + this.__halfStrokeWidth,this.__positionY + this.__halfStrokeWidth);
		this.__commands.push(openfl.display.DrawCommand.LineTo(x,y));
		this.__dirty = true;
	}
	,moveTo: function(x,y) {
		this.__commands.push(openfl.display.DrawCommand.MoveTo(x,y));
		this.__positionX = x;
		this.__positionY = y;
	}
	,__beginPath: function() {
		if(!this.__inPath) {
			this.__context.beginPath();
			this.__inPath = true;
		}
	}
	,__beginPatternFill: function(bitmapFill,bitmapRepeat) {
		if(this.__setFill || bitmapFill == null) return;
		if(this.__pattern == null) {
			if(bitmapFill.__sourceImage != null) this.__pattern = this.__context.createPattern(bitmapFill.__sourceImage,bitmapRepeat?"repeat":"no-repeat"); else this.__pattern = this.__context.createPattern(bitmapFill.__sourceCanvas,bitmapRepeat?"repeat":"no-repeat");
		}
		this.__context.fillStyle = this.__pattern;
		this.__setFill = true;
	}
	,__closePath: function(closeFill) {
		if(this.__inPath) {
			if(this.__hasFill) {
				this.__context.translate(-this.__bounds.x,-this.__bounds.y);
				if(this.__pendingMatrix != null) {
					this.__context.transform(this.__pendingMatrix.a,this.__pendingMatrix.b,this.__pendingMatrix.c,this.__pendingMatrix.d,this.__pendingMatrix.tx,this.__pendingMatrix.ty);
					this.__context.fill();
					this.__context.transform(this.__inversePendingMatrix.a,this.__inversePendingMatrix.b,this.__inversePendingMatrix.c,this.__inversePendingMatrix.d,this.__inversePendingMatrix.tx,this.__inversePendingMatrix.ty);
				} else this.__context.fill();
				this.__context.translate(this.__bounds.x,this.__bounds.y);
			}
			this.__context.closePath();
			if(this.__hasStroke) this.__context.stroke();
		}
		this.__inPath = false;
		if(closeFill) {
			this.__hasFill = false;
			this.__hasStroke = false;
			this.__pendingMatrix = null;
			this.__inversePendingMatrix = null;
		}
	}
	,__getBounds: function(rect,matrix) {
		if(this.__bounds == null) return;
		var bounds = this.__bounds.clone().transform(matrix);
		rect.__expand(bounds.x,bounds.y,bounds.width,bounds.height);
	}
	,__hitTest: function(x,y,shapeFlag,matrix) {
		if(this.__bounds == null) return false;
		var bounds = this.__bounds.clone().transform(matrix);
		return x > bounds.x && y > bounds.y && x <= bounds.get_right() && y <= bounds.get_bottom();
	}
	,__inflateBounds: function(x,y) {
		if(this.__bounds == null) {
			this.__bounds = new openfl.geom.Rectangle(x,y,0,0);
			return;
		}
		if(x < this.__bounds.x) {
			this.__bounds.width += this.__bounds.x - x;
			this.__bounds.x = x;
		}
		if(y < this.__bounds.y) {
			this.__bounds.height += this.__bounds.y - y;
			this.__bounds.y = y;
		}
		if(x > this.__bounds.x + this.__bounds.width) this.__bounds.width = x - this.__bounds.x;
		if(y > this.__bounds.y + this.__bounds.height) this.__bounds.height = y - this.__bounds.y;
	}
	,__render: function() {
		if(this.__dirty) {
			this.__hasFill = false;
			this.__hasStroke = false;
			this.__inPath = false;
			this.__positionX = 0;
			this.__positionY = 0;
			if(!this.__visible || this.__commands.length == 0 || this.__bounds == null || this.__bounds.width == 0 || this.__bounds.height == 0) {
				this.__canvas = null;
				this.__context = null;
			} else {
				if(this.__canvas == null) {
					this.__canvas = window.document.createElement("canvas");
					this.__context = this.__canvas.getContext("2d");
				}
				this.__canvas.width = Math.ceil(this.__bounds.width);
				this.__canvas.height = Math.ceil(this.__bounds.height);
				var offsetX = this.__bounds.x;
				var offsetY = this.__bounds.y;
				var bitmapFill = null;
				var bitmapRepeat = false;
				var _g = 0;
				var _g1 = this.__commands;
				while(_g < _g1.length) {
					var command = _g1[_g];
					++_g;
					switch(command[1]) {
					case 0:
						var smooth = command[5];
						var repeat = command[4];
						var matrix = command[3];
						var bitmap = command[2];
						this.__closePath(false);
						if(bitmap != bitmapFill || repeat != bitmapRepeat) {
							bitmapFill = bitmap;
							bitmapRepeat = repeat;
							this.__pattern = null;
							this.__setFill = false;
							bitmap.__syncImageData();
						}
						if(matrix != null) {
							this.__pendingMatrix = matrix;
							this.__inversePendingMatrix = new openfl.geom.Matrix(matrix.a,matrix.b,matrix.c,matrix.d,matrix.tx,matrix.ty);
							this.__inversePendingMatrix.invert();
						} else {
							this.__pendingMatrix = null;
							this.__inversePendingMatrix = null;
						}
						this.__hasFill = true;
						break;
					case 1:
						var alpha = command[3];
						var rgb = command[2];
						this.__closePath(false);
						if(alpha == 1) this.__context.fillStyle = "#" + StringTools.hex(rgb,6); else {
							var r = (rgb & 16711680) >>> 16;
							var g = (rgb & 65280) >>> 8;
							var b = rgb & 255;
							this.__context.fillStyle = "rgba(" + r + ", " + g + ", " + b + ", " + alpha + ")";
						}
						bitmapFill = null;
						this.__setFill = true;
						this.__hasFill = true;
						break;
					case 2:
						var y = command[5];
						var x = command[4];
						var cy = command[3];
						var cx = command[2];
						this.__beginPatternFill(bitmapFill,bitmapRepeat);
						this.__beginPath();
						this.__context.quadraticCurveTo(cx - offsetX,cy - offsetY,x - offsetX,y - offsetY);
						this.__positionX = x;
						this.__positionY = y;
						break;
					case 3:
						var radius = command[4];
						var y1 = command[3];
						var x1 = command[2];
						this.__beginPatternFill(bitmapFill,bitmapRepeat);
						this.__beginPath();
						this.__context.moveTo(x1 - offsetX + radius,y1 - offsetY);
						this.__context.arc(x1 - offsetX,y1 - offsetY,radius,0,Math.PI * 2,true);
						break;
					case 4:
						var height = command[5];
						var width = command[4];
						var y2 = command[3];
						var x2 = command[2];
						x2 -= offsetX;
						y2 -= offsetY;
						var kappa = .5522848;
						var ox = width / 2 * kappa;
						var oy = height / 2 * kappa;
						var xe = x2 + width;
						var ye = y2 + height;
						var xm = x2 + width / 2;
						var ym = y2 + height / 2;
						this.__beginPatternFill(bitmapFill,bitmapRepeat);
						this.__beginPath();
						this.__context.moveTo(x2,ym);
						this.__context.bezierCurveTo(x2,ym - oy,xm - ox,y2,xm,y2);
						this.__context.bezierCurveTo(xm + ox,y2,xe,ym - oy,xe,ym);
						this.__context.bezierCurveTo(xe,ym + oy,xm + ox,ye,xm,ye);
						this.__context.bezierCurveTo(xm - ox,ye,x2,ym + oy,x2,ym);
						break;
					case 5:
						var height1 = command[5];
						var width1 = command[4];
						var y3 = command[3];
						var x3 = command[2];
						var optimizationUsed = false;
						if(bitmapFill != null) {
							var st = 0;
							var sr = 0;
							var sb = 0;
							var sl = 0;
							var canOptimizeMatrix = true;
							if(this.__pendingMatrix != null) {
								if(this.__pendingMatrix.b != 0 || this.__pendingMatrix.c != 0) canOptimizeMatrix = false; else {
									var stl = this.__inversePendingMatrix.transformPoint(new openfl.geom.Point(x3,y3));
									var sbr = this.__inversePendingMatrix.transformPoint(new openfl.geom.Point(x3 + width1,y3 + height1));
									st = stl.y;
									sl = stl.x;
									sb = sbr.y;
									sr = sbr.x;
								}
							} else {
								st = y3;
								sl = x3;
								sb = y3 + height1;
								sr = x3 + width1;
							}
							if(canOptimizeMatrix && st >= 0 && sl >= 0 && sr <= bitmapFill.width && sb <= bitmapFill.height) {
								optimizationUsed = true;
								if(bitmapFill.__sourceImage != null) this.__context.drawImage(bitmapFill.__sourceImage,sl,st,sr - sl,sb - st,x3,y3,width1,height1); else this.__context.drawImage(bitmapFill.__sourceCanvas,sl,st,sr - sl,sb - st,x3,y3,width1,height1);
							}
						}
						if(!optimizationUsed) {
							this.__beginPatternFill(bitmapFill,bitmapRepeat);
							this.__beginPath();
							this.__context.rect(x3 - offsetX,y3 - offsetY,width1,height1);
						}
						break;
					case 6:
						var count = command[6];
						var flags = command[5];
						var smooth1 = command[4];
						var tileData = command[3];
						var sheet = command[2];
						this.__closePath(false);
						var useScale = (flags & 1) > 0;
						var useRotation = (flags & 2) > 0;
						var useTransform = (flags & 16) > 0;
						var useRGB = (flags & 4) > 0;
						var useAlpha = (flags & 8) > 0;
						if(useTransform) {
							useScale = false;
							useRotation = false;
						}
						var scaleIndex = 0;
						var rotationIndex = 0;
						var rgbIndex = 0;
						var alphaIndex = 0;
						var transformIndex = 0;
						var numValues = 3;
						if(useScale) {
							scaleIndex = numValues;
							numValues++;
						}
						if(useRotation) {
							rotationIndex = numValues;
							numValues++;
						}
						if(useTransform) {
							transformIndex = numValues;
							numValues += 4;
						}
						if(useRGB) {
							rgbIndex = numValues;
							numValues += 3;
						}
						if(useAlpha) {
							alphaIndex = numValues;
							numValues++;
						}
						var totalCount = tileData.length;
						if(count >= 0 && totalCount > count) totalCount = count;
						var itemCount = totalCount / numValues | 0;
						var index = 0;
						var rect = null;
						var center = null;
						var previousTileID = -1;
						var surface;
						sheet.__bitmap.__syncImageData();
						if(sheet.__bitmap.__sourceImage != null) surface = sheet.__bitmap.__sourceImage; else surface = sheet.__bitmap.__sourceCanvas;
						while(index < totalCount) {
							var tileID = tileData[index + 2] | 0;
							if(tileID != previousTileID) {
								rect = sheet.__tileRects[tileID];
								center = sheet.__centerPoints[tileID];
								previousTileID = tileID;
							}
							if(rect != null && rect.width > 0 && rect.height > 0 && center != null) {
								this.__context.save();
								this.__context.translate(tileData[index],tileData[index + 1]);
								if(useRotation) this.__context.rotate(tileData[index + rotationIndex]);
								var scale = 1.0;
								if(useScale) scale = tileData[index + scaleIndex];
								if(useTransform) this.__context.transform(tileData[index + transformIndex],tileData[index + transformIndex + 1],tileData[index + transformIndex + 2],tileData[index + transformIndex + 3],0,0);
								if(useAlpha) this.__context.globalAlpha = tileData[index + alphaIndex];
								this.__context.drawImage(surface,rect.x,rect.y,rect.width,rect.height,-center.x * scale,-center.y * scale,rect.width * scale,rect.height * scale);
								this.__context.restore();
							}
							index += numValues;
						}
						break;
					case 7:
						this.__closePath(true);
						break;
					case 8:
						var miterLimit = command[9];
						var joints = command[8];
						var caps = command[7];
						var scaleMode = command[6];
						var pixelHinting = command[5];
						var alpha1 = command[4];
						var color = command[3];
						var thickness = command[2];
						this.__closePath(false);
						if(thickness == null) this.__hasStroke = false; else {
							this.__context.lineWidth = thickness;
							this.__context.lineJoin = joints;
							this.__context.lineCap = caps;
							this.__context.miterLimit = miterLimit;
							this.__context.strokeStyle = "#" + StringTools.hex(color,6);
							this.__hasStroke = true;
						}
						break;
					case 9:
						var y4 = command[3];
						var x4 = command[2];
						this.__beginPatternFill(bitmapFill,bitmapRepeat);
						this.__beginPath();
						this.__context.lineTo(x4 - offsetX,y4 - offsetY);
						this.__positionX = x4;
						this.__positionY = y4;
						break;
					case 10:
						var y5 = command[3];
						var x5 = command[2];
						this.__beginPath();
						this.__context.moveTo(x5 - offsetX,y5 - offsetY);
						this.__positionX = x5;
						this.__positionY = y5;
						break;
					}
				}
			}
			this.__dirty = false;
			this.__closePath(false);
		}
	}
	,__renderMask: function(renderSession) {
		if(this.__commands.length != 0) {
			var __context = renderSession.context;
			var __positionX = 0.0;
			var __positionY = 0.0;
			var offsetX = 0;
			var offsetY = 0;
			var _g = 0;
			var _g1 = this.__commands;
			while(_g < _g1.length) {
				var command = _g1[_g];
				++_g;
				switch(command[1]) {
				case 2:
					var y = command[5];
					var x = command[4];
					var cy = command[3];
					var cx = command[2];
					__context.quadraticCurveTo(cx,cy,x,y);
					__positionX = x;
					__positionY = y;
					break;
				case 3:
					var radius = command[4];
					var y1 = command[3];
					var x1 = command[2];
					__context.arc(x1 - offsetX,y1 - offsetY,radius,0,Math.PI * 2,true);
					break;
				case 4:
					var height = command[5];
					var width = command[4];
					var y2 = command[3];
					var x2 = command[2];
					x2 -= offsetX;
					y2 -= offsetY;
					var kappa = .5522848;
					var ox = width / 2 * kappa;
					var oy = height / 2 * kappa;
					var xe = x2 + width;
					var ye = y2 + height;
					var xm = x2 + width / 2;
					var ym = y2 + height / 2;
					__context.moveTo(x2,ym);
					__context.bezierCurveTo(x2,ym - oy,xm - ox,y2,xm,y2);
					__context.bezierCurveTo(xm + ox,y2,xe,ym - oy,xe,ym);
					__context.bezierCurveTo(xe,ym + oy,xm + ox,ye,xm,ye);
					__context.bezierCurveTo(xm - ox,ye,x2,ym + oy,x2,ym);
					break;
				case 5:
					var height1 = command[5];
					var width1 = command[4];
					var y3 = command[3];
					var x3 = command[2];
					__context.rect(x3 - offsetX,y3 - offsetY,width1,height1);
					break;
				case 9:
					var y4 = command[3];
					var x4 = command[2];
					__context.lineTo(x4 - offsetX,y4 - offsetY);
					__positionX = x4;
					__positionY = y4;
					break;
				case 10:
					var y5 = command[3];
					var x5 = command[2];
					__context.moveTo(x5 - offsetX,y5 - offsetY);
					__positionX = x5;
					__positionY = y5;
					break;
				default:
				}
			}
		}
	}
	,__class__: openfl.display.Graphics
};
openfl.display.DrawCommand = $hxClasses["openfl.display.DrawCommand"] = { __ename__ : true, __constructs__ : ["BeginBitmapFill","BeginFill","CurveTo","DrawCircle","DrawEllipse","DrawRect","DrawTiles","EndFill","LineStyle","LineTo","MoveTo"] };
openfl.display.DrawCommand.BeginBitmapFill = function(bitmap,matrix,repeat,smooth) { var $x = ["BeginBitmapFill",0,bitmap,matrix,repeat,smooth]; $x.__enum__ = openfl.display.DrawCommand; $x.toString = $estr; return $x; };
openfl.display.DrawCommand.BeginFill = function(rgb,alpha) { var $x = ["BeginFill",1,rgb,alpha]; $x.__enum__ = openfl.display.DrawCommand; $x.toString = $estr; return $x; };
openfl.display.DrawCommand.CurveTo = function(cx,cy,x,y) { var $x = ["CurveTo",2,cx,cy,x,y]; $x.__enum__ = openfl.display.DrawCommand; $x.toString = $estr; return $x; };
openfl.display.DrawCommand.DrawCircle = function(x,y,radius) { var $x = ["DrawCircle",3,x,y,radius]; $x.__enum__ = openfl.display.DrawCommand; $x.toString = $estr; return $x; };
openfl.display.DrawCommand.DrawEllipse = function(x,y,width,height) { var $x = ["DrawEllipse",4,x,y,width,height]; $x.__enum__ = openfl.display.DrawCommand; $x.toString = $estr; return $x; };
openfl.display.DrawCommand.DrawRect = function(x,y,width,height) { var $x = ["DrawRect",5,x,y,width,height]; $x.__enum__ = openfl.display.DrawCommand; $x.toString = $estr; return $x; };
openfl.display.DrawCommand.DrawTiles = function(sheet,tileData,smooth,flags,count) { var $x = ["DrawTiles",6,sheet,tileData,smooth,flags,count]; $x.__enum__ = openfl.display.DrawCommand; $x.toString = $estr; return $x; };
openfl.display.DrawCommand.EndFill = ["EndFill",7];
openfl.display.DrawCommand.EndFill.toString = $estr;
openfl.display.DrawCommand.EndFill.__enum__ = openfl.display.DrawCommand;
openfl.display.DrawCommand.LineStyle = function(thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit) { var $x = ["LineStyle",8,thickness,color,alpha,pixelHinting,scaleMode,caps,joints,miterLimit]; $x.__enum__ = openfl.display.DrawCommand; $x.toString = $estr; return $x; };
openfl.display.DrawCommand.LineTo = function(x,y) { var $x = ["LineTo",9,x,y]; $x.__enum__ = openfl.display.DrawCommand; $x.toString = $estr; return $x; };
openfl.display.DrawCommand.MoveTo = function(x,y) { var $x = ["MoveTo",10,x,y]; $x.__enum__ = openfl.display.DrawCommand; $x.toString = $estr; return $x; };
openfl.display.GraphicsPathWinding = $hxClasses["openfl.display.GraphicsPathWinding"] = { __ename__ : true, __constructs__ : ["EVEN_ODD","NON_ZERO"] };
openfl.display.GraphicsPathWinding.EVEN_ODD = ["EVEN_ODD",0];
openfl.display.GraphicsPathWinding.EVEN_ODD.toString = $estr;
openfl.display.GraphicsPathWinding.EVEN_ODD.__enum__ = openfl.display.GraphicsPathWinding;
openfl.display.GraphicsPathWinding.NON_ZERO = ["NON_ZERO",1];
openfl.display.GraphicsPathWinding.NON_ZERO.toString = $estr;
openfl.display.GraphicsPathWinding.NON_ZERO.__enum__ = openfl.display.GraphicsPathWinding;
openfl.display.IGraphicsData = function() { };
$hxClasses["openfl.display.IGraphicsData"] = openfl.display.IGraphicsData;
openfl.display.IGraphicsData.__name__ = ["openfl","display","IGraphicsData"];
openfl.display.IGraphicsData.prototype = {
	__class__: openfl.display.IGraphicsData
};
openfl.display.GraphicsDataType = $hxClasses["openfl.display.GraphicsDataType"] = { __ename__ : true, __constructs__ : ["STROKE","SOLID","GRADIENT","PATH","BITMAP","END"] };
openfl.display.GraphicsDataType.STROKE = ["STROKE",0];
openfl.display.GraphicsDataType.STROKE.toString = $estr;
openfl.display.GraphicsDataType.STROKE.__enum__ = openfl.display.GraphicsDataType;
openfl.display.GraphicsDataType.SOLID = ["SOLID",1];
openfl.display.GraphicsDataType.SOLID.toString = $estr;
openfl.display.GraphicsDataType.SOLID.__enum__ = openfl.display.GraphicsDataType;
openfl.display.GraphicsDataType.GRADIENT = ["GRADIENT",2];
openfl.display.GraphicsDataType.GRADIENT.toString = $estr;
openfl.display.GraphicsDataType.GRADIENT.__enum__ = openfl.display.GraphicsDataType;
openfl.display.GraphicsDataType.PATH = ["PATH",3];
openfl.display.GraphicsDataType.PATH.toString = $estr;
openfl.display.GraphicsDataType.PATH.__enum__ = openfl.display.GraphicsDataType;
openfl.display.GraphicsDataType.BITMAP = ["BITMAP",4];
openfl.display.GraphicsDataType.BITMAP.toString = $estr;
openfl.display.GraphicsDataType.BITMAP.__enum__ = openfl.display.GraphicsDataType;
openfl.display.GraphicsDataType.END = ["END",5];
openfl.display.GraphicsDataType.END.toString = $estr;
openfl.display.GraphicsDataType.END.__enum__ = openfl.display.GraphicsDataType;
openfl.display.InterpolationMethod = $hxClasses["openfl.display.InterpolationMethod"] = { __ename__ : true, __constructs__ : ["RGB","LINEAR_RGB"] };
openfl.display.InterpolationMethod.RGB = ["RGB",0];
openfl.display.InterpolationMethod.RGB.toString = $estr;
openfl.display.InterpolationMethod.RGB.__enum__ = openfl.display.InterpolationMethod;
openfl.display.InterpolationMethod.LINEAR_RGB = ["LINEAR_RGB",1];
openfl.display.InterpolationMethod.LINEAR_RGB.toString = $estr;
openfl.display.InterpolationMethod.LINEAR_RGB.__enum__ = openfl.display.InterpolationMethod;
openfl.display._JointStyle = {};
openfl.display._JointStyle.JointStyle_Impl_ = function() { };
$hxClasses["openfl.display._JointStyle.JointStyle_Impl_"] = openfl.display._JointStyle.JointStyle_Impl_;
openfl.display._JointStyle.JointStyle_Impl_.__name__ = ["openfl","display","_JointStyle","JointStyle_Impl_"];
openfl.display.LineScaleMode = $hxClasses["openfl.display.LineScaleMode"] = { __ename__ : true, __constructs__ : ["HORIZONTAL","NONE","NORMAL","VERTICAL"] };
openfl.display.LineScaleMode.HORIZONTAL = ["HORIZONTAL",0];
openfl.display.LineScaleMode.HORIZONTAL.toString = $estr;
openfl.display.LineScaleMode.HORIZONTAL.__enum__ = openfl.display.LineScaleMode;
openfl.display.LineScaleMode.NONE = ["NONE",1];
openfl.display.LineScaleMode.NONE.toString = $estr;
openfl.display.LineScaleMode.NONE.__enum__ = openfl.display.LineScaleMode;
openfl.display.LineScaleMode.NORMAL = ["NORMAL",2];
openfl.display.LineScaleMode.NORMAL.toString = $estr;
openfl.display.LineScaleMode.NORMAL.__enum__ = openfl.display.LineScaleMode;
openfl.display.LineScaleMode.VERTICAL = ["VERTICAL",3];
openfl.display.LineScaleMode.VERTICAL.toString = $estr;
openfl.display.LineScaleMode.VERTICAL.__enum__ = openfl.display.LineScaleMode;
openfl.display.Loader = function() {
	openfl.display.Sprite.call(this);
	this.contentLoaderInfo = openfl.display.LoaderInfo.create(this);
};
$hxClasses["openfl.display.Loader"] = openfl.display.Loader;
openfl.display.Loader.__name__ = ["openfl","display","Loader"];
openfl.display.Loader.__super__ = openfl.display.Sprite;
openfl.display.Loader.prototype = $extend(openfl.display.Sprite.prototype,{
	load: function(request,context) {
		var extension = "";
		var parts = request.url.split(".");
		if(parts.length > 0) extension = parts[parts.length - 1].toLowerCase();
		var transparent = true;
		this.contentLoaderInfo.url = request.url;
		if(request.contentType == null && request.contentType != "") switch(extension) {
		case "swf":
			this.contentLoaderInfo.contentType = "application/x-shockwave-flash";
			break;
		case "jpg":case "jpeg":
			transparent = false;
			this.contentLoaderInfo.contentType = "image/jpeg";
			break;
		case "png":
			this.contentLoaderInfo.contentType = "image/png";
			break;
		case "gif":
			this.contentLoaderInfo.contentType = "image/gif";
			break;
		default:
			this.contentLoaderInfo.contentType = "application/x-www-form-urlencoded";
		} else this.contentLoaderInfo.contentType = request.contentType;
		openfl.display.BitmapData.fromFile(request.url,$bind(this,this.BitmapData_onLoad),$bind(this,this.BitmapData_onError));
	}
	,loadBytes: function(buffer) {
		openfl.display.BitmapData.fromBytes(buffer,null,$bind(this,this.BitmapData_onLoad));
	}
	,unload: function() {
		if(this.get_numChildren() > 0) {
			while(this.get_numChildren() > 0) this.removeChildAt(0);
			this.content = null;
			this.contentLoaderInfo.url = null;
			this.contentLoaderInfo.contentType = null;
			this.contentLoaderInfo.content = null;
			this.contentLoaderInfo.bytesLoaded = 0;
			this.contentLoaderInfo.bytesTotal = 0;
			this.contentLoaderInfo.width = 0;
			this.contentLoaderInfo.height = 0;
			var event = new openfl.events.Event(openfl.events.Event.UNLOAD);
			event.currentTarget = this;
			this.dispatchEvent(event);
		}
	}
	,BitmapData_onLoad: function(bitmapData) {
		this.contentLoaderInfo.content = new openfl.display.Bitmap(bitmapData);
		this.content = this.contentLoaderInfo.content;
		this.addChild(this.contentLoaderInfo.content);
		var event = new openfl.events.Event(openfl.events.Event.COMPLETE);
		event.target = this.contentLoaderInfo;
		event.currentTarget = this.contentLoaderInfo;
		this.contentLoaderInfo.dispatchEvent(event);
	}
	,BitmapData_onError: function() {
		var event = new openfl.events.IOErrorEvent(openfl.events.IOErrorEvent.IO_ERROR);
		event.target = this.contentLoaderInfo;
		event.currentTarget = this.contentLoaderInfo;
		this.contentLoaderInfo.dispatchEvent(event);
	}
	,__class__: openfl.display.Loader
});
openfl.display.LoaderInfo = function() {
	openfl.events.EventDispatcher.call(this);
	this.applicationDomain = openfl.system.ApplicationDomain.currentDomain;
	this.bytesLoaded = 0;
	this.bytesTotal = 0;
	this.childAllowsParent = true;
	this.parameters = { };
};
$hxClasses["openfl.display.LoaderInfo"] = openfl.display.LoaderInfo;
openfl.display.LoaderInfo.__name__ = ["openfl","display","LoaderInfo"];
openfl.display.LoaderInfo.create = function(ldr) {
	var li = new openfl.display.LoaderInfo();
	if(ldr != null) li.loader = ldr; else li.url = "";
	return li;
};
openfl.display.LoaderInfo.__super__ = openfl.events.EventDispatcher;
openfl.display.LoaderInfo.prototype = $extend(openfl.events.EventDispatcher.prototype,{
	__class__: openfl.display.LoaderInfo
});
openfl.display.MovieClip = function() {
	openfl.display.Sprite.call(this);
	this.__currentFrame = 0;
	this.__currentLabels = [];
	this.__totalFrames = 0;
	this.enabled = true;
	this.loaderInfo = openfl.display.LoaderInfo.create(null);
};
$hxClasses["openfl.display.MovieClip"] = openfl.display.MovieClip;
openfl.display.MovieClip.__name__ = ["openfl","display","MovieClip"];
openfl.display.MovieClip.__super__ = openfl.display.Sprite;
openfl.display.MovieClip.prototype = $extend(openfl.display.Sprite.prototype,{
	gotoAndPlay: function(frame,scene) {
	}
	,gotoAndStop: function(frame,scene) {
	}
	,nextFrame: function() {
	}
	,play: function() {
	}
	,prevFrame: function() {
	}
	,stop: function() {
	}
	,get_currentFrame: function() {
		return this.__currentFrame;
	}
	,get_currentFrameLabel: function() {
		return this.__currentFrameLabel;
	}
	,get_currentLabel: function() {
		return this.__currentLabel;
	}
	,get_currentLabels: function() {
		return this.__currentLabels;
	}
	,get_framesLoaded: function() {
		return this.__totalFrames;
	}
	,get_totalFrames: function() {
		return this.__totalFrames;
	}
	,__class__: openfl.display.MovieClip
	,__properties__: $extend(openfl.display.Sprite.prototype.__properties__,{get_totalFrames:"get_totalFrames",get_framesLoaded:"get_framesLoaded",get_currentLabels:"get_currentLabels",get_currentLabel:"get_currentLabel",get_currentFrameLabel:"get_currentFrameLabel",get_currentFrame:"get_currentFrame"})
});
openfl.display.OpenGLView = function() {
	openfl.display.DirectRenderer.call(this,"OpenGLView");
	this.__canvas = window.document.createElement("canvas");
	this.__canvas.width = openfl.Lib.current.stage.stageWidth;
	this.__canvas.height = openfl.Lib.current.stage.stageHeight;
	this.__context = this.__canvas.getContext("webgl");
	if(this.__context == null) this.__context = this.__canvas.getContext("experimental-webgl");
	openfl.gl.GL.__context = this.__context;
};
$hxClasses["openfl.display.OpenGLView"] = openfl.display.OpenGLView;
openfl.display.OpenGLView.__name__ = ["openfl","display","OpenGLView"];
openfl.display.OpenGLView.__properties__ = {get_isSupported:"get_isSupported"}
openfl.display.OpenGLView.isSupported = null;
openfl.display.OpenGLView.get_isSupported = function() {
	if(!window.WebGLRenderingContext) return false;
	var view = new openfl.display.OpenGLView();
	if(view.__context == null) return false;
	return true;
};
openfl.display.OpenGLView.__super__ = openfl.display.DirectRenderer;
openfl.display.OpenGLView.prototype = $extend(openfl.display.DirectRenderer.prototype,{
	__renderCanvas: function(renderSession) {
		if(!this.__added) {
			this.__added = true;
			haxe.Log.trace("Warning: openfl-html5 only can run OpenGLView content using the DOM rendering mode",{ fileName : "OpenGLView.hx", lineNumber : 61, className : "openfl.display.OpenGLView", methodName : "__renderCanvas"});
			haxe.Log.trace("Please compile your project using -Ddom (on the command-line) or <haxedef name=\"dom\" /> to enable",{ fileName : "OpenGLView.hx", lineNumber : 62, className : "openfl.display.OpenGLView", methodName : "__renderCanvas"});
		}
	}
	,__renderDOM: function(renderSession) {
		if(this.stage != null && this.__worldVisible && this.__renderable) {
			if(!this.__added) {
				renderSession.element.appendChild(this.__canvas);
				this.__added = true;
				this.__initializeElement(this.__canvas,renderSession);
			}
			if(this.__context != null) {
				openfl.gl.GL.__context = this.__context;
				var rect = null;
				if(this.get_scrollRect() == null) rect = new openfl.geom.Rectangle(0,0,this.stage.stageWidth,this.stage.stageHeight); else rect = new openfl.geom.Rectangle(this.get_x() + this.get_scrollRect().x,this.get_y() + this.get_scrollRect().y,this.get_scrollRect().width,this.get_scrollRect().height);
				if(this.__render != null) this.__render(rect);
			}
		} else if(this.__added) {
			renderSession.element.removeChild(this.__canvas);
			this.__added = false;
		}
	}
	,__renderGL: function(renderSession) {
		if(this.stage != null && this.__renderable) {
			var rect = null;
			if(this.get_scrollRect() == null) rect = new openfl.geom.Rectangle(0,0,this.stage.stageWidth,this.stage.stageHeight); else rect = new openfl.geom.Rectangle(this.get_x() + this.get_scrollRect().x,this.get_y() + this.get_scrollRect().y,this.get_scrollRect().width,this.get_scrollRect().height);
			if(this.__render != null) this.__render(rect);
		}
	}
	,__class__: openfl.display.OpenGLView
});
openfl.display.PixelSnapping = $hxClasses["openfl.display.PixelSnapping"] = { __ename__ : true, __constructs__ : ["NEVER","AUTO","ALWAYS"] };
openfl.display.PixelSnapping.NEVER = ["NEVER",0];
openfl.display.PixelSnapping.NEVER.toString = $estr;
openfl.display.PixelSnapping.NEVER.__enum__ = openfl.display.PixelSnapping;
openfl.display.PixelSnapping.AUTO = ["AUTO",1];
openfl.display.PixelSnapping.AUTO.toString = $estr;
openfl.display.PixelSnapping.AUTO.__enum__ = openfl.display.PixelSnapping;
openfl.display.PixelSnapping.ALWAYS = ["ALWAYS",2];
openfl.display.PixelSnapping.ALWAYS.toString = $estr;
openfl.display.PixelSnapping.ALWAYS.__enum__ = openfl.display.PixelSnapping;
openfl.display.Shape = function() {
	openfl.display.DisplayObject.call(this);
};
$hxClasses["openfl.display.Shape"] = openfl.display.Shape;
openfl.display.Shape.__name__ = ["openfl","display","Shape"];
openfl.display.Shape.__super__ = openfl.display.DisplayObject;
openfl.display.Shape.prototype = $extend(openfl.display.DisplayObject.prototype,{
	__getBounds: function(rect,matrix) {
		if(this.__graphics != null) this.__graphics.__getBounds(rect,this.__worldTransform);
	}
	,__hitTest: function(x,y,shapeFlag,stack,interactiveOnly) {
		if(this.get_visible() && this.__graphics != null && this.__graphics.__hitTest(x,y,shapeFlag,this.__worldTransform)) {
			if(!interactiveOnly) stack.push(this);
			return true;
		}
		return false;
	}
	,__renderCanvas: function(renderSession) {
		if(!this.__renderable || this.__worldAlpha <= 0) return;
		if(this.__graphics != null) {
			this.__graphics.__render();
			if(this.__graphics.__canvas != null) {
				var context = renderSession.context;
				context.globalAlpha = this.__worldAlpha;
				var transform = this.__worldTransform;
				if(renderSession.roundPixels) context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx | 0,transform.ty | 0); else context.setTransform(transform.a,transform.b,transform.c,transform.d,transform.tx,transform.ty);
				if(this.get_scrollRect() == null) context.drawImage(this.__graphics.__canvas,this.__graphics.__bounds.x,this.__graphics.__bounds.y); else context.drawImage(this.__graphics.__canvas,this.get_scrollRect().x - this.__graphics.__bounds.x,this.get_scrollRect().y - this.__graphics.__bounds.y,this.get_scrollRect().width,this.get_scrollRect().height,this.__graphics.__bounds.x + this.get_scrollRect().x,this.__graphics.__bounds.y + this.get_scrollRect().y,this.get_scrollRect().width,this.get_scrollRect().height);
			}
		}
	}
	,__renderDOM: function(renderSession) {
		if(this.stage != null && this.__worldVisible && this.__renderable && this.__graphics != null) {
			if(this.__graphics.__dirty || this.__worldAlphaChanged || this.__canvas == null && this.__graphics.__canvas != null) {
				this.__graphics.__render();
				if(this.__graphics.__canvas != null) {
					if(this.__canvas == null) {
						this.__canvas = window.document.createElement("canvas");
						this.__canvasContext = this.__canvas.getContext("2d");
						this.__initializeElement(this.__canvas,renderSession);
					}
					this.__canvas.width = this.__graphics.__canvas.width;
					this.__canvas.height = this.__graphics.__canvas.height;
					this.__canvasContext.globalAlpha = this.__worldAlpha;
					this.__canvasContext.drawImage(this.__graphics.__canvas,0,0);
				} else if(this.__canvas != null) {
					renderSession.element.removeChild(this.__canvas);
					this.__canvas = null;
					this.__style = null;
				}
			}
			if(this.__canvas != null) {
				if(this.__worldTransformChanged) {
					var transform = new openfl.geom.Matrix();
					transform.translate(this.__graphics.__bounds.x,this.__graphics.__bounds.y);
					transform = transform.mult(this.__worldTransform);
					this.__style.setProperty(renderSession.transformProperty,renderSession.roundPixels?"matrix3d(" + transform.a + ", " + transform.b + ", " + "0, 0, " + transform.c + ", " + transform.d + ", " + "0, 0, 0, 0, 1, 0, " + (transform.tx | 0) + ", " + (transform.ty | 0) + ", 0, 1)":"matrix3d(" + transform.a + ", " + transform.b + ", " + "0, 0, " + transform.c + ", " + transform.d + ", " + "0, 0, 0, 0, 1, 0, " + transform.tx + ", " + transform.ty + ", 0, 1)",null);
				}
				this.__applyStyle(renderSession,false,false,true);
			}
		} else if(this.__canvas != null) {
			renderSession.element.removeChild(this.__canvas);
			this.__canvas = null;
			this.__style = null;
		}
	}
	,get_graphics: function() {
		if(this.__graphics == null) this.__graphics = new openfl.display.Graphics();
		return this.__graphics;
	}
	,__class__: openfl.display.Shape
	,__properties__: $extend(openfl.display.DisplayObject.prototype.__properties__,{get_graphics:"get_graphics"})
});
openfl.display.SpreadMethod = $hxClasses["openfl.display.SpreadMethod"] = { __ename__ : true, __constructs__ : ["REPEAT","REFLECT","PAD"] };
openfl.display.SpreadMethod.REPEAT = ["REPEAT",0];
openfl.display.SpreadMethod.REPEAT.toString = $estr;
openfl.display.SpreadMethod.REPEAT.__enum__ = openfl.display.SpreadMethod;
openfl.display.SpreadMethod.REFLECT = ["REFLECT",1];
openfl.display.SpreadMethod.REFLECT.toString = $estr;
openfl.display.SpreadMethod.REFLECT.__enum__ = openfl.display.SpreadMethod;
openfl.display.SpreadMethod.PAD = ["PAD",2];
openfl.display.SpreadMethod.PAD.toString = $estr;
openfl.display.SpreadMethod.PAD.__enum__ = openfl.display.SpreadMethod;
openfl.display.Stage = function(width,height,element,color) {
	this.__mouseY = 0;
	this.__mouseX = 0;
	openfl.display.Sprite.call(this);
	this.__element = element;
	if(color == null) {
		this.__transparent = true;
		this.set_color(0);
	} else this.set_color(color);
	this.set_name(null);
	this.__mouseX = 0;
	this.__mouseY = 0;
	this.__initializeDOM();
	this.__originalWidth = width;
	this.__originalHeight = height;
	if(width == 0 && height == 0) {
		if(element != null) {
			width = element.clientWidth;
			height = element.clientHeight;
		} else {
			width = window.innerWidth;
			height = window.innerHeight;
		}
		this.__fullscreen = true;
	}
	this.stageWidth = width;
	this.stageHeight = height;
	if(this.__canvas != null) {
		this.__canvas.width = width;
		this.__canvas.height = height;
	} else {
		this.__div.style.width = width + "px";
		this.__div.style.height = height + "px";
	}
	this.__resize();
	window.addEventListener("resize",$bind(this,this.window_onResize));
	window.addEventListener("focus",$bind(this,this.window_onFocus));
	window.addEventListener("blur",$bind(this,this.window_onBlur));
	if(element != null) {
		if(this.__canvas != null) {
			if(element != this.__canvas) element.appendChild(this.__canvas);
		} else element.appendChild(this.__div);
	}
	this.stage = this;
	this.align = openfl.display.StageAlign.TOP_LEFT;
	this.allowsFullScreen = false;
	this.set_displayState(openfl.display.StageDisplayState.NORMAL);
	this.frameRate = 60;
	this.quality = "high";
	this.scaleMode = openfl.display.StageScaleMode.NO_SCALE;
	this.stageFocusRect = true;
	this.__clearBeforeRender = true;
	this.__stack = [];
	var keyEvents = ["keydown","keyup"];
	var touchEvents = ["touchstart","touchmove","touchend"];
	var mouseEvents = ["mousedown","mousemove","mouseup","dblclick","mousewheel"];
	var focusEvents = ["focus","blur"];
	var element1;
	if(this.__canvas != null) element1 = this.__canvas; else element1 = this.__div;
	var _g = 0;
	while(_g < keyEvents.length) {
		var type = keyEvents[_g];
		++_g;
		window.addEventListener(type,$bind(this,this.window_onKey),false);
	}
	var _g1 = 0;
	while(_g1 < touchEvents.length) {
		var type1 = touchEvents[_g1];
		++_g1;
		element1.addEventListener(type1,$bind(this,this.element_onTouch),true);
	}
	var _g2 = 0;
	while(_g2 < mouseEvents.length) {
		var type2 = mouseEvents[_g2];
		++_g2;
		element1.addEventListener(type2,$bind(this,this.element_onMouse),true);
	}
	var _g3 = 0;
	while(_g3 < focusEvents.length) {
		var type3 = focusEvents[_g3];
		++_g3;
		element1.addEventListener(type3,$bind(this,this.element_onFocus),true);
	}
	window.requestAnimationFrame($bind(this,this.__render));
};
$hxClasses["openfl.display.Stage"] = openfl.display.Stage;
openfl.display.Stage.__name__ = ["openfl","display","Stage"];
openfl.display.Stage.__super__ = openfl.display.Sprite;
openfl.display.Stage.prototype = $extend(openfl.display.Sprite.prototype,{
	globalToLocal: function(pos) {
		return pos;
	}
	,invalidate: function() {
		this.__invalidated = true;
	}
	,localToGlobal: function(pos) {
		return pos;
	}
	,__drag: function(mouse) {
		var parent = this.__dragObject.parent;
		if(parent != null) mouse = parent.globalToLocal(mouse);
		var x = mouse.x + this.__dragOffsetX;
		var y = mouse.y + this.__dragOffsetY;
		if(this.__dragBounds != null) {
			if(x < this.__dragBounds.x) x = this.__dragBounds.x; else if(x > this.__dragBounds.get_right()) x = this.__dragBounds.get_right();
			if(y < this.__dragBounds.y) y = this.__dragBounds.y; else if(y > this.__dragBounds.get_bottom()) y = this.__dragBounds.get_bottom();
		}
		this.__dragObject.set_x(x);
		this.__dragObject.set_y(y);
	}
	,__fireEvent: function(event,stack) {
		var length = stack.length;
		if(length == 0) {
			event.eventPhase = 1;
			event.target.__broadcast(event,false);
		} else {
			event.eventPhase = 0;
			event.target = stack[stack.length - 1];
			var _g1 = 0;
			var _g = length - 1;
			while(_g1 < _g) {
				var i = _g1++;
				stack[i].__broadcast(event,false);
				if(event.__isCancelled) return;
			}
			event.eventPhase = 1;
			event.target.__broadcast(event,false);
			if(event.__isCancelled) return;
			if(event.bubbles) {
				event.eventPhase = 2;
				var i1 = length - 2;
				while(i1 >= 0) {
					stack[i1].__broadcast(event,false);
					if(event.__isCancelled) return;
					i1--;
				}
			}
		}
	}
	,__getInteractive: function(stack) {
		stack.push(this);
	}
	,__initializeCanvas: function() {
		if(js.Boot.__instanceof(this.__element,HTMLCanvasElement)) this.__canvas = this.__element; else this.__canvas = window.document.createElement("canvas");
		if(this.__transparent) this.__context = this.__canvas.getContext("2d"); else {
			this.__canvas.setAttribute("moz-opaque","true");
			this.__context = this.__canvas.getContext ("2d", { alpha: false });
		}
		var style = this.__canvas.style;
		style.setProperty("-webkit-transform","translateZ(0)",null);
		style.setProperty("transform","translateZ(0)",null);
		this.__renderSession = new openfl.display.RenderSession();
		this.__renderSession.context = this.__context;
		this.__renderSession.roundPixels = true;
	}
	,__initializeDOM: function() {
		this.__div = window.document.createElement("div");
		var style = this.__div.style;
		if(!this.__transparent) style.backgroundColor = this.__colorString;
		style.setProperty("-webkit-transform","translate3D(0,0,0)",null);
		style.setProperty("transform","translate3D(0,0,0)",null);
		style.position = "relative";
		style.overflow = "hidden";
		style.setProperty("-webkit-user-select","none",null);
		style.setProperty("-moz-user-select","none",null);
		style.setProperty("-ms-user-select","none",null);
		style.setProperty("-o-user-select","none",null);
		window.document.addEventListener("dragstart",function(e) {
			if(e.target.nodeName.toLowerCase() == "img") {
				e.preventDefault();
				return false;
			}
			return true;
		},false);
		this.__renderSession = new openfl.display.RenderSession();
		this.__renderSession.element = this.__div;
		this.__renderSession.roundPixels = true;
		var prefix = (function () {
		  var styles = window.getComputedStyle(document.documentElement, ''),
			pre = (Array.prototype.slice
			  .call(styles)
			  .join('') 
			  .match(/-(moz|webkit|ms)-/) || (styles.OLink === '' && ['', 'o'])
			)[1],
			dom = ('WebKit|Moz|MS|O').match(new RegExp('(' + pre + ')', 'i'))[1];
		  return {
			dom: dom,
			lowercase: pre,
			css: '-' + pre + '-',
			js: pre[0].toUpperCase() + pre.substr(1)
		  };
		})();
		this.__renderSession.vendorPrefix = prefix.lowercase;
		if(prefix.lowercase == "webkit") this.__renderSession.transformProperty = "-webkit-transform"; else this.__renderSession.transformProperty = "transform";
		if(prefix.lowercase == "webkit") this.__renderSession.transformOriginProperty = "-webkit-transform-origin"; else this.__renderSession.transformOriginProperty = "transform-origin";
	}
	,__initializeGL: function() {
		return false;
	}
	,__render: function() {
		this.__broadcast(new openfl.events.Event(openfl.events.Event.ENTER_FRAME),true);
		if(this.__invalidated) {
			this.__invalidated = false;
			this.__broadcast(new openfl.events.Event(openfl.events.Event.RENDER),true);
		}
		this.__renderable = true;
		this.__update(false,true);
		if(this.__canvas != null) {
			if(!this.__fullscreen || this.__element != this.__canvas) {
				if(this.stageWidth != this.__canvas.width || this.stageHeight != this.__canvas.height) {
					this.__canvas.width = this.stageWidth;
					this.__canvas.height = this.stageHeight;
				}
			} else {
				this.stageWidth = this.__canvas.width;
				this.stageHeight = this.__canvas.height;
			}
			if(this.__gl != null) {
				if(!this.__glContextLost) {
					this.__gl.viewport(0,0,this.stageWidth,this.stageHeight);
					this.__gl.bindFramebuffer(36160,null);
					if(this.__transparent) this.__gl.clearColor(0,0,0,0); else this.__gl.clearColor(this.__colorSplit[0],this.__colorSplit[1],this.__colorSplit[2],1);
					this.__gl.clear(16384);
					this.__renderGL(this.__renderSession);
				}
			} else {
				this.__context.setTransform(1,0,0,1,0,0);
				this.__context.globalAlpha = 1;
				if(!this.__transparent && this.__clearBeforeRender) {
					this.__context.fillStyle = this.__colorString;
					this.__context.fillRect(0,0,this.stageWidth,this.stageHeight);
				} else if(this.__transparent && this.__clearBeforeRender) this.__context.clearRect(0,0,this.stageWidth,this.stageHeight);
				this.__renderCanvas(this.__renderSession);
			}
		} else {
			this.__renderSession.z = 1;
			this.__renderDOM(this.__renderSession);
		}
		window.requestAnimationFrame($bind(this,this.__render));
	}
	,__resize: function() {
		if(this.__element != null && (this.__div == null || this.__div != null && this.__fullscreen)) {
			if(this.__fullscreen) {
				this.stageWidth = this.__element.clientWidth;
				this.stageHeight = this.__element.clientHeight;
				if(this.__canvas != null) {
					if(this.__element != this.__canvas) {
						this.__canvas.width = this.stageWidth;
						this.__canvas.height = this.stageHeight;
					}
				} else {
					this.__div.style.width = this.stageWidth + "px";
					this.__div.style.height = this.stageHeight + "px";
				}
			} else {
				var scaleX = this.__element.clientWidth / this.__originalWidth;
				var scaleY = this.__element.clientHeight / this.__originalHeight;
				var currentRatio = scaleX / scaleY;
				var targetRatio = Math.min(scaleX,scaleY);
				if(this.__canvas != null) {
					if(this.__element != this.__canvas) {
						this.__canvas.style.width = this.__originalWidth * targetRatio + "px";
						this.__canvas.style.height = this.__originalHeight * targetRatio + "px";
						this.__canvas.style.marginLeft = (this.__element.clientWidth - this.__originalWidth * targetRatio) / 2 + "px";
						this.__canvas.style.marginTop = (this.__element.clientHeight - this.__originalHeight * targetRatio) / 2 + "px";
					}
				} else {
					this.__div.style.width = this.__originalWidth * targetRatio + "px";
					this.__div.style.height = this.__originalHeight * targetRatio + "px";
					this.__div.style.marginLeft = (this.__element.clientWidth - this.__originalWidth * targetRatio) / 2 + "px";
					this.__div.style.marginTop = (this.__element.clientHeight - this.__originalHeight * targetRatio) / 2 + "px";
				}
			}
		}
	}
	,__setCursor: function(cursor) {
		if(this.__cursor != cursor) {
			this.__cursor = cursor;
			if(!this.__cursorHidden) {
				var element;
				if(this.__canvas != null) element = this.__canvas; else element = this.__div;
				element.style.cursor = cursor;
			}
		}
	}
	,__setCursorHidden: function(value) {
		if(this.__cursorHidden != value) {
			this.__cursorHidden = value;
			var element;
			if(this.__canvas != null) element = this.__canvas; else element = this.__div;
			if(value) element.style.cursor = "none"; else element.style.cursor = this.__cursor;
		}
	}
	,__startDrag: function(sprite,lockCenter,bounds) {
		if(bounds == null) this.__dragBounds = null; else this.__dragBounds = bounds.clone();
		this.__dragObject = sprite;
		if(this.__dragObject != null) {
			if(lockCenter) {
				this.__dragOffsetX = -this.__dragObject.get_width() / 2;
				this.__dragOffsetY = -this.__dragObject.get_height() / 2;
			} else {
				var mouse = new openfl.geom.Point(this.get_mouseX(),this.get_mouseY());
				var parent = this.__dragObject.parent;
				if(parent != null) mouse = parent.globalToLocal(mouse);
				this.__dragOffsetX = this.__dragObject.get_x() - mouse.x;
				this.__dragOffsetY = this.__dragObject.get_y() - mouse.y;
			}
		}
	}
	,__stopDrag: function(sprite) {
		this.__dragBounds = null;
		this.__dragObject = null;
	}
	,__update: function(transformOnly,updateChildren) {
		if(transformOnly) {
			if(openfl.display.DisplayObject.__worldTransformDirty > 0) {
				openfl.display.Sprite.prototype.__update.call(this,true,updateChildren);
				if(updateChildren) {
					openfl.display.DisplayObject.__worldTransformDirty = 0;
					this.__dirty = true;
				}
			}
		} else if(openfl.display.DisplayObject.__worldTransformDirty > 0 || this.__dirty || openfl.display.DisplayObject.__worldRenderDirty > 0) {
			openfl.display.Sprite.prototype.__update.call(this,false,updateChildren);
			if(updateChildren) {
				this.__wasDirty = true;
				openfl.display.DisplayObject.__worldTransformDirty = 0;
				openfl.display.DisplayObject.__worldRenderDirty = 0;
				this.__dirty = false;
			}
		} else if(this.__wasDirty) {
			openfl.display.Sprite.prototype.__update.call(this,false,updateChildren);
			if(updateChildren) this.__wasDirty = false;
		}
	}
	,get_mouseX: function() {
		return this.__mouseX;
	}
	,get_mouseY: function() {
		return this.__mouseY;
	}
	,canvas_onContextLost: function(event) {
		this.__glContextLost = true;
	}
	,canvas_onContextRestored: function(event) {
		this.__glContextLost = false;
	}
	,element_onFocus: function(event) {
	}
	,element_onTouch: function(event) {
		event.preventDefault();
		var rect;
		if(this.__canvas != null) rect = this.__canvas.getBoundingClientRect(); else rect = this.__div.getBoundingClientRect();
		var touch = event.changedTouches[0];
		var point = new openfl.geom.Point((touch.pageX - rect.left) * (this.stageWidth / rect.width),(touch.pageY - rect.top) * (this.stageHeight / rect.height));
		this.__mouseX = point.x;
		this.__mouseY = point.y;
		this.__stack = [];
		var type = null;
		var mouseType = null;
		var _g = event.type;
		switch(_g) {
		case "touchstart":
			type = "touchBegin";
			mouseType = openfl.events.MouseEvent.MOUSE_DOWN;
			break;
		case "touchmove":
			type = "touchMove";
			mouseType = openfl.events.MouseEvent.MOUSE_MOVE;
			break;
		case "touchend":
			type = "touchEnd";
			mouseType = openfl.events.MouseEvent.MOUSE_UP;
			break;
		default:
		}
		if(this.__hitTest(this.get_mouseX(),this.get_mouseY(),false,this.__stack,true)) {
			var target = this.__stack[this.__stack.length - 1];
			var localPoint = target.globalToLocal(point);
			var touchEvent = openfl.events.TouchEvent.__create(type,event,touch,localPoint,target);
			touchEvent.touchPointID = touch.identifier;
			touchEvent.isPrimaryTouchPoint = true;
			var mouseEvent = openfl.events.MouseEvent.__create(mouseType,event,localPoint,target);
			mouseEvent.buttonDown = type != "touchEnd";
			this.__fireEvent(touchEvent,this.__stack);
			this.__fireEvent(mouseEvent,this.__stack);
		} else {
			var touchEvent1 = openfl.events.TouchEvent.__create(type,event,touch,point,this);
			touchEvent1.touchPointID = touch.identifier;
			touchEvent1.isPrimaryTouchPoint = true;
			var mouseEvent1 = openfl.events.MouseEvent.__create(mouseType,event,point,this);
			mouseEvent1.buttonDown = type != "touchEnd";
			this.__fireEvent(touchEvent1,[this]);
			this.__fireEvent(mouseEvent1,[this]);
		}
		if(type == "touchMove" && this.__dragObject != null) this.__drag(point);
	}
	,element_onMouse: function(event) {
		var rect;
		if(this.__canvas != null) {
			rect = this.__canvas.getBoundingClientRect();
			this.__mouseX = (event.clientX - rect.left) * (this.stageWidth / rect.width);
			this.__mouseY = (event.clientY - rect.top) * (this.stageHeight / rect.height);
		} else {
			rect = this.__div.getBoundingClientRect();
			this.__mouseX = event.clientX - rect.left;
			this.__mouseY = event.clientY - rect.top;
		}
		this.__stack = [];
		var type;
		var _g = event.type;
		switch(_g) {
		case "mousedown":
			type = openfl.events.MouseEvent.MOUSE_DOWN;
			break;
		case "mouseup":
			type = openfl.events.MouseEvent.MOUSE_UP;
			break;
		case "mousemove":
			type = openfl.events.MouseEvent.MOUSE_MOVE;
			break;
		case "dblclick":
			type = openfl.events.MouseEvent.DOUBLE_CLICK;
			break;
		case "mousewheel":
			type = openfl.events.MouseEvent.MOUSE_WHEEL;
			break;
		default:
			type = null;
		}
		if(this.__hitTest(this.get_mouseX(),this.get_mouseY(),false,this.__stack,true)) {
			var target = this.__stack[this.__stack.length - 1];
			this.__setCursor(target.buttonMode?"pointer":"default");
			this.__fireEvent(openfl.events.MouseEvent.__create(type,event,target.globalToLocal(new openfl.geom.Point(this.get_mouseX(),this.get_mouseY())),target),this.__stack);
			if(type == openfl.events.MouseEvent.MOUSE_UP) this.__fireEvent(openfl.events.MouseEvent.__create(openfl.events.MouseEvent.CLICK,event,target.globalToLocal(new openfl.geom.Point(this.get_mouseX(),this.get_mouseY())),target),this.__stack);
		} else {
			this.__setCursor(this.buttonMode?"pointer":"default");
			this.__fireEvent(openfl.events.MouseEvent.__create(type,event,new openfl.geom.Point(this.get_mouseX(),this.get_mouseY()),this),[this]);
			if(type == openfl.events.MouseEvent.MOUSE_UP) this.__fireEvent(openfl.events.MouseEvent.__create(openfl.events.MouseEvent.CLICK,event,new openfl.geom.Point(this.get_mouseX(),this.get_mouseY()),this),[this]);
		}
		if(this.__dragObject != null) this.__drag(new openfl.geom.Point(this.get_mouseX(),this.get_mouseY()));
	}
	,window_onKey: function(event) {
		var keyCode;
		if(event.keyCode != null) keyCode = event.keyCode; else keyCode = event.which;
		keyCode = openfl.ui.Keyboard.__convertMozillaCode(keyCode);
		var location;
		if(event.location != null) location = event.location; else location = event.keyLocation;
		var keyLocation;
		keyLocation = js.Boot.__cast(location , Int);
		var stack = new Array();
		if(this.__focus == null) this.__getInteractive(stack); else this.__focus.__getInteractive(stack);
		if(stack.length > 0) {
			stack.reverse();
			this.__fireEvent(new openfl.events.KeyboardEvent(event.type == "keydown"?openfl.events.KeyboardEvent.KEY_DOWN:openfl.events.KeyboardEvent.KEY_UP,true,false,event.charCode,keyCode,keyLocation,event.ctrlKey,event.altKey,event.shiftKey),stack);
		}
	}
	,window_onResize: function(event) {
		this.__resize();
		var event1 = new openfl.events.Event(openfl.events.Event.RESIZE);
		this.__broadcast(event1,false);
	}
	,window_onFocus: function(event) {
		var event1 = new openfl.events.Event(openfl.events.Event.ACTIVATE);
		this.__broadcast(event1,true);
	}
	,window_onBlur: function(event) {
		var event1 = new openfl.events.Event(openfl.events.Event.DEACTIVATE);
		this.__broadcast(event1,true);
	}
	,get_color: function() {
		return this.__color;
	}
	,set_color: function(value) {
		var r = (value & 16711680) >>> 16;
		var g = (value & 65280) >>> 8;
		var b = value & 255;
		this.__colorSplit = [r / 255,g / 255,b / 255];
		this.__colorString = "#" + StringTools.hex(value,6);
		return this.__color = value;
	}
	,get_focus: function() {
		return this.__focus;
	}
	,set_focus: function(value) {
		if(value != this.__focus) {
			if(this.__focus != null) {
				var event = new openfl.events.FocusEvent(openfl.events.FocusEvent.FOCUS_OUT,true,false,value,false,0);
				this.__stack = [];
				this.__focus.__getInteractive(this.__stack);
				this.__stack.reverse();
				this.__fireEvent(event,this.__stack);
			}
			if(value != null) {
				var event1 = new openfl.events.FocusEvent(openfl.events.FocusEvent.FOCUS_IN,true,false,this.__focus,false,0);
				this.__stack = [];
				value.__getInteractive(this.__stack);
				this.__stack.reverse();
				this.__fireEvent(event1,this.__stack);
			}
			this.__focus = value;
		}
		return this.__focus;
	}
	,set_displayState: function(value) {
		switch(value[1]) {
		case 0:
			var fs_exit_function = function() {
			    if (document.exitFullscreen) {
			      document.exitFullscreen();
			    } else if (document.msExitFullscreen) {
			      document.msExitFullscreen();
			    } else if (document.mozCancelFullScreen) {
			      document.mozCancelFullScreen();
			    } else if (document.webkitExitFullscreen) {
			      document.webkitExitFullscreen();
			    }
				}
			fs_exit_function();
			break;
		case 1:case 2:
			var fsfunction = function(elem) {
					if (elem.requestFullscreen) elem.requestFullscreen();
					else if (elem.msRequestFullscreen) elem.msRequestFullscreen();
					else if (elem.mozRequestFullScreen) elem.mozRequestFullScreen();
					else if (elem.webkitRequestFullscreen) elem.webkitRequestFullscreen();
				}
			fsfunction(this.__element);
			break;
		}
		this.displayState = value;
		return value;
	}
	,__class__: openfl.display.Stage
	,__properties__: $extend(openfl.display.Sprite.prototype.__properties__,{set_focus:"set_focus",get_focus:"get_focus",set_displayState:"set_displayState",set_color:"set_color",get_color:"get_color"})
});
openfl.display.RenderSession = function() {
	this.maskManager = new openfl.display.MaskManager(this);
};
$hxClasses["openfl.display.RenderSession"] = openfl.display.RenderSession;
openfl.display.RenderSession.__name__ = ["openfl","display","RenderSession"];
openfl.display.RenderSession.prototype = {
	__class__: openfl.display.RenderSession
};
openfl.display.MaskManager = function(renderSession) {
	this.renderSession = renderSession;
};
$hxClasses["openfl.display.MaskManager"] = openfl.display.MaskManager;
openfl.display.MaskManager.__name__ = ["openfl","display","MaskManager"];
openfl.display.MaskManager.prototype = {
	pushMask: function(mask) {
		var context = this.renderSession.context;
		context.save();
		var transform = mask.__worldTransform;
		if(transform == null) transform = new openfl.geom.Matrix();
		context.setTransform(transform.a,transform.c,transform.b,transform.d,transform.tx,transform.ty);
		context.beginPath();
		mask.__renderMask(this.renderSession);
		context.clip();
	}
	,pushRect: function(rect,transform) {
		var context = this.renderSession.context;
		context.save();
		context.setTransform(transform.a,transform.c,transform.b,transform.d,transform.tx,transform.ty);
		context.beginPath();
		context.rect(rect.x,rect.y,rect.width,rect.height);
		context.clip();
	}
	,popMask: function() {
		this.renderSession.context.restore();
	}
	,__class__: openfl.display.MaskManager
};
openfl.display.StageAlign = $hxClasses["openfl.display.StageAlign"] = { __ename__ : true, __constructs__ : ["TOP_RIGHT","TOP_LEFT","TOP","RIGHT","LEFT","BOTTOM_RIGHT","BOTTOM_LEFT","BOTTOM"] };
openfl.display.StageAlign.TOP_RIGHT = ["TOP_RIGHT",0];
openfl.display.StageAlign.TOP_RIGHT.toString = $estr;
openfl.display.StageAlign.TOP_RIGHT.__enum__ = openfl.display.StageAlign;
openfl.display.StageAlign.TOP_LEFT = ["TOP_LEFT",1];
openfl.display.StageAlign.TOP_LEFT.toString = $estr;
openfl.display.StageAlign.TOP_LEFT.__enum__ = openfl.display.StageAlign;
openfl.display.StageAlign.TOP = ["TOP",2];
openfl.display.StageAlign.TOP.toString = $estr;
openfl.display.StageAlign.TOP.__enum__ = openfl.display.StageAlign;
openfl.display.StageAlign.RIGHT = ["RIGHT",3];
openfl.display.StageAlign.RIGHT.toString = $estr;
openfl.display.StageAlign.RIGHT.__enum__ = openfl.display.StageAlign;
openfl.display.StageAlign.LEFT = ["LEFT",4];
openfl.display.StageAlign.LEFT.toString = $estr;
openfl.display.StageAlign.LEFT.__enum__ = openfl.display.StageAlign;
openfl.display.StageAlign.BOTTOM_RIGHT = ["BOTTOM_RIGHT",5];
openfl.display.StageAlign.BOTTOM_RIGHT.toString = $estr;
openfl.display.StageAlign.BOTTOM_RIGHT.__enum__ = openfl.display.StageAlign;
openfl.display.StageAlign.BOTTOM_LEFT = ["BOTTOM_LEFT",6];
openfl.display.StageAlign.BOTTOM_LEFT.toString = $estr;
openfl.display.StageAlign.BOTTOM_LEFT.__enum__ = openfl.display.StageAlign;
openfl.display.StageAlign.BOTTOM = ["BOTTOM",7];
openfl.display.StageAlign.BOTTOM.toString = $estr;
openfl.display.StageAlign.BOTTOM.__enum__ = openfl.display.StageAlign;
openfl.display.StageDisplayState = $hxClasses["openfl.display.StageDisplayState"] = { __ename__ : true, __constructs__ : ["NORMAL","FULL_SCREEN","FULL_SCREEN_INTERACTIVE"] };
openfl.display.StageDisplayState.NORMAL = ["NORMAL",0];
openfl.display.StageDisplayState.NORMAL.toString = $estr;
openfl.display.StageDisplayState.NORMAL.__enum__ = openfl.display.StageDisplayState;
openfl.display.StageDisplayState.FULL_SCREEN = ["FULL_SCREEN",1];
openfl.display.StageDisplayState.FULL_SCREEN.toString = $estr;
openfl.display.StageDisplayState.FULL_SCREEN.__enum__ = openfl.display.StageDisplayState;
openfl.display.StageDisplayState.FULL_SCREEN_INTERACTIVE = ["FULL_SCREEN_INTERACTIVE",2];
openfl.display.StageDisplayState.FULL_SCREEN_INTERACTIVE.toString = $estr;
openfl.display.StageDisplayState.FULL_SCREEN_INTERACTIVE.__enum__ = openfl.display.StageDisplayState;
openfl.display._StageQuality = {};
openfl.display._StageQuality.StageQuality_Impl_ = function() { };
$hxClasses["openfl.display._StageQuality.StageQuality_Impl_"] = openfl.display._StageQuality.StageQuality_Impl_;
openfl.display._StageQuality.StageQuality_Impl_.__name__ = ["openfl","display","_StageQuality","StageQuality_Impl_"];
openfl.display.StageScaleMode = $hxClasses["openfl.display.StageScaleMode"] = { __ename__ : true, __constructs__ : ["SHOW_ALL","NO_SCALE","NO_BORDER","EXACT_FIT"] };
openfl.display.StageScaleMode.SHOW_ALL = ["SHOW_ALL",0];
openfl.display.StageScaleMode.SHOW_ALL.toString = $estr;
openfl.display.StageScaleMode.SHOW_ALL.__enum__ = openfl.display.StageScaleMode;
openfl.display.StageScaleMode.NO_SCALE = ["NO_SCALE",1];
openfl.display.StageScaleMode.NO_SCALE.toString = $estr;
openfl.display.StageScaleMode.NO_SCALE.__enum__ = openfl.display.StageScaleMode;
openfl.display.StageScaleMode.NO_BORDER = ["NO_BORDER",2];
openfl.display.StageScaleMode.NO_BORDER.toString = $estr;
openfl.display.StageScaleMode.NO_BORDER.__enum__ = openfl.display.StageScaleMode;
openfl.display.StageScaleMode.EXACT_FIT = ["EXACT_FIT",3];
openfl.display.StageScaleMode.EXACT_FIT.toString = $estr;
openfl.display.StageScaleMode.EXACT_FIT.__enum__ = openfl.display.StageScaleMode;
openfl.display.Tilesheet = function(image) {
	this.__bitmap = image;
	this.__centerPoints = new Array();
	this.__tileRects = new Array();
	this.__tileUVs = new Array();
};
$hxClasses["openfl.display.Tilesheet"] = openfl.display.Tilesheet;
openfl.display.Tilesheet.__name__ = ["openfl","display","Tilesheet"];
openfl.display.Tilesheet.prototype = {
	addTileRect: function(rectangle,centerPoint) {
		this.__tileRects.push(rectangle);
		if(centerPoint == null) centerPoint = new openfl.geom.Point();
		this.__centerPoints.push(centerPoint);
		this.__tileUVs.push(new openfl.geom.Rectangle(rectangle.get_left() / this.__bitmap.width,rectangle.get_top() / this.__bitmap.height,rectangle.get_right() / this.__bitmap.width,rectangle.get_bottom() / this.__bitmap.height));
		return this.__tileRects.length - 1;
	}
	,drawTiles: function(graphics,tileData,smooth,flags,count) {
		if(count == null) count = -1;
		if(flags == null) flags = 0;
		if(smooth == null) smooth = false;
		graphics.drawTiles(this,tileData,smooth,flags,count);
	}
	,getTileCenter: function(index) {
		return this.__centerPoints[index];
	}
	,getTileRect: function(index) {
		return this.__tileRects[index];
	}
	,getTileUVs: function(index) {
		return this.__tileUVs[index];
	}
	,__class__: openfl.display.Tilesheet
};
openfl.display.TriangleCulling = $hxClasses["openfl.display.TriangleCulling"] = { __ename__ : true, __constructs__ : ["NEGATIVE","NONE","POSITIVE"] };
openfl.display.TriangleCulling.NEGATIVE = ["NEGATIVE",0];
openfl.display.TriangleCulling.NEGATIVE.toString = $estr;
openfl.display.TriangleCulling.NEGATIVE.__enum__ = openfl.display.TriangleCulling;
openfl.display.TriangleCulling.NONE = ["NONE",1];
openfl.display.TriangleCulling.NONE.toString = $estr;
openfl.display.TriangleCulling.NONE.__enum__ = openfl.display.TriangleCulling;
openfl.display.TriangleCulling.POSITIVE = ["POSITIVE",2];
openfl.display.TriangleCulling.POSITIVE.toString = $estr;
openfl.display.TriangleCulling.POSITIVE.__enum__ = openfl.display.TriangleCulling;
openfl.errors = {};
openfl.errors.Error = function(message,id) {
	if(id == null) id = 0;
	if(message == null) message = "";
	this.message = message;
	this.errorID = id;
	this.name = "Error";
};
$hxClasses["openfl.errors.Error"] = openfl.errors.Error;
openfl.errors.Error.__name__ = ["openfl","errors","Error"];
openfl.errors.Error.prototype = {
	getStackTrace: function() {
		return haxe.CallStack.toString(haxe.CallStack.exceptionStack());
	}
	,toString: function() {
		if(this.message != null) return this.message; else return "Error";
	}
	,__class__: openfl.errors.Error
};
openfl.errors.IOError = function(message) {
	if(message == null) message = "";
	openfl.errors.Error.call(this,message);
};
$hxClasses["openfl.errors.IOError"] = openfl.errors.IOError;
openfl.errors.IOError.__name__ = ["openfl","errors","IOError"];
openfl.errors.IOError.__super__ = openfl.errors.Error;
openfl.errors.IOError.prototype = $extend(openfl.errors.Error.prototype,{
	__class__: openfl.errors.IOError
});
openfl.errors.RangeError = function(inMessage) {
	if(inMessage == null) inMessage = "";
	openfl.errors.Error.call(this,inMessage,0);
};
$hxClasses["openfl.errors.RangeError"] = openfl.errors.RangeError;
openfl.errors.RangeError.__name__ = ["openfl","errors","RangeError"];
openfl.errors.RangeError.__super__ = openfl.errors.Error;
openfl.errors.RangeError.prototype = $extend(openfl.errors.Error.prototype,{
	__class__: openfl.errors.RangeError
});
openfl.errors.TypeError = function(inMessage) {
	if(inMessage == null) inMessage = "";
	openfl.errors.Error.call(this,inMessage,0);
};
$hxClasses["openfl.errors.TypeError"] = openfl.errors.TypeError;
openfl.errors.TypeError.__name__ = ["openfl","errors","TypeError"];
openfl.errors.TypeError.__super__ = openfl.errors.Error;
openfl.errors.TypeError.prototype = $extend(openfl.errors.Error.prototype,{
	__class__: openfl.errors.TypeError
});
openfl.events.Event = function(type,bubbles,cancelable) {
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	this.type = type;
	this.bubbles = bubbles;
	this.cancelable = cancelable;
	this.eventPhase = 1;
};
$hxClasses["openfl.events.Event"] = openfl.events.Event;
openfl.events.Event.__name__ = ["openfl","events","Event"];
openfl.events.Event.prototype = {
	clone: function() {
		var event = new openfl.events.Event(this.type,this.bubbles,this.cancelable);
		event.eventPhase = this.eventPhase;
		event.target = this.target;
		event.currentTarget = this.currentTarget;
		return event;
	}
	,isDefaultPrevented: function() {
		return this.__isCancelled || this.__isCancelledNow;
	}
	,stopImmediatePropagation: function() {
		this.__isCancelled = true;
		this.__isCancelledNow = true;
	}
	,stopPropagation: function() {
		this.__isCancelled = true;
	}
	,toString: function() {
		return "[Event type=" + this.type + " bubbles=" + Std.string(this.bubbles) + " cancelable=" + Std.string(this.cancelable) + "]";
	}
	,__class__: openfl.events.Event
};
openfl.events.TextEvent = function(type,bubbles,cancelable,text) {
	if(text == null) text = "";
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	openfl.events.Event.call(this,type,bubbles,cancelable);
	this.text = text;
};
$hxClasses["openfl.events.TextEvent"] = openfl.events.TextEvent;
openfl.events.TextEvent.__name__ = ["openfl","events","TextEvent"];
openfl.events.TextEvent.__super__ = openfl.events.Event;
openfl.events.TextEvent.prototype = $extend(openfl.events.Event.prototype,{
	__class__: openfl.events.TextEvent
});
openfl.events.ErrorEvent = function(type,bubbles,cancelable,text,id) {
	if(id == null) id = 0;
	if(text == null) text = "";
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	openfl.events.TextEvent.call(this,type,bubbles,cancelable);
	this.text = text;
	this.errorID = id;
};
$hxClasses["openfl.events.ErrorEvent"] = openfl.events.ErrorEvent;
openfl.events.ErrorEvent.__name__ = ["openfl","events","ErrorEvent"];
openfl.events.ErrorEvent.__super__ = openfl.events.TextEvent;
openfl.events.ErrorEvent.prototype = $extend(openfl.events.TextEvent.prototype,{
	__class__: openfl.events.ErrorEvent
});
openfl.events._EventDispatcher = {};
openfl.events._EventDispatcher.Listener = function(callback,useCapture,priority) {
	this.callback = callback;
	this.useCapture = useCapture;
	this.priority = priority;
};
$hxClasses["openfl.events._EventDispatcher.Listener"] = openfl.events._EventDispatcher.Listener;
openfl.events._EventDispatcher.Listener.__name__ = ["openfl","events","_EventDispatcher","Listener"];
openfl.events._EventDispatcher.Listener.prototype = {
	match: function(callback,useCapture) {
		return this.callback == callback && this.useCapture == useCapture;
	}
	,__class__: openfl.events._EventDispatcher.Listener
};
openfl.events._EventPhase = {};
openfl.events._EventPhase.EventPhase_Impl_ = function() { };
$hxClasses["openfl.events._EventPhase.EventPhase_Impl_"] = openfl.events._EventPhase.EventPhase_Impl_;
openfl.events._EventPhase.EventPhase_Impl_.__name__ = ["openfl","events","_EventPhase","EventPhase_Impl_"];
openfl.events.FocusEvent = function(type,bubbles,cancelable,relatedObject,shiftKey,keyCode) {
	if(keyCode == null) keyCode = 0;
	if(shiftKey == null) shiftKey = false;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	openfl.events.Event.call(this,type,bubbles,cancelable);
	this.keyCode = keyCode;
	if(shiftKey == null) this.shiftKey = false; else this.shiftKey = shiftKey;
	this.relatedObject = relatedObject;
};
$hxClasses["openfl.events.FocusEvent"] = openfl.events.FocusEvent;
openfl.events.FocusEvent.__name__ = ["openfl","events","FocusEvent"];
openfl.events.FocusEvent.__super__ = openfl.events.Event;
openfl.events.FocusEvent.prototype = $extend(openfl.events.Event.prototype,{
	clone: function() {
		var event = new openfl.events.FocusEvent(this.type,this.bubbles,this.cancelable,this.relatedObject,this.shiftKey,this.keyCode);
		event.target = this.target;
		event.currentTarget = this.currentTarget;
		event.eventPhase = this.eventPhase;
		return event;
	}
	,__class__: openfl.events.FocusEvent
});
openfl.events.HTTPStatusEvent = function(type,bubbles,cancelable,status) {
	if(status == null) status = 0;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	this.status = status;
	openfl.events.Event.call(this,type,bubbles,cancelable);
};
$hxClasses["openfl.events.HTTPStatusEvent"] = openfl.events.HTTPStatusEvent;
openfl.events.HTTPStatusEvent.__name__ = ["openfl","events","HTTPStatusEvent"];
openfl.events.HTTPStatusEvent.__super__ = openfl.events.Event;
openfl.events.HTTPStatusEvent.prototype = $extend(openfl.events.Event.prototype,{
	__class__: openfl.events.HTTPStatusEvent
});
openfl.events.IOErrorEvent = function(type,bubbles,cancelable,text,id) {
	if(id == null) id = 0;
	if(text == null) text = "";
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = true;
	openfl.events.ErrorEvent.call(this,type,bubbles,cancelable,text,id);
};
$hxClasses["openfl.events.IOErrorEvent"] = openfl.events.IOErrorEvent;
openfl.events.IOErrorEvent.__name__ = ["openfl","events","IOErrorEvent"];
openfl.events.IOErrorEvent.__super__ = openfl.events.ErrorEvent;
openfl.events.IOErrorEvent.prototype = $extend(openfl.events.ErrorEvent.prototype,{
	clone: function() {
		return new openfl.events.IOErrorEvent(this.type,this.bubbles,this.cancelable,this.text,this.errorID);
	}
	,toString: function() {
		return "[IOErrorEvent type=" + this.type + " bubbles=" + Std.string(this.bubbles) + " cancelable=" + Std.string(this.cancelable) + " text=" + this.text + " errorID=" + this.errorID + "]";
	}
	,__class__: openfl.events.IOErrorEvent
});
openfl.events.KeyboardEvent = function(type,bubbles,cancelable,charCodeValue,keyCodeValue,keyLocationValue,ctrlKeyValue,altKeyValue,shiftKeyValue,controlKeyValue,commandKeyValue) {
	if(commandKeyValue == null) commandKeyValue = false;
	if(controlKeyValue == null) controlKeyValue = false;
	if(shiftKeyValue == null) shiftKeyValue = false;
	if(altKeyValue == null) altKeyValue = false;
	if(ctrlKeyValue == null) ctrlKeyValue = false;
	if(keyCodeValue == null) keyCodeValue = 0;
	if(charCodeValue == null) charCodeValue = 0;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	openfl.events.Event.call(this,type,bubbles,cancelable);
	this.charCode = charCodeValue;
	this.keyCode = keyCodeValue;
	if(keyLocationValue != null) this.keyLocation = keyLocationValue; else this.keyLocation = 0;
	this.ctrlKey = ctrlKeyValue;
	this.altKey = altKeyValue;
	this.shiftKey = shiftKeyValue;
	this.controlKey = controlKeyValue;
	this.commandKey = commandKeyValue;
};
$hxClasses["openfl.events.KeyboardEvent"] = openfl.events.KeyboardEvent;
openfl.events.KeyboardEvent.__name__ = ["openfl","events","KeyboardEvent"];
openfl.events.KeyboardEvent.__super__ = openfl.events.Event;
openfl.events.KeyboardEvent.prototype = $extend(openfl.events.Event.prototype,{
	__class__: openfl.events.KeyboardEvent
});
openfl.events.MouseEvent = function(type,bubbles,cancelable,localX,localY,relatedObject,ctrlKey,altKey,shiftKey,buttonDown,delta,commandKey,clickCount) {
	if(clickCount == null) clickCount = 0;
	if(commandKey == null) commandKey = false;
	if(delta == null) delta = 0;
	if(buttonDown == null) buttonDown = false;
	if(shiftKey == null) shiftKey = false;
	if(altKey == null) altKey = false;
	if(ctrlKey == null) ctrlKey = false;
	if(localY == null) localY = 0;
	if(localX == null) localX = 0;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = true;
	openfl.events.Event.call(this,type,bubbles,cancelable);
	this.shiftKey = shiftKey;
	this.altKey = altKey;
	this.ctrlKey = ctrlKey;
	this.bubbles = bubbles;
	this.relatedObject = relatedObject;
	this.delta = delta;
	this.localX = localX;
	this.localY = localY;
	this.buttonDown = buttonDown;
	this.commandKey = commandKey;
	this.clickCount = clickCount;
};
$hxClasses["openfl.events.MouseEvent"] = openfl.events.MouseEvent;
openfl.events.MouseEvent.__name__ = ["openfl","events","MouseEvent"];
openfl.events.MouseEvent.__buttonDown = null;
openfl.events.MouseEvent.__create = function(type,event,local,target) {
	var delta = 2;
	if(type == openfl.events.MouseEvent.MOUSE_WHEEL) {
		var mouseEvent = event;
		if(mouseEvent.wheelDelta) delta = mouseEvent.wheelDelta / 120 | 0; else if(mouseEvent.detail) -mouseEvent.detail | 0;
	}
	if(type == openfl.events.MouseEvent.MOUSE_DOWN) openfl.events.MouseEvent.__buttonDown = true; else if(type == openfl.events.MouseEvent.MOUSE_UP) openfl.events.MouseEvent.__buttonDown = false;
	var pseudoEvent = new openfl.events.MouseEvent(type,true,false,local.x,local.y,null,event.ctrlKey,event.altKey,event.shiftKey,openfl.events.MouseEvent.__buttonDown,delta);
	pseudoEvent.stageX = openfl.Lib.current.stage.get_mouseX();
	pseudoEvent.stageY = openfl.Lib.current.stage.get_mouseY();
	pseudoEvent.target = target;
	return pseudoEvent;
};
openfl.events.MouseEvent.__super__ = openfl.events.Event;
openfl.events.MouseEvent.prototype = $extend(openfl.events.Event.prototype,{
	updateAfterEvent: function() {
	}
	,__class__: openfl.events.MouseEvent
});
openfl.events.ProgressEvent = function(type,bubbles,cancelable,bytesLoaded,bytesTotal) {
	if(bytesTotal == null) bytesTotal = 0;
	if(bytesLoaded == null) bytesLoaded = 0;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	openfl.events.Event.call(this,type,bubbles,cancelable);
	this.bytesLoaded = bytesLoaded;
	this.bytesTotal = bytesTotal;
};
$hxClasses["openfl.events.ProgressEvent"] = openfl.events.ProgressEvent;
openfl.events.ProgressEvent.__name__ = ["openfl","events","ProgressEvent"];
openfl.events.ProgressEvent.__super__ = openfl.events.Event;
openfl.events.ProgressEvent.prototype = $extend(openfl.events.Event.prototype,{
	__class__: openfl.events.ProgressEvent
});
openfl.events.SecurityErrorEvent = function(type,bubbles,cancelable,text) {
	if(text == null) text = "";
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	openfl.events.ErrorEvent.call(this,type,bubbles,cancelable);
	this.text = text;
};
$hxClasses["openfl.events.SecurityErrorEvent"] = openfl.events.SecurityErrorEvent;
openfl.events.SecurityErrorEvent.__name__ = ["openfl","events","SecurityErrorEvent"];
openfl.events.SecurityErrorEvent.__super__ = openfl.events.ErrorEvent;
openfl.events.SecurityErrorEvent.prototype = $extend(openfl.events.ErrorEvent.prototype,{
	__class__: openfl.events.SecurityErrorEvent
});
openfl.events.TimerEvent = function(type,bubbles,cancelable) {
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = false;
	openfl.events.Event.call(this,type,bubbles,cancelable);
};
$hxClasses["openfl.events.TimerEvent"] = openfl.events.TimerEvent;
openfl.events.TimerEvent.__name__ = ["openfl","events","TimerEvent"];
openfl.events.TimerEvent.__super__ = openfl.events.Event;
openfl.events.TimerEvent.prototype = $extend(openfl.events.Event.prototype,{
	updateAfterEvent: function() {
	}
	,__class__: openfl.events.TimerEvent
});
openfl.events.TouchEvent = function(type,bubbles,cancelable,localX,localY,sizeX,sizeY,relatedObject,ctrlKey,altKey,shiftKey,buttonDown,delta,commandKey,clickCount) {
	if(clickCount == null) clickCount = 0;
	if(commandKey == null) commandKey = false;
	if(delta == null) delta = 0;
	if(buttonDown == null) buttonDown = false;
	if(shiftKey == null) shiftKey = false;
	if(altKey == null) altKey = false;
	if(ctrlKey == null) ctrlKey = false;
	if(sizeY == null) sizeY = 1;
	if(sizeX == null) sizeX = 1;
	if(localY == null) localY = 0;
	if(localX == null) localX = 0;
	if(cancelable == null) cancelable = false;
	if(bubbles == null) bubbles = true;
	openfl.events.Event.call(this,type,bubbles,cancelable);
	this.shiftKey = shiftKey;
	this.altKey = altKey;
	this.ctrlKey = ctrlKey;
	this.bubbles = bubbles;
	this.relatedObject = relatedObject;
	this.delta = delta;
	this.localX = localX;
	this.localY = localY;
	this.sizeX = sizeX;
	this.sizeY = sizeY;
	this.buttonDown = buttonDown;
	this.commandKey = commandKey;
	this.pressure = 1;
	this.touchPointID = 0;
	this.isPrimaryTouchPoint = true;
};
$hxClasses["openfl.events.TouchEvent"] = openfl.events.TouchEvent;
openfl.events.TouchEvent.__name__ = ["openfl","events","TouchEvent"];
openfl.events.TouchEvent.__create = function(type,event,touch,local,target) {
	var evt = new openfl.events.TouchEvent(type,true,false,local.x,local.y,null,null,null,event.ctrlKey,event.altKey,event.shiftKey,false,0,null,0);
	evt.stageX = openfl.Lib.current.stage.get_mouseX();
	evt.stageY = openfl.Lib.current.stage.get_mouseY();
	evt.target = target;
	return evt;
};
openfl.events.TouchEvent.__super__ = openfl.events.Event;
openfl.events.TouchEvent.prototype = $extend(openfl.events.Event.prototype,{
	updateAfterEvent: function() {
	}
	,__class__: openfl.events.TouchEvent
});
openfl.filters = {};
openfl.filters.BitmapFilter = function() {
};
$hxClasses["openfl.filters.BitmapFilter"] = openfl.filters.BitmapFilter;
openfl.filters.BitmapFilter.__name__ = ["openfl","filters","BitmapFilter"];
openfl.filters.BitmapFilter.prototype = {
	clone: function() {
		return new openfl.filters.BitmapFilter();
	}
	,__applyFilter: function(sourceData,targetData,sourceRect,destPoint) {
	}
	,__class__: openfl.filters.BitmapFilter
};
openfl.geom = {};
openfl.geom.ColorTransform = function(redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier,redOffset,greenOffset,blueOffset,alphaOffset) {
	if(alphaOffset == null) alphaOffset = 0;
	if(blueOffset == null) blueOffset = 0;
	if(greenOffset == null) greenOffset = 0;
	if(redOffset == null) redOffset = 0;
	if(alphaMultiplier == null) alphaMultiplier = 1;
	if(blueMultiplier == null) blueMultiplier = 1;
	if(greenMultiplier == null) greenMultiplier = 1;
	if(redMultiplier == null) redMultiplier = 1;
	this.redMultiplier = redMultiplier;
	this.greenMultiplier = greenMultiplier;
	this.blueMultiplier = blueMultiplier;
	this.alphaMultiplier = alphaMultiplier;
	this.redOffset = redOffset;
	this.greenOffset = greenOffset;
	this.blueOffset = blueOffset;
	this.alphaOffset = alphaOffset;
};
$hxClasses["openfl.geom.ColorTransform"] = openfl.geom.ColorTransform;
openfl.geom.ColorTransform.__name__ = ["openfl","geom","ColorTransform"];
openfl.geom.ColorTransform.prototype = {
	concat: function(second) {
		this.redMultiplier += second.redMultiplier;
		this.greenMultiplier += second.greenMultiplier;
		this.blueMultiplier += second.blueMultiplier;
		this.alphaMultiplier += second.alphaMultiplier;
	}
	,get_color: function() {
		return (this.redOffset | 0) << 16 | (this.greenOffset | 0) << 8 | (this.blueOffset | 0);
	}
	,set_color: function(value) {
		this.redOffset = value >> 16 & 255;
		this.greenOffset = value >> 8 & 255;
		this.blueOffset = value & 255;
		this.redMultiplier = 0;
		this.greenMultiplier = 0;
		this.blueMultiplier = 0;
		return this.get_color();
	}
	,__class__: openfl.geom.ColorTransform
	,__properties__: {set_color:"set_color",get_color:"get_color"}
};
openfl.geom.Matrix = function(a,b,c,d,tx,ty) {
	if(ty == null) ty = 0;
	if(tx == null) tx = 0;
	if(d == null) d = 1;
	if(c == null) c = 0;
	if(b == null) b = 0;
	if(a == null) a = 1;
	this.a = a;
	this.b = b;
	this.c = c;
	this.d = d;
	this.tx = tx;
	this.ty = ty;
};
$hxClasses["openfl.geom.Matrix"] = openfl.geom.Matrix;
openfl.geom.Matrix.__name__ = ["openfl","geom","Matrix"];
openfl.geom.Matrix.prototype = {
	clone: function() {
		return new openfl.geom.Matrix(this.a,this.b,this.c,this.d,this.tx,this.ty);
	}
	,concat: function(m) {
		var a1 = this.a * m.a + this.b * m.c;
		this.b = this.a * m.b + this.b * m.d;
		this.a = a1;
		var c1 = this.c * m.a + this.d * m.c;
		this.d = this.c * m.b + this.d * m.d;
		this.c = c1;
		var tx1 = this.tx * m.a + this.ty * m.c + m.tx;
		this.ty = this.tx * m.b + this.ty * m.d + m.ty;
		this.tx = tx1;
	}
	,copyColumnFrom: function(column,vector3D) {
		if(column > 2) throw "Column " + column + " out of bounds (2)"; else if(column == 0) {
			this.a = vector3D.x;
			this.c = vector3D.y;
		} else if(column == 1) {
			this.b = vector3D.x;
			this.d = vector3D.y;
		} else {
			this.tx = vector3D.x;
			this.ty = vector3D.y;
		}
	}
	,copyColumnTo: function(column,vector3D) {
		if(column > 2) throw "Column " + column + " out of bounds (2)"; else if(column == 0) {
			vector3D.x = this.a;
			vector3D.y = this.c;
			vector3D.z = 0;
		} else if(column == 1) {
			vector3D.x = this.b;
			vector3D.y = this.d;
			vector3D.z = 0;
		} else {
			vector3D.x = this.tx;
			vector3D.y = this.ty;
			vector3D.z = 1;
		}
	}
	,copyFrom: function(sourceMatrix) {
		this.a = sourceMatrix.a;
		this.b = sourceMatrix.b;
		this.c = sourceMatrix.c;
		this.d = sourceMatrix.d;
		this.tx = sourceMatrix.tx;
		this.ty = sourceMatrix.ty;
	}
	,copyRowFrom: function(row,vector3D) {
		if(row > 2) throw "Row " + row + " out of bounds (2)"; else if(row == 0) {
			this.a = vector3D.x;
			this.c = vector3D.y;
		} else if(row == 1) {
			this.b = vector3D.x;
			this.d = vector3D.y;
		} else {
			this.tx = vector3D.x;
			this.ty = vector3D.y;
		}
	}
	,copyRowTo: function(row,vector3D) {
		if(row > 2) throw "Row " + row + " out of bounds (2)"; else if(row == 0) {
			vector3D.x = this.a;
			vector3D.y = this.b;
			vector3D.z = this.tx;
		} else if(row == 1) {
			vector3D.x = this.c;
			vector3D.y = this.d;
			vector3D.z = this.ty;
		} else {
			vector3D.x = 0;
			vector3D.y = 0;
			vector3D.z = 1;
		}
	}
	,createBox: function(scaleX,scaleY,rotation,tx,ty) {
		if(ty == null) ty = 0;
		if(tx == null) tx = 0;
		if(rotation == null) rotation = 0;
		this.a = scaleX;
		this.d = scaleY;
		this.b = rotation;
		this.tx = tx;
		this.ty = ty;
	}
	,createGradientBox: function(width,height,rotation,tx,ty) {
		if(ty == null) ty = 0;
		if(tx == null) tx = 0;
		if(rotation == null) rotation = 0;
		this.a = width / 1638.4;
		this.d = height / 1638.4;
		if(rotation != 0) {
			var cos = Math.cos(rotation);
			var sin = Math.sin(rotation);
			this.b = sin * this.d;
			this.c = -sin * this.a;
			this.a *= cos;
			this.d *= cos;
		} else {
			this.b = 0;
			this.c = 0;
		}
		this.tx = tx + width / 2;
		this.ty = ty + height / 2;
	}
	,equals: function(matrix) {
		return matrix != null && this.tx == matrix.tx && this.ty == matrix.ty && this.a == matrix.a && this.b == matrix.b && this.c == matrix.c && this.d == matrix.d;
	}
	,deltaTransformPoint: function(point) {
		return new openfl.geom.Point(point.x * this.a + point.y * this.c,point.x * this.b + point.y * this.d);
	}
	,identity: function() {
		this.a = 1;
		this.b = 0;
		this.c = 0;
		this.d = 1;
		this.tx = 0;
		this.ty = 0;
	}
	,invert: function() {
		var norm = this.a * this.d - this.b * this.c;
		if(norm == 0) {
			this.a = this.b = this.c = this.d = 0;
			this.tx = -this.tx;
			this.ty = -this.ty;
		} else {
			norm = 1.0 / norm;
			var a1 = this.d * norm;
			this.d = this.a * norm;
			this.a = a1;
			this.b *= -norm;
			this.c *= -norm;
			var tx1 = -this.a * this.tx - this.c * this.ty;
			this.ty = -this.b * this.tx - this.d * this.ty;
			this.tx = tx1;
		}
		return this;
	}
	,mult: function(m) {
		var result = new openfl.geom.Matrix(this.a,this.b,this.c,this.d,this.tx,this.ty);
		result.concat(m);
		return result;
	}
	,rotate: function(theta) {
		var cos = Math.cos(theta);
		var sin = Math.sin(theta);
		var a1 = this.a * cos - this.b * sin;
		this.b = this.a * sin + this.b * cos;
		this.a = a1;
		var c1 = this.c * cos - this.d * sin;
		this.d = this.c * sin + this.d * cos;
		this.c = c1;
		var tx1 = this.tx * cos - this.ty * sin;
		this.ty = this.tx * sin + this.ty * cos;
		this.tx = tx1;
	}
	,scale: function(sx,sy) {
		this.a *= sx;
		this.b *= sy;
		this.c *= sx;
		this.d *= sy;
		this.tx *= sx;
		this.ty *= sy;
	}
	,setRotation: function(theta,scale) {
		if(scale == null) scale = 1;
		this.a = Math.cos(theta) * scale;
		this.c = Math.sin(theta) * scale;
		this.b = -this.c;
		this.d = this.a;
	}
	,setTo: function(a,b,c,d,tx,ty) {
		this.a = a;
		this.b = b;
		this.c = c;
		this.d = d;
		this.tx = tx;
		this.ty = ty;
	}
	,to3DString: function(roundPixels) {
		if(roundPixels == null) roundPixels = false;
		if(roundPixels) return "matrix3d(" + this.a + ", " + this.b + ", " + "0, 0, " + this.c + ", " + this.d + ", " + "0, 0, 0, 0, 1, 0, " + (this.tx | 0) + ", " + (this.ty | 0) + ", 0, 1)"; else return "matrix3d(" + this.a + ", " + this.b + ", " + "0, 0, " + this.c + ", " + this.d + ", " + "0, 0, 0, 0, 1, 0, " + this.tx + ", " + this.ty + ", 0, 1)";
	}
	,toMozString: function() {
		return "matrix(" + this.a + ", " + this.b + ", " + this.c + ", " + this.d + ", " + this.tx + "px, " + this.ty + "px)";
	}
	,toString: function() {
		return "matrix(" + this.a + ", " + this.b + ", " + this.c + ", " + this.d + ", " + this.tx + ", " + this.ty + ")";
	}
	,transformPoint: function(pos) {
		return new openfl.geom.Point(pos.x * this.a + pos.y * this.c + this.tx,pos.x * this.b + pos.y * this.d + this.ty);
	}
	,translate: function(dx,dy) {
		var m = new openfl.geom.Matrix();
		m.tx = dx;
		m.ty = dy;
		this.concat(m);
	}
	,__cleanValues: function() {
		this.a = Math.round(this.a * 1000) / 1000;
		this.b = Math.round(this.b * 1000) / 1000;
		this.c = Math.round(this.c * 1000) / 1000;
		this.d = Math.round(this.d * 1000) / 1000;
		this.tx = Math.round(this.tx * 10) / 10;
		this.ty = Math.round(this.ty * 10) / 10;
	}
	,__transformX: function(pos) {
		return pos.x * this.a + pos.y * this.c + this.tx;
	}
	,__transformY: function(pos) {
		return pos.x * this.b + pos.y * this.d + this.ty;
	}
	,__translateTransformed: function(pos) {
		this.tx = pos.x * this.a + pos.y * this.c + this.tx;
		this.ty = pos.x * this.b + pos.y * this.d + this.ty;
	}
	,__class__: openfl.geom.Matrix
};
openfl.geom.Matrix3D = function(v) {
	if(v != null && v.length == 16) this.rawData = v; else {
		var value = [1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0,0.0,0.0,0.0,0.0,1.0];
		var vectorData = new openfl.VectorData();
		vectorData.length = value.length;
		vectorData.fixed = true;
		var vec;
		var this1;
		this1 = new Array(value.length);
		vec = this1;
		var _g1 = 0;
		var _g = value.length;
		while(_g1 < _g) {
			var i = _g1++;
			vec[i] = value[i];
		}
		vectorData.data = vec;
		this.rawData = vectorData;
	}
};
$hxClasses["openfl.geom.Matrix3D"] = openfl.geom.Matrix3D;
openfl.geom.Matrix3D.__name__ = ["openfl","geom","Matrix3D"];
openfl.geom.Matrix3D.create2D = function(x,y,scale,rotation) {
	if(rotation == null) rotation = 0;
	if(scale == null) scale = 1;
	var theta = rotation * Math.PI / 180.0;
	var c = Math.cos(theta);
	var s = Math.sin(theta);
	return new openfl.geom.Matrix3D((function($this) {
		var $r;
		var value = [c * scale,-s * scale,0,0,s * scale,c * scale,0,0,0,0,1,0,x,y,0,1];
		var vectorData = new openfl.VectorData();
		vectorData.length = value.length;
		vectorData.fixed = true;
		{
			var vec;
			var this1;
			this1 = new Array(value.length);
			vec = this1;
			var _g1 = 0;
			var _g = value.length;
			while(_g1 < _g) {
				var i = _g1++;
				vec[i] = value[i];
			}
			vectorData.data = vec;
		}
		$r = vectorData;
		return $r;
	}(this)));
};
openfl.geom.Matrix3D.createABCD = function(a,b,c,d,tx,ty) {
	return new openfl.geom.Matrix3D((function($this) {
		var $r;
		var value = [a,b,0,0,c,d,0,0,0,0,1,0,tx,ty,0,1];
		var vectorData = new openfl.VectorData();
		vectorData.length = value.length;
		vectorData.fixed = true;
		{
			var vec;
			var this1;
			this1 = new Array(value.length);
			vec = this1;
			var _g1 = 0;
			var _g = value.length;
			while(_g1 < _g) {
				var i = _g1++;
				vec[i] = value[i];
			}
			vectorData.data = vec;
		}
		$r = vectorData;
		return $r;
	}(this)));
};
openfl.geom.Matrix3D.createOrtho = function(x0,x1,y0,y1,zNear,zFar) {
	var sx = 1.0 / (x1 - x0);
	var sy = 1.0 / (y1 - y0);
	var sz = 1.0 / (zFar - zNear);
	return new openfl.geom.Matrix3D((function($this) {
		var $r;
		var value = [2.0 * sx,0,0,0,0,2.0 * sy,0,0,0,0,-2. * sz,0,-(x0 + x1) * sx,-(y0 + y1) * sy,-(zNear + zFar) * sz,1];
		var vectorData = new openfl.VectorData();
		vectorData.length = value.length;
		vectorData.fixed = true;
		{
			var vec;
			var this1;
			this1 = new Array(value.length);
			vec = this1;
			var _g1 = 0;
			var _g = value.length;
			while(_g1 < _g) {
				var i = _g1++;
				vec[i] = value[i];
			}
			vectorData.data = vec;
		}
		$r = vectorData;
		return $r;
	}(this)));
};
openfl.geom.Matrix3D.getAxisRotation = function(x,y,z,degrees) {
	var m = new openfl.geom.Matrix3D();
	var a1 = new openfl.geom.Vector3D(x,y,z);
	var rad = -degrees * (Math.PI / 180);
	var c = Math.cos(rad);
	var s = Math.sin(rad);
	var t = 1.0 - c;
	var this1 = m.rawData;
	if(0 >= this1.length && !this1.fixed) this1.length = 1;
	this1.data[0] = c + a1.x * a1.x * t;
	var this2 = m.rawData;
	if(5 >= this2.length && !this2.fixed) this2.length = 6;
	this2.data[5] = c + a1.y * a1.y * t;
	var this3 = m.rawData;
	if(10 >= this3.length && !this3.fixed) this3.length = 11;
	this3.data[10] = c + a1.z * a1.z * t;
	var tmp1 = a1.x * a1.y * t;
	var tmp2 = a1.z * s;
	var this4 = m.rawData;
	if(4 >= this4.length && !this4.fixed) this4.length = 5;
	this4.data[4] = tmp1 + tmp2;
	var this5 = m.rawData;
	if(1 >= this5.length && !this5.fixed) this5.length = 2;
	this5.data[1] = tmp1 - tmp2;
	tmp1 = a1.x * a1.z * t;
	tmp2 = a1.y * s;
	var this6 = m.rawData;
	if(8 >= this6.length && !this6.fixed) this6.length = 9;
	this6.data[8] = tmp1 - tmp2;
	var this7 = m.rawData;
	if(2 >= this7.length && !this7.fixed) this7.length = 3;
	this7.data[2] = tmp1 + tmp2;
	tmp1 = a1.y * a1.z * t;
	tmp2 = a1.x * s;
	var this8 = m.rawData;
	if(9 >= this8.length && !this8.fixed) this8.length = 10;
	this8.data[9] = tmp1 + tmp2;
	var this9 = m.rawData;
	if(6 >= this9.length && !this9.fixed) this9.length = 7;
	this9.data[6] = tmp1 - tmp2;
	return m;
};
openfl.geom.Matrix3D.interpolate = function(thisMat,toMat,percent) {
	var m = new openfl.geom.Matrix3D();
	var _g = 0;
	while(_g < 16) {
		var i = _g++;
		var this1 = m.rawData;
		if(i >= this1.length && !this1.fixed) this1.length = i + 1;
		this1.data[i] = thisMat.rawData.data[i] + (toMat.rawData.data[i] - thisMat.rawData.data[i]) * percent;
	}
	return m;
};
openfl.geom.Matrix3D.prototype = {
	append: function(lhs) {
		var m111 = this.rawData.data[0];
		var m121 = this.rawData.data[4];
		var m131 = this.rawData.data[8];
		var m141 = this.rawData.data[12];
		var m112 = this.rawData.data[1];
		var m122 = this.rawData.data[5];
		var m132 = this.rawData.data[9];
		var m142 = this.rawData.data[13];
		var m113 = this.rawData.data[2];
		var m123 = this.rawData.data[6];
		var m133 = this.rawData.data[10];
		var m143 = this.rawData.data[14];
		var m114 = this.rawData.data[3];
		var m124 = this.rawData.data[7];
		var m134 = this.rawData.data[11];
		var m144 = this.rawData.data[15];
		var m211 = lhs.rawData.data[0];
		var m221 = lhs.rawData.data[4];
		var m231 = lhs.rawData.data[8];
		var m241 = lhs.rawData.data[12];
		var m212 = lhs.rawData.data[1];
		var m222 = lhs.rawData.data[5];
		var m232 = lhs.rawData.data[9];
		var m242 = lhs.rawData.data[13];
		var m213 = lhs.rawData.data[2];
		var m223 = lhs.rawData.data[6];
		var m233 = lhs.rawData.data[10];
		var m243 = lhs.rawData.data[14];
		var m214 = lhs.rawData.data[3];
		var m224 = lhs.rawData.data[7];
		var m234 = lhs.rawData.data[11];
		var m244 = lhs.rawData.data[15];
		var this1 = this.rawData;
		if(0 >= this1.length && !this1.fixed) this1.length = 1;
		this1.data[0] = m111 * m211 + m112 * m221 + m113 * m231 + m114 * m241;
		var this2 = this.rawData;
		if(1 >= this2.length && !this2.fixed) this2.length = 2;
		this2.data[1] = m111 * m212 + m112 * m222 + m113 * m232 + m114 * m242;
		var this3 = this.rawData;
		if(2 >= this3.length && !this3.fixed) this3.length = 3;
		this3.data[2] = m111 * m213 + m112 * m223 + m113 * m233 + m114 * m243;
		var this4 = this.rawData;
		if(3 >= this4.length && !this4.fixed) this4.length = 4;
		this4.data[3] = m111 * m214 + m112 * m224 + m113 * m234 + m114 * m244;
		var this5 = this.rawData;
		if(4 >= this5.length && !this5.fixed) this5.length = 5;
		this5.data[4] = m121 * m211 + m122 * m221 + m123 * m231 + m124 * m241;
		var this6 = this.rawData;
		if(5 >= this6.length && !this6.fixed) this6.length = 6;
		this6.data[5] = m121 * m212 + m122 * m222 + m123 * m232 + m124 * m242;
		var this7 = this.rawData;
		if(6 >= this7.length && !this7.fixed) this7.length = 7;
		this7.data[6] = m121 * m213 + m122 * m223 + m123 * m233 + m124 * m243;
		var this8 = this.rawData;
		if(7 >= this8.length && !this8.fixed) this8.length = 8;
		this8.data[7] = m121 * m214 + m122 * m224 + m123 * m234 + m124 * m244;
		var this9 = this.rawData;
		if(8 >= this9.length && !this9.fixed) this9.length = 9;
		this9.data[8] = m131 * m211 + m132 * m221 + m133 * m231 + m134 * m241;
		var this10 = this.rawData;
		if(9 >= this10.length && !this10.fixed) this10.length = 10;
		this10.data[9] = m131 * m212 + m132 * m222 + m133 * m232 + m134 * m242;
		var this11 = this.rawData;
		if(10 >= this11.length && !this11.fixed) this11.length = 11;
		this11.data[10] = m131 * m213 + m132 * m223 + m133 * m233 + m134 * m243;
		var this12 = this.rawData;
		if(11 >= this12.length && !this12.fixed) this12.length = 12;
		this12.data[11] = m131 * m214 + m132 * m224 + m133 * m234 + m134 * m244;
		var this13 = this.rawData;
		if(12 >= this13.length && !this13.fixed) this13.length = 13;
		this13.data[12] = m141 * m211 + m142 * m221 + m143 * m231 + m144 * m241;
		var this14 = this.rawData;
		if(13 >= this14.length && !this14.fixed) this14.length = 14;
		this14.data[13] = m141 * m212 + m142 * m222 + m143 * m232 + m144 * m242;
		var this15 = this.rawData;
		if(14 >= this15.length && !this15.fixed) this15.length = 15;
		this15.data[14] = m141 * m213 + m142 * m223 + m143 * m233 + m144 * m243;
		var this16 = this.rawData;
		if(15 >= this16.length && !this16.fixed) this16.length = 16;
		this16.data[15] = m141 * m214 + m142 * m224 + m143 * m234 + m144 * m244;
	}
	,appendRotation: function(degrees,axis,pivotPoint) {
		var m = openfl.geom.Matrix3D.getAxisRotation(axis.x,axis.y,axis.z,degrees);
		if(pivotPoint != null) {
			var p = pivotPoint;
			m.appendTranslation(p.x,p.y,p.z);
		}
		this.append(m);
	}
	,appendScale: function(xScale,yScale,zScale) {
		this.append(new openfl.geom.Matrix3D((function($this) {
			var $r;
			var value = [xScale,0.0,0.0,0.0,0.0,yScale,0.0,0.0,0.0,0.0,zScale,0.0,0.0,0.0,0.0,1.0];
			var vectorData = new openfl.VectorData();
			vectorData.length = value.length;
			vectorData.fixed = true;
			{
				var vec;
				var this1;
				this1 = new Array(value.length);
				vec = this1;
				var _g1 = 0;
				var _g = value.length;
				while(_g1 < _g) {
					var i = _g1++;
					vec[i] = value[i];
				}
				vectorData.data = vec;
			}
			$r = vectorData;
			return $r;
		}(this))));
	}
	,appendTranslation: function(x,y,z) {
		var this1 = this.rawData;
		if(12 >= this1.length && !this1.fixed) this1.length = 13;
		this1.data[12] = this.rawData.data[12] + x;
		var this2 = this.rawData;
		if(13 >= this2.length && !this2.fixed) this2.length = 14;
		this2.data[13] = this.rawData.data[13] + y;
		var this3 = this.rawData;
		if(14 >= this3.length && !this3.fixed) this3.length = 15;
		this3.data[14] = this.rawData.data[14] + z;
	}
	,clone: function() {
		return new openfl.geom.Matrix3D(openfl._Vector.Vector_Impl_.copy(this.rawData));
	}
	,copyColumnFrom: function(column,vector3D) {
		if(column > 3) throw "Column " + column + " out of bounds (3)";
		var this1 = this.rawData;
		if(column >= this1.length && !this1.fixed) this1.length = column + 1;
		this1.data[column] = vector3D.x;
		var this2 = this.rawData;
		var key = 4 + column;
		if(key >= this2.length && !this2.fixed) this2.length = key + 1;
		this2.data[key] = vector3D.y;
		var this3 = this.rawData;
		var key1 = 8 + column;
		if(key1 >= this3.length && !this3.fixed) this3.length = key1 + 1;
		this3.data[key1] = vector3D.z;
		var this4 = this.rawData;
		var key2 = 12 + column;
		if(key2 >= this4.length && !this4.fixed) this4.length = key2 + 1;
		this4.data[key2] = vector3D.w;
	}
	,copyColumnTo: function(column,vector3D) {
		if(column > 3) throw "Column " + column + " out of bounds (3)";
		vector3D.x = this.rawData.data[column];
		vector3D.y = this.rawData.data[4 + column];
		vector3D.z = this.rawData.data[8 + column];
		vector3D.w = this.rawData.data[12 + column];
	}
	,copyFrom: function(other) {
		var _g = 0;
		while(_g < 16) {
			var i = _g++;
			var this1 = this.rawData;
			if(i >= this1.length && !this1.fixed) this1.length = i + 1;
			this1.data[i] = other.rawData.data[i];
		}
	}
	,copyRowFrom: function(row,vector3D) {
		if(row > 3) throw "Row " + row + " out of bounds (3)";
		var i = 4 * row;
		var this1 = this.rawData;
		if(i >= this1.length && !this1.fixed) this1.length = i + 1;
		this1.data[i] = vector3D.x;
		var this2 = this.rawData;
		var key = i + 1;
		if(key >= this2.length && !this2.fixed) this2.length = key + 1;
		this2.data[key] = vector3D.y;
		var this3 = this.rawData;
		var key1 = i + 2;
		if(key1 >= this3.length && !this3.fixed) this3.length = key1 + 1;
		this3.data[key1] = vector3D.z;
		var this4 = this.rawData;
		var key2 = i + 3;
		if(key2 >= this4.length && !this4.fixed) this4.length = key2 + 1;
		this4.data[key2] = vector3D.w;
	}
	,copyRowTo: function(row,vector3D) {
		if(row > 3) throw "Row " + row + " out of bounds (3)";
		var i = 4 * row;
		vector3D.x = this.rawData.data[i];
		vector3D.y = this.rawData.data[i + 1];
		vector3D.z = this.rawData.data[i + 2];
		vector3D.w = this.rawData.data[i + 3];
	}
	,copyToMatrix3D: function(other) {
		var _g = 0;
		while(_g < 16) {
			var i = _g++;
			var this1 = other.rawData;
			if(i >= this1.length && !this1.fixed) this1.length = i + 1;
			this1.data[i] = this.rawData.data[i];
		}
	}
	,decompose: function() {
		var vec = openfl._Vector.Vector_Impl_._new();
		var m = new openfl.geom.Matrix3D(openfl._Vector.Vector_Impl_.copy(this.rawData));
		var mr = m.rawData;
		var pos = new openfl.geom.Vector3D(mr.data[12],mr.data[13],mr.data[14]);
		if(12 >= mr.length && !mr.fixed) mr.length = 13;
		mr.data[12] = 0;
		if(13 >= mr.length && !mr.fixed) mr.length = 14;
		mr.data[13] = 0;
		if(14 >= mr.length && !mr.fixed) mr.length = 15;
		mr.data[14] = 0;
		var scale = new openfl.geom.Vector3D();
		scale.x = Math.sqrt(mr.data[0] * mr.data[0] + mr.data[1] * mr.data[1] + mr.data[2] * mr.data[2]);
		scale.y = Math.sqrt(mr.data[4] * mr.data[4] + mr.data[5] * mr.data[5] + mr.data[6] * mr.data[6]);
		scale.z = Math.sqrt(mr.data[8] * mr.data[8] + mr.data[9] * mr.data[9] + mr.data[10] * mr.data[10]);
		if(mr.data[0] * (mr.data[5] * mr.data[10] - mr.data[6] * mr.data[9]) - mr.data[1] * (mr.data[4] * mr.data[10] - mr.data[6] * mr.data[8]) + mr.data[2] * (mr.data[4] * mr.data[9] - mr.data[5] * mr.data[8]) < 0) scale.z = -scale.z;
		if(0 >= mr.length && !mr.fixed) mr.length = 1;
		mr.data[0] = mr.data[0] / scale.x;
		if(1 >= mr.length && !mr.fixed) mr.length = 2;
		mr.data[1] = mr.data[1] / scale.x;
		if(2 >= mr.length && !mr.fixed) mr.length = 3;
		mr.data[2] = mr.data[2] / scale.x;
		if(4 >= mr.length && !mr.fixed) mr.length = 5;
		mr.data[4] = mr.data[4] / scale.y;
		if(5 >= mr.length && !mr.fixed) mr.length = 6;
		mr.data[5] = mr.data[5] / scale.y;
		if(6 >= mr.length && !mr.fixed) mr.length = 7;
		mr.data[6] = mr.data[6] / scale.y;
		if(8 >= mr.length && !mr.fixed) mr.length = 9;
		mr.data[8] = mr.data[8] / scale.z;
		if(9 >= mr.length && !mr.fixed) mr.length = 10;
		mr.data[9] = mr.data[9] / scale.z;
		if(10 >= mr.length && !mr.fixed) mr.length = 11;
		mr.data[10] = mr.data[10] / scale.z;
		var rot = new openfl.geom.Vector3D();
		rot.y = Math.asin(-mr.data[2]);
		var C = Math.cos(rot.y);
		if(C > 0) {
			rot.x = Math.atan2(mr.data[6],mr.data[10]);
			rot.z = Math.atan2(mr.data[1],mr.data[0]);
		} else {
			rot.z = 0;
			rot.x = Math.atan2(mr.data[4],mr.data[5]);
		}
		if(!vec.fixed) {
			vec.length++;
			if(vec.data.length < vec.length) {
				var data;
				var this1;
				this1 = new Array(vec.data.length + 10);
				data = this1;
				haxe.ds._Vector.Vector_Impl_.blit(vec.data,0,data,0,vec.data.length);
				vec.data = data;
			}
			vec.data[vec.length - 1] = pos;
		}
		vec.length;
		if(!vec.fixed) {
			vec.length++;
			if(vec.data.length < vec.length) {
				var data1;
				var this2;
				this2 = new Array(vec.data.length + 10);
				data1 = this2;
				haxe.ds._Vector.Vector_Impl_.blit(vec.data,0,data1,0,vec.data.length);
				vec.data = data1;
			}
			vec.data[vec.length - 1] = rot;
		}
		vec.length;
		if(!vec.fixed) {
			vec.length++;
			if(vec.data.length < vec.length) {
				var data2;
				var this3;
				this3 = new Array(vec.data.length + 10);
				data2 = this3;
				haxe.ds._Vector.Vector_Impl_.blit(vec.data,0,data2,0,vec.data.length);
				vec.data = data2;
			}
			vec.data[vec.length - 1] = scale;
		}
		vec.length;
		return vec;
	}
	,deltaTransformVector: function(v) {
		var x = v.x;
		var y = v.y;
		var z = v.z;
		return new openfl.geom.Vector3D(x * this.rawData.data[0] + y * this.rawData.data[1] + z * this.rawData.data[2] + this.rawData.data[3],x * this.rawData.data[4] + y * this.rawData.data[5] + z * this.rawData.data[6] + this.rawData.data[7],x * this.rawData.data[8] + y * this.rawData.data[9] + z * this.rawData.data[10] + this.rawData.data[11],0);
	}
	,identity: function() {
		var this1 = this.rawData;
		if(0 >= this1.length && !this1.fixed) this1.length = 1;
		this1.data[0] = 1;
		var this2 = this.rawData;
		if(1 >= this2.length && !this2.fixed) this2.length = 2;
		this2.data[1] = 0;
		var this3 = this.rawData;
		if(2 >= this3.length && !this3.fixed) this3.length = 3;
		this3.data[2] = 0;
		var this4 = this.rawData;
		if(3 >= this4.length && !this4.fixed) this4.length = 4;
		this4.data[3] = 0;
		var this5 = this.rawData;
		if(4 >= this5.length && !this5.fixed) this5.length = 5;
		this5.data[4] = 0;
		var this6 = this.rawData;
		if(5 >= this6.length && !this6.fixed) this6.length = 6;
		this6.data[5] = 1;
		var this7 = this.rawData;
		if(6 >= this7.length && !this7.fixed) this7.length = 7;
		this7.data[6] = 0;
		var this8 = this.rawData;
		if(7 >= this8.length && !this8.fixed) this8.length = 8;
		this8.data[7] = 0;
		var this9 = this.rawData;
		if(8 >= this9.length && !this9.fixed) this9.length = 9;
		this9.data[8] = 0;
		var this10 = this.rawData;
		if(9 >= this10.length && !this10.fixed) this10.length = 10;
		this10.data[9] = 0;
		var this11 = this.rawData;
		if(10 >= this11.length && !this11.fixed) this11.length = 11;
		this11.data[10] = 1;
		var this12 = this.rawData;
		if(11 >= this12.length && !this12.fixed) this12.length = 12;
		this12.data[11] = 0;
		var this13 = this.rawData;
		if(12 >= this13.length && !this13.fixed) this13.length = 13;
		this13.data[12] = 0;
		var this14 = this.rawData;
		if(13 >= this14.length && !this14.fixed) this14.length = 14;
		this14.data[13] = 0;
		var this15 = this.rawData;
		if(14 >= this15.length && !this15.fixed) this15.length = 15;
		this15.data[14] = 0;
		var this16 = this.rawData;
		if(15 >= this16.length && !this16.fixed) this16.length = 16;
		this16.data[15] = 1;
	}
	,interpolateTo: function(toMat,percent) {
		var _g = 0;
		while(_g < 16) {
			var i = _g++;
			var this1 = this.rawData;
			if(i >= this1.length && !this1.fixed) this1.length = i + 1;
			this1.data[i] = this.rawData.data[i] + (toMat.rawData.data[i] - this.rawData.data[i]) * percent;
		}
	}
	,invert: function() {
		var d = -1 * ((this.rawData.data[0] * this.rawData.data[5] - this.rawData.data[4] * this.rawData.data[1]) * (this.rawData.data[10] * this.rawData.data[15] - this.rawData.data[14] * this.rawData.data[11]) - (this.rawData.data[0] * this.rawData.data[9] - this.rawData.data[8] * this.rawData.data[1]) * (this.rawData.data[6] * this.rawData.data[15] - this.rawData.data[14] * this.rawData.data[7]) + (this.rawData.data[0] * this.rawData.data[13] - this.rawData.data[12] * this.rawData.data[1]) * (this.rawData.data[6] * this.rawData.data[11] - this.rawData.data[10] * this.rawData.data[7]) + (this.rawData.data[4] * this.rawData.data[9] - this.rawData.data[8] * this.rawData.data[5]) * (this.rawData.data[2] * this.rawData.data[15] - this.rawData.data[14] * this.rawData.data[3]) - (this.rawData.data[4] * this.rawData.data[13] - this.rawData.data[12] * this.rawData.data[5]) * (this.rawData.data[2] * this.rawData.data[11] - this.rawData.data[10] * this.rawData.data[3]) + (this.rawData.data[8] * this.rawData.data[13] - this.rawData.data[12] * this.rawData.data[9]) * (this.rawData.data[2] * this.rawData.data[7] - this.rawData.data[6] * this.rawData.data[3]));
		var invertable = Math.abs(d) > 0.00000000001;
		if(invertable) {
			d = -1 / d;
			var m11 = this.rawData.data[0];
			var m21 = this.rawData.data[4];
			var m31 = this.rawData.data[8];
			var m41 = this.rawData.data[12];
			var m12 = this.rawData.data[1];
			var m22 = this.rawData.data[5];
			var m32 = this.rawData.data[9];
			var m42 = this.rawData.data[13];
			var m13 = this.rawData.data[2];
			var m23 = this.rawData.data[6];
			var m33 = this.rawData.data[10];
			var m43 = this.rawData.data[14];
			var m14 = this.rawData.data[3];
			var m24 = this.rawData.data[7];
			var m34 = this.rawData.data[11];
			var m44 = this.rawData.data[15];
			var this1 = this.rawData;
			if(0 >= this1.length && !this1.fixed) this1.length = 1;
			this1.data[0] = d * (m22 * (m33 * m44 - m43 * m34) - m32 * (m23 * m44 - m43 * m24) + m42 * (m23 * m34 - m33 * m24));
			var this2 = this.rawData;
			if(1 >= this2.length && !this2.fixed) this2.length = 2;
			this2.data[1] = -d * (m12 * (m33 * m44 - m43 * m34) - m32 * (m13 * m44 - m43 * m14) + m42 * (m13 * m34 - m33 * m14));
			var this3 = this.rawData;
			if(2 >= this3.length && !this3.fixed) this3.length = 3;
			this3.data[2] = d * (m12 * (m23 * m44 - m43 * m24) - m22 * (m13 * m44 - m43 * m14) + m42 * (m13 * m24 - m23 * m14));
			var this4 = this.rawData;
			if(3 >= this4.length && !this4.fixed) this4.length = 4;
			this4.data[3] = -d * (m12 * (m23 * m34 - m33 * m24) - m22 * (m13 * m34 - m33 * m14) + m32 * (m13 * m24 - m23 * m14));
			var this5 = this.rawData;
			if(4 >= this5.length && !this5.fixed) this5.length = 5;
			this5.data[4] = -d * (m21 * (m33 * m44 - m43 * m34) - m31 * (m23 * m44 - m43 * m24) + m41 * (m23 * m34 - m33 * m24));
			var this6 = this.rawData;
			if(5 >= this6.length && !this6.fixed) this6.length = 6;
			this6.data[5] = d * (m11 * (m33 * m44 - m43 * m34) - m31 * (m13 * m44 - m43 * m14) + m41 * (m13 * m34 - m33 * m14));
			var this7 = this.rawData;
			if(6 >= this7.length && !this7.fixed) this7.length = 7;
			this7.data[6] = -d * (m11 * (m23 * m44 - m43 * m24) - m21 * (m13 * m44 - m43 * m14) + m41 * (m13 * m24 - m23 * m14));
			var this8 = this.rawData;
			if(7 >= this8.length && !this8.fixed) this8.length = 8;
			this8.data[7] = d * (m11 * (m23 * m34 - m33 * m24) - m21 * (m13 * m34 - m33 * m14) + m31 * (m13 * m24 - m23 * m14));
			var this9 = this.rawData;
			if(8 >= this9.length && !this9.fixed) this9.length = 9;
			this9.data[8] = d * (m21 * (m32 * m44 - m42 * m34) - m31 * (m22 * m44 - m42 * m24) + m41 * (m22 * m34 - m32 * m24));
			var this10 = this.rawData;
			if(9 >= this10.length && !this10.fixed) this10.length = 10;
			this10.data[9] = -d * (m11 * (m32 * m44 - m42 * m34) - m31 * (m12 * m44 - m42 * m14) + m41 * (m12 * m34 - m32 * m14));
			var this11 = this.rawData;
			if(10 >= this11.length && !this11.fixed) this11.length = 11;
			this11.data[10] = d * (m11 * (m22 * m44 - m42 * m24) - m21 * (m12 * m44 - m42 * m14) + m41 * (m12 * m24 - m22 * m14));
			var this12 = this.rawData;
			if(11 >= this12.length && !this12.fixed) this12.length = 12;
			this12.data[11] = -d * (m11 * (m22 * m34 - m32 * m24) - m21 * (m12 * m34 - m32 * m14) + m31 * (m12 * m24 - m22 * m14));
			var this13 = this.rawData;
			if(12 >= this13.length && !this13.fixed) this13.length = 13;
			this13.data[12] = -d * (m21 * (m32 * m43 - m42 * m33) - m31 * (m22 * m43 - m42 * m23) + m41 * (m22 * m33 - m32 * m23));
			var this14 = this.rawData;
			if(13 >= this14.length && !this14.fixed) this14.length = 14;
			this14.data[13] = d * (m11 * (m32 * m43 - m42 * m33) - m31 * (m12 * m43 - m42 * m13) + m41 * (m12 * m33 - m32 * m13));
			var this15 = this.rawData;
			if(14 >= this15.length && !this15.fixed) this15.length = 15;
			this15.data[14] = -d * (m11 * (m22 * m43 - m42 * m23) - m21 * (m12 * m43 - m42 * m13) + m41 * (m12 * m23 - m22 * m13));
			var this16 = this.rawData;
			if(15 >= this16.length && !this16.fixed) this16.length = 16;
			this16.data[15] = d * (m11 * (m22 * m33 - m32 * m23) - m21 * (m12 * m33 - m32 * m13) + m31 * (m12 * m23 - m22 * m13));
		}
		return invertable;
	}
	,pointAt: function(pos,at,up) {
		if(at == null) at = new openfl.geom.Vector3D(0,0,-1);
		if(up == null) up = new openfl.geom.Vector3D(0,-1,0);
		var dir = new openfl.geom.Vector3D(at.x - pos.x,at.y - pos.y,at.z - pos.z);
		var vup = new openfl.geom.Vector3D(up.x,up.y,up.z,up.w);
		var right;
		dir.normalize();
		vup.normalize();
		var dir2 = new openfl.geom.Vector3D(dir.x,dir.y,dir.z,dir.w);
		dir2.scaleBy(vup.x * dir.x + vup.y * dir.y + vup.z * dir.z);
		vup = new openfl.geom.Vector3D(vup.x - dir2.x,vup.y - dir2.y,vup.z - dir2.z);
		if(Math.sqrt(vup.x * vup.x + vup.y * vup.y + vup.z * vup.z) > 0) vup.normalize(); else if(dir.x != 0) vup = new openfl.geom.Vector3D(-dir.y,dir.x,0); else vup = new openfl.geom.Vector3D(1,0,0);
		right = new openfl.geom.Vector3D(vup.y * dir.z - vup.z * dir.y,vup.z * dir.x - vup.x * dir.z,vup.x * dir.y - vup.y * dir.x,1);
		right.normalize();
		var this1 = this.rawData;
		if(0 >= this1.length && !this1.fixed) this1.length = 1;
		this1.data[0] = right.x;
		var this2 = this.rawData;
		if(4 >= this2.length && !this2.fixed) this2.length = 5;
		this2.data[4] = right.y;
		var this3 = this.rawData;
		if(8 >= this3.length && !this3.fixed) this3.length = 9;
		this3.data[8] = right.z;
		var this4 = this.rawData;
		if(12 >= this4.length && !this4.fixed) this4.length = 13;
		this4.data[12] = 0.0;
		var this5 = this.rawData;
		if(1 >= this5.length && !this5.fixed) this5.length = 2;
		this5.data[1] = vup.x;
		var this6 = this.rawData;
		if(5 >= this6.length && !this6.fixed) this6.length = 6;
		this6.data[5] = vup.y;
		var this7 = this.rawData;
		if(9 >= this7.length && !this7.fixed) this7.length = 10;
		this7.data[9] = vup.z;
		var this8 = this.rawData;
		if(13 >= this8.length && !this8.fixed) this8.length = 14;
		this8.data[13] = 0.0;
		var this9 = this.rawData;
		if(2 >= this9.length && !this9.fixed) this9.length = 3;
		this9.data[2] = dir.x;
		var this10 = this.rawData;
		if(6 >= this10.length && !this10.fixed) this10.length = 7;
		this10.data[6] = dir.y;
		var this11 = this.rawData;
		if(10 >= this11.length && !this11.fixed) this11.length = 11;
		this11.data[10] = dir.z;
		var this12 = this.rawData;
		if(14 >= this12.length && !this12.fixed) this12.length = 15;
		this12.data[14] = 0.0;
		var this13 = this.rawData;
		if(3 >= this13.length && !this13.fixed) this13.length = 4;
		this13.data[3] = pos.x;
		var this14 = this.rawData;
		if(7 >= this14.length && !this14.fixed) this14.length = 8;
		this14.data[7] = pos.y;
		var this15 = this.rawData;
		if(11 >= this15.length && !this15.fixed) this15.length = 12;
		this15.data[11] = pos.z;
		var this16 = this.rawData;
		if(15 >= this16.length && !this16.fixed) this16.length = 16;
		this16.data[15] = 1.0;
	}
	,prepend: function(rhs) {
		var m111 = rhs.rawData.data[0];
		var m121 = rhs.rawData.data[4];
		var m131 = rhs.rawData.data[8];
		var m141 = rhs.rawData.data[12];
		var m112 = rhs.rawData.data[1];
		var m122 = rhs.rawData.data[5];
		var m132 = rhs.rawData.data[9];
		var m142 = rhs.rawData.data[13];
		var m113 = rhs.rawData.data[2];
		var m123 = rhs.rawData.data[6];
		var m133 = rhs.rawData.data[10];
		var m143 = rhs.rawData.data[14];
		var m114 = rhs.rawData.data[3];
		var m124 = rhs.rawData.data[7];
		var m134 = rhs.rawData.data[11];
		var m144 = rhs.rawData.data[15];
		var m211 = this.rawData.data[0];
		var m221 = this.rawData.data[4];
		var m231 = this.rawData.data[8];
		var m241 = this.rawData.data[12];
		var m212 = this.rawData.data[1];
		var m222 = this.rawData.data[5];
		var m232 = this.rawData.data[9];
		var m242 = this.rawData.data[13];
		var m213 = this.rawData.data[2];
		var m223 = this.rawData.data[6];
		var m233 = this.rawData.data[10];
		var m243 = this.rawData.data[14];
		var m214 = this.rawData.data[3];
		var m224 = this.rawData.data[7];
		var m234 = this.rawData.data[11];
		var m244 = this.rawData.data[15];
		var this1 = this.rawData;
		if(0 >= this1.length && !this1.fixed) this1.length = 1;
		this1.data[0] = m111 * m211 + m112 * m221 + m113 * m231 + m114 * m241;
		var this2 = this.rawData;
		if(1 >= this2.length && !this2.fixed) this2.length = 2;
		this2.data[1] = m111 * m212 + m112 * m222 + m113 * m232 + m114 * m242;
		var this3 = this.rawData;
		if(2 >= this3.length && !this3.fixed) this3.length = 3;
		this3.data[2] = m111 * m213 + m112 * m223 + m113 * m233 + m114 * m243;
		var this4 = this.rawData;
		if(3 >= this4.length && !this4.fixed) this4.length = 4;
		this4.data[3] = m111 * m214 + m112 * m224 + m113 * m234 + m114 * m244;
		var this5 = this.rawData;
		if(4 >= this5.length && !this5.fixed) this5.length = 5;
		this5.data[4] = m121 * m211 + m122 * m221 + m123 * m231 + m124 * m241;
		var this6 = this.rawData;
		if(5 >= this6.length && !this6.fixed) this6.length = 6;
		this6.data[5] = m121 * m212 + m122 * m222 + m123 * m232 + m124 * m242;
		var this7 = this.rawData;
		if(6 >= this7.length && !this7.fixed) this7.length = 7;
		this7.data[6] = m121 * m213 + m122 * m223 + m123 * m233 + m124 * m243;
		var this8 = this.rawData;
		if(7 >= this8.length && !this8.fixed) this8.length = 8;
		this8.data[7] = m121 * m214 + m122 * m224 + m123 * m234 + m124 * m244;
		var this9 = this.rawData;
		if(8 >= this9.length && !this9.fixed) this9.length = 9;
		this9.data[8] = m131 * m211 + m132 * m221 + m133 * m231 + m134 * m241;
		var this10 = this.rawData;
		if(9 >= this10.length && !this10.fixed) this10.length = 10;
		this10.data[9] = m131 * m212 + m132 * m222 + m133 * m232 + m134 * m242;
		var this11 = this.rawData;
		if(10 >= this11.length && !this11.fixed) this11.length = 11;
		this11.data[10] = m131 * m213 + m132 * m223 + m133 * m233 + m134 * m243;
		var this12 = this.rawData;
		if(11 >= this12.length && !this12.fixed) this12.length = 12;
		this12.data[11] = m131 * m214 + m132 * m224 + m133 * m234 + m134 * m244;
		var this13 = this.rawData;
		if(12 >= this13.length && !this13.fixed) this13.length = 13;
		this13.data[12] = m141 * m211 + m142 * m221 + m143 * m231 + m144 * m241;
		var this14 = this.rawData;
		if(13 >= this14.length && !this14.fixed) this14.length = 14;
		this14.data[13] = m141 * m212 + m142 * m222 + m143 * m232 + m144 * m242;
		var this15 = this.rawData;
		if(14 >= this15.length && !this15.fixed) this15.length = 15;
		this15.data[14] = m141 * m213 + m142 * m223 + m143 * m233 + m144 * m243;
		var this16 = this.rawData;
		if(15 >= this16.length && !this16.fixed) this16.length = 16;
		this16.data[15] = m141 * m214 + m142 * m224 + m143 * m234 + m144 * m244;
	}
	,prependRotation: function(degrees,axis,pivotPoint) {
		var m = openfl.geom.Matrix3D.getAxisRotation(axis.x,axis.y,axis.z,degrees);
		if(pivotPoint != null) {
			var p = pivotPoint;
			m.appendTranslation(p.x,p.y,p.z);
		}
		this.prepend(m);
	}
	,prependScale: function(xScale,yScale,zScale) {
		this.prepend(new openfl.geom.Matrix3D((function($this) {
			var $r;
			var value = [xScale,0.0,0.0,0.0,0.0,yScale,0.0,0.0,0.0,0.0,zScale,0.0,0.0,0.0,0.0,1.0];
			var vectorData = new openfl.VectorData();
			vectorData.length = value.length;
			vectorData.fixed = true;
			{
				var vec;
				var this1;
				this1 = new Array(value.length);
				vec = this1;
				var _g1 = 0;
				var _g = value.length;
				while(_g1 < _g) {
					var i = _g1++;
					vec[i] = value[i];
				}
				vectorData.data = vec;
			}
			$r = vectorData;
			return $r;
		}(this))));
	}
	,prependTranslation: function(x,y,z) {
		var m = new openfl.geom.Matrix3D();
		m.set_position(new openfl.geom.Vector3D(x,y,z));
		this.prepend(m);
	}
	,recompose: function(components) {
		if(components.length < 3 || components.data[2].x == 0 || components.data[2].y == 0 || components.data[2].z == 0) return false;
		this.identity();
		this.appendScale(components.data[2].x,components.data[2].y,components.data[2].z);
		var angle;
		angle = -components.data[1].x;
		this.append(new openfl.geom.Matrix3D((function($this) {
			var $r;
			var value = [1,0,0,0,0,Math.cos(angle),-Math.sin(angle),0,0,Math.sin(angle),Math.cos(angle),0,0,0,0,0];
			var vectorData = new openfl.VectorData();
			vectorData.length = value.length;
			vectorData.fixed = true;
			{
				var vec;
				var this1;
				this1 = new Array(value.length);
				vec = this1;
				var _g1 = 0;
				var _g = value.length;
				while(_g1 < _g) {
					var i = _g1++;
					vec[i] = value[i];
				}
				vectorData.data = vec;
			}
			$r = vectorData;
			return $r;
		}(this))));
		angle = -components.data[1].y;
		this.append(new openfl.geom.Matrix3D((function($this) {
			var $r;
			var value1 = [Math.cos(angle),0,Math.sin(angle),0,0,1,0,0,-Math.sin(angle),0,Math.cos(angle),0,0,0,0,0];
			var vectorData1 = new openfl.VectorData();
			vectorData1.length = value1.length;
			vectorData1.fixed = true;
			{
				var vec1;
				var this2;
				this2 = new Array(value1.length);
				vec1 = this2;
				var _g11 = 0;
				var _g2 = value1.length;
				while(_g11 < _g2) {
					var i1 = _g11++;
					vec1[i1] = value1[i1];
				}
				vectorData1.data = vec1;
			}
			$r = vectorData1;
			return $r;
		}(this))));
		angle = -components.data[1].z;
		this.append(new openfl.geom.Matrix3D((function($this) {
			var $r;
			var value2 = [Math.cos(angle),-Math.sin(angle),0,0,Math.sin(angle),Math.cos(angle),0,0,0,0,1,0,0,0,0,0];
			var vectorData2 = new openfl.VectorData();
			vectorData2.length = value2.length;
			vectorData2.fixed = true;
			{
				var vec2;
				var this3;
				this3 = new Array(value2.length);
				vec2 = this3;
				var _g12 = 0;
				var _g3 = value2.length;
				while(_g12 < _g3) {
					var i2 = _g12++;
					vec2[i2] = value2[i2];
				}
				vectorData2.data = vec2;
			}
			$r = vectorData2;
			return $r;
		}(this))));
		this.set_position(components.data[0]);
		var this4 = this.rawData;
		if(15 >= this4.length && !this4.fixed) this4.length = 16;
		this4.data[15] = 1;
		return true;
	}
	,transformVector: function(v) {
		var x = v.x;
		var y = v.y;
		var z = v.z;
		return new openfl.geom.Vector3D(x * this.rawData.data[0] + y * this.rawData.data[4] + z * this.rawData.data[8] + this.rawData.data[12],x * this.rawData.data[1] + y * this.rawData.data[5] + z * this.rawData.data[9] + this.rawData.data[13],x * this.rawData.data[2] + y * this.rawData.data[6] + z * this.rawData.data[10] + this.rawData.data[14],1);
	}
	,transformVectors: function(vin,vout) {
		var i = 0;
		while(i + 3 <= vin.length) {
			var x = vin.data[i];
			var y = vin.data[i + 1];
			var z = vin.data[i + 2];
			if(i >= vout.length && !vout.fixed) vout.length = i + 1;
			vout.data[i] = x * this.rawData.data[0] + y * this.rawData.data[4] + z * this.rawData.data[8] + this.rawData.data[12];
			var key = i + 1;
			if(key >= vout.length && !vout.fixed) vout.length = key + 1;
			vout.data[key] = x * this.rawData.data[1] + y * this.rawData.data[5] + z * this.rawData.data[9] + this.rawData.data[13];
			var key1 = i + 2;
			if(key1 >= vout.length && !vout.fixed) vout.length = key1 + 1;
			vout.data[key1] = x * this.rawData.data[2] + y * this.rawData.data[6] + z * this.rawData.data[10] + this.rawData.data[14];
			i += 3;
		}
	}
	,transpose: function() {
		var oRawData = openfl._Vector.Vector_Impl_.copy(this.rawData);
		var this1 = this.rawData;
		if(1 >= this1.length && !this1.fixed) this1.length = 2;
		this1.data[1] = oRawData.data[4];
		var this2 = this.rawData;
		if(2 >= this2.length && !this2.fixed) this2.length = 3;
		this2.data[2] = oRawData.data[8];
		var this3 = this.rawData;
		if(3 >= this3.length && !this3.fixed) this3.length = 4;
		this3.data[3] = oRawData.data[12];
		var this4 = this.rawData;
		if(4 >= this4.length && !this4.fixed) this4.length = 5;
		this4.data[4] = oRawData.data[1];
		var this5 = this.rawData;
		if(6 >= this5.length && !this5.fixed) this5.length = 7;
		this5.data[6] = oRawData.data[9];
		var this6 = this.rawData;
		if(7 >= this6.length && !this6.fixed) this6.length = 8;
		this6.data[7] = oRawData.data[13];
		var this7 = this.rawData;
		if(8 >= this7.length && !this7.fixed) this7.length = 9;
		this7.data[8] = oRawData.data[2];
		var this8 = this.rawData;
		if(9 >= this8.length && !this8.fixed) this8.length = 10;
		this8.data[9] = oRawData.data[6];
		var this9 = this.rawData;
		if(11 >= this9.length && !this9.fixed) this9.length = 12;
		this9.data[11] = oRawData.data[14];
		var this10 = this.rawData;
		if(12 >= this10.length && !this10.fixed) this10.length = 13;
		this10.data[12] = oRawData.data[3];
		var this11 = this.rawData;
		if(13 >= this11.length && !this11.fixed) this11.length = 14;
		this11.data[13] = oRawData.data[7];
		var this12 = this.rawData;
		if(14 >= this12.length && !this12.fixed) this12.length = 15;
		this12.data[14] = oRawData.data[11];
	}
	,get_determinant: function() {
		return -1 * ((this.rawData.data[0] * this.rawData.data[5] - this.rawData.data[4] * this.rawData.data[1]) * (this.rawData.data[10] * this.rawData.data[15] - this.rawData.data[14] * this.rawData.data[11]) - (this.rawData.data[0] * this.rawData.data[9] - this.rawData.data[8] * this.rawData.data[1]) * (this.rawData.data[6] * this.rawData.data[15] - this.rawData.data[14] * this.rawData.data[7]) + (this.rawData.data[0] * this.rawData.data[13] - this.rawData.data[12] * this.rawData.data[1]) * (this.rawData.data[6] * this.rawData.data[11] - this.rawData.data[10] * this.rawData.data[7]) + (this.rawData.data[4] * this.rawData.data[9] - this.rawData.data[8] * this.rawData.data[5]) * (this.rawData.data[2] * this.rawData.data[15] - this.rawData.data[14] * this.rawData.data[3]) - (this.rawData.data[4] * this.rawData.data[13] - this.rawData.data[12] * this.rawData.data[5]) * (this.rawData.data[2] * this.rawData.data[11] - this.rawData.data[10] * this.rawData.data[3]) + (this.rawData.data[8] * this.rawData.data[13] - this.rawData.data[12] * this.rawData.data[9]) * (this.rawData.data[2] * this.rawData.data[7] - this.rawData.data[6] * this.rawData.data[3]));
	}
	,get_position: function() {
		return new openfl.geom.Vector3D(this.rawData.data[12],this.rawData.data[13],this.rawData.data[14]);
	}
	,set_position: function(val) {
		var this1 = this.rawData;
		if(12 >= this1.length && !this1.fixed) this1.length = 13;
		this1.data[12] = val.x;
		var this2 = this.rawData;
		if(13 >= this2.length && !this2.fixed) this2.length = 14;
		this2.data[13] = val.y;
		var this3 = this.rawData;
		if(14 >= this3.length && !this3.fixed) this3.length = 15;
		this3.data[14] = val.z;
		return val;
	}
	,__class__: openfl.geom.Matrix3D
	,__properties__: {set_position:"set_position",get_position:"get_position",get_determinant:"get_determinant"}
};
openfl.geom.Point = function(x,y) {
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
};
$hxClasses["openfl.geom.Point"] = openfl.geom.Point;
openfl.geom.Point.__name__ = ["openfl","geom","Point"];
openfl.geom.Point.distance = function(pt1,pt2) {
	var dx = pt1.x - pt2.x;
	var dy = pt1.y - pt2.y;
	return Math.sqrt(dx * dx + dy * dy);
};
openfl.geom.Point.interpolate = function(pt1,pt2,f) {
	return new openfl.geom.Point(pt2.x + f * (pt1.x - pt2.x),pt2.y + f * (pt1.y - pt2.y));
};
openfl.geom.Point.polar = function(len,angle) {
	return new openfl.geom.Point(len * Math.cos(angle),len * Math.sin(angle));
};
openfl.geom.Point.prototype = {
	add: function(v) {
		return new openfl.geom.Point(v.x + this.x,v.y + this.y);
	}
	,clone: function() {
		return new openfl.geom.Point(this.x,this.y);
	}
	,equals: function(toCompare) {
		return toCompare != null && toCompare.x == this.x && toCompare.y == this.y;
	}
	,normalize: function(thickness) {
		if(this.x == 0 && this.y == 0) return; else {
			var norm = thickness / Math.sqrt(this.x * this.x + this.y * this.y);
			this.x *= norm;
			this.y *= norm;
		}
	}
	,offset: function(dx,dy) {
		this.x += dx;
		this.y += dy;
	}
	,setTo: function(xa,ya) {
		this.x = xa;
		this.y = ya;
	}
	,subtract: function(v) {
		return new openfl.geom.Point(this.x - v.x,this.y - v.y);
	}
	,get_length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y);
	}
	,__class__: openfl.geom.Point
	,__properties__: {get_length:"get_length"}
};
openfl.geom.Rectangle = function(x,y,width,height) {
	if(height == null) height = 0;
	if(width == null) width = 0;
	if(y == null) y = 0;
	if(x == null) x = 0;
	this.x = x;
	this.y = y;
	this.width = width;
	this.height = height;
};
$hxClasses["openfl.geom.Rectangle"] = openfl.geom.Rectangle;
openfl.geom.Rectangle.__name__ = ["openfl","geom","Rectangle"];
openfl.geom.Rectangle.prototype = {
	clone: function() {
		return new openfl.geom.Rectangle(this.x,this.y,this.width,this.height);
	}
	,contains: function(x,y) {
		return x >= this.x && y >= this.y && x < this.get_right() && y < this.get_bottom();
	}
	,containsPoint: function(point) {
		return this.contains(point.x,point.y);
	}
	,containsRect: function(rect) {
		if(rect.width <= 0 || rect.height <= 0) return rect.x > this.x && rect.y > this.y && rect.get_right() < this.get_right() && rect.get_bottom() < this.get_bottom(); else return rect.x >= this.x && rect.y >= this.y && rect.get_right() <= this.get_right() && rect.get_bottom() <= this.get_bottom();
	}
	,copyFrom: function(sourceRect) {
		this.x = sourceRect.x;
		this.y = sourceRect.y;
		this.width = sourceRect.width;
		this.height = sourceRect.height;
	}
	,equals: function(toCompare) {
		return toCompare != null && this.x == toCompare.x && this.y == toCompare.y && this.width == toCompare.width && this.height == toCompare.height;
	}
	,inflate: function(dx,dy) {
		this.x -= dx;
		this.width += dx * 2;
		this.y -= dy;
		this.height += dy * 2;
	}
	,inflatePoint: function(point) {
		this.inflate(point.x,point.y);
	}
	,intersection: function(toIntersect) {
		var x0;
		if(this.x < toIntersect.x) x0 = toIntersect.x; else x0 = this.x;
		var x1;
		if(this.get_right() > toIntersect.get_right()) x1 = toIntersect.get_right(); else x1 = this.get_right();
		if(x1 <= x0) return new openfl.geom.Rectangle();
		var y0;
		if(this.y < toIntersect.y) y0 = toIntersect.y; else y0 = this.y;
		var y1;
		if(this.get_bottom() > toIntersect.get_bottom()) y1 = toIntersect.get_bottom(); else y1 = this.get_bottom();
		if(y1 <= y0) return new openfl.geom.Rectangle();
		return new openfl.geom.Rectangle(x0,y0,x1 - x0,y1 - y0);
	}
	,intersects: function(toIntersect) {
		var x0;
		if(this.x < toIntersect.x) x0 = toIntersect.x; else x0 = this.x;
		var x1;
		if(this.get_right() > toIntersect.get_right()) x1 = toIntersect.get_right(); else x1 = this.get_right();
		if(x1 <= x0) return false;
		var y0;
		if(this.y < toIntersect.y) y0 = toIntersect.y; else y0 = this.y;
		var y1;
		if(this.get_bottom() > toIntersect.get_bottom()) y1 = toIntersect.get_bottom(); else y1 = this.get_bottom();
		return y1 > y0;
	}
	,isEmpty: function() {
		return this.width <= 0 || this.height <= 0;
	}
	,offset: function(dx,dy) {
		this.x += dx;
		this.y += dy;
	}
	,offsetPoint: function(point) {
		this.x += point.x;
		this.y += point.y;
	}
	,setEmpty: function() {
		this.x = this.y = this.width = this.height = 0;
	}
	,setTo: function(xa,ya,widtha,heighta) {
		this.x = xa;
		this.y = ya;
		this.width = widtha;
		this.height = heighta;
	}
	,transform: function(m) {
		var tx0 = m.a * this.x + m.c * this.y;
		var tx1 = tx0;
		var ty0 = m.b * this.x + m.d * this.y;
		var ty1 = tx0;
		var tx = m.a * (this.x + this.width) + m.c * this.y;
		var ty = m.b * (this.x + this.width) + m.d * this.y;
		if(tx < tx0) tx0 = tx;
		if(ty < ty0) ty0 = ty;
		if(tx > tx1) tx1 = tx;
		if(ty > ty1) ty1 = ty;
		tx = m.a * (this.x + this.width) + m.c * (this.y + this.height);
		ty = m.b * (this.x + this.width) + m.d * (this.y + this.height);
		if(tx < tx0) tx0 = tx;
		if(ty < ty0) ty0 = ty;
		if(tx > tx1) tx1 = tx;
		if(ty > ty1) ty1 = ty;
		tx = m.a * this.x + m.c * (this.y + this.height);
		ty = m.b * this.x + m.d * (this.y + this.height);
		if(tx < tx0) tx0 = tx;
		if(ty < ty0) ty0 = ty;
		if(tx > tx1) tx1 = tx;
		if(ty > ty1) ty1 = ty;
		return new openfl.geom.Rectangle(tx0 + m.tx,ty0 + m.ty,tx1 - tx0,ty1 - ty0);
	}
	,union: function(toUnion) {
		if(this.width == 0 || this.height == 0) return toUnion.clone(); else if(toUnion.width == 0 || toUnion.height == 0) return this.clone();
		var x0;
		if(this.x > toUnion.x) x0 = toUnion.x; else x0 = this.x;
		var x1;
		if(this.get_right() < toUnion.get_right()) x1 = toUnion.get_right(); else x1 = this.get_right();
		var y0;
		if(this.y > toUnion.y) y0 = toUnion.y; else y0 = this.y;
		var y1;
		if(this.get_bottom() < toUnion.get_bottom()) y1 = toUnion.get_bottom(); else y1 = this.get_bottom();
		return new openfl.geom.Rectangle(x0,y0,x1 - x0,y1 - y0);
	}
	,__contract: function(x,y,width,height) {
		if(this.width == 0 && this.height == 0) return;
		var cacheRight = this.get_right();
		var cacheBottom = this.get_bottom();
		if(this.x < x) this.x = x;
		if(this.y < y) this.y = y;
		if(this.get_right() > x + width) this.width = x + width - this.x;
		if(this.get_bottom() > y + height) this.height = y + height - this.y;
	}
	,__expand: function(x,y,width,height) {
		if(this.width == 0 && this.height == 0) {
			this.x = x;
			this.y = y;
			this.width = width;
			this.height = height;
			return;
		}
		var cacheRight = this.get_right();
		var cacheBottom = this.get_bottom();
		if(this.x > x) this.x = x;
		if(this.y > y) this.y = y;
		if(cacheRight < x + width) this.width = x + width - this.x;
		if(cacheBottom < y + height) this.height = y + height - this.y;
	}
	,get_bottom: function() {
		return this.y + this.height;
	}
	,set_bottom: function(b) {
		this.height = b - this.y;
		return b;
	}
	,get_bottomRight: function() {
		return new openfl.geom.Point(this.x + this.width,this.y + this.height);
	}
	,set_bottomRight: function(p) {
		this.width = p.x - this.x;
		this.height = p.y - this.y;
		return p.clone();
	}
	,get_left: function() {
		return this.x;
	}
	,set_left: function(l) {
		this.width -= l - this.x;
		this.x = l;
		return l;
	}
	,get_right: function() {
		return this.x + this.width;
	}
	,set_right: function(r) {
		this.width = r - this.x;
		return r;
	}
	,get_size: function() {
		return new openfl.geom.Point(this.width,this.height);
	}
	,set_size: function(p) {
		this.width = p.x;
		this.height = p.y;
		return p.clone();
	}
	,get_top: function() {
		return this.y;
	}
	,set_top: function(t) {
		this.height -= t - this.y;
		this.y = t;
		return t;
	}
	,get_topLeft: function() {
		return new openfl.geom.Point(this.x,this.y);
	}
	,set_topLeft: function(p) {
		this.x = p.x;
		this.y = p.y;
		return p.clone();
	}
	,__class__: openfl.geom.Rectangle
	,__properties__: {set_topLeft:"set_topLeft",get_topLeft:"get_topLeft",set_top:"set_top",get_top:"get_top",set_size:"set_size",get_size:"get_size",set_right:"set_right",get_right:"get_right",set_left:"set_left",get_left:"get_left",set_bottomRight:"set_bottomRight",get_bottomRight:"get_bottomRight",set_bottom:"set_bottom",get_bottom:"get_bottom"}
};
openfl.geom.Transform = function(displayObject) {
	this.colorTransform = new openfl.geom.ColorTransform();
	this.concatenatedColorTransform = new openfl.geom.ColorTransform();
	this.concatenatedMatrix = new openfl.geom.Matrix();
	this.pixelBounds = new openfl.geom.Rectangle();
	this.__displayObject = displayObject;
	this.__matrix = new openfl.geom.Matrix();
};
$hxClasses["openfl.geom.Transform"] = openfl.geom.Transform;
openfl.geom.Transform.__name__ = ["openfl","geom","Transform"];
openfl.geom.Transform.prototype = {
	get_matrix: function() {
		if(this.__matrix != null) {
			this.__matrix.identity();
			this.__matrix.scale(this.__displayObject.get_scaleX(),this.__displayObject.get_scaleY());
			this.__matrix.rotate(this.__displayObject.get_rotation() * (Math.PI / 180));
			this.__matrix.translate(this.__displayObject.get_x(),this.__displayObject.get_y());
			return this.__matrix.clone();
		}
		return null;
	}
	,set_matrix: function(value) {
		if(value == null) return this.__matrix = null;
		if(this.__displayObject != null) {
			this.__displayObject.set_x(value.tx);
			this.__displayObject.set_y(value.ty);
			this.__displayObject.set_scaleX(Math.sqrt(value.a * value.a + value.b * value.b));
			this.__displayObject.set_scaleY(Math.sqrt(value.c * value.c + value.d * value.d));
			this.__displayObject.set_rotation(Math.atan2(value.b,value.a) * (180 / Math.PI));
		}
		return value;
	}
	,__class__: openfl.geom.Transform
	,__properties__: {set_matrix:"set_matrix",get_matrix:"get_matrix"}
};
openfl.geom.Vector3D = function(x,y,z,w) {
	if(w == null) w = 0.;
	if(z == null) z = 0.;
	if(y == null) y = 0.;
	if(x == null) x = 0.;
	this.w = w;
	this.x = x;
	this.y = y;
	this.z = z;
};
$hxClasses["openfl.geom.Vector3D"] = openfl.geom.Vector3D;
openfl.geom.Vector3D.__name__ = ["openfl","geom","Vector3D"];
openfl.geom.Vector3D.__properties__ = {get_Z_AXIS:"get_Z_AXIS",get_Y_AXIS:"get_Y_AXIS",get_X_AXIS:"get_X_AXIS"}
openfl.geom.Vector3D.X_AXIS = null;
openfl.geom.Vector3D.Y_AXIS = null;
openfl.geom.Vector3D.Z_AXIS = null;
openfl.geom.Vector3D.angleBetween = function(a,b) {
	var a0 = new openfl.geom.Vector3D(a.x,a.y,a.z,a.w);
	a0.normalize();
	var b0 = new openfl.geom.Vector3D(b.x,b.y,b.z,b.w);
	b0.normalize();
	return Math.acos(a0.x * b0.x + a0.y * b0.y + a0.z * b0.z);
};
openfl.geom.Vector3D.distance = function(pt1,pt2) {
	var x = pt2.x - pt1.x;
	var y = pt2.y - pt1.y;
	var z = pt2.z - pt1.z;
	return Math.sqrt(x * x + y * y + z * z);
};
openfl.geom.Vector3D.get_X_AXIS = function() {
	return new openfl.geom.Vector3D(1,0,0);
};
openfl.geom.Vector3D.get_Y_AXIS = function() {
	return new openfl.geom.Vector3D(0,1,0);
};
openfl.geom.Vector3D.get_Z_AXIS = function() {
	return new openfl.geom.Vector3D(0,0,1);
};
openfl.geom.Vector3D.prototype = {
	add: function(a) {
		return new openfl.geom.Vector3D(this.x + a.x,this.y + a.y,this.z + a.z);
	}
	,clone: function() {
		return new openfl.geom.Vector3D(this.x,this.y,this.z,this.w);
	}
	,copyFrom: function(sourceVector3D) {
		this.x = sourceVector3D.x;
		this.y = sourceVector3D.y;
		this.z = sourceVector3D.z;
	}
	,crossProduct: function(a) {
		return new openfl.geom.Vector3D(this.y * a.z - this.z * a.y,this.z * a.x - this.x * a.z,this.x * a.y - this.y * a.x,1);
	}
	,decrementBy: function(a) {
		this.x -= a.x;
		this.y -= a.y;
		this.z -= a.z;
	}
	,dotProduct: function(a) {
		return this.x * a.x + this.y * a.y + this.z * a.z;
	}
	,equals: function(toCompare,allFour) {
		if(allFour == null) allFour = false;
		return this.x == toCompare.x && this.y == toCompare.y && this.z == toCompare.z && (!allFour || this.w == toCompare.w);
	}
	,incrementBy: function(a) {
		this.x += a.x;
		this.y += a.y;
		this.z += a.z;
	}
	,nearEquals: function(toCompare,tolerance,allFour) {
		if(allFour == null) allFour = false;
		return Math.abs(this.x - toCompare.x) < tolerance && Math.abs(this.y - toCompare.y) < tolerance && Math.abs(this.z - toCompare.z) < tolerance && (!allFour || Math.abs(this.w - toCompare.w) < tolerance);
	}
	,negate: function() {
		this.x *= -1;
		this.y *= -1;
		this.z *= -1;
	}
	,normalize: function() {
		var l = Math.sqrt(this.x * this.x + this.y * this.y + this.z * this.z);
		if(l != 0) {
			this.x /= l;
			this.y /= l;
			this.z /= l;
		}
		return l;
	}
	,project: function() {
		this.x /= this.w;
		this.y /= this.w;
		this.z /= this.w;
	}
	,scaleBy: function(s) {
		this.x *= s;
		this.y *= s;
		this.z *= s;
	}
	,setTo: function(xa,ya,za) {
		this.x = xa;
		this.y = ya;
		this.z = za;
	}
	,subtract: function(a) {
		return new openfl.geom.Vector3D(this.x - a.x,this.y - a.y,this.z - a.z);
	}
	,toString: function() {
		return "Vector3D(" + this.x + ", " + this.y + ", " + this.z + ")";
	}
	,get_length: function() {
		return Math.sqrt(this.x * this.x + this.y * this.y + this.z * this.z);
	}
	,get_lengthSquared: function() {
		return this.x * this.x + this.y * this.y + this.z * this.z;
	}
	,__class__: openfl.geom.Vector3D
	,__properties__: {get_lengthSquared:"get_lengthSquared",get_length:"get_length"}
};
openfl.gl = {};
openfl.gl.GL = function() { };
$hxClasses["openfl.gl.GL"] = openfl.gl.GL;
openfl.gl.GL.__name__ = ["openfl","gl","GL"];
openfl.gl.GL.__properties__ = {get_version:"get_version",get_drawingBufferWidth:"get_drawingBufferWidth",get_drawingBufferHeight:"get_drawingBufferHeight"}
openfl.gl.GL.drawingBufferHeight = null;
openfl.gl.GL.drawingBufferWidth = null;
openfl.gl.GL.version = null;
openfl.gl.GL.__context = null;
openfl.gl.GL.activeTexture = function(texture) {
	openfl.gl.GL.__context.activeTexture(texture);
};
openfl.gl.GL.attachShader = function(program,shader) {
	openfl.gl.GL.__context.attachShader(program,shader);
};
openfl.gl.GL.bindAttribLocation = function(program,index,name) {
	openfl.gl.GL.__context.bindAttribLocation(program,index,name);
};
openfl.gl.GL.bindBitmapDataTexture = function(texture) {
	if(texture.__glTexture == null) {
		texture.__glTexture = openfl.gl.GL.__context.createTexture();
		openfl.gl.GL.__context.bindTexture(3553,texture.__glTexture);
		openfl.gl.GL.__context.texParameteri(3553,10242,33071);
		openfl.gl.GL.__context.texParameteri(3553,10243,33071);
		openfl.gl.GL.__context.texParameteri(3553,10241,9728);
		openfl.gl.GL.__context.texParameteri(3553,10240,9728);
		texture.__syncImageData();
		if(texture.__sourceImage != null) openfl.gl.GL.__context.texImage2D(3553,0,6408,6408,5121,texture.__sourceImage); else openfl.gl.GL.__context.texImage2D(3553,0,6408,6408,5121,texture.__sourceCanvas);
	} else openfl.gl.GL.__context.bindTexture(3553,texture.__glTexture);
};
openfl.gl.GL.bindBuffer = function(target,buffer) {
	openfl.gl.GL.__context.bindBuffer(target,buffer);
};
openfl.gl.GL.bindFramebuffer = function(target,framebuffer) {
	openfl.gl.GL.__context.bindFramebuffer(target,framebuffer);
};
openfl.gl.GL.bindRenderbuffer = function(target,renderbuffer) {
	openfl.gl.GL.__context.bindRenderbuffer(target,renderbuffer);
};
openfl.gl.GL.bindTexture = function(target,texture) {
	openfl.gl.GL.__context.bindTexture(target,texture);
};
openfl.gl.GL.blendColor = function(red,green,blue,alpha) {
	openfl.gl.GL.__context.blendColor(red,green,blue,alpha);
};
openfl.gl.GL.blendEquation = function(mode) {
	openfl.gl.GL.__context.blendEquation(mode);
};
openfl.gl.GL.blendEquationSeparate = function(modeRGB,modeAlpha) {
	openfl.gl.GL.__context.blendEquationSeparate(modeRGB,modeAlpha);
};
openfl.gl.GL.blendFunc = function(sfactor,dfactor) {
	openfl.gl.GL.__context.blendFunc(sfactor,dfactor);
};
openfl.gl.GL.blendFuncSeparate = function(srcRGB,dstRGB,srcAlpha,dstAlpha) {
	openfl.gl.GL.__context.blendFuncSeparate(srcRGB,dstRGB,srcAlpha,dstAlpha);
};
openfl.gl.GL.bufferData = function(target,data,usage) {
	openfl.gl.GL.__context.bufferData(target,data,usage);
};
openfl.gl.GL.bufferSubData = function(target,offset,data) {
	openfl.gl.GL.__context.bufferSubData(target,offset,data);
};
openfl.gl.GL.checkFramebufferStatus = function(target) {
	return openfl.gl.GL.__context.checkFramebufferStatus(target);
};
openfl.gl.GL.clear = function(mask) {
	openfl.gl.GL.__context.clear(mask);
};
openfl.gl.GL.clearColor = function(red,green,blue,alpha) {
	openfl.gl.GL.__context.clearColor(red,green,blue,alpha);
};
openfl.gl.GL.clearDepth = function(depth) {
	openfl.gl.GL.__context.clearDepth(depth);
};
openfl.gl.GL.clearStencil = function(s) {
	openfl.gl.GL.__context.clearStencil(s);
};
openfl.gl.GL.colorMask = function(red,green,blue,alpha) {
	openfl.gl.GL.__context.colorMask(red,green,blue,alpha);
};
openfl.gl.GL.compileShader = function(shader) {
	openfl.gl.GL.__context.compileShader(shader);
};
openfl.gl.GL.compressedTexImage2D = function(target,level,internalformat,width,height,border,data) {
	openfl.gl.GL.__context.compressedTexImage2D(target,level,internalformat,width,height,border,data);
};
openfl.gl.GL.compressedTexSubImage2D = function(target,level,xoffset,yoffset,width,height,format,data) {
	openfl.gl.GL.__context.compressedTexSubImage2D(target,level,xoffset,yoffset,width,height,format,data);
};
openfl.gl.GL.copyTexImage2D = function(target,level,internalformat,x,y,width,height,border) {
	openfl.gl.GL.__context.copyTexImage2D(target,level,internalformat,x,y,width,height,border);
};
openfl.gl.GL.copyTexSubImage2D = function(target,level,xoffset,yoffset,x,y,width,height) {
	openfl.gl.GL.__context.copyTexSubImage2D(target,level,xoffset,yoffset,x,y,width,height);
};
openfl.gl.GL.createBuffer = function() {
	return openfl.gl.GL.__context.createBuffer();
};
openfl.gl.GL.createFramebuffer = function() {
	return openfl.gl.GL.__context.createFramebuffer();
};
openfl.gl.GL.createProgram = function() {
	return openfl.gl.GL.__context.createProgram();
};
openfl.gl.GL.createRenderbuffer = function() {
	return openfl.gl.GL.__context.createRenderbuffer();
};
openfl.gl.GL.createShader = function(type) {
	return openfl.gl.GL.__context.createShader(type);
};
openfl.gl.GL.createTexture = function() {
	return openfl.gl.GL.__context.createTexture();
};
openfl.gl.GL.cullFace = function(mode) {
	openfl.gl.GL.__context.cullFace(mode);
};
openfl.gl.GL.deleteBuffer = function(buffer) {
	openfl.gl.GL.__context.deleteBuffer(buffer);
};
openfl.gl.GL.deleteFramebuffer = function(framebuffer) {
	openfl.gl.GL.__context.deleteFramebuffer(framebuffer);
};
openfl.gl.GL.deleteProgram = function(program) {
	openfl.gl.GL.__context.deleteProgram(program);
};
openfl.gl.GL.deleteRenderbuffer = function(renderbuffer) {
	openfl.gl.GL.__context.deleteRenderbuffer(renderbuffer);
};
openfl.gl.GL.deleteShader = function(shader) {
	openfl.gl.GL.__context.deleteShader(shader);
};
openfl.gl.GL.deleteTexture = function(texture) {
	openfl.gl.GL.__context.deleteTexture(texture);
};
openfl.gl.GL.depthFunc = function(func) {
	openfl.gl.GL.__context.depthFunc(func);
};
openfl.gl.GL.depthMask = function(flag) {
	openfl.gl.GL.__context.depthMask(flag);
};
openfl.gl.GL.depthRange = function(zNear,zFar) {
	openfl.gl.GL.__context.depthRange(zNear,zFar);
};
openfl.gl.GL.detachShader = function(program,shader) {
	openfl.gl.GL.__context.detachShader(program,shader);
};
openfl.gl.GL.disable = function(cap) {
	openfl.gl.GL.__context.disable(cap);
};
openfl.gl.GL.disableVertexAttribArray = function(index) {
	openfl.gl.GL.__context.disableVertexAttribArray(index);
};
openfl.gl.GL.drawArrays = function(mode,first,count) {
	openfl.gl.GL.__context.drawArrays(mode,first,count);
};
openfl.gl.GL.drawElements = function(mode,count,type,offset) {
	openfl.gl.GL.__context.drawElements(mode,count,type,offset);
};
openfl.gl.GL.enable = function(cap) {
	openfl.gl.GL.__context.enable(cap);
};
openfl.gl.GL.enableVertexAttribArray = function(index) {
	openfl.gl.GL.__context.enableVertexAttribArray(index);
};
openfl.gl.GL.finish = function() {
	openfl.gl.GL.__context.finish();
};
openfl.gl.GL.flush = function() {
	openfl.gl.GL.__context.flush();
};
openfl.gl.GL.framebufferRenderbuffer = function(target,attachment,renderbuffertarget,renderbuffer) {
	openfl.gl.GL.__context.framebufferRenderbuffer(target,attachment,renderbuffertarget,renderbuffer);
};
openfl.gl.GL.framebufferTexture2D = function(target,attachment,textarget,texture,level) {
	openfl.gl.GL.__context.framebufferTexture2D(target,attachment,textarget,texture,level);
};
openfl.gl.GL.frontFace = function(mode) {
	openfl.gl.GL.__context.frontFace(mode);
};
openfl.gl.GL.generateMipmap = function(target) {
	openfl.gl.GL.__context.generateMipmap(target);
};
openfl.gl.GL.getActiveAttrib = function(program,index) {
	return openfl.gl.GL.__context.getActiveAttrib(program,index);
};
openfl.gl.GL.getActiveUniform = function(program,index) {
	return openfl.gl.GL.__context.getActiveUniform(program,index);
};
openfl.gl.GL.getAttachedShaders = function(program) {
	return openfl.gl.GL.__context.getAttachedShaders(program);
};
openfl.gl.GL.getAttribLocation = function(program,name) {
	return openfl.gl.GL.__context.getAttribLocation(program,name);
};
openfl.gl.GL.getBufferParameter = function(target,pname) {
	return openfl.gl.GL.__context.getBufferParameter(target,pname);
};
openfl.gl.GL.getContextAttributes = function() {
	return openfl.gl.GL.__context.getContextAttributes();
};
openfl.gl.GL.getError = function() {
	return openfl.gl.GL.__context.getError();
};
openfl.gl.GL.getExtension = function(name) {
	return openfl.gl.GL.__context.getExtension(name);
};
openfl.gl.GL.getFramebufferAttachmentParameter = function(target,attachment,pname) {
	return openfl.gl.GL.__context.getFramebufferAttachmentParameter(target,attachment,pname);
};
openfl.gl.GL.getParameter = function(pname) {
	return openfl.gl.GL.__context.getParameter(pname);
};
openfl.gl.GL.getProgramInfoLog = function(program) {
	return openfl.gl.GL.__context.getProgramInfoLog(program);
};
openfl.gl.GL.getProgramParameter = function(program,pname) {
	return openfl.gl.GL.__context.getProgramParameter(program,pname);
};
openfl.gl.GL.getRenderbufferParameter = function(target,pname) {
	return openfl.gl.GL.__context.getRenderbufferParameter(target,pname);
};
openfl.gl.GL.getShaderInfoLog = function(shader) {
	return openfl.gl.GL.__context.getShaderInfoLog(shader);
};
openfl.gl.GL.getShaderParameter = function(shader,pname) {
	return openfl.gl.GL.__context.getShaderParameter(shader,pname);
};
openfl.gl.GL.getShaderPrecisionFormat = function(shadertype,precisiontype) {
	openfl.Lib.notImplemented("GL.getShaderPrecisionFormat");
	return null;
};
openfl.gl.GL.getShaderSource = function(shader) {
	return openfl.gl.GL.__context.getShaderSource(shader);
};
openfl.gl.GL.getSupportedExtensions = function() {
	return openfl.gl.GL.__context.getSupportedExtensions();
};
openfl.gl.GL.getTexParameter = function(target,pname) {
	return openfl.gl.GL.__context.getTexParameter(target,pname);
};
openfl.gl.GL.getUniform = function(program,location) {
	return openfl.gl.GL.__context.getUniform(program,location);
};
openfl.gl.GL.getUniformLocation = function(program,name) {
	return openfl.gl.GL.__context.getUniformLocation(program,name);
};
openfl.gl.GL.getVertexAttrib = function(index,pname) {
	return openfl.gl.GL.__context.getVertexAttrib(index,pname);
};
openfl.gl.GL.getVertexAttribOffset = function(index,pname) {
	return openfl.gl.GL.__context.getVertexAttribOffset(index,pname);
};
openfl.gl.GL.hint = function(target,mode) {
	openfl.gl.GL.__context.hint(target,mode);
};
openfl.gl.GL.isBuffer = function(buffer) {
	return openfl.gl.GL.__context.isBuffer(buffer);
};
openfl.gl.GL.isEnabled = function(cap) {
	return openfl.gl.GL.__context.isEnabled(cap);
};
openfl.gl.GL.isFramebuffer = function(framebuffer) {
	return openfl.gl.GL.__context.isFramebuffer(framebuffer);
};
openfl.gl.GL.isProgram = function(program) {
	return openfl.gl.GL.__context.isProgram(program);
};
openfl.gl.GL.isRenderbuffer = function(renderbuffer) {
	return openfl.gl.GL.__context.isRenderbuffer(renderbuffer);
};
openfl.gl.GL.isShader = function(shader) {
	return openfl.gl.GL.__context.isShader(shader);
};
openfl.gl.GL.isTexture = function(texture) {
	return openfl.gl.GL.__context.isTexture(texture);
};
openfl.gl.GL.lineWidth = function(width) {
	openfl.gl.GL.__context.lineWidth(width);
};
openfl.gl.GL.linkProgram = function(program) {
	openfl.gl.GL.__context.linkProgram(program);
};
openfl.gl.GL.pixelStorei = function(pname,param) {
	openfl.gl.GL.__context.pixelStorei(pname,param);
};
openfl.gl.GL.polygonOffset = function(factor,units) {
	openfl.gl.GL.__context.polygonOffset(factor,units);
};
openfl.gl.GL.readPixels = function(x,y,width,height,format,type,pixels) {
	openfl.gl.GL.__context.readPixels(x,y,width,height,format,type,pixels);
};
openfl.gl.GL.renderbufferStorage = function(target,internalformat,width,height) {
	openfl.gl.GL.__context.renderbufferStorage(target,internalformat,width,height);
};
openfl.gl.GL.sampleCoverage = function(value,invert) {
	openfl.gl.GL.__context.sampleCoverage(value,invert);
};
openfl.gl.GL.scissor = function(x,y,width,height) {
	openfl.gl.GL.__context.scissor(x,y,width,height);
};
openfl.gl.GL.shaderSource = function(shader,source) {
	openfl.gl.GL.__context.shaderSource(shader,source);
};
openfl.gl.GL.stencilFunc = function(func,ref,mask) {
	openfl.gl.GL.__context.stencilFunc(func,ref,mask);
};
openfl.gl.GL.stencilFuncSeparate = function(face,func,ref,mask) {
	openfl.gl.GL.__context.stencilFuncSeparate(face,func,ref,mask);
};
openfl.gl.GL.stencilMask = function(mask) {
	openfl.gl.GL.__context.stencilMask(mask);
};
openfl.gl.GL.stencilMaskSeparate = function(face,mask) {
	openfl.gl.GL.__context.stencilMaskSeparate(face,mask);
};
openfl.gl.GL.stencilOp = function(fail,zfail,zpass) {
	openfl.gl.GL.__context.stencilOp(fail,zfail,zpass);
};
openfl.gl.GL.stencilOpSeparate = function(face,fail,zfail,zpass) {
	openfl.gl.GL.__context.stencilOpSeparate(face,fail,zfail,zpass);
};
openfl.gl.GL.texImage2D = function(target,level,internalformat,width,height,border,format,type,pixels) {
	openfl.gl.GL.__context.texImage2D(target,level,internalformat,width,height,border,format,type,pixels);
};
openfl.gl.GL.texParameterf = function(target,pname,param) {
	openfl.gl.GL.__context.texParameterf(target,pname,param);
};
openfl.gl.GL.texParameteri = function(target,pname,param) {
	openfl.gl.GL.__context.texParameteri(target,pname,param);
};
openfl.gl.GL.texSubImage2D = function(target,level,xoffset,yoffset,width,height,format,type,pixels) {
	openfl.gl.GL.__context.texSubImage2D(target,level,xoffset,yoffset,width,height,format,type,pixels);
};
openfl.gl.GL.uniform1f = function(location,x) {
	openfl.gl.GL.__context.uniform1f(location,x);
};
openfl.gl.GL.uniform1fv = function(location,x) {
	openfl.gl.GL.__context.uniform1fv(location,x);
};
openfl.gl.GL.uniform1i = function(location,x) {
	openfl.gl.GL.__context.uniform1i(location,x);
};
openfl.gl.GL.uniform1iv = function(location,v) {
	openfl.gl.GL.__context.uniform1iv(location,v);
};
openfl.gl.GL.uniform2f = function(location,x,y) {
	openfl.gl.GL.__context.uniform2f(location,x,y);
};
openfl.gl.GL.uniform2fv = function(location,v) {
	openfl.gl.GL.__context.uniform2fv(location,v);
};
openfl.gl.GL.uniform2i = function(location,x,y) {
	openfl.gl.GL.__context.uniform2i(location,x,y);
};
openfl.gl.GL.uniform2iv = function(location,v) {
	openfl.gl.GL.__context.uniform2iv(location,v);
};
openfl.gl.GL.uniform3f = function(location,x,y,z) {
	openfl.gl.GL.__context.uniform3f(location,x,y,z);
};
openfl.gl.GL.uniform3fv = function(location,v) {
	openfl.gl.GL.__context.uniform3fv(location,v);
};
openfl.gl.GL.uniform3i = function(location,x,y,z) {
	openfl.gl.GL.__context.uniform3i(location,x,y,z);
};
openfl.gl.GL.uniform3iv = function(location,v) {
	openfl.gl.GL.__context.uniform3iv(location,v);
};
openfl.gl.GL.uniform4f = function(location,x,y,z,w) {
	openfl.gl.GL.__context.uniform4f(location,x,y,z,w);
};
openfl.gl.GL.uniform4fv = function(location,v) {
	openfl.gl.GL.__context.uniform4fv(location,v);
};
openfl.gl.GL.uniform4i = function(location,x,y,z,w) {
	openfl.gl.GL.__context.uniform4i(location,x,y,z,w);
};
openfl.gl.GL.uniform4iv = function(location,v) {
	openfl.gl.GL.__context.uniform4iv(location,v);
};
openfl.gl.GL.uniformMatrix2fv = function(location,transpose,v) {
	openfl.gl.GL.__context.uniformMatrix2fv(location,transpose,v);
};
openfl.gl.GL.uniformMatrix3fv = function(location,transpose,v) {
	openfl.gl.GL.__context.uniformMatrix3fv(location,transpose,v);
};
openfl.gl.GL.uniformMatrix4fv = function(location,transpose,v) {
	openfl.gl.GL.__context.uniformMatrix4fv(location,transpose,v);
};
openfl.gl.GL.uniformMatrix3D = function(location,transpose,matrix) {
	openfl.gl.GL.__context.uniformMatrix4fv(location,transpose,new Float32Array((function($this) {
		var $r;
		var this1 = matrix.rawData;
		var value = new Array();
		{
			var _g1 = 0;
			var _g = this1.data.length;
			while(_g1 < _g) {
				var i = _g1++;
				value.push(this1.data[i]);
			}
		}
		$r = value;
		return $r;
	}(this))));
};
openfl.gl.GL.useProgram = function(program) {
	openfl.gl.GL.__context.useProgram(program);
};
openfl.gl.GL.validateProgram = function(program) {
	openfl.gl.GL.__context.validateProgram(program);
};
openfl.gl.GL.vertexAttrib1f = function(indx,x) {
	openfl.gl.GL.__context.vertexAttrib1f(indx,x);
};
openfl.gl.GL.vertexAttrib1fv = function(indx,values) {
	openfl.gl.GL.__context.vertexAttrib1fv(indx,values);
};
openfl.gl.GL.vertexAttrib2f = function(indx,x,y) {
	openfl.gl.GL.__context.vertexAttrib2f(indx,x,y);
};
openfl.gl.GL.vertexAttrib2fv = function(indx,values) {
	openfl.gl.GL.__context.vertexAttrib2fv(indx,values);
};
openfl.gl.GL.vertexAttrib3f = function(indx,x,y,z) {
	openfl.gl.GL.__context.vertexAttrib3f(indx,x,y,z);
};
openfl.gl.GL.vertexAttrib3fv = function(indx,values) {
	openfl.gl.GL.__context.vertexAttrib3fv(indx,values);
};
openfl.gl.GL.vertexAttrib4f = function(indx,x,y,z,w) {
	openfl.gl.GL.__context.vertexAttrib4f(indx,x,y,z,w);
};
openfl.gl.GL.vertexAttrib4fv = function(indx,values) {
	openfl.gl.GL.__context.vertexAttrib4fv(indx,values);
};
openfl.gl.GL.vertexAttribPointer = function(indx,size,type,normalized,stride,offset) {
	openfl.gl.GL.__context.vertexAttribPointer(indx,size,type,normalized,stride,offset);
};
openfl.gl.GL.viewport = function(x,y,width,height) {
	openfl.gl.GL.__context.viewport(x,y,width,height);
};
openfl.gl.GL.get_drawingBufferHeight = function() {
	return openfl.Lib.current.stage.stageHeight;
};
openfl.gl.GL.get_drawingBufferWidth = function() {
	return openfl.Lib.current.stage.stageWidth;
};
openfl.gl.GL.get_version = function() {
	return 7938;
};
openfl.media = {};
openfl.media.ID3Info = function() {
};
$hxClasses["openfl.media.ID3Info"] = openfl.media.ID3Info;
openfl.media.ID3Info.__name__ = ["openfl","media","ID3Info"];
openfl.media.ID3Info.prototype = {
	__class__: openfl.media.ID3Info
};
openfl.media.Sound = function(stream,context) {
	openfl.events.EventDispatcher.call(this,this);
	this.bytesLoaded = 0;
	this.bytesTotal = 0;
	this.id3 = null;
	this.isBuffering = false;
	this.length = 0;
	this.url = null;
	if(stream != null) this.load(stream,context);
};
$hxClasses["openfl.media.Sound"] = openfl.media.Sound;
openfl.media.Sound.__name__ = ["openfl","media","Sound"];
openfl.media.Sound.__super__ = openfl.events.EventDispatcher;
openfl.media.Sound.prototype = $extend(openfl.events.EventDispatcher.prototype,{
	close: function() {
		if(openfl.media.Sound.__registeredSounds.exists(this.__soundID)) createjs.Sound.removeSound(this.__soundID);
	}
	,load: function(stream,context) {
		this.url = stream.url;
		this.__soundID = haxe.io.Path.withoutExtension(stream.url);
		if(!openfl.media.Sound.__registeredSounds.exists(this.__soundID)) {
			openfl.media.Sound.__registeredSounds.set(this.__soundID,true);
			createjs.Sound.addEventListener("fileload",$bind(this,this.SoundJS_onFileLoad));
			createjs.Sound.registerSound(this.url,this.__soundID);
		} else this.dispatchEvent(new openfl.events.Event(openfl.events.Event.COMPLETE));
	}
	,loadCompressedDataFromByteArray: function(bytes,bytesLength) {
		openfl.Lib.notImplemented("Sound.loadCompressedDataFromByteArray");
	}
	,loadPCMFromByteArray: function(bytes,samples,format,stereo,sampleRate) {
		if(sampleRate == null) sampleRate = 44100;
		if(stereo == null) stereo = true;
		openfl.Lib.notImplemented("Sound.loadPCMFromByteArray");
	}
	,play: function(startTime,loops,sndTransform) {
		if(loops == null) loops = 0;
		if(startTime == null) startTime = 0.0;
		if(sndTransform == null) sndTransform = new openfl.media.SoundTransform(1,0);
		var instance = createjs.Sound.play(this.__soundID,"any",0,startTime | 0,loops,sndTransform.volume,sndTransform.pan);
		return new openfl.media.SoundChannel(instance);
	}
	,get_id3: function() {
		return new openfl.media.ID3Info();
	}
	,SoundJS_onFileLoad: function(event) {
		if(event.id == this.__soundID) {
			createjs.Sound.removeEventListener("fileload",$bind(this,this.SoundJS_onFileLoad));
			this.dispatchEvent(new openfl.events.Event(openfl.events.Event.COMPLETE));
		}
	}
	,__class__: openfl.media.Sound
	,__properties__: {get_id3:"get_id3"}
});
openfl.media.SoundChannel = function(soundInstance) {
	openfl.events.EventDispatcher.call(this,this);
	this.__soundInstance = soundInstance;
	this.__soundInstance.addEventListener("complete",$bind(this,this.soundInstance_onComplete));
};
$hxClasses["openfl.media.SoundChannel"] = openfl.media.SoundChannel;
openfl.media.SoundChannel.__name__ = ["openfl","media","SoundChannel"];
openfl.media.SoundChannel.__super__ = openfl.events.EventDispatcher;
openfl.media.SoundChannel.prototype = $extend(openfl.events.EventDispatcher.prototype,{
	stop: function() {
		this.__soundInstance.stop();
	}
	,__dispose: function() {
		this.__soundInstance.stop();
		this.__soundInstance = null;
	}
	,get_position: function() {
		return this.__soundInstance.getPosition();
	}
	,set_position: function(value) {
		this.__soundInstance.setPosition(value | 0);
		return this.__soundInstance.getPosition();
	}
	,get_soundTransform: function() {
		return new openfl.media.SoundTransform(this.__soundInstance.getVolume(),this.__soundInstance.getPan());
	}
	,set_soundTransform: function(value) {
		this.__soundInstance.setVolume(value.volume);
		this.__soundInstance.setPan(value.pan);
		return value;
	}
	,soundInstance_onComplete: function(_) {
		this.dispatchEvent(new openfl.events.Event(openfl.events.Event.SOUND_COMPLETE));
	}
	,__class__: openfl.media.SoundChannel
	,__properties__: {set_soundTransform:"set_soundTransform",get_soundTransform:"get_soundTransform",set_position:"set_position",get_position:"get_position"}
});
openfl.media.SoundLoaderContext = function(bufferTime,checkPolicyFile) {
	if(checkPolicyFile == null) checkPolicyFile = false;
	if(bufferTime == null) bufferTime = 0;
	this.bufferTime = bufferTime;
	this.checkPolicyFile = checkPolicyFile;
};
$hxClasses["openfl.media.SoundLoaderContext"] = openfl.media.SoundLoaderContext;
openfl.media.SoundLoaderContext.__name__ = ["openfl","media","SoundLoaderContext"];
openfl.media.SoundLoaderContext.prototype = {
	__class__: openfl.media.SoundLoaderContext
};
openfl.media.SoundTransform = function(vol,panning) {
	if(panning == null) panning = 0;
	if(vol == null) vol = 1;
	this.volume = vol;
	this.pan = panning;
	this.leftToLeft = 0;
	this.leftToRight = 0;
	this.rightToLeft = 0;
	this.rightToRight = 0;
};
$hxClasses["openfl.media.SoundTransform"] = openfl.media.SoundTransform;
openfl.media.SoundTransform.__name__ = ["openfl","media","SoundTransform"];
openfl.media.SoundTransform.prototype = {
	__class__: openfl.media.SoundTransform
};
openfl.net = {};
openfl.net.URLLoader = function(request) {
	openfl.events.EventDispatcher.call(this);
	this.bytesLoaded = 0;
	this.bytesTotal = 0;
	this.set_dataFormat(openfl.net.URLLoaderDataFormat.TEXT);
	if(request != null) this.load(request);
};
$hxClasses["openfl.net.URLLoader"] = openfl.net.URLLoader;
openfl.net.URLLoader.__name__ = ["openfl","net","URLLoader"];
openfl.net.URLLoader.__super__ = openfl.events.EventDispatcher;
openfl.net.URLLoader.prototype = $extend(openfl.events.EventDispatcher.prototype,{
	close: function() {
	}
	,getData: function() {
		return null;
	}
	,load: function(request) {
		this.requestUrl(request.url,request.method,request.data,request.formatRequestHeaders());
	}
	,registerEvents: function(subject) {
		var self = this;
		if(typeof XMLHttpRequestProgressEvent != "undefined") subject.addEventListener("progress",$bind(this,this.onProgress),false);
		subject.onreadystatechange = function() {
			if(subject.readyState != 4) return;
			var s;
			try {
				s = subject.status;
			} catch( e ) {
				s = null;
			}
			if(s == undefined) s = null;
			if(s != null) self.onStatus(s);
			if(s != null && s >= 200 && s < 400) self.onData(subject.response); else if(s == null) self.onError("Failed to connect or resolve host"); else if(s == 12029) self.onError("Failed to connect to host"); else if(s == 12007) self.onError("Unknown host"); else if(s == 0) {
				self.onError("Unable to make request (may be blocked due to cross-domain permissions)");
				self.onSecurityError("Unable to make request (may be blocked due to cross-domain permissions)");
			} else self.onError("Http Error #" + subject.status);
		};
	}
	,requestUrl: function(url,method,data,requestHeaders) {
		var xmlHttpRequest = new XMLHttpRequest();
		this.registerEvents(xmlHttpRequest);
		var uri = "";
		if(js.Boot.__instanceof(data,openfl.utils.ByteArray)) {
			var data1 = data;
			var _g = this.dataFormat;
			switch(_g[1]) {
			case 0:
				uri = data1.data.buffer;
				break;
			default:
				uri = data1.readUTFBytes(data1.length);
			}
		} else if(js.Boot.__instanceof(data,openfl.net.URLVariables)) {
			var data2 = data;
			var _g1 = 0;
			var _g11 = Reflect.fields(data2);
			while(_g1 < _g11.length) {
				var p = _g11[_g1];
				++_g1;
				if(uri.length != 0) uri += "&";
				uri += encodeURIComponent(p) + "=" + StringTools.urlEncode(Reflect.field(data2,p));
			}
		} else if(data != null) uri = data.toString();
		try {
			if(method == "GET" && uri != null && uri != "") {
				var question = url.split("?").length <= 1;
				xmlHttpRequest.open(method,url + (question?"?":"&") + Std.string(uri),true);
				uri = "";
			} else xmlHttpRequest.open(method,url,true);
		} catch( e ) {
			this.onError(e.toString());
			return;
		}
		var _g2 = this.dataFormat;
		switch(_g2[1]) {
		case 0:
			xmlHttpRequest.responseType = "arraybuffer";
			break;
		default:
		}
		var _g3 = 0;
		while(_g3 < requestHeaders.length) {
			var header = requestHeaders[_g3];
			++_g3;
			xmlHttpRequest.setRequestHeader(header.name,header.value);
		}
		xmlHttpRequest.send(uri);
		this.onOpen();
		this.getData = function() {
			if(xmlHttpRequest.response != null) return xmlHttpRequest.response; else return xmlHttpRequest.responseText;
		};
	}
	,onData: function(_) {
		var content = this.getData();
		var _g = this.dataFormat;
		switch(_g[1]) {
		case 0:
			this.data = openfl.utils.ByteArray.__ofBuffer(content);
			break;
		default:
			this.data = Std.string(content);
		}
		var evt = new openfl.events.Event(openfl.events.Event.COMPLETE);
		evt.currentTarget = this;
		this.dispatchEvent(evt);
	}
	,onError: function(msg) {
		var evt = new openfl.events.IOErrorEvent(openfl.events.IOErrorEvent.IO_ERROR);
		evt.text = msg;
		evt.currentTarget = this;
		this.dispatchEvent(evt);
	}
	,onOpen: function() {
		var evt = new openfl.events.Event(openfl.events.Event.OPEN);
		evt.currentTarget = this;
		this.dispatchEvent(evt);
	}
	,onProgress: function(event) {
		var evt = new openfl.events.ProgressEvent(openfl.events.ProgressEvent.PROGRESS);
		evt.currentTarget = this;
		evt.bytesLoaded = event.loaded;
		evt.bytesTotal = event.total;
		this.dispatchEvent(evt);
	}
	,onSecurityError: function(msg) {
		var evt = new openfl.events.SecurityErrorEvent(openfl.events.SecurityErrorEvent.SECURITY_ERROR);
		evt.text = msg;
		evt.currentTarget = this;
		this.dispatchEvent(evt);
	}
	,onStatus: function(status) {
		var evt = new openfl.events.HTTPStatusEvent(openfl.events.HTTPStatusEvent.HTTP_STATUS,false,false,status);
		evt.currentTarget = this;
		this.dispatchEvent(evt);
	}
	,set_dataFormat: function(inputVal) {
		if(inputVal == openfl.net.URLLoaderDataFormat.BINARY && !Reflect.hasField(window,"ArrayBuffer")) this.dataFormat = openfl.net.URLLoaderDataFormat.TEXT; else this.dataFormat = inputVal;
		return this.dataFormat;
	}
	,__class__: openfl.net.URLLoader
	,__properties__: {set_dataFormat:"set_dataFormat"}
});
openfl.net.URLLoaderDataFormat = $hxClasses["openfl.net.URLLoaderDataFormat"] = { __ename__ : true, __constructs__ : ["BINARY","TEXT","VARIABLES"] };
openfl.net.URLLoaderDataFormat.BINARY = ["BINARY",0];
openfl.net.URLLoaderDataFormat.BINARY.toString = $estr;
openfl.net.URLLoaderDataFormat.BINARY.__enum__ = openfl.net.URLLoaderDataFormat;
openfl.net.URLLoaderDataFormat.TEXT = ["TEXT",1];
openfl.net.URLLoaderDataFormat.TEXT.toString = $estr;
openfl.net.URLLoaderDataFormat.TEXT.__enum__ = openfl.net.URLLoaderDataFormat;
openfl.net.URLLoaderDataFormat.VARIABLES = ["VARIABLES",2];
openfl.net.URLLoaderDataFormat.VARIABLES.toString = $estr;
openfl.net.URLLoaderDataFormat.VARIABLES.__enum__ = openfl.net.URLLoaderDataFormat;
openfl.net.URLRequest = function(inURL) {
	if(inURL != null) this.url = inURL;
	this.requestHeaders = [];
	this.method = openfl.net.URLRequestMethod.GET;
	this.contentType = null;
};
$hxClasses["openfl.net.URLRequest"] = openfl.net.URLRequest;
openfl.net.URLRequest.__name__ = ["openfl","net","URLRequest"];
openfl.net.URLRequest.prototype = {
	formatRequestHeaders: function() {
		var res = this.requestHeaders;
		if(res == null) res = [];
		if(this.method == openfl.net.URLRequestMethod.GET || this.data == null) return res;
		if(typeof(this.data) == "string" || js.Boot.__instanceof(this.data,openfl.utils.ByteArray)) {
			res = res.slice();
			res.push(new openfl.net.URLRequestHeader("Content-Type",this.contentType != null?this.contentType:"application/x-www-form-urlencoded"));
		}
		return res;
	}
	,__class__: openfl.net.URLRequest
};
openfl.net.URLRequestHeader = function(name,value) {
	if(value == null) value = "";
	if(name == null) name = "";
	this.name = name;
	this.value = value;
};
$hxClasses["openfl.net.URLRequestHeader"] = openfl.net.URLRequestHeader;
openfl.net.URLRequestHeader.__name__ = ["openfl","net","URLRequestHeader"];
openfl.net.URLRequestHeader.prototype = {
	__class__: openfl.net.URLRequestHeader
};
openfl.net.URLRequestMethod = function() { };
$hxClasses["openfl.net.URLRequestMethod"] = openfl.net.URLRequestMethod;
openfl.net.URLRequestMethod.__name__ = ["openfl","net","URLRequestMethod"];
openfl.net.URLVariables = function(inEncoded) {
	if(inEncoded != null) this.decode(inEncoded);
};
$hxClasses["openfl.net.URLVariables"] = openfl.net.URLVariables;
openfl.net.URLVariables.__name__ = ["openfl","net","URLVariables"];
openfl.net.URLVariables.prototype = {
	decode: function(inVars) {
		var fields = Reflect.fields(this);
		var _g = 0;
		while(_g < fields.length) {
			var f = fields[_g];
			++_g;
			Reflect.deleteField(this,f);
		}
		var fields1 = inVars.split(";").join("&").split("&");
		var _g1 = 0;
		while(_g1 < fields1.length) {
			var f1 = fields1[_g1];
			++_g1;
			var eq = f1.indexOf("=");
			if(eq > 0) Reflect.setField(this,StringTools.urlDecode(HxOverrides.substr(f1,0,eq)),StringTools.urlDecode(HxOverrides.substr(f1,eq + 1,null))); else if(eq != 0) Reflect.setField(this,decodeURIComponent(f1.split("+").join(" ")),"");
		}
	}
	,toString: function() {
		var result = new Array();
		var fields = Reflect.fields(this);
		var _g = 0;
		while(_g < fields.length) {
			var f = fields[_g];
			++_g;
			result.push(encodeURIComponent(f) + "=" + StringTools.urlEncode(Reflect.field(this,f)));
		}
		return result.join("&");
	}
	,__class__: openfl.net.URLVariables
};
openfl.system = {};
openfl.system.ApplicationDomain = function(parentDomain) {
	if(parentDomain != null) this.parentDomain = parentDomain; else this.parentDomain = openfl.system.ApplicationDomain.currentDomain;
};
$hxClasses["openfl.system.ApplicationDomain"] = openfl.system.ApplicationDomain;
openfl.system.ApplicationDomain.__name__ = ["openfl","system","ApplicationDomain"];
openfl.system.ApplicationDomain.prototype = {
	getDefinition: function(name) {
		return Type.resolveClass(name);
	}
	,hasDefinition: function(name) {
		return Type.resolveClass(name) != null;
	}
	,__class__: openfl.system.ApplicationDomain
};
openfl.system.Capabilities = function() { };
$hxClasses["openfl.system.Capabilities"] = openfl.system.Capabilities;
openfl.system.Capabilities.__name__ = ["openfl","system","Capabilities"];
openfl.system.Capabilities.__properties__ = {get_language:"get_language",get_screenResolutionY:"get_screenResolutionY",get_screenResolutionX:"get_screenResolutionX",get_screenDPI:"get_screenDPI",get_pixelAspectRatio:"get_pixelAspectRatio"}
openfl.system.Capabilities.pixelAspectRatio = null;
openfl.system.Capabilities.screenDPI = null;
openfl.system.Capabilities.screenResolutionX = null;
openfl.system.Capabilities.screenResolutionY = null;
openfl.system.Capabilities.language = null;
openfl.system.Capabilities.get_pixelAspectRatio = function() {
	return 1;
};
openfl.system.Capabilities.get_screenDPI = function() {
	if(openfl.system.Capabilities.screenDPI > 0) return openfl.system.Capabilities.screenDPI;
	var body = window.document.getElementsByTagName("body")[0];
	var testDiv = window.document.createElement("div");
	testDiv.style.width = testDiv.style.height = "1in";
	testDiv.style.padding = testDiv.style.margin = "0px";
	testDiv.style.position = "absolute";
	testDiv.style.top = "-100%";
	body.appendChild(testDiv);
	openfl.system.Capabilities.screenDPI = testDiv.offsetWidth;
	body.removeChild(testDiv);
	return openfl.system.Capabilities.screenDPI;
};
openfl.system.Capabilities.get_screenResolutionX = function() {
	return window.screen.width;
};
openfl.system.Capabilities.get_screenResolutionY = function() {
	return window.screen.height;
};
openfl.system.Capabilities.get_language = function() {
	return navigator.language;
};
openfl.system.LoaderContext = function(checkPolicyFile,applicationDomain,securityDomain) {
	if(checkPolicyFile == null) checkPolicyFile = false;
	this.checkPolicyFile = checkPolicyFile;
	this.securityDomain = securityDomain;
	this.applicationDomain = applicationDomain;
	this.allowCodeImport = true;
	this.allowLoadBytesCodeExecution = true;
};
$hxClasses["openfl.system.LoaderContext"] = openfl.system.LoaderContext;
openfl.system.LoaderContext.__name__ = ["openfl","system","LoaderContext"];
openfl.system.LoaderContext.prototype = {
	__class__: openfl.system.LoaderContext
};
openfl.system.SecurityDomain = function() {
};
$hxClasses["openfl.system.SecurityDomain"] = openfl.system.SecurityDomain;
openfl.system.SecurityDomain.__name__ = ["openfl","system","SecurityDomain"];
openfl.system.SecurityDomain.prototype = {
	__class__: openfl.system.SecurityDomain
};
openfl.system.System = function() { };
$hxClasses["openfl.system.System"] = openfl.system.System;
openfl.system.System.__name__ = ["openfl","system","System"];
openfl.system.System.__properties__ = {get_vmVersion:"get_vmVersion",get_totalMemory:"get_totalMemory"}
openfl.system.System.totalMemory = null;
openfl.system.System.vmVersion = null;
openfl.system.System.exit = function(code) {
	throw "System.exit is currently not supported for HTML5";
};
openfl.system.System.gc = function() {
};
openfl.system.System.pause = function() {
	throw "System.pause is currently not supported for HTML5";
};
openfl.system.System.resume = function() {
	throw "System.resume is currently not supported for HTML5";
};
openfl.system.System.setClipboard = function(string) {
	throw "System.setClipboard is currently not supported for HTML5";
};
openfl.system.System.get_totalMemory = function() {
	return 0;
};
openfl.system.System.get_vmVersion = function() {
	return "1.0.0";
};
openfl.text._AntiAliasType = {};
openfl.text._AntiAliasType.AntiAliasType_Impl_ = function() { };
$hxClasses["openfl.text._AntiAliasType.AntiAliasType_Impl_"] = openfl.text._AntiAliasType.AntiAliasType_Impl_;
openfl.text._AntiAliasType.AntiAliasType_Impl_.__name__ = ["openfl","text","_AntiAliasType","AntiAliasType_Impl_"];
openfl.text.FontStyle = $hxClasses["openfl.text.FontStyle"] = { __ename__ : true, __constructs__ : ["REGULAR","ITALIC","BOLD_ITALIC","BOLD"] };
openfl.text.FontStyle.REGULAR = ["REGULAR",0];
openfl.text.FontStyle.REGULAR.toString = $estr;
openfl.text.FontStyle.REGULAR.__enum__ = openfl.text.FontStyle;
openfl.text.FontStyle.ITALIC = ["ITALIC",1];
openfl.text.FontStyle.ITALIC.toString = $estr;
openfl.text.FontStyle.ITALIC.__enum__ = openfl.text.FontStyle;
openfl.text.FontStyle.BOLD_ITALIC = ["BOLD_ITALIC",2];
openfl.text.FontStyle.BOLD_ITALIC.toString = $estr;
openfl.text.FontStyle.BOLD_ITALIC.__enum__ = openfl.text.FontStyle;
openfl.text.FontStyle.BOLD = ["BOLD",3];
openfl.text.FontStyle.BOLD.toString = $estr;
openfl.text.FontStyle.BOLD.__enum__ = openfl.text.FontStyle;
openfl.text.FontType = $hxClasses["openfl.text.FontType"] = { __ename__ : true, __constructs__ : ["DEVICE","EMBEDDED","EMBEDDED_CFF"] };
openfl.text.FontType.DEVICE = ["DEVICE",0];
openfl.text.FontType.DEVICE.toString = $estr;
openfl.text.FontType.DEVICE.__enum__ = openfl.text.FontType;
openfl.text.FontType.EMBEDDED = ["EMBEDDED",1];
openfl.text.FontType.EMBEDDED.toString = $estr;
openfl.text.FontType.EMBEDDED.__enum__ = openfl.text.FontType;
openfl.text.FontType.EMBEDDED_CFF = ["EMBEDDED_CFF",2];
openfl.text.FontType.EMBEDDED_CFF.toString = $estr;
openfl.text.FontType.EMBEDDED_CFF.__enum__ = openfl.text.FontType;
openfl.text.GridFitType = $hxClasses["openfl.text.GridFitType"] = { __ename__ : true, __constructs__ : ["NONE","PIXEL","SUBPIXEL"] };
openfl.text.GridFitType.NONE = ["NONE",0];
openfl.text.GridFitType.NONE.toString = $estr;
openfl.text.GridFitType.NONE.__enum__ = openfl.text.GridFitType;
openfl.text.GridFitType.PIXEL = ["PIXEL",1];
openfl.text.GridFitType.PIXEL.toString = $estr;
openfl.text.GridFitType.PIXEL.__enum__ = openfl.text.GridFitType;
openfl.text.GridFitType.SUBPIXEL = ["SUBPIXEL",2];
openfl.text.GridFitType.SUBPIXEL.toString = $estr;
openfl.text.GridFitType.SUBPIXEL.__enum__ = openfl.text.GridFitType;
openfl.text.TextFormatRange = function(format,start,end) {
	this.format = format;
	this.start = start;
	this.end = end;
};
$hxClasses["openfl.text.TextFormatRange"] = openfl.text.TextFormatRange;
openfl.text.TextFormatRange.__name__ = ["openfl","text","TextFormatRange"];
openfl.text.TextFormatRange.prototype = {
	__class__: openfl.text.TextFormatRange
};
openfl.text.TextFieldAutoSize = $hxClasses["openfl.text.TextFieldAutoSize"] = { __ename__ : true, __constructs__ : ["CENTER","LEFT","NONE","RIGHT"] };
openfl.text.TextFieldAutoSize.CENTER = ["CENTER",0];
openfl.text.TextFieldAutoSize.CENTER.toString = $estr;
openfl.text.TextFieldAutoSize.CENTER.__enum__ = openfl.text.TextFieldAutoSize;
openfl.text.TextFieldAutoSize.LEFT = ["LEFT",1];
openfl.text.TextFieldAutoSize.LEFT.toString = $estr;
openfl.text.TextFieldAutoSize.LEFT.__enum__ = openfl.text.TextFieldAutoSize;
openfl.text.TextFieldAutoSize.NONE = ["NONE",2];
openfl.text.TextFieldAutoSize.NONE.toString = $estr;
openfl.text.TextFieldAutoSize.NONE.__enum__ = openfl.text.TextFieldAutoSize;
openfl.text.TextFieldAutoSize.RIGHT = ["RIGHT",3];
openfl.text.TextFieldAutoSize.RIGHT.toString = $estr;
openfl.text.TextFieldAutoSize.RIGHT.__enum__ = openfl.text.TextFieldAutoSize;
openfl.text.TextFieldType = $hxClasses["openfl.text.TextFieldType"] = { __ename__ : true, __constructs__ : ["DYNAMIC","INPUT"] };
openfl.text.TextFieldType.DYNAMIC = ["DYNAMIC",0];
openfl.text.TextFieldType.DYNAMIC.toString = $estr;
openfl.text.TextFieldType.DYNAMIC.__enum__ = openfl.text.TextFieldType;
openfl.text.TextFieldType.INPUT = ["INPUT",1];
openfl.text.TextFieldType.INPUT.toString = $estr;
openfl.text.TextFieldType.INPUT.__enum__ = openfl.text.TextFieldType;
openfl.text.TextFormat = function(font,size,color,bold,italic,underline,url,target,align,leftMargin,rightMargin,indent,leading) {
	this.font = font;
	this.size = size;
	this.color = color;
	this.bold = bold;
	this.italic = italic;
	this.underline = underline;
	this.url = url;
	this.target = target;
	this.align = align;
	this.leftMargin = leftMargin;
	this.rightMargin = rightMargin;
	this.indent = indent;
	this.leading = leading;
};
$hxClasses["openfl.text.TextFormat"] = openfl.text.TextFormat;
openfl.text.TextFormat.__name__ = ["openfl","text","TextFormat"];
openfl.text.TextFormat.prototype = {
	clone: function() {
		var newFormat = new openfl.text.TextFormat(this.font,this.size,this.color,this.bold,this.italic,this.underline,this.url,this.target);
		newFormat.align = this.align;
		newFormat.leftMargin = this.leftMargin;
		newFormat.rightMargin = this.rightMargin;
		newFormat.indent = this.indent;
		newFormat.leading = this.leading;
		newFormat.blockIndent = this.blockIndent;
		newFormat.bullet = this.bullet;
		newFormat.kerning = this.kerning;
		newFormat.letterSpacing = this.letterSpacing;
		newFormat.tabStops = this.tabStops;
		return newFormat;
	}
	,__merge: function(format) {
		if(format.font != null) this.font = format.font;
		if(format.size != null) this.size = format.size;
		if(format.color != null) this.color = format.color;
		if(format.bold != null) this.bold = format.bold;
		if(format.italic != null) this.italic = format.italic;
		if(format.underline != null) this.underline = format.underline;
		if(format.url != null) this.url = format.url;
		if(format.target != null) this.target = format.target;
		if(format.align != null) this.align = format.align;
		if(format.leftMargin != null) this.leftMargin = format.leftMargin;
		if(format.rightMargin != null) this.rightMargin = format.rightMargin;
		if(format.indent != null) this.indent = format.indent;
		if(format.leading != null) this.leading = format.leading;
		if(format.blockIndent != null) this.blockIndent = format.blockIndent;
		if(format.bullet != null) this.bullet = format.bullet;
		if(format.kerning != null) this.kerning = format.kerning;
		if(format.letterSpacing != null) this.letterSpacing = format.letterSpacing;
		if(format.tabStops != null) this.tabStops = format.tabStops;
	}
	,__class__: openfl.text.TextFormat
};
openfl.text.TextFormatAlign = $hxClasses["openfl.text.TextFormatAlign"] = { __ename__ : true, __constructs__ : ["LEFT","RIGHT","JUSTIFY","CENTER"] };
openfl.text.TextFormatAlign.LEFT = ["LEFT",0];
openfl.text.TextFormatAlign.LEFT.toString = $estr;
openfl.text.TextFormatAlign.LEFT.__enum__ = openfl.text.TextFormatAlign;
openfl.text.TextFormatAlign.RIGHT = ["RIGHT",1];
openfl.text.TextFormatAlign.RIGHT.toString = $estr;
openfl.text.TextFormatAlign.RIGHT.__enum__ = openfl.text.TextFormatAlign;
openfl.text.TextFormatAlign.JUSTIFY = ["JUSTIFY",2];
openfl.text.TextFormatAlign.JUSTIFY.toString = $estr;
openfl.text.TextFormatAlign.JUSTIFY.__enum__ = openfl.text.TextFormatAlign;
openfl.text.TextFormatAlign.CENTER = ["CENTER",3];
openfl.text.TextFormatAlign.CENTER.toString = $estr;
openfl.text.TextFormatAlign.CENTER.__enum__ = openfl.text.TextFormatAlign;
openfl.text.TextLineMetrics = function(x,width,height,ascent,descent,leading) {
	this.x = x;
	this.width = width;
	this.height = height;
	this.ascent = ascent;
	this.descent = descent;
	this.leading = leading;
};
$hxClasses["openfl.text.TextLineMetrics"] = openfl.text.TextLineMetrics;
openfl.text.TextLineMetrics.__name__ = ["openfl","text","TextLineMetrics"];
openfl.text.TextLineMetrics.prototype = {
	__class__: openfl.text.TextLineMetrics
};
openfl.ui = {};
openfl.ui._KeyLocation = {};
openfl.ui._KeyLocation.KeyLocation_Impl_ = function() { };
$hxClasses["openfl.ui._KeyLocation.KeyLocation_Impl_"] = openfl.ui._KeyLocation.KeyLocation_Impl_;
openfl.ui._KeyLocation.KeyLocation_Impl_.__name__ = ["openfl","ui","_KeyLocation","KeyLocation_Impl_"];
openfl.ui.Keyboard = function() { };
$hxClasses["openfl.ui.Keyboard"] = openfl.ui.Keyboard;
openfl.ui.Keyboard.__name__ = ["openfl","ui","Keyboard"];
openfl.ui.Keyboard.capsLock = null;
openfl.ui.Keyboard.numLock = null;
openfl.ui.Keyboard.isAccessible = function() {
	return false;
};
openfl.ui.Keyboard.__convertMozillaCode = function(code) {
	switch(code) {
	case 8:
		return 8;
	case 9:
		return 9;
	case 13:
		return 13;
	case 14:
		return 13;
	case 16:
		return 16;
	case 17:
		return 17;
	case 20:
		return 20;
	case 27:
		return 27;
	case 32:
		return 32;
	case 33:
		return 33;
	case 34:
		return 34;
	case 35:
		return 35;
	case 36:
		return 36;
	case 37:
		return 37;
	case 39:
		return 39;
	case 38:
		return 38;
	case 40:
		return 40;
	case 45:
		return 45;
	case 46:
		return 46;
	case 144:
		return 144;
	default:
		return code;
	}
};
openfl.ui.Keyboard.__convertWebkitCode = function(code) {
	var _g = code.toLowerCase();
	switch(_g) {
	case "backspace":
		return 8;
	case "tab":
		return 9;
	case "enter":
		return 13;
	case "shift":
		return 16;
	case "control":
		return 17;
	case "capslock":
		return 20;
	case "escape":
		return 27;
	case "space":
		return 32;
	case "pageup":
		return 33;
	case "pagedown":
		return 34;
	case "end":
		return 35;
	case "home":
		return 36;
	case "left":
		return 37;
	case "right":
		return 39;
	case "up":
		return 38;
	case "down":
		return 40;
	case "insert":
		return 45;
	case "delete":
		return 46;
	case "numlock":
		return 144;
	case "break":
		return 19;
	}
	if(code.indexOf("U+") == 0) return Std.parseInt("0x" + HxOverrides.substr(code,3,null));
	throw "Unrecognized key code: " + code;
	return 0;
};
openfl.utils = {};
openfl.utils.ByteArray = function() {
	this.littleEndian = false;
	this.allocated = 0;
	this.position = 0;
	this.length = 0;
	this.___resizeBuffer(this.allocated);
};
$hxClasses["openfl.utils.ByteArray"] = openfl.utils.ByteArray;
openfl.utils.ByteArray.__name__ = ["openfl","utils","ByteArray"];
openfl.utils.ByteArray.fromBytes = function(inBytes) {
	var result = new openfl.utils.ByteArray();
	result.byteView = new Uint8Array(inBytes.b);
	result.set_length(result.byteView.length);
	result.allocated = result.length;
	return result;
};
openfl.utils.ByteArray.__ofBuffer = function(buffer) {
	var bytes = new openfl.utils.ByteArray();
	bytes.set_length(bytes.allocated = buffer.byteLength);
	bytes.data = new DataView(buffer);
	bytes.byteView = new Uint8Array(buffer);
	return bytes;
};
openfl.utils.ByteArray.prototype = {
	clear: function() {
		if(this.allocated < 0) this.___resizeBuffer(this.allocated = Std["int"](Math.max(0,this.allocated * 2))); else if(this.allocated > 0) this.___resizeBuffer(this.allocated = 0);
		this.length = 0;
		0;
		this.position = 0;
	}
	,readBoolean: function() {
		return this.readByte() != 0;
	}
	,readByte: function() {
		var data = this.data;
		return data.getInt8(this.position++);
	}
	,readBytes: function(bytes,offset,length) {
		if(length == null) length = 0;
		if(offset == null) offset = 0;
		if(offset < 0 || length < 0) throw new openfl.errors.IOError("Read error - Out of bounds");
		if(length == 0) length = this.length - this.position;
		var lengthToEnsure = offset + length;
		if(bytes.length < lengthToEnsure) {
			if(bytes.allocated < lengthToEnsure) bytes.___resizeBuffer(bytes.allocated = Std["int"](Math.max(lengthToEnsure,bytes.allocated * 2))); else if(bytes.allocated > lengthToEnsure) bytes.___resizeBuffer(bytes.allocated = lengthToEnsure);
			bytes.length = lengthToEnsure;
			lengthToEnsure;
		}
		bytes.byteView.set(this.byteView.subarray(this.position,this.position + length),offset);
		bytes.position = offset;
		this.position += length;
		if(bytes.position + length > bytes.length) bytes.set_length(bytes.position + length);
	}
	,readDouble: function() {
		var $double = this.data.getFloat64(this.position,this.littleEndian);
		this.position += 8;
		return $double;
	}
	,readFloat: function() {
		var $float = this.data.getFloat32(this.position,this.littleEndian);
		this.position += 4;
		return $float;
	}
	,readFullBytes: function(bytes,pos,len) {
		if(this.length < len) {
			if(this.allocated < len) this.___resizeBuffer(this.allocated = Std["int"](Math.max(len,this.allocated * 2))); else if(this.allocated > len) this.___resizeBuffer(this.allocated = len);
			this.length = len;
			len;
		}
		var _g1 = pos;
		var _g = pos + len;
		while(_g1 < _g) {
			var i = _g1++;
			var data = this.data;
			data.setInt8(this.position++,bytes.b[i]);
		}
	}
	,readInt: function() {
		var $int = this.data.getInt32(this.position,this.littleEndian);
		this.position += 4;
		return $int;
	}
	,readMultiByte: function(length,charSet) {
		return this.readUTFBytes(length);
	}
	,readShort: function() {
		var $short = this.data.getInt16(this.position,this.littleEndian);
		this.position += 2;
		return $short;
	}
	,readUnsignedByte: function() {
		var data = this.data;
		return data.getUint8(this.position++);
	}
	,readUnsignedInt: function() {
		var uInt = this.data.getUint32(this.position,this.littleEndian);
		this.position += 4;
		return uInt;
	}
	,readUnsignedShort: function() {
		var uShort = this.data.getUint16(this.position,this.littleEndian);
		this.position += 2;
		return uShort;
	}
	,readUTF: function() {
		var bytesCount = this.readUnsignedShort();
		return this.readUTFBytes(bytesCount);
	}
	,readUTFBytes: function(len) {
		var value = "";
		var max = this.position + len;
		while(this.position < max) {
			var data = this.data;
			var c = data.getUint8(this.position++);
			if(c < 128) {
				if(c == 0) break;
				value += String.fromCharCode(c);
			} else if(c < 224) value += String.fromCharCode((c & 63) << 6 | data.getUint8(this.position++) & 127); else if(c < 240) {
				var c2 = data.getUint8(this.position++);
				value += String.fromCharCode((c & 31) << 12 | (c2 & 127) << 6 | data.getUint8(this.position++) & 127);
			} else {
				var c21 = data.getUint8(this.position++);
				var c3 = data.getUint8(this.position++);
				value += String.fromCharCode((c & 15) << 18 | (c21 & 127) << 12 | c3 << 6 & 127 | data.getUint8(this.position++) & 127);
			}
		}
		return value;
	}
	,toString: function() {
		var cachePosition = this.position;
		this.position = 0;
		var value = this.readUTFBytes(this.length);
		this.position = cachePosition;
		return value;
	}
	,writeBoolean: function(value) {
		this.writeByte(value?1:0);
	}
	,writeByte: function(value) {
		var lengthToEnsure = this.position + 1;
		if(this.length < lengthToEnsure) {
			if(this.allocated < lengthToEnsure) this.___resizeBuffer(this.allocated = Std["int"](Math.max(lengthToEnsure,this.allocated * 2))); else if(this.allocated > lengthToEnsure) this.___resizeBuffer(this.allocated = lengthToEnsure);
			this.length = lengthToEnsure;
			lengthToEnsure;
		}
		var data = this.data;
		data.setInt8(this.position,value);
		this.position += 1;
	}
	,writeBytes: function(bytes,offset,length) {
		if(length == null) length = 0;
		if(offset == null) offset = 0;
		if(offset < 0 || length < 0) throw new openfl.errors.IOError("Write error - Out of bounds");
		if(length == 0) length = bytes.length;
		var lengthToEnsure = this.position + length;
		if(this.length < lengthToEnsure) {
			if(this.allocated < lengthToEnsure) this.___resizeBuffer(this.allocated = Std["int"](Math.max(lengthToEnsure,this.allocated * 2))); else if(this.allocated > lengthToEnsure) this.___resizeBuffer(this.allocated = lengthToEnsure);
			this.length = lengthToEnsure;
			lengthToEnsure;
		}
		this.byteView.set(bytes.byteView.subarray(offset,offset + length),this.position);
		this.position += length;
	}
	,writeDouble: function(x) {
		var lengthToEnsure = this.position + 8;
		if(this.length < lengthToEnsure) {
			if(this.allocated < lengthToEnsure) this.___resizeBuffer(this.allocated = Std["int"](Math.max(lengthToEnsure,this.allocated * 2))); else if(this.allocated > lengthToEnsure) this.___resizeBuffer(this.allocated = lengthToEnsure);
			this.length = lengthToEnsure;
			lengthToEnsure;
		}
		this.data.setFloat64(this.position,x,this.littleEndian);
		this.position += 8;
	}
	,writeFloat: function(x) {
		var lengthToEnsure = this.position + 4;
		if(this.length < lengthToEnsure) {
			if(this.allocated < lengthToEnsure) this.___resizeBuffer(this.allocated = Std["int"](Math.max(lengthToEnsure,this.allocated * 2))); else if(this.allocated > lengthToEnsure) this.___resizeBuffer(this.allocated = lengthToEnsure);
			this.length = lengthToEnsure;
			lengthToEnsure;
		}
		this.data.setFloat32(this.position,x,this.littleEndian);
		this.position += 4;
	}
	,writeInt: function(value) {
		var lengthToEnsure = this.position + 4;
		if(this.length < lengthToEnsure) {
			if(this.allocated < lengthToEnsure) this.___resizeBuffer(this.allocated = Std["int"](Math.max(lengthToEnsure,this.allocated * 2))); else if(this.allocated > lengthToEnsure) this.___resizeBuffer(this.allocated = lengthToEnsure);
			this.length = lengthToEnsure;
			lengthToEnsure;
		}
		this.data.setInt32(this.position,value,this.littleEndian);
		this.position += 4;
	}
	,writeShort: function(value) {
		var lengthToEnsure = this.position + 2;
		if(this.length < lengthToEnsure) {
			if(this.allocated < lengthToEnsure) this.___resizeBuffer(this.allocated = Std["int"](Math.max(lengthToEnsure,this.allocated * 2))); else if(this.allocated > lengthToEnsure) this.___resizeBuffer(this.allocated = lengthToEnsure);
			this.length = lengthToEnsure;
			lengthToEnsure;
		}
		this.data.setInt16(this.position,value,this.littleEndian);
		this.position += 2;
	}
	,writeUnsignedInt: function(value) {
		var lengthToEnsure = this.position + 4;
		if(this.length < lengthToEnsure) {
			if(this.allocated < lengthToEnsure) this.___resizeBuffer(this.allocated = Std["int"](Math.max(lengthToEnsure,this.allocated * 2))); else if(this.allocated > lengthToEnsure) this.___resizeBuffer(this.allocated = lengthToEnsure);
			this.length = lengthToEnsure;
			lengthToEnsure;
		}
		this.data.setUint32(this.position,value,this.littleEndian);
		this.position += 4;
	}
	,writeUnsignedShort: function(value) {
		var lengthToEnsure = this.position + 2;
		if(this.length < lengthToEnsure) {
			if(this.allocated < lengthToEnsure) this.___resizeBuffer(this.allocated = Std["int"](Math.max(lengthToEnsure,this.allocated * 2))); else if(this.allocated > lengthToEnsure) this.___resizeBuffer(this.allocated = lengthToEnsure);
			this.length = lengthToEnsure;
			lengthToEnsure;
		}
		this.data.setUint16(this.position,value,this.littleEndian);
		this.position += 2;
	}
	,writeUTF: function(value) {
		this.writeUnsignedShort(this._getUTFBytesCount(value));
		this.writeUTFBytes(value);
	}
	,writeUTFBytes: function(value) {
		var _g1 = 0;
		var _g = value.length;
		while(_g1 < _g) {
			var i = _g1++;
			var c = value.charCodeAt(i);
			if(c <= 127) this.writeByte(c); else if(c <= 2047) {
				this.writeByte(192 | c >> 6);
				this.writeByte(128 | c & 63);
			} else if(c <= 65535) {
				this.writeByte(224 | c >> 12);
				this.writeByte(128 | c >> 6 & 63);
				this.writeByte(128 | c & 63);
			} else {
				this.writeByte(240 | c >> 18);
				this.writeByte(128 | c >> 12 & 63);
				this.writeByte(128 | c >> 6 & 63);
				this.writeByte(128 | c & 63);
			}
		}
	}
	,__fromBytes: function(inBytes) {
		this.byteView = new Uint8Array(inBytes.b);
		this.set_length(this.byteView.length);
		this.allocated = this.length;
	}
	,__get: function(pos) {
		return this.data.getInt8(pos);
	}
	,_getUTFBytesCount: function(value) {
		var count = 0;
		var _g1 = 0;
		var _g = value.length;
		while(_g1 < _g) {
			var i = _g1++;
			var c = value.charCodeAt(i);
			if(c <= 127) count += 1; else if(c <= 2047) count += 2; else if(c <= 65535) count += 3; else count += 4;
		}
		return count;
	}
	,___resizeBuffer: function(len) {
		var oldByteView = this.byteView;
		var newByteView = new Uint8Array(len);
		if(oldByteView != null) {
			if(oldByteView.length <= len) newByteView.set(oldByteView); else newByteView.set(oldByteView.subarray(0,len));
		}
		this.byteView = newByteView;
		this.data = new DataView(newByteView.buffer);
	}
	,__getBuffer: function() {
		return this.data.buffer;
	}
	,__set: function(pos,v) {
		this.data.setUint8(pos,v);
	}
	,get_bytesAvailable: function() {
		return this.length - this.position;
	}
	,get_endian: function() {
		if(this.littleEndian) return "littleEndian"; else return "bigEndian";
	}
	,set_endian: function(endian) {
		this.littleEndian = endian == "littleEndian";
		return endian;
	}
	,set_length: function(value) {
		if(this.allocated < value) this.___resizeBuffer(this.allocated = Std["int"](Math.max(value,this.allocated * 2))); else if(this.allocated > value) this.___resizeBuffer(this.allocated = value);
		this.length = value;
		return value;
	}
	,__class__: openfl.utils.ByteArray
	,__properties__: {set_length:"set_length",set_endian:"set_endian",get_endian:"get_endian",get_bytesAvailable:"get_bytesAvailable"}
};
openfl.utils.Endian = function() { };
$hxClasses["openfl.utils.Endian"] = openfl.utils.Endian;
openfl.utils.Endian.__name__ = ["openfl","utils","Endian"];
openfl.utils.Timer = function(delay,repeatCount) {
	if(repeatCount == null) repeatCount = 0;
	openfl.events.EventDispatcher.call(this);
	this.running = false;
	this.set_delay(delay);
	this.set_repeatCount(repeatCount);
	this.currentCount = 0;
};
$hxClasses["openfl.utils.Timer"] = openfl.utils.Timer;
openfl.utils.Timer.__name__ = ["openfl","utils","Timer"];
openfl.utils.Timer.__super__ = openfl.events.EventDispatcher;
openfl.utils.Timer.prototype = $extend(openfl.events.EventDispatcher.prototype,{
	reset: function() {
		this.stop();
		this.currentCount = 0;
	}
	,start: function() {
		if(this.running) return;
		this.running = true;
		this.timerId = window.setInterval($bind(this,this.__onInterval),this.delay | 0);
	}
	,stop: function() {
		if(this.timerId != null) {
			window.clearInterval(this.timerId);
			this.timerId = null;
		}
		this.running = false;
	}
	,__onInterval: function() {
		this.currentCount++;
		if(this.repeatCount > 0 && this.currentCount >= this.repeatCount) {
			this.stop();
			this.dispatchEvent(new openfl.events.TimerEvent("timer"));
			this.dispatchEvent(new openfl.events.TimerEvent("timerComplete"));
		} else this.dispatchEvent(new openfl.events.TimerEvent("timer"));
	}
	,set_delay: function(v) {
		if(v != this.delay) {
			var wasRunning = this.running;
			if(this.running) this.stop();
			this.delay = v;
			if(wasRunning) this.start();
		}
		return v;
	}
	,set_repeatCount: function(v) {
		if(this.running && v != 0 && v <= this.currentCount) this.stop();
		this.repeatCount = v;
		return v;
	}
	,__class__: openfl.utils.Timer
	,__properties__: {set_repeatCount:"set_repeatCount",set_delay:"set_delay"}
});
function $iterator(o) { if( o instanceof Array ) return function() { return HxOverrides.iter(o); }; return typeof(o.iterator) == 'function' ? $bind(o,o.iterator) : o.iterator; }
var $_, $fid = 0;
function $bind(o,m) { if( m == null ) return null; if( m.__id__ == null ) m.__id__ = $fid++; var f; if( o.hx__closures__ == null ) o.hx__closures__ = {}; else f = o.hx__closures__[m.__id__]; if( f == null ) { f = function(){ return f.method.apply(f.scope, arguments); }; f.scope = o; f.method = m; o.hx__closures__[m.__id__] = f; } return f; }
if(Array.prototype.indexOf) HxOverrides.indexOf = function(a,o,i) {
	return Array.prototype.indexOf.call(a,o,i);
};
Math.NaN = Number.NaN;
Math.NEGATIVE_INFINITY = Number.NEGATIVE_INFINITY;
Math.POSITIVE_INFINITY = Number.POSITIVE_INFINITY;
$hxClasses.Math = Math;
Math.isFinite = function(i) {
	return isFinite(i);
};
Math.isNaN = function(i1) {
	return isNaN(i1);
};
String.prototype.__class__ = $hxClasses.String = String;
String.__name__ = ["String"];
$hxClasses.Array = Array;
Array.__name__ = ["Array"];
Date.prototype.__class__ = $hxClasses.Date = Date;
Date.__name__ = ["Date"];
var Int = $hxClasses.Int = { __name__ : ["Int"]};
var Dynamic = $hxClasses.Dynamic = { __name__ : ["Dynamic"]};
var Float = $hxClasses.Float = Number;
Float.__name__ = ["Float"];
var Bool = $hxClasses.Bool = Boolean;
Bool.__ename__ = ["Bool"];
var Class = $hxClasses.Class = { __name__ : ["Class"]};
var Enum = { };
Xml.Element = "element";
Xml.PCData = "pcdata";
Xml.CData = "cdata";
Xml.Comment = "comment";
Xml.DocType = "doctype";
Xml.ProcessingInstruction = "processingInstruction";
Xml.Document = "document";
if(window.createjs != null) createjs.Sound.alternateExtensions = ["ogg","mp3","wav"];
ApplicationMain.images = new haxe.ds.StringMap();
ApplicationMain.urlLoaders = new haxe.ds.StringMap();
ApplicationMain.assetsLoaded = 0;
ApplicationMain.total = 0;
openfl.display.DisplayObject.__instanceCount = 0;
openfl.display.DisplayObject.__worldRenderDirty = 0;
openfl.display.DisplayObject.__worldTransformDirty = 0;
com.gamestudiohx.babylonhx.Engine.clipPlane = null;
com.gamestudiohx.babylonhx.Engine.ShadersRepository = "assets/shaders/";
com.gamestudiohx.babylonhx.Engine.ALPHA_DISABLE = 0;
com.gamestudiohx.babylonhx.Engine.ALPHA_ADD = 1;
com.gamestudiohx.babylonhx.Engine.ALPHA_COMBINE = 2;
com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_NONE = 0;
com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_LOADED = 1;
com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_LOADING = 2;
com.gamestudiohx.babylonhx.Engine.DELAYLOADSTATE_NOTLOADED = 4;
com.gamestudiohx.babylonhx.Engine.epsilon = 0.001;
com.gamestudiohx.babylonhx.Engine.collisionsEpsilon = 0.001;
com.gamestudiohx.babylonhx.Scene.FOGMODE_NONE = 0;
com.gamestudiohx.babylonhx.Scene.FOGMODE_EXP = 1;
com.gamestudiohx.babylonhx.Scene.FOGMODE_EXP2 = 2;
com.gamestudiohx.babylonhx.Scene.FOGMODE_LINEAR = 3;
com.gamestudiohx.babylonhx.Scene.MinDeltaTime = 1.0;
com.gamestudiohx.babylonhx.Scene.MaxDeltaTime = 1000.0;
com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_FLOAT = 0;
com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_VECTOR3 = 1;
com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_QUATERNION = 2;
com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONTYPE_MATRIX = 3;
com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_RELATIVE = 0;
com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CYCLE = 1;
com.gamestudiohx.babylonhx.animations.Animation.ANIMATIONLOOPMODE_CONSTANT = 2;
com.gamestudiohx.babylonhx.cameras.Camera.PERSPECTIVE_CAMERA = 0;
com.gamestudiohx.babylonhx.cameras.Camera.ORTHOGRAPHIC_CAMERA = 1;
com.gamestudiohx.babylonhx.materials.Effect.ShadersStore = (function($this) {
	var $r;
	var _g = new haxe.ds.StringMap();
	_g.set("blackAndWhitePixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\nvoid main(void) \n{\n\tfloat luminance = dot(texture2D(textureSampler, vUV).rgb, vec3(0.3, 0.59, 0.11));\n\tgl_FragColor = vec4(luminance, luminance, luminance, 1.0);\n}");
	_g.set("blurPixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\n// Parameters\nuniform vec2 screenSize;\nuniform vec2 direction;\nuniform float blurWidth;\n\nvoid main(void)\n{\n\tfloat weights[7];\n\tweights[0] = 0.05;\n\tweights[1] = 0.1;\n\tweights[2] = 0.2;\n\tweights[3] = 0.3;\n\tweights[4] = 0.2;\n\tweights[5] = 0.1;\n\tweights[6] = 0.05;\n\n\tvec2 texelSize = vec2(1.0 / screenSize.x, 1.0 / screenSize.y);\n\tvec2 texelStep = texelSize * direction * blurWidth;\n\tvec2 start = vUV - 3.0 * texelStep;\n\n\tvec4 baseColor = vec4(0., 0., 0., 0.);\n\tvec2 texelOffset = vec2(0., 0.);\n\n\tfor (int i = 0; i < 7; i++)\n\t{\n\t\tbaseColor += texture2D(textureSampler, start + texelOffset) * weights[i];\n\t\ttexelOffset += texelStep;\n\t}\n\n\tgl_FragColor = baseColor;\n}");
	_g.set("convolutionPixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\nuniform mat4 kernelMatrix;\n\nvoid main(void) \n{\n\tvec3 baseColor = texture2D(textureSampler, vUV).rgb;\n\tvec3 updatedColor = (kernelMatrix * vec4(baseColor, 1.0)).rgb;\n\n\tgl_FragColor = vec4(updatedColor, 1.0);\n}");
	_g.set("defaultPixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n#define MAP_EXPLICIT\t0.\n#define MAP_SPHERICAL\t1.\n#define MAP_PLANAR\t\t2.\n#define MAP_CUBIC\t\t3.\n#define MAP_PROJECTION\t4.\n#define MAP_SKYBOX\t\t5.\n\n// Constants\nuniform vec3 vEyePosition;\nuniform vec3 vAmbientColor;\nuniform vec4 vDiffuseColor;\nuniform vec4 vSpecularColor;\nuniform vec3 vEmissiveColor;\n\n// Input\nvarying vec3 vPositionW;\nvarying vec3 vNormalW;\n\n#ifdef VERTEXCOLOR\nvarying vec3 vColor;\n#endif\n\n// Lights\n#ifdef LIGHT0\nuniform vec4 vLightData0;\nuniform vec3 vLightDiffuse0;\nuniform vec3 vLightSpecular0;\n#ifdef SHADOW0\nvarying vec4 vPositionFromLight0;\nuniform sampler2D shadowSampler0;\n#endif\n#ifdef SPOTLIGHT0\nuniform vec4 vLightDirection0;\n#endif\n#ifdef HEMILIGHT0\nuniform vec3 vLightGround0;\n#endif\n#endif\n\n#ifdef LIGHT1\nuniform vec4 vLightData1;\nuniform vec3 vLightDiffuse1;\nuniform vec3 vLightSpecular1;\n#ifdef SHADOW1\nvarying vec4 vPositionFromLight1;\nuniform sampler2D shadowSampler1;\n#endif\n#ifdef SPOTLIGHT1\nuniform vec4 vLightDirection1;\n#endif\n#ifdef HEMILIGHT1\nuniform vec3 vLightGround1;\n#endif\n#endif\n\n#ifdef LIGHT2\nuniform vec4 vLightData2;\nuniform vec3 vLightDiffuse2;\nuniform vec3 vLightSpecular2;\n#ifdef SHADOW2\nvarying vec4 vPositionFromLight2;\nuniform sampler2D shadowSampler2;\n#endif\n#ifdef SPOTLIGHT2\nuniform vec4 vLightDirection2;\n#endif\n#ifdef HEMILIGHT2\nuniform vec3 vLightGround2;\n#endif\n#endif\n\n#ifdef LIGHT3\nuniform vec4 vLightData3;\nuniform vec3 vLightDiffuse3;\nuniform vec3 vLightSpecular3;\n#ifdef SHADOW3\nvarying vec4 vPositionFromLight3;\nuniform sampler2D shadowSampler3;\n#endif\n#ifdef SPOTLIGHT3\nuniform vec4 vLightDirection3;\n#endif\n#ifdef HEMILIGHT3\nuniform vec3 vLightGround3;\n#endif\n#endif\n\n// Samplers\n#ifdef DIFFUSE\nvarying vec2 vDiffuseUV;\nuniform sampler2D diffuseSampler;\nuniform vec2 vDiffuseInfos;\n#endif\n\n#ifdef AMBIENT\nvarying vec2 vAmbientUV;\nuniform sampler2D ambientSampler;\nuniform vec2 vAmbientInfos;\n#endif\n\n#ifdef OPACITY\t\nvarying vec2 vOpacityUV;\nuniform sampler2D opacitySampler;\nuniform vec2 vOpacityInfos;\n#endif\n\n#ifdef EMISSIVE\nvarying vec2 vEmissiveUV;\nuniform vec2 vEmissiveInfos;\nuniform sampler2D emissiveSampler;\n#endif\n\n#ifdef SPECULAR\nvarying vec2 vSpecularUV;\nuniform vec2 vSpecularInfos;\nuniform sampler2D specularSampler;\n#endif\n\n// Reflection\n#ifdef REFLECTION\nvarying vec3 vPositionUVW;\nuniform samplerCube reflectionCubeSampler;\nuniform sampler2D reflection2DSampler;\nuniform vec3 vReflectionInfos;\nuniform mat4 reflectionMatrix;\nuniform mat4 view;\n\nvec3 computeReflectionCoords(float mode, vec4 worldPos, vec3 worldNormal)\n{\n\tif (mode == MAP_SPHERICAL)\n\t{\n\t\tvec3 coords = vec3(view * vec4(worldNormal, 0.0));\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 1.0));\n\t}\n\telse if (mode == MAP_PLANAR)\n\t{\n\t\tvec3 viewDir = worldPos.xyz - vEyePosition;\n\t\tvec3 coords = normalize(reflect(viewDir, worldNormal));\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 1));\n\t}\n\telse if (mode == MAP_CUBIC)\n\t{\n\t\tvec3 viewDir = worldPos.xyz - vEyePosition;\n\t\tvec3 coords = reflect(viewDir, worldNormal);\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 0));\n\t}\n\telse if (mode == MAP_PROJECTION)\n\t{\n\t\treturn vec3(reflectionMatrix * (view * worldPos));\n\t}\n\telse if (mode == MAP_SKYBOX)\n\t{\n\t\treturn vPositionUVW;\n\t}\n\n\treturn vec3(0, 0, 0);\n}\n#endif\n\n// Shadows\n#ifdef SHADOWS\n\nfloat unpack(vec4 color)\n{\n\tconst vec4 bitShift = vec4(1. / (255. * 255. * 255.), 1. / (255. * 255.), 1. / 255., 1.);\n\treturn dot(color, bitShift);\n}\n\nfloat unpackHalf(vec2 color)\n{\n\treturn color.x + (color.y / 255.0);\n}\n\nfloat computeShadow(vec4 vPositionFromLight, sampler2D shadowSampler)\n{\n\tvec3 depth = vPositionFromLight.xyz / vPositionFromLight.w;\n\tvec2 uv = 0.5 * depth.xy + vec2(0.5, 0.5);\n\n\tif (uv.x < 0. || uv.x > 1.0 || uv.y < 0. || uv.y > 1.0)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tfloat shadow = unpack(texture2D(shadowSampler, uv));\n\n\tif (depth.z > shadow)\n\t{\n\t\treturn 0.;\n\t}\n\treturn 1.;\n}\n\n// Thanks to http://devmaster.net/\nfloat ChebychevInequality(vec2 moments, float t)\n{\n\tif (t <= moments.x)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tfloat variance = moments.y - (moments.x * moments.x);\n\tvariance = max(variance, 0.);\n\n\tfloat d = t - moments.x;\n\treturn variance / (variance + d * d);\n}\n\nfloat computeShadowWithVSM(vec4 vPositionFromLight, sampler2D shadowSampler)\n{\n\tvec3 depth = vPositionFromLight.xyz / vPositionFromLight.w;\n\tvec2 uv = 0.5 * depth.xy + vec2(0.5, 0.5);\n\n\tif (uv.x < 0. || uv.x > 1.0 || uv.y < 0. || uv.y > 1.0)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tvec4 texel = texture2D(shadowSampler, uv);\n\n\tvec2 moments = vec2(unpackHalf(texel.xy), unpackHalf(texel.zw));\n\treturn clamp(1.3 - ChebychevInequality(moments, depth.z), 0., 1.0);\n}\n#endif\n\n// Bump\n#ifdef BUMP\n#extension GL_OES_standard_derivatives : enable\nvarying vec2 vBumpUV;\nuniform vec2 vBumpInfos;\nuniform sampler2D bumpSampler;\n\n// Thanks to http://www.thetenthplanet.de/archives/1180\nmat3 cotangent_frame(vec3 normal, vec3 p, vec2 uv)\n{\n\t// get edge vectors of the pixel triangle\n\tvec3 dp1 = dFdx(p);\n\tvec3 dp2 = dFdy(p);\n\tvec2 duv1 = dFdx(uv);\n\tvec2 duv2 = dFdy(uv);\n\n\t// solve the linear system\n\tvec3 dp2perp = cross(dp2, normal);\n\tvec3 dp1perp = cross(normal, dp1);\n\tvec3 tangent = dp2perp * duv1.x + dp1perp * duv2.x;\n\tvec3 binormal = dp2perp * duv1.y + dp1perp * duv2.y;\n\n\t// construct a scale-invariant frame \n\tfloat invmax = inversesqrt(max(dot(tangent, tangent), dot(binormal, binormal)));\n\treturn mat3(tangent * invmax, binormal * invmax, normal);\n}\n\nvec3 perturbNormal(vec3 viewDir)\n{\n\tvec3 map = texture2D(bumpSampler, vBumpUV).xyz * vBumpInfos.y;\n\tmap = map * 255. / 127. - 128. / 127.;\n\tmat3 TBN = cotangent_frame(vNormalW, -viewDir, vBumpUV);\n\treturn normalize(TBN * map);\n}\n#endif\n\n#ifdef CLIPPLANE\nvarying float fClipDistance;\n#endif\n\n// Fog\n#ifdef FOG\n\n#define FOGMODE_NONE    0.\n#define FOGMODE_EXP     1.\n#define FOGMODE_EXP2    2.\n#define FOGMODE_LINEAR  3.\n#define E 2.71828\n\nuniform vec4 vFogInfos;\nuniform vec3 vFogColor;\nvarying float fFogDistance;\n\nfloat CalcFogFactor()\n{\n\tfloat fogCoeff = 1.0;\n\tfloat fogStart = vFogInfos.y;\n\tfloat fogEnd = vFogInfos.z;\n\tfloat fogDensity = vFogInfos.w;\n\n\tif (FOGMODE_LINEAR == vFogInfos.x)\n\t{\n\t\tfogCoeff = (fogEnd - fFogDistance) / (fogEnd - fogStart);\n\t}\n\telse if (FOGMODE_EXP == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fogDensity);\n\t}\n\telse if (FOGMODE_EXP2 == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fFogDistance * fogDensity * fogDensity);\n\t}\n\n\treturn clamp(fogCoeff, 0.0, 1.0);\n}\n#endif\n\n// Light Computing\nstruct lightingInfo\n{\n\tvec3 diffuse;\n\tvec3 specular;\n};\n\nlightingInfo computeLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec3 diffuseColor, vec3 specularColor) {\n\tlightingInfo result;\n\n\tvec3 lightVectorW;\n\tif (lightData.w == 0.)\n\t{\n\t\tlightVectorW = normalize(lightData.xyz - vPositionW);\n\t}\n\telse\n\t{\n\t\tlightVectorW = normalize(-lightData.xyz);\n\t}\n\n\t// diffuse\n\tfloat ndl = max(0., dot(vNormal, lightVectorW));\n\n\t// Specular\n\tvec3 angleW = normalize(viewDirectionW + lightVectorW);\n\tfloat specComp = max(0., dot(vNormal, angleW));\n\tspecComp = pow(specComp, vSpecularColor.a);\n\n\tresult.diffuse = ndl * diffuseColor;\n\tresult.specular = specComp * specularColor;\n\n\treturn result;\n}\n\nlightingInfo computeSpotLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec4 lightDirection, vec3 diffuseColor, vec3 specularColor) {\n\tlightingInfo result;\n\n\tvec3 lightVectorW = normalize(lightData.xyz - vPositionW);\n\n\t// diffuse\n\tfloat cosAngle = max(0., dot(-lightDirection.xyz, lightVectorW));\n\tfloat spotAtten = 0.0;\n\n\tif (cosAngle >= lightDirection.w)\n\t{\n\t\tcosAngle = max(0., pow(cosAngle, lightData.w));\n\t\tspotAtten = max(0., (cosAngle - lightDirection.w) / (1. - cosAngle));\n\n\t\t// Diffuse\n\t\tfloat ndl = max(0., dot(vNormal, -lightDirection.xyz));\n\n\t\t// Specular\n\t\tvec3 angleW = normalize(viewDirectionW - lightDirection.xyz);\n\t\tfloat specComp = max(0., dot(vNormal, angleW));\n\t\tspecComp = pow(specComp, vSpecularColor.a);\n\n\t\tresult.diffuse = ndl * spotAtten * diffuseColor;\n\t\tresult.specular = specComp * specularColor * spotAtten;\n\n\t\treturn result;\n\t}\n\n\tresult.diffuse = vec3(0.);\n\tresult.specular = vec3(0.);\n\n\treturn result;\n}\n\nlightingInfo computeHemisphericLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec3 diffuseColor, vec3 specularColor, vec3 groundColor) {\n\tlightingInfo result;\n\n\t// Diffuse\n\tfloat ndl = dot(vNormal, lightData.xyz) * 0.5 + 0.5;\n\n\t// Specular\n\tvec3 angleW = normalize(viewDirectionW + lightData.xyz);\n\tfloat specComp = max(0., dot(vNormal, angleW));\n\tspecComp = pow(specComp, vSpecularColor.a);\n\n\tresult.diffuse = mix(groundColor, diffuseColor, ndl);\n\tresult.specular = specComp * specularColor;\n\n\treturn result;\n}\n\nvoid main(void) {\n\t// Clip plane\n#ifdef CLIPPLANE\n\tif (fClipDistance > 0.0)\n\t\tdiscard;\n#endif\n\n\tvec3 viewDirectionW = normalize(vEyePosition - vPositionW);\n\n\t// Base color\n\tvec4 baseColor = vec4(1., 1., 1., 1.);\n\tvec3 diffuseColor = vDiffuseColor.rgb;\n\n#ifdef VERTEXCOLOR\n\tdiffuseColor *= vColor;\n#endif\n\n#ifdef DIFFUSE\n\tbaseColor = texture2D(diffuseSampler, vDiffuseUV);\n\n#ifdef ALPHATEST\n\tif (baseColor.a < 0.4)\n\t\tdiscard;\n#endif\n\n\tbaseColor.rgb *= vDiffuseInfos.y;\n#endif\n\n\t// Bump\n\tvec3 normalW = vNormalW;\n\n#ifdef BUMP\n\tnormalW = perturbNormal(viewDirectionW);\n#endif\n\n\t// Ambient color\n\tvec3 baseAmbientColor = vec3(1., 1., 1.);\n\n#ifdef AMBIENT\n\tbaseAmbientColor = texture2D(ambientSampler, vAmbientUV).rgb * vAmbientInfos.y;\n#endif\n\n\t// Lighting\n\tvec3 diffuseBase = vec3(0., 0., 0.);\n\tvec3 specularBase = vec3(0., 0., 0.);\n\tfloat shadow = 1.;\n\n#ifdef LIGHT0\n#ifdef SPOTLIGHT0\n\tlightingInfo info = computeSpotLighting(viewDirectionW, normalW, vLightData0, vLightDirection0, vLightDiffuse0, vLightSpecular0);\n#endif\n#ifdef HEMILIGHT0\n\tlightingInfo info = computeHemisphericLighting(viewDirectionW, normalW, vLightData0, vLightDiffuse0, vLightSpecular0, vLightGround0);\n#endif\n#ifdef POINTDIRLIGHT0\n\tlightingInfo info = computeLighting(viewDirectionW, normalW, vLightData0, vLightDiffuse0, vLightSpecular0);\n#endif\n#ifdef SHADOW0\n#ifdef SHADOWVSM0\n\tshadow = computeShadowWithVSM(vPositionFromLight0, shadowSampler0);\n#else\n\tshadow = computeShadow(vPositionFromLight0, shadowSampler0);\n#endif\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info.diffuse * shadow;\n\tspecularBase += info.specular * shadow;\n#endif\n\n#ifdef LIGHT1\n#ifdef SPOTLIGHT1\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData1, vLightDirection1, vLightDiffuse1, vLightSpecular1);\n#endif\n#ifdef HEMILIGHT1\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData1, vLightDiffuse1, vLightSpecular1, vLightGround1);\n#endif\n#ifdef POINTDIRLIGHT1\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData1, vLightDiffuse1, vLightSpecular1);\n#endif\n#ifdef SHADOW1\n#ifdef SHADOWVSM1\n\tshadow = computeShadowWithVSM(vPositionFromLight1, shadowSampler1);\n#else\n\tshadow = computeShadow(vPositionFromLight1, shadowSampler1);\n#endif\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info.diffuse * shadow;\n\tspecularBase += info.specular * shadow;\n#endif\n\n#ifdef LIGHT2\n#ifdef SPOTLIGHT2\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData2, vLightDirection2, vLightDiffuse2, vLightSpecular2);\n#endif\n#ifdef HEMILIGHT2\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData2, vLightDiffuse2, vLightSpecular2, vLightGround2);\n#endif\n#ifdef POINTDIRLIGHT2\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData2, vLightDiffuse2, vLightSpecular2);\n#endif\n#ifdef SHADOW2\n#ifdef SHADOWVSM2\n\tshadow = computeShadowWithVSM(vPositionFromLight2, shadowSampler2);\n#else\n\tshadow = computeShadow(vPositionFromLight2, shadowSampler2);\n#endif\t\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info.diffuse * shadow;\n\tspecularBase += info.specular * shadow;\n#endif\n\n#ifdef LIGHT3\n#ifdef SPOTLIGHT3\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData3, vLightDirection3, vLightDiffuse3, vLightSpecular3);\n#endif\n#ifdef HEMILIGHT3\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData3, vLightDiffuse3, vLightSpecular3, vLightGround3);\n#endif\n#ifdef POINTDIRLIGHT3\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData3, vLightDiffuse3, vLightSpecular3);\n#endif\n#ifdef SHADOW3\n#ifdef SHADOWVSM3\n\tshadow = computeShadowWithVSM(vPositionFromLight3, shadowSampler3);\n#else\n\tshadow = computeShadow(vPositionFromLight3, shadowSampler3);\n#endif\t\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info.diffuse * shadow;\n\tspecularBase += info.specular * shadow;\n#endif\n\n\t// Reflection\n\tvec3 reflectionColor = vec3(0., 0., 0.);\n\n#ifdef REFLECTION\n\tvec3 vReflectionUVW = computeReflectionCoords(vReflectionInfos.x, vec4(vPositionW, 1.0), normalW);\n\n\tif (vReflectionInfos.z != 0.0)\n\t{\n\t\treflectionColor = textureCube(reflectionCubeSampler, vReflectionUVW).rgb * vReflectionInfos.y;\n\t}\n\telse\n\t{\n\t\tvec2 coords = vReflectionUVW.xy;\n\n\t\tif (vReflectionInfos.x == MAP_PROJECTION)\n\t\t{\n\t\t\tcoords /= vReflectionUVW.z;\n\t\t}\n\n\t\tcoords.y = 1.0 - coords.y;\n\n\t\treflectionColor = texture2D(reflection2DSampler, coords).rgb * vReflectionInfos.y;\n\t}\n#endif\n\n\t// Alpha\n\tfloat alpha = vDiffuseColor.a;\n\n#ifdef OPACITY\n\tvec4 opacityMap = texture2D(opacitySampler, vOpacityUV);\n\topacityMap.rgb = opacityMap.rgb * vec3(0.3, 0.59, 0.11) * opacityMap.a;\n\talpha *= (opacityMap.x + opacityMap.y + opacityMap.z)* vOpacityInfos.y;\n#endif\n\n\t// Emissive\n\tvec3 emissiveColor = vEmissiveColor;\n#ifdef EMISSIVE\n\temissiveColor += texture2D(emissiveSampler, vEmissiveUV).rgb * vEmissiveInfos.y;\n#endif\n\n\t// Specular map\n\tvec3 specularColor = vSpecularColor.rgb;\n#ifdef SPECULAR\n\tspecularColor = texture2D(specularSampler, vSpecularUV).rgb * vSpecularInfos.y;\n#endif\n\n\t// Composition\n\tvec3 finalDiffuse = clamp(diffuseBase * diffuseColor + emissiveColor + vAmbientColor, 0.0, 1.0) * baseColor.rgb;\n\tvec3 finalSpecular = specularBase * specularColor;\n\n\tvec4 color = vec4(finalDiffuse * baseAmbientColor + finalSpecular + reflectionColor, alpha);\n\n#ifdef FOG\n\tfloat fog = CalcFogFactor();\n\tcolor.rgb = fog * color.rgb + (1.0 - fog) * vFogColor;\n#endif\n\n\tgl_FragColor = color;\n}");
	_g.set("defaultVertexShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec3 position;\nattribute vec3 normal;\n#ifdef UV1\nattribute vec2 uv;\n#endif\n#ifdef UV2\nattribute vec2 uv2;\n#endif\n#ifdef VERTEXCOLOR\nattribute vec3 color;\n#endif\n#ifdef BONES\nattribute vec4 matricesIndices;\nattribute vec4 matricesWeights;\n#endif\n\n// Uniforms\nuniform mat4 world;\nuniform mat4 view;\nuniform mat4 viewProjection;\n\n#ifdef DIFFUSE\nvarying vec2 vDiffuseUV;\nuniform mat4 diffuseMatrix;\nuniform vec2 vDiffuseInfos;\n#endif\n\n#ifdef AMBIENT\nvarying vec2 vAmbientUV;\nuniform mat4 ambientMatrix;\nuniform vec2 vAmbientInfos;\n#endif\n\n#ifdef OPACITY\nvarying vec2 vOpacityUV;\nuniform mat4 opacityMatrix;\nuniform vec2 vOpacityInfos;\n#endif\n\n#ifdef EMISSIVE\nvarying vec2 vEmissiveUV;\nuniform vec2 vEmissiveInfos;\nuniform mat4 emissiveMatrix;\n#endif\n\n#ifdef SPECULAR\nvarying vec2 vSpecularUV;\nuniform vec2 vSpecularInfos;\nuniform mat4 specularMatrix;\n#endif\n\n#ifdef BUMP\nvarying vec2 vBumpUV;\nuniform vec2 vBumpInfos;\nuniform mat4 bumpMatrix;\n#endif\n\n#ifdef BONES\nuniform mat4 mBones[BonesPerMesh];\n#endif\n\n// Output\nvarying vec3 vPositionW;\nvarying vec3 vNormalW;\n\n#ifdef VERTEXCOLOR\nvarying vec3 vColor;\n#endif\n\n#ifdef CLIPPLANE\nuniform vec4 vClipPlane;\nvarying float fClipDistance;\n#endif\n\n#ifdef FOG\nvarying float fFogDistance;\n#endif\n\n#ifdef SHADOWS\n#ifdef LIGHT0\nuniform mat4 lightMatrix0;\nvarying vec4 vPositionFromLight0;\n#endif\n#ifdef LIGHT1\nuniform mat4 lightMatrix1;\nvarying vec4 vPositionFromLight1;\n#endif\n#ifdef LIGHT2\nuniform mat4 lightMatrix2;\nvarying vec4 vPositionFromLight2;\n#endif\n#ifdef LIGHT3\nuniform mat4 lightMatrix3;\nvarying vec4 vPositionFromLight3;\n#endif\n#endif\n\n#ifdef REFLECTION\nvarying vec3 vPositionUVW;\n#endif\n\nvoid main(void) {\n\tmat4 finalWorld;\n\n#ifdef REFLECTION\n\tvPositionUVW = position;\n#endif \n\n#ifdef BONES\n\tmat4 m0 = mBones[int(matricesIndices.x)] * matricesWeights.x;\n\tmat4 m1 = mBones[int(matricesIndices.y)] * matricesWeights.y;\n\tmat4 m2 = mBones[int(matricesIndices.z)] * matricesWeights.z;\n\n#ifdef BONES4\n\tmat4 m3 = mBones[int(matricesIndices.w)] * matricesWeights.w;\n\tfinalWorld = world * (m0 + m1 + m2 + m3);\n#else\n\tfinalWorld = world * (m0 + m1 + m2);\n#endif \n\n#else\n\tfinalWorld = world;\n#endif\n\tgl_Position = viewProjection * finalWorld * vec4(position, 1.0);\n\n\tvec4 worldPos = finalWorld * vec4(position, 1.0);\n\tvPositionW = vec3(worldPos);\n\tvNormalW = normalize(vec3(finalWorld * vec4(normal, 0.0)));\n\n\t// Texture coordinates\n#ifndef UV1\n\tvec2 uv = vec2(0., 0.);\n#endif\n#ifndef UV2\n\tvec2 uv2 = vec2(0., 0.);\n#endif\n\n#ifdef DIFFUSE\n\tif (vDiffuseInfos.x == 0.)\n\t{\n\t\tvDiffuseUV = vec2(diffuseMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvDiffuseUV = vec2(diffuseMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef AMBIENT\n\tif (vAmbientInfos.x == 0.)\n\t{\n\t\tvAmbientUV = vec2(ambientMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvAmbientUV = vec2(ambientMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef OPACITY\n\tif (vOpacityInfos.x == 0.)\n\t{\n\t\tvOpacityUV = vec2(opacityMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvOpacityUV = vec2(opacityMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef EMISSIVE\n\tif (vEmissiveInfos.x == 0.)\n\t{\n\t\tvEmissiveUV = vec2(emissiveMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvEmissiveUV = vec2(emissiveMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef SPECULAR\n\tif (vSpecularInfos.x == 0.)\n\t{\n\t\tvSpecularUV = vec2(specularMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvSpecularUV = vec2(specularMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef BUMP\n\tif (vBumpInfos.x == 0.)\n\t{\n\t\tvBumpUV = vec2(bumpMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvBumpUV = vec2(bumpMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n\t// Clip plane\n#ifdef CLIPPLANE\n\tfClipDistance = dot(worldPos, vClipPlane);\n#endif\n\n\t// Fog\n#ifdef FOG\n\tfFogDistance = (view * worldPos).z;\n#endif\n\n\t// Shadows\n#ifdef SHADOWS\n#ifdef LIGHT0\n\tvPositionFromLight0 = lightMatrix0 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT1\n\tvPositionFromLight1 = lightMatrix1 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT2\n\tvPositionFromLight2 = lightMatrix2 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT3\n\tvPositionFromLight3 = lightMatrix3 * vec4(position, 1.0);\n#endif\n#endif\n\n\t// Vertex color\n#ifdef VERTEXCOLOR\n\tvColor = color;\n#endif\n}");
	_g.set("fxaaPixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n#define FXAA_REDUCE_MIN   (1.0/128.0)\n#define FXAA_REDUCE_MUL   (1.0/8.0)\n#define FXAA_SPAN_MAX     8.0\n\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\nuniform vec2 texelSize;\n\nvoid main(){\n\tvec2 localTexelSize = texelSize;\n\tvec3 rgbNW = texture2D(textureSampler, (vUV + vec2(-1.0, -1.0) * localTexelSize)).xyz;\n\tvec3 rgbNE = texture2D(textureSampler, (vUV + vec2(1.0, -1.0) * localTexelSize)).xyz;\n\tvec3 rgbSW = texture2D(textureSampler, (vUV + vec2(-1.0, 1.0) * localTexelSize)).xyz;\n\tvec3 rgbSE = texture2D(textureSampler, (vUV + vec2(1.0, 1.0) * localTexelSize)).xyz;\n\tvec3 rgbM = texture2D(textureSampler, vUV ).xyz;\n\tvec3 luma = vec3(0.299, 0.587, 0.114);\n\tfloat lumaNW = dot(rgbNW, luma);\n\tfloat lumaNE = dot(rgbNE, luma);\n\tfloat lumaSW = dot(rgbSW, luma);\n\tfloat lumaSE = dot(rgbSE, luma);\n\tfloat lumaM = dot(rgbM, luma);\n\tfloat lumaMin = min(lumaM, min(min(lumaNW, lumaNE), min(lumaSW, lumaSE)));\n\tfloat lumaMax = max(lumaM, max(max(lumaNW, lumaNE), max(lumaSW, lumaSE)));\n\n\tvec2 dir = vec2(-((lumaNW + lumaNE) - (lumaSW + lumaSE)), ((lumaNW + lumaSW) - (lumaNE + lumaSE)));\n\n\tfloat dirReduce = max(\n\t\t(lumaNW + lumaNE + lumaSW + lumaSE) * (0.25 * FXAA_REDUCE_MUL),\n\t\tFXAA_REDUCE_MIN);\n\n\tfloat rcpDirMin = 1.0 / (min(abs(dir.x), abs(dir.y)) + dirReduce);\n\tdir = min(vec2(FXAA_SPAN_MAX, FXAA_SPAN_MAX),\n\t\tmax(vec2(-FXAA_SPAN_MAX, -FXAA_SPAN_MAX),\n\t\tdir * rcpDirMin)) * localTexelSize;\n\n\tvec3 rgbA = 0.5 * (\n\t\ttexture2D(textureSampler, vUV + dir * (1.0 / 3.0 - 0.5)).xyz +\n\t\ttexture2D(textureSampler, vUV + dir * (2.0 / 3.0 - 0.5)).xyz);\n\n\tvec3 rgbB = rgbA * 0.5 + 0.25 * (\n\t\ttexture2D(textureSampler, vUV + dir *  -0.5).xyz +\n\t\ttexture2D(textureSampler, vUV + dir * 0.5).xyz);\n\tfloat lumaB = dot(rgbB, luma);\n\tif ((lumaB < lumaMin) || (lumaB > lumaMax)) {\n\t\tgl_FragColor = vec4(rgbA, 1.0);\n\t}\n\telse {\n\t\tgl_FragColor = vec4(rgbB, 1.0);\n\t}\n}");
	_g.set("iedefaultPixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n#define MAP_PROJECTION\t4.\n\n// Constants\nuniform vec3 vEyePosition;\nuniform vec3 vAmbientColor;\nuniform vec4 vDiffuseColor;\nuniform vec4 vSpecularColor;\nuniform vec3 vEmissiveColor;\n\n// Input\nvarying vec3 vPositionW;\nvarying vec3 vNormalW;\n\n#ifdef VERTEXCOLOR\nvarying vec3 vColor;\n#endif\n\n// Lights\n#ifdef LIGHT0\nuniform vec4 vLightData0;\nuniform vec3 vLightDiffuse0;\nuniform vec3 vLightSpecular0;\n#ifdef SHADOW0\nvarying vec4 vPositionFromLight0;\nuniform sampler2D shadowSampler0;\n#endif\n#ifdef SPOTLIGHT0\nuniform vec4 vLightDirection0;\n#endif\n#ifdef HEMILIGHT0\nuniform vec3 vLightGround0;\n#endif\n#endif\n\n#ifdef LIGHT1\nuniform vec4 vLightData1;\nuniform vec3 vLightDiffuse1;\nuniform vec3 vLightSpecular1;\n#ifdef SHADOW1\nvarying vec4 vPositionFromLight1;\nuniform sampler2D shadowSampler1;\n#endif\n#ifdef SPOTLIGHT1\nuniform vec4 vLightDirection1;\n#endif\n#ifdef HEMILIGHT1\nuniform vec3 vLightGround1;\n#endif\n#endif\n\n#ifdef LIGHT2\nuniform vec4 vLightData2;\nuniform vec3 vLightDiffuse2;\nuniform vec3 vLightSpecular2;\n#ifdef SHADOW2\nvarying vec4 vPositionFromLight2;\nuniform sampler2D shadowSampler2;\n#endif\n#ifdef SPOTLIGHT2\nuniform vec4 vLightDirection2;\n#endif\n#ifdef HEMILIGHT2\nuniform vec3 vLightGround2;\n#endif\n#endif\n\n#ifdef LIGHT3\nuniform vec4 vLightData3;\nuniform vec3 vLightDiffuse3;\nuniform vec3 vLightSpecular3;\n#ifdef SHADOW3\nvarying vec4 vPositionFromLight3;\nuniform sampler2D shadowSampler3;\n#endif\n#ifdef SPOTLIGHT3\nuniform vec4 vLightDirection3;\n#endif\n#ifdef HEMILIGHT3\nuniform vec3 vLightGround3;\n#endif\n#endif\n\n// Samplers\n#ifdef DIFFUSE\nvarying vec2 vDiffuseUV;\nuniform sampler2D diffuseSampler;\nuniform vec2 vDiffuseInfos;\n#endif\n\n#ifdef AMBIENT\nvarying vec2 vAmbientUV;\nuniform sampler2D ambientSampler;\nuniform vec2 vAmbientInfos;\n#endif\n\n#ifdef OPACITY\t\nvarying vec2 vOpacityUV;\nuniform sampler2D opacitySampler;\nuniform vec2 vOpacityInfos;\n#endif\n\n#ifdef REFLECTION\nvarying vec3 vReflectionUVW;\nuniform samplerCube reflectionCubeSampler;\nuniform sampler2D reflection2DSampler;\nuniform vec3 vReflectionInfos;\n#endif\n\n#ifdef EMISSIVE\nvarying vec2 vEmissiveUV;\nuniform vec2 vEmissiveInfos;\nuniform sampler2D emissiveSampler;\n#endif\n\n#ifdef SPECULAR\nvarying vec2 vSpecularUV;\nuniform vec2 vSpecularInfos;\nuniform sampler2D specularSampler;\n#endif\n\n// Shadows\n#ifdef SHADOWS\n\nfloat unpack(vec4 color)\n{\n\tconst vec4 bitShift = vec4(1. / (255. * 255. * 255.), 1. / (255. * 255.), 1. / 255., 1.);\n\treturn dot(color, bitShift);\n}\n\nfloat unpackHalf(vec2 color)\n{\n\treturn color.x + (color.y / 255.0);\n}\n\nfloat computeShadow(vec4 vPositionFromLight, sampler2D shadowSampler)\n{\n\tvec3 depth = vPositionFromLight.xyz / vPositionFromLight.w;\n\tvec2 uv = 0.5 * depth.xy + vec2(0.5, 0.5);\n\n\tif (uv.x < 0. || uv.x > 1.0 || uv.y < 0. || uv.y > 1.0)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tfloat shadow = unpack(texture2D(shadowSampler, uv));\n\n\tif (depth.z > shadow)\n\t{\n\t\treturn 0.;\n\t}\n\treturn 1.;\n}\n\n// Thanks to http://devmaster.net/\nfloat ChebychevInequality(vec2 moments, float t)\n{\n\tif (t <= moments.x)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tfloat variance = moments.y - (moments.x * moments.x);\n\tvariance = max(variance, 0.);\n\n\tfloat d = t - moments.x;\n\treturn variance / (variance + d * d);\n}\n\nfloat computeShadowWithVSM(vec4 vPositionFromLight, sampler2D shadowSampler)\n{\n\tvec3 depth = vPositionFromLight.xyz / vPositionFromLight.w;\n\tvec2 uv = 0.5 * depth.xy + vec2(0.5, 0.5);\n\n\tif (uv.x < 0. || uv.x > 1.0 || uv.y < 0. || uv.y > 1.0)\n\t{\n\t\treturn 1.0;\n\t}\n\n\tvec4 texel = texture2D(shadowSampler, uv);\n\n\tvec2 moments = vec2(unpackHalf(texel.xy), unpackHalf(texel.zw));\n\treturn clamp(1.3 - ChebychevInequality(moments, depth.z), 0., 1.0);\n}\n#endif\n\n#ifdef CLIPPLANE\nvarying float fClipDistance;\n#endif\n\n// Fog\n#ifdef FOG\n\n#define FOGMODE_NONE    0.\n#define FOGMODE_EXP     1.\n#define FOGMODE_EXP2    2.\n#define FOGMODE_LINEAR  3.\n#define E 2.71828\n\nuniform vec4 vFogInfos;\nuniform vec3 vFogColor;\nvarying float fFogDistance;\n\nfloat CalcFogFactor()\n{\n\tfloat fogCoeff = 1.0;\n\tfloat fogStart = vFogInfos.y;\n\tfloat fogEnd = vFogInfos.z;\n\tfloat fogDensity = vFogInfos.w;\n\n\tif (FOGMODE_LINEAR == vFogInfos.x)\n\t{\n\t\tfogCoeff = (fogEnd - fFogDistance) / (fogEnd - fogStart);\n\t}\n\telse if (FOGMODE_EXP == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fogDensity);\n\t}\n\telse if (FOGMODE_EXP2 == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fFogDistance * fogDensity * fogDensity);\n\t}\n\n\treturn clamp(fogCoeff, 0.0, 1.0);\n}\n#endif\n\n// Light Computing\nmat3 computeLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec3 diffuseColor, vec3 specularColor) {\n\tmat3 result;\n\n\tvec3 lightVectorW;\n\tif (lightData.w == 0.)\n\t{\n\t\tlightVectorW = normalize(lightData.xyz - vPositionW);\n\t}\n\telse\n\t{\n\t\tlightVectorW = normalize(-lightData.xyz);\n\t}\n\n\t// diffuse\n\tfloat ndl = max(0., dot(vNormal, lightVectorW));\n\n\t// Specular\n\tvec3 angleW = normalize(viewDirectionW + lightVectorW);\n\tfloat specComp = max(0., dot(vNormal, angleW));\n\tspecComp = max(0., pow(specComp, max(1.0, vSpecularColor.a)));\n\n\tresult[0] = ndl * diffuseColor;\n\tresult[1] = specComp * specularColor;\n\tresult[2] = vec3(0.);\n\n\treturn result;\n}\n\nmat3 computeSpotLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec4 lightDirection, vec3 diffuseColor, vec3 specularColor) {\n\tmat3 result;\n\n\tvec3 lightVectorW = normalize(lightData.xyz - vPositionW);\n\n\t// diffuse\n\tfloat cosAngle = max(0., dot(-lightDirection.xyz, lightVectorW));\n\tfloat spotAtten = 0.0;\n\n\tif (cosAngle >= lightDirection.w)\n\t{\n\t\tcosAngle = max(0., pow(cosAngle, lightData.w));\n\t\tspotAtten = max(0., (cosAngle - lightDirection.w) / (1. - cosAngle));\n\n\t\t// Diffuse\n\t\tfloat ndl = max(0., dot(vNormal, -lightDirection.xyz));\n\n\t\t// Specular\n\t\tvec3 angleW = normalize(viewDirectionW - lightDirection.xyz);\n\t\tfloat specComp = max(0., dot(vNormal, angleW));\n\t\tspecComp = pow(specComp, vSpecularColor.a);\n\n\t\tresult[0] = ndl * spotAtten * diffuseColor;\n\t\tresult[1] = specComp * specularColor * spotAtten;\n\t\tresult[2] = vec3(0.);\n\n\t\treturn result;\n\t}\n\n\tresult[0] = vec3(0.);\n\tresult[1] = vec3(0.);\n\tresult[2] = vec3(0.);\n\n\treturn result;\n}\n\nmat3 computeHemisphericLighting(vec3 viewDirectionW, vec3 vNormal, vec4 lightData, vec3 diffuseColor, vec3 specularColor, vec3 groundColor) {\n\tmat3 result;\n\n\t// Diffuse\n\tfloat ndl = dot(vNormal, lightData.xyz) * 0.5 + 0.5;\n\n\t// Specular\n\tvec3 angleW = normalize(viewDirectionW + lightData.xyz);\n\tfloat specComp = max(0., dot(vNormal, angleW));\n\tspecComp = pow(specComp, vSpecularColor.a);\n\n\tresult[0] = mix(groundColor, diffuseColor, ndl);\n\tresult[1] = specComp * specularColor;\n\tresult[2] = vec3(0.);\n\n\treturn result;\n}\n\nvoid main(void) {\n\t// Clip plane\n#ifdef CLIPPLANE\n\tif (fClipDistance > 0.0)\n\t\tdiscard;\n#endif\n\n\tvec3 viewDirectionW = normalize(vEyePosition - vPositionW);\n\n\t// Base color\n\tvec4 baseColor = vec4(1., 1., 1., 1.);\n\tvec3 diffuseColor = vDiffuseColor.rgb;\n\n#ifdef VERTEXCOLOR\n\tdiffuseColor *= vColor;\n#endif\n\n#ifdef DIFFUSE\n\tbaseColor = texture2D(diffuseSampler, vDiffuseUV);\n\n#ifdef ALPHATEST\n\tif (baseColor.a < 0.4)\n\t\tdiscard;\n#endif\n\n\tbaseColor.rgb *= vDiffuseInfos.y;\n#endif\n\n\t// Bump\n\tvec3 normalW = vNormalW;\n\n\t// Ambient color\n\tvec3 baseAmbientColor = vec3(1., 1., 1.);\n\n#ifdef AMBIENT\n\tbaseAmbientColor = texture2D(ambientSampler, vAmbientUV).rgb * vAmbientInfos.y;\n#endif\n\n\t// Lighting\n\tvec3 diffuseBase = vec3(0., 0., 0.);\n\tvec3 specularBase = vec3(0., 0., 0.);\n\tfloat shadow = 1.;\n\n#ifdef LIGHT0\n#ifdef SPOTLIGHT0\n\tmat3 info = computeSpotLighting(viewDirectionW, normalW, vLightData0, vLightDirection0, vLightDiffuse0, vLightSpecular0);\n#endif\n#ifdef HEMILIGHT0\n\tmat3 info = computeHemisphericLighting(viewDirectionW, normalW, vLightData0, vLightDiffuse0, vLightSpecular0, vLightGround0);\n#endif\n#ifdef POINTDIRLIGHT0\n\tmat3 info = computeLighting(viewDirectionW, normalW, vLightData0, vLightDiffuse0, vLightSpecular0);\n#endif\n#ifdef SHADOW0\n#ifdef SHADOWVSM0\n\tshadow = computeShadowWithVSM(vPositionFromLight0, shadowSampler0);\n#else\n\tshadow = computeShadow(vPositionFromLight0, shadowSampler0);\n#endif\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info[0] * shadow;\n\tspecularBase += info[1] * shadow;\n#endif\n\n#ifdef LIGHT1\n#ifdef SPOTLIGHT1\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData1, vLightDirection1, vLightDiffuse1, vLightSpecular1);\n#endif\n#ifdef HEMILIGHT1\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData1, vLightDiffuse1, vLightSpecular1, vLightGround1);\n#endif\n#ifdef POINTDIRLIGHT1\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData1, vLightDiffuse1, vLightSpecular1);\n#endif\n#ifdef SHADOW1\n#ifdef SHADOWVSM1\n\tshadow = computeShadowWithVSM(vPositionFromLight1, shadowSampler1);\n#else\n\tshadow = computeShadow(vPositionFromLight1, shadowSampler1);\n#endif\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info[0] * shadow;\n\tspecularBase += info[1] * shadow;\n#endif\n\n#ifdef LIGHT2\n#ifdef SPOTLIGHT2\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData2, vLightDirection2, vLightDiffuse2, vLightSpecular2);\n#endif\n#ifdef HEMILIGHT2\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData2, vLightDiffuse2, vLightSpecular2, vLightGround2);\n#endif\n#ifdef POINTDIRLIGHT2\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData2, vLightDiffuse2, vLightSpecular2);\n#endif\n#ifdef SHADOW2\n#ifdef SHADOWVSM2\n\tshadow = computeShadowWithVSM(vPositionFromLight2, shadowSampler2);\n#else\n\tshadow = computeShadow(vPositionFromLight2, shadowSampler2);\n#endif\t\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info[0] * shadow;\n\tspecularBase += info[1] * shadow;\n#endif\n\n#ifdef LIGHT3\n#ifdef SPOTLIGHT3\n\tinfo = computeSpotLighting(viewDirectionW, normalW, vLightData3, vLightDirection3, vLightDiffuse3, vLightSpecular3);\n#endif\n#ifdef HEMILIGHT3\n\tinfo = computeHemisphericLighting(viewDirectionW, normalW, vLightData3, vLightDiffuse3, vLightSpecular3, vLightGround3);\n#endif\n#ifdef POINTDIRLIGHT3\n\tinfo = computeLighting(viewDirectionW, normalW, vLightData3, vLightDiffuse3, vLightSpecular3);\n#endif\n#ifdef SHADOW3\n#ifdef SHADOWVSM3\n\tshadow = computeShadowWithVSM(vPositionFromLight3, shadowSampler3);\n#else\n\tshadow = computeShadow(vPositionFromLight3, shadowSampler3);\n#endif\t\n#else\n\tshadow = 1.;\n#endif\n\tdiffuseBase += info[0] * shadow;\n\tspecularBase += info[1] * shadow;\n#endif\n\n\t// Reflection\n\tvec3 reflectionColor = vec3(0., 0., 0.);\n\n#ifdef REFLECTION\n\tif (vReflectionInfos.z != 0.0)\n\t{\n\t\treflectionColor = textureCube(reflectionCubeSampler, vReflectionUVW).rgb * vReflectionInfos.y;\n\t}\n\telse\n\t{\n\t\tvec2 coords = vReflectionUVW.xy;\n\n\t\tif (vReflectionInfos.x == MAP_PROJECTION)\n\t\t{\n\t\t\tcoords /= vReflectionUVW.z;\n\t\t}\n\n\t\tcoords.y = 1.0 - coords.y;\n\n\t\treflectionColor = texture2D(reflection2DSampler, coords).rgb * vReflectionInfos.y;\n\t}\n#endif\n\n\t// Alpha\n\tfloat alpha = vDiffuseColor.a;\n\n#ifdef OPACITY\n\tvec4 opacityMap = texture2D(opacitySampler, vOpacityUV);\n\topacityMap.rgb = opacityMap.rgb * vec3(0.3, 0.59, 0.11) * opacityMap.a;\n\talpha *= (opacityMap.x + opacityMap.y + opacityMap.z)* vOpacityInfos.y;\n#endif\n\n\t// Emissive\n\tvec3 emissiveColor = vEmissiveColor;\n#ifdef EMISSIVE\n\temissiveColor += texture2D(emissiveSampler, vEmissiveUV).rgb * vEmissiveInfos.y;\n#endif\n\n\t// Specular map\n\tvec3 specularColor = vSpecularColor.rgb;\n#ifdef SPECULAR\n\tspecularColor = texture2D(specularSampler, vSpecularUV).rgb * vSpecularInfos.y;\n#endif\n\n\t// Composition\n\tvec3 finalDiffuse = clamp(diffuseBase * diffuseColor + emissiveColor + vAmbientColor, 0.0, 1.0) * baseColor.rgb;\n\tvec3 finalSpecular = specularBase * specularColor;\n\n\tvec4 color = vec4(finalDiffuse * baseAmbientColor + finalSpecular + reflectionColor, alpha);\n\n#ifdef FOG\n\tfloat fog = CalcFogFactor();\n\tcolor.rgb = fog * color.rgb + (1.0 - fog) * vFogColor;\n#endif\n\n\tgl_FragColor = color;\n}");
	_g.set("iedefaultVertexShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n#define MAP_EXPLICIT\t0.\n#define MAP_SPHERICAL\t1.\n#define MAP_PLANAR\t\t2.\n#define MAP_CUBIC\t\t3.\n#define MAP_PROJECTION\t4.\n#define MAP_SKYBOX\t\t5.\n\n// Attributes\nattribute vec3 position;\nattribute vec3 normal;\n#ifdef UV1\nattribute vec2 uv;\n#endif\n#ifdef UV2\nattribute vec2 uv2;\n#endif\n#ifdef VERTEXCOLOR\nattribute vec3 color;\n#endif\n#ifdef BONES\nattribute vec4 matricesIndices;\nattribute vec4 matricesWeights;\n#endif\n\n// Uniforms\nuniform mat4 world;\nuniform mat4 view;\nuniform mat4 viewProjection;\n\n#ifdef DIFFUSE\nvarying vec2 vDiffuseUV;\nuniform mat4 diffuseMatrix;\nuniform vec2 vDiffuseInfos;\n#endif\n\n#ifdef AMBIENT\nvarying vec2 vAmbientUV;\nuniform mat4 ambientMatrix;\nuniform vec2 vAmbientInfos;\n#endif\n\n#ifdef OPACITY\nvarying vec2 vOpacityUV;\nuniform mat4 opacityMatrix;\nuniform vec2 vOpacityInfos;\n#endif\n\n#ifdef REFLECTION\nuniform vec3 vEyePosition;\nvarying vec3 vReflectionUVW;\nuniform vec3 vReflectionInfos;\nuniform mat4 reflectionMatrix;\n#endif\n\n#ifdef EMISSIVE\nvarying vec2 vEmissiveUV;\nuniform vec2 vEmissiveInfos;\nuniform mat4 emissiveMatrix;\n#endif\n\n#ifdef SPECULAR\nvarying vec2 vSpecularUV;\nuniform vec2 vSpecularInfos;\nuniform mat4 specularMatrix;\n#endif\n\n#ifdef BUMP\nvarying vec2 vBumpUV;\nuniform vec2 vBumpInfos;\nuniform mat4 bumpMatrix;\n#endif\n\n#ifdef BONES\nuniform mat4 mBones[BonesPerMesh];\n#endif\n\n// Output\nvarying vec3 vPositionW;\nvarying vec3 vNormalW;\n\n#ifdef VERTEXCOLOR\nvarying vec3 vColor;\n#endif\n\n#ifdef CLIPPLANE\nuniform vec4 vClipPlane;\nvarying float fClipDistance;\n#endif\n\n#ifdef FOG\nvarying float fFogDistance;\n#endif\n\n#ifdef SHADOWS\n#ifdef LIGHT0\nuniform mat4 lightMatrix0;\nvarying vec4 vPositionFromLight0;\n#endif\n#ifdef LIGHT1\nuniform mat4 lightMatrix1;\nvarying vec4 vPositionFromLight1;\n#endif\n#ifdef LIGHT2\nuniform mat4 lightMatrix2;\nvarying vec4 vPositionFromLight2;\n#endif\n#ifdef LIGHT3\nuniform mat4 lightMatrix3;\nvarying vec4 vPositionFromLight3;\n#endif\n#endif\n\n#ifdef REFLECTION\nvec3 computeReflectionCoords(float mode, vec4 worldPos, vec3 worldNormal)\n{\n\tif (mode == MAP_SPHERICAL)\n\t{\n\t\tvec3 coords = vec3(view * vec4(worldNormal, 0.0));\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 1.0));\n\t}\n\telse if (mode == MAP_PLANAR)\n\t{\n\t\tvec3 viewDir = worldPos.xyz - vEyePosition;\n\t\tvec3 coords = normalize(reflect(viewDir, worldNormal));\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 1));\n\t}\n\telse if (mode == MAP_CUBIC)\n\t{\n\t\tvec3 viewDir = worldPos.xyz - vEyePosition;\n\t\tvec3 coords = reflect(viewDir, worldNormal);\n\n\t\treturn vec3(reflectionMatrix * vec4(coords, 0));\n\t}\n\telse if (mode == MAP_PROJECTION)\n\t{\n\t\treturn vec3(reflectionMatrix * (view * worldPos));\n\t}\n\telse if (mode == MAP_SKYBOX)\n\t{\n\t\treturn position;\n\t}\n\n\treturn vec3(0, 0, 0);\n}\n#endif\n\nvoid main(void) {\n\tmat4 finalWorld;\n\n#ifdef BONES\n\tmat4 m0 = mBones[int(matricesIndices.x)] * matricesWeights.x;\n\tmat4 m1 = mBones[int(matricesIndices.y)] * matricesWeights.y;\n\tmat4 m2 = mBones[int(matricesIndices.z)] * matricesWeights.z;\n\n#ifdef BONES4\n\tmat4 m3 = mBones[int(matricesIndices.w)] * matricesWeights.w;\n\tfinalWorld = world * (m0 + m1 + m2 + m3);\n#else\n\tfinalWorld = world * (m0 + m1 + m2);\n#endif \n\n#else\n\tfinalWorld = world;\n#endif\n\n\tgl_Position = viewProjection * finalWorld * vec4(position, 1.0);\n\n\tvec4 worldPos = finalWorld * vec4(position, 1.0);\n\tvPositionW = vec3(worldPos);\n\tvNormalW = normalize(vec3(finalWorld * vec4(normal, 0.0)));\n\n\t// Texture coordinates\n#ifndef UV1\n\tvec2 uv = vec2(0., 0.);\n#endif\n#ifndef UV2\n\tvec2 uv2 = vec2(0., 0.);\n#endif\n\n#ifdef DIFFUSE\n\tif (vDiffuseInfos.x == 0.)\n\t{\n\t\tvDiffuseUV = vec2(diffuseMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvDiffuseUV = vec2(diffuseMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef AMBIENT\n\tif (vAmbientInfos.x == 0.)\n\t{\n\t\tvAmbientUV = vec2(ambientMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvAmbientUV = vec2(ambientMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef OPACITY\n\tif (vOpacityInfos.x == 0.)\n\t{\n\t\tvOpacityUV = vec2(opacityMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvOpacityUV = vec2(opacityMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef REFLECTION\n\tvReflectionUVW = computeReflectionCoords(vReflectionInfos.x, vec4(vPositionW, 1.0), vNormalW);\n#endif\n\n#ifdef EMISSIVE\n\tif (vEmissiveInfos.x == 0.)\n\t{\n\t\tvEmissiveUV = vec2(emissiveMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvEmissiveUV = vec2(emissiveMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef SPECULAR\n\tif (vSpecularInfos.x == 0.)\n\t{\n\t\tvSpecularUV = vec2(specularMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvSpecularUV = vec2(specularMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n#ifdef BUMP\n\tif (vBumpInfos.x == 0.)\n\t{\n\t\tvBumpUV = vec2(bumpMatrix * vec4(uv, 1.0, 0.0));\n\t}\n\telse\n\t{\n\t\tvBumpUV = vec2(bumpMatrix * vec4(uv2, 1.0, 0.0));\n\t}\n#endif\n\n\t// Clip plane\n#ifdef CLIPPLANE\n\tfClipDistance = dot(worldPos, vClipPlane);\n#endif\n\n\t// Fog\n#ifdef FOG\n\tfFogDistance = (view * worldPos).z;\n#endif\n\n\t// Shadows\n#ifdef SHADOWS\n#ifdef LIGHT0\n\tvPositionFromLight0 = lightMatrix0 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT1\n\tvPositionFromLight1 = lightMatrix1 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT2\n\tvPositionFromLight2 = lightMatrix2 * vec4(position, 1.0);\n#endif\n#ifdef LIGHT3\n\tvPositionFromLight3 = lightMatrix3 * vec4(position, 1.0);\n#endif\n#endif\n\n\t// Vertex color\n#ifdef VERTEXCOLOR\n\tvColor = color;\n#endif\n}");
	_g.set("layerPixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\n// Color\nuniform vec4 color;\n\nvoid main(void) {\n\tvec4 baseColor = texture2D(textureSampler, vUV);\n\n\tgl_FragColor = baseColor * color;\n}");
	_g.set("layerVertexShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec2 position;\n\n// Uniforms\nuniform mat4 textureMatrix;\n\n// Output\nvarying vec2 vUV;\n\nconst vec2 madd = vec2(0.5, 0.5);\n\nvoid main(void) {\t\n\n\tvUV = vec2(textureMatrix * vec4(position * madd + madd, 1.0, 0.0));\n\tgl_Position = vec4(position, 0.0, 1.0);\n}");
	_g.set("lensFlarePixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\n// Color\nuniform vec4 color;\n\nvoid main(void) {\n\tvec4 baseColor = texture2D(textureSampler, vUV);\n\n\tgl_FragColor = baseColor * color;\n}");
	_g.set("lensFlareVertexShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec2 position;\n\n// Uniforms\nuniform mat4 viewportMatrix;\n\n// Output\nvarying vec2 vUV;\n\nconst vec2 madd = vec2(0.5, 0.5);\n\nvoid main(void) {\t\n\n\tvUV = position * madd + madd;\n\tgl_Position = viewportMatrix * vec4(position, 0.0, 1.0);\n}");
	_g.set("particlesPixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nvarying vec4 vColor;\nuniform vec4 textureMask;\nuniform sampler2D diffuseSampler;\n\n#ifdef CLIPPLANE\nvarying float fClipDistance;\n#endif\n\nvoid main(void) {\n#ifdef CLIPPLANE\n\tif (fClipDistance > 0.0)\n\t\tdiscard;\n#endif\n\tvec4 baseColor = texture2D(diffuseSampler, vUV);\n\n\tgl_FragColor = (baseColor * textureMask + (vec4(1., 1., 1., 1.) - textureMask)) * vColor;\n}");
	_g.set("particlesVertexShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec3 position;\nattribute vec4 color;\nattribute vec4 options;\n\n// Uniforms\nuniform mat4 view;\nuniform mat4 projection;\n\n// Output\nvarying vec2 vUV;\nvarying vec4 vColor;\n\n#ifdef CLIPPLANE\nuniform vec4 vClipPlane;\nuniform mat4 invView;\nvarying float fClipDistance;\n#endif\n\nvoid main(void) {\t\n\tvec3 viewPos = (view * vec4(position, 1.0)).xyz; \n\tvec3 cornerPos;\n\tfloat size = options.y;\n\tfloat angle = options.x;\n\tvec2 offset = options.zw;\n\n\tcornerPos = vec3(offset.x - 0.5, offset.y  - 0.5, 0.) * size;\n\n\t// Rotate\n\tvec3 rotatedCorner;\n\trotatedCorner.x = cornerPos.x * cos(angle) - cornerPos.y * sin(angle);\n\trotatedCorner.y = cornerPos.x * sin(angle) + cornerPos.y * cos(angle);\n\trotatedCorner.z = 0.;\n\n\t// Position\n\tviewPos += rotatedCorner;\n\tgl_Position = projection * vec4(viewPos, 1.0);   \n\t\n\tvColor = color;\n\tvUV = offset;\n\n\t// Clip plane\n#ifdef CLIPPLANE\n\tvec4 worldPos = invView * vec4(viewPos, 1.0);\n\tfClipDistance = dot(worldPos, vClipPlane);\n#endif\n}");
	_g.set("passPixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\n\nvoid main(void) \n{\n\tgl_FragColor = texture2D(textureSampler, vUV);\n}");
	_g.set("postprocessVertexShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec2 position;\n\n// Output\nvarying vec2 vUV;\n\nconst vec2 madd = vec2(0.5, 0.5);\n\nvoid main(void) {\t\n\n\tvUV = position * madd + madd;\n\tgl_Position = vec4(position, 0.0, 1.0);\n}");
	_g.set("refractionPixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D textureSampler;\nuniform sampler2D refractionSampler;\n\n// Parameters\nuniform vec3 baseColor;\nuniform float depth;\nuniform float colorLevel;\n\nvoid main() {\n\tfloat ref = 1.0 - texture2D(refractionSampler, vUV).r;\n\n\tvec2 uv = vUV - vec2(0.5);\n\tvec2 offset = uv * depth * ref;\n\tvec3 sourceColor = texture2D(textureSampler, vUV - offset).rgb;\n\n\tgl_FragColor = vec4(sourceColor + sourceColor * ref * colorLevel, 1.0);\n}");
	_g.set("shadowMapPixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\nvec4 pack(float depth)\n{\n\tconst vec4 bitOffset = vec4(255. * 255. * 255., 255. * 255., 255., 1.);\n\tconst vec4 bitMask = vec4(0., 1. / 255., 1. / 255., 1. / 255.);\n\t\n\tvec4 comp = fract(depth * bitOffset);\n\tcomp -= comp.xxyz * bitMask;\n\t\n\treturn comp;\n}\n\n// Thanks to http://devmaster.net/\nvec2 packHalf(float depth) \n{ \n\tconst vec2 bitOffset = vec2(1.0 / 255., 0.);\n\tvec2 color = vec2(depth, fract(depth * 255.));\n\n\treturn color - (color.yy * bitOffset);\n}\n\n#ifndef VSM\nvarying vec4 vPosition;\n#endif\n\nvoid main(void)\n{\n#ifdef VSM\n\tfloat moment1 = gl_FragCoord.z / gl_FragCoord.w;\n\tfloat moment2 = moment1 * moment1;\n\tgl_FragColor = vec4(packHalf(moment1), packHalf(moment2));\n#else\n\tgl_FragColor = pack(vPosition.z / vPosition.w);\n#endif\n}");
	_g.set("shadowMapVertexShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attribute\nattribute vec3 position;\n#ifdef BONES\nattribute vec4 matricesIndices;\nattribute vec4 matricesWeights;\n#endif\n\n// Uniform\n#ifdef BONES\nuniform mat4 world;\nuniform mat4 mBones[BonesPerMesh];\nuniform mat4 viewProjection;\n#else\nuniform mat4 worldViewProjection;\n#endif\n\n#ifndef VSM\nvarying vec4 vPosition;\n#endif\n\nvoid main(void)\n{\n#ifdef BONES\n\tmat4 m0 = mBones[int(matricesIndices.x)] * matricesWeights.x;\n\tmat4 m1 = mBones[int(matricesIndices.y)] * matricesWeights.y;\n\tmat4 m2 = mBones[int(matricesIndices.z)] * matricesWeights.z;\n\tmat4 m3 = mBones[int(matricesIndices.w)] * matricesWeights.w;\n\tmat4 finalWorld = world * (m0 + m1 + m2 + m3);\n\tgl_Position = viewProjection * finalWorld * vec4(position, 1.0);\n#else\n#ifndef VSM\n\tvPosition = worldViewProjection * vec4(position, 1.0);\n#endif\n\tgl_Position = worldViewProjection * vec4(position, 1.0);\n#endif\n}");
	_g.set("spritesPixelShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\nuniform bool alphaTest;\n\nvarying vec4 vColor;\n\n// Samplers\nvarying vec2 vUV;\nuniform sampler2D diffuseSampler;\n\n// Fog\n#ifdef FOG\n\n#define FOGMODE_NONE    0.\n#define FOGMODE_EXP     1.\n#define FOGMODE_EXP2    2.\n#define FOGMODE_LINEAR  3.\n#define E 2.71828\n\nuniform vec4 vFogInfos;\nuniform vec3 vFogColor;\nvarying float fFogDistance;\n\nfloat CalcFogFactor()\n{\n\tfloat fogCoeff = 1.0;\n\tfloat fogStart = vFogInfos.y;\n\tfloat fogEnd = vFogInfos.z;\n\tfloat fogDensity = vFogInfos.w;\n\n\tif (FOGMODE_LINEAR == vFogInfos.x)\n\t{\n\t\tfogCoeff = (fogEnd - fFogDistance) / (fogEnd - fogStart);\n\t}\n\telse if (FOGMODE_EXP == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fogDensity);\n\t}\n\telse if (FOGMODE_EXP2 == vFogInfos.x)\n\t{\n\t\tfogCoeff = 1.0 / pow(E, fFogDistance * fFogDistance * fogDensity * fogDensity);\n\t}\n\n\treturn min(1., max(0., fogCoeff));\n}\n#endif\n\n\nvoid main(void) {\n\tvec4 baseColor = texture2D(diffuseSampler, vUV);\n\n\tif (alphaTest) \n\t{\n\t\tif (baseColor.a < 0.95)\n\t\t\tdiscard;\n\t}\n\n\tbaseColor *= vColor;\n\n#ifdef FOG\n\tfloat fog = CalcFogFactor();\n\tbaseColor.rgb = fog * baseColor.rgb + (1.0 - fog) * vFogColor;\n#endif\n\n\tgl_FragColor = baseColor;\n}");
	_g.set("spritesVertexShader","#ifdef GL_ES\nprecision mediump float;\n#endif\n\n// Attributes\nattribute vec3 position;\nattribute vec4 options;\nattribute vec4 cellInfo;\nattribute vec4 color;\n\n// Uniforms\nuniform vec2 textureInfos;\nuniform mat4 view;\nuniform mat4 projection;\n\n// Output\nvarying vec2 vUV;\nvarying vec4 vColor;\n\n#ifdef FOG\nvarying float fFogDistance;\n#endif\n\nvoid main(void) {\t\n\tvec3 viewPos = (view * vec4(position, 1.0)).xyz; \n\tvec3 cornerPos;\n\t\n\tfloat angle = options.x;\n\tfloat size = options.y;\n\tvec2 offset = options.zw;\n\tvec2 uvScale = textureInfos.xy;\n\n\tcornerPos = vec3(offset.x - 0.5, offset.y  - 0.5, 0.) * size;\n\n\t// Rotate\n\tvec3 rotatedCorner;\n\trotatedCorner.x = cornerPos.x * cos(angle) - cornerPos.y * sin(angle);\n\trotatedCorner.y = cornerPos.x * sin(angle) + cornerPos.y * cos(angle);\n\trotatedCorner.z = 0.;\n\n\t// Position\n\tviewPos += rotatedCorner;\n\tgl_Position = projection * vec4(viewPos, 1.0);   \n\n\t// Color\n\tvColor = color;\n\t\n\t// Texture\n\tvec2 uvOffset = vec2(abs(offset.x - cellInfo.x), 1.0 - abs(offset.y - cellInfo.y));\n\n\tvUV = (uvOffset + cellInfo.zw) * uvScale;\n\n\t// Fog\n#ifdef FOG\n\tfFogDistance = viewPos.z;\n#endif\n}");
	$r = _g;
	return $r;
}(this));
com.gamestudiohx.babylonhx.materials.textures.Texture.NEAREST_SAMPLINGMODE = 1;
com.gamestudiohx.babylonhx.materials.textures.Texture.BILINEAR_SAMPLINGMODE = 2;
com.gamestudiohx.babylonhx.materials.textures.Texture.TRILINEAR_SAMPLINGMODE = 3;
com.gamestudiohx.babylonhx.materials.textures.Texture.EXPLICIT_MODE = 0;
com.gamestudiohx.babylonhx.materials.textures.Texture.SPHERICAL_MODE = 1;
com.gamestudiohx.babylonhx.materials.textures.Texture.PLANAR_MODE = 2;
com.gamestudiohx.babylonhx.materials.textures.Texture.CUBIC_MODE = 3;
com.gamestudiohx.babylonhx.materials.textures.Texture.PROJECTION_MODE = 4;
com.gamestudiohx.babylonhx.materials.textures.Texture.SKYBOX_MODE = 5;
com.gamestudiohx.babylonhx.materials.textures.Texture.CLAMP_ADDRESSMODE = 0;
com.gamestudiohx.babylonhx.materials.textures.Texture.WRAP_ADDRESSMODE = 1;
com.gamestudiohx.babylonhx.materials.textures.Texture.MIRROR_ADDRESSMODE = 2;
com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_NONE = 0;
com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_X = 1;
com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_Y = 2;
com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_Z = 4;
com.gamestudiohx.babylonhx.mesh.AbstractMesh.BILLBOARDMODE_ALL = 7;
com.gamestudiohx.babylonhx.mesh.VertexBuffer.PositionKind = "position";
com.gamestudiohx.babylonhx.mesh.VertexBuffer.NormalKind = "normal";
com.gamestudiohx.babylonhx.mesh.VertexBuffer.UVKind = "uv";
com.gamestudiohx.babylonhx.mesh.VertexBuffer.UV2Kind = "uv2";
com.gamestudiohx.babylonhx.mesh.VertexBuffer.ColorKind = "color";
com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesIndicesKind = "matricesIndices";
com.gamestudiohx.babylonhx.mesh.VertexBuffer.MatricesWeightsKind = "matricesWeights";
com.gamestudiohx.babylonhx.particles.ParticleSystem.BLENDMODE_ONEONE = 0;
com.gamestudiohx.babylonhx.particles.ParticleSystem.BLENDMODE_STANDARD = 1;
com.gamestudiohx.babylonhx.rendering.RenderingManager.MAX_RENDERINGGROUPS = 4;
com.gamestudiohx.babylonhx.tools.Axis.X = new com.gamestudiohx.babylonhx.tools.math.Vector3(1,0,0);
com.gamestudiohx.babylonhx.tools.Axis.Y = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,1,0);
com.gamestudiohx.babylonhx.tools.Axis.Z = new com.gamestudiohx.babylonhx.tools.math.Vector3(0,0,1);
com.gamestudiohx.babylonhx.tools.Tools.isDebug = false;
com.gamestudiohx.babylonhx.tools.Tools.fpsRange = 60.0;
com.gamestudiohx.babylonhx.tools.Tools.previousFramesDuration = [];
com.gamestudiohx.babylonhx.tools.Tools.fps = 60.0;
com.gamestudiohx.babylonhx.tools.Tools.deltaTime = 0.0;
haxe.Unserializer.DEFAULT_RESOLVER = Type;
haxe.Unserializer.BASE64 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789%:";
haxe.Unserializer.CODES = null;
haxe.ds.ObjectMap.count = 0;
net.hires.debug.Stats.GRAPH_WIDTH = 100;
net.hires.debug.Stats.XPOS = 98;
net.hires.debug.Stats.GRAPH_HEIGHT = 30;
net.hires.debug.Stats.TEXT_HEIGHT = 30;
net.hires.debug.Colors.bg = 51;
net.hires.debug.Colors.fps = 16776960;
net.hires.debug.Colors.ms = 65280;
net.hires.debug.Colors.mem = 65535;
net.hires.debug.Colors.memmax = 16711792;
net.hires.debug.Colors.bgCSS = "#000033";
net.hires.debug.Colors.fpsCSS = "#ffff00";
net.hires.debug.Colors.msCSS = "#00ff00";
net.hires.debug.Colors.memCSS = "#00ffff";
net.hires.debug.Colors.memmaxCSS = "#ff0070";
openfl.Assets.cache = new openfl.AssetCache();
openfl.Assets.libraries = new haxe.ds.StringMap();
openfl.Assets.dispatcher = new openfl.events.EventDispatcher();
openfl.Assets.initialized = false;
openfl.Lib.__sentWarnings = new haxe.ds.StringMap();
openfl.Lib.__startTime = haxe.Timer.stamp();
openfl.display.BitmapData.__base64Chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
openfl.display.BitmapDataChannel.ALPHA = 8;
openfl.display.BitmapDataChannel.BLUE = 4;
openfl.display.BitmapDataChannel.GREEN = 2;
openfl.display.BitmapDataChannel.RED = 1;
openfl.display._CapsStyle.CapsStyle_Impl_.NONE = "butt";
openfl.display._CapsStyle.CapsStyle_Impl_.ROUND = "round";
openfl.display._CapsStyle.CapsStyle_Impl_.SQUARE = "square";
openfl.display.Graphics.TILE_SCALE = 1;
openfl.display.Graphics.TILE_ROTATION = 2;
openfl.display.Graphics.TILE_RGB = 4;
openfl.display.Graphics.TILE_ALPHA = 8;
openfl.display.Graphics.TILE_TRANS_2x2 = 16;
openfl.display.Graphics.TILE_BLEND_NORMAL = 0;
openfl.display.Graphics.TILE_BLEND_ADD = 65536;
openfl.display._JointStyle.JointStyle_Impl_.MITER = "miter";
openfl.display._JointStyle.JointStyle_Impl_.ROUND = "round";
openfl.display._JointStyle.JointStyle_Impl_.BEVEL = "bevel";
openfl.display.OpenGLView.CONTEXT_LOST = "glcontextlost";
openfl.display.OpenGLView.CONTEXT_RESTORED = "glcontextrestored";
openfl.display._StageQuality.StageQuality_Impl_.BEST = "best";
openfl.display._StageQuality.StageQuality_Impl_.HIGH = "high";
openfl.display._StageQuality.StageQuality_Impl_.MEDIUM = "medium";
openfl.display._StageQuality.StageQuality_Impl_.LOW = "low";
openfl.display.Tilesheet.TILE_SCALE = 1;
openfl.display.Tilesheet.TILE_ROTATION = 2;
openfl.display.Tilesheet.TILE_RGB = 4;
openfl.display.Tilesheet.TILE_ALPHA = 8;
openfl.display.Tilesheet.TILE_TRANS_2x2 = 16;
openfl.display.Tilesheet.TILE_BLEND_NORMAL = 0;
openfl.display.Tilesheet.TILE_BLEND_ADD = 65536;
openfl.display.Tilesheet.TILE_BLEND_MULTIPLY = 131072;
openfl.display.Tilesheet.TILE_BLEND_SCREEN = 262144;
openfl.errors.Error.DEFAULT_TO_STRING = "Error";
openfl.events.Event.ACTIVATE = "activate";
openfl.events.Event.ADDED = "added";
openfl.events.Event.ADDED_TO_STAGE = "addedToStage";
openfl.events.Event.CANCEL = "cancel";
openfl.events.Event.CHANGE = "change";
openfl.events.Event.CLOSE = "close";
openfl.events.Event.COMPLETE = "complete";
openfl.events.Event.CONNECT = "connect";
openfl.events.Event.CONTEXT3D_CREATE = "context3DCreate";
openfl.events.Event.DEACTIVATE = "deactivate";
openfl.events.Event.ENTER_FRAME = "enterFrame";
openfl.events.Event.ID3 = "id3";
openfl.events.Event.INIT = "init";
openfl.events.Event.MOUSE_LEAVE = "mouseLeave";
openfl.events.Event.OPEN = "open";
openfl.events.Event.REMOVED = "removed";
openfl.events.Event.REMOVED_FROM_STAGE = "removedFromStage";
openfl.events.Event.RENDER = "render";
openfl.events.Event.RESIZE = "resize";
openfl.events.Event.SCROLL = "scroll";
openfl.events.Event.SELECT = "select";
openfl.events.Event.TAB_CHILDREN_CHANGE = "tabChildrenChange";
openfl.events.Event.TAB_ENABLED_CHANGE = "tabEnabledChange";
openfl.events.Event.TAB_INDEX_CHANGE = "tabIndexChange";
openfl.events.Event.UNLOAD = "unload";
openfl.events.Event.SOUND_COMPLETE = "soundComplete";
openfl.events.TextEvent.LINK = "link";
openfl.events.TextEvent.TEXT_INPUT = "textInput";
openfl.events.ErrorEvent.ERROR = "error";
openfl.events._EventPhase.EventPhase_Impl_.CAPTURING_PHASE = 0;
openfl.events._EventPhase.EventPhase_Impl_.AT_TARGET = 1;
openfl.events._EventPhase.EventPhase_Impl_.BUBBLING_PHASE = 2;
openfl.events.FocusEvent.FOCUS_IN = "focusIn";
openfl.events.FocusEvent.FOCUS_OUT = "focusOut";
openfl.events.FocusEvent.KEY_FOCUS_CHANGE = "keyFocusChange";
openfl.events.FocusEvent.MOUSE_FOCUS_CHANGE = "mouseFocusChange";
openfl.events.HTTPStatusEvent.HTTP_RESPONSE_STATUS = "httpResponseStatus";
openfl.events.HTTPStatusEvent.HTTP_STATUS = "httpStatus";
openfl.events.IOErrorEvent.IO_ERROR = "ioError";
openfl.events.KeyboardEvent.KEY_DOWN = "keyDown";
openfl.events.KeyboardEvent.KEY_UP = "keyUp";
openfl.events.MouseEvent.CLICK = "click";
openfl.events.MouseEvent.DOUBLE_CLICK = "doubleClick";
openfl.events.MouseEvent.MIDDLE_CLICK = "middleClick";
openfl.events.MouseEvent.MIDDLE_MOUSE_DOWN = "middleMouseDown";
openfl.events.MouseEvent.MIDDLE_MOUSE_UP = "middleMouseUp";
openfl.events.MouseEvent.MOUSE_DOWN = "mouseDown";
openfl.events.MouseEvent.MOUSE_MOVE = "mouseMove";
openfl.events.MouseEvent.MOUSE_OUT = "mouseOut";
openfl.events.MouseEvent.MOUSE_OVER = "mouseOver";
openfl.events.MouseEvent.MOUSE_UP = "mouseUp";
openfl.events.MouseEvent.MOUSE_WHEEL = "mouseWheel";
openfl.events.MouseEvent.RIGHT_CLICK = "rightClick";
openfl.events.MouseEvent.RIGHT_MOUSE_DOWN = "rightMouseDown";
openfl.events.MouseEvent.RIGHT_MOUSE_UP = "rightMouseUp";
openfl.events.MouseEvent.ROLL_OUT = "rollOut";
openfl.events.MouseEvent.ROLL_OVER = "rollOver";
openfl.events.ProgressEvent.PROGRESS = "progress";
openfl.events.ProgressEvent.SOCKET_DATA = "socketData";
openfl.events.SecurityErrorEvent.SECURITY_ERROR = "securityError";
openfl.events.TimerEvent.TIMER = "timer";
openfl.events.TimerEvent.TIMER_COMPLETE = "timerComplete";
openfl.events.TouchEvent.TOUCH_BEGIN = "touchBegin";
openfl.events.TouchEvent.TOUCH_END = "touchEnd";
openfl.events.TouchEvent.TOUCH_MOVE = "touchMove";
openfl.events.TouchEvent.TOUCH_OUT = "touchOut";
openfl.events.TouchEvent.TOUCH_OVER = "touchOver";
openfl.events.TouchEvent.TOUCH_ROLL_OUT = "touchRollOut";
openfl.events.TouchEvent.TOUCH_ROLL_OVER = "touchRollOver";
openfl.events.TouchEvent.TOUCH_TAP = "touchTap";
openfl.geom.Matrix.__identity = new openfl.geom.Matrix();
openfl.gl.GL.DEPTH_BUFFER_BIT = 256;
openfl.gl.GL.STENCIL_BUFFER_BIT = 1024;
openfl.gl.GL.COLOR_BUFFER_BIT = 16384;
openfl.gl.GL.POINTS = 0;
openfl.gl.GL.LINES = 1;
openfl.gl.GL.LINE_LOOP = 2;
openfl.gl.GL.LINE_STRIP = 3;
openfl.gl.GL.TRIANGLES = 4;
openfl.gl.GL.TRIANGLE_STRIP = 5;
openfl.gl.GL.TRIANGLE_FAN = 6;
openfl.gl.GL.ZERO = 0;
openfl.gl.GL.ONE = 1;
openfl.gl.GL.SRC_COLOR = 768;
openfl.gl.GL.ONE_MINUS_SRC_COLOR = 769;
openfl.gl.GL.SRC_ALPHA = 770;
openfl.gl.GL.ONE_MINUS_SRC_ALPHA = 771;
openfl.gl.GL.DST_ALPHA = 772;
openfl.gl.GL.ONE_MINUS_DST_ALPHA = 773;
openfl.gl.GL.DST_COLOR = 774;
openfl.gl.GL.ONE_MINUS_DST_COLOR = 775;
openfl.gl.GL.SRC_ALPHA_SATURATE = 776;
openfl.gl.GL.FUNC_ADD = 32774;
openfl.gl.GL.BLEND_EQUATION = 32777;
openfl.gl.GL.BLEND_EQUATION_RGB = 32777;
openfl.gl.GL.BLEND_EQUATION_ALPHA = 34877;
openfl.gl.GL.FUNC_SUBTRACT = 32778;
openfl.gl.GL.FUNC_REVERSE_SUBTRACT = 32779;
openfl.gl.GL.BLEND_DST_RGB = 32968;
openfl.gl.GL.BLEND_SRC_RGB = 32969;
openfl.gl.GL.BLEND_DST_ALPHA = 32970;
openfl.gl.GL.BLEND_SRC_ALPHA = 32971;
openfl.gl.GL.CONSTANT_COLOR = 32769;
openfl.gl.GL.ONE_MINUS_CONSTANT_COLOR = 32770;
openfl.gl.GL.CONSTANT_ALPHA = 32771;
openfl.gl.GL.ONE_MINUS_CONSTANT_ALPHA = 32772;
openfl.gl.GL.BLEND_COLOR = 32773;
openfl.gl.GL.ARRAY_BUFFER = 34962;
openfl.gl.GL.ELEMENT_ARRAY_BUFFER = 34963;
openfl.gl.GL.ARRAY_BUFFER_BINDING = 34964;
openfl.gl.GL.ELEMENT_ARRAY_BUFFER_BINDING = 34965;
openfl.gl.GL.STREAM_DRAW = 35040;
openfl.gl.GL.STATIC_DRAW = 35044;
openfl.gl.GL.DYNAMIC_DRAW = 35048;
openfl.gl.GL.BUFFER_SIZE = 34660;
openfl.gl.GL.BUFFER_USAGE = 34661;
openfl.gl.GL.CURRENT_VERTEX_ATTRIB = 34342;
openfl.gl.GL.FRONT = 1028;
openfl.gl.GL.BACK = 1029;
openfl.gl.GL.FRONT_AND_BACK = 1032;
openfl.gl.GL.CULL_FACE = 2884;
openfl.gl.GL.BLEND = 3042;
openfl.gl.GL.DITHER = 3024;
openfl.gl.GL.STENCIL_TEST = 2960;
openfl.gl.GL.DEPTH_TEST = 2929;
openfl.gl.GL.SCISSOR_TEST = 3089;
openfl.gl.GL.POLYGON_OFFSET_FILL = 32823;
openfl.gl.GL.SAMPLE_ALPHA_TO_COVERAGE = 32926;
openfl.gl.GL.SAMPLE_COVERAGE = 32928;
openfl.gl.GL.NO_ERROR = 0;
openfl.gl.GL.INVALID_ENUM = 1280;
openfl.gl.GL.INVALID_VALUE = 1281;
openfl.gl.GL.INVALID_OPERATION = 1282;
openfl.gl.GL.OUT_OF_MEMORY = 1285;
openfl.gl.GL.CW = 2304;
openfl.gl.GL.CCW = 2305;
openfl.gl.GL.LINE_WIDTH = 2849;
openfl.gl.GL.ALIASED_POINT_SIZE_RANGE = 33901;
openfl.gl.GL.ALIASED_LINE_WIDTH_RANGE = 33902;
openfl.gl.GL.CULL_FACE_MODE = 2885;
openfl.gl.GL.FRONT_FACE = 2886;
openfl.gl.GL.DEPTH_RANGE = 2928;
openfl.gl.GL.DEPTH_WRITEMASK = 2930;
openfl.gl.GL.DEPTH_CLEAR_VALUE = 2931;
openfl.gl.GL.DEPTH_FUNC = 2932;
openfl.gl.GL.STENCIL_CLEAR_VALUE = 2961;
openfl.gl.GL.STENCIL_FUNC = 2962;
openfl.gl.GL.STENCIL_FAIL = 2964;
openfl.gl.GL.STENCIL_PASS_DEPTH_FAIL = 2965;
openfl.gl.GL.STENCIL_PASS_DEPTH_PASS = 2966;
openfl.gl.GL.STENCIL_REF = 2967;
openfl.gl.GL.STENCIL_VALUE_MASK = 2963;
openfl.gl.GL.STENCIL_WRITEMASK = 2968;
openfl.gl.GL.STENCIL_BACK_FUNC = 34816;
openfl.gl.GL.STENCIL_BACK_FAIL = 34817;
openfl.gl.GL.STENCIL_BACK_PASS_DEPTH_FAIL = 34818;
openfl.gl.GL.STENCIL_BACK_PASS_DEPTH_PASS = 34819;
openfl.gl.GL.STENCIL_BACK_REF = 36003;
openfl.gl.GL.STENCIL_BACK_VALUE_MASK = 36004;
openfl.gl.GL.STENCIL_BACK_WRITEMASK = 36005;
openfl.gl.GL.VIEWPORT = 2978;
openfl.gl.GL.SCISSOR_BOX = 3088;
openfl.gl.GL.COLOR_CLEAR_VALUE = 3106;
openfl.gl.GL.COLOR_WRITEMASK = 3107;
openfl.gl.GL.UNPACK_ALIGNMENT = 3317;
openfl.gl.GL.PACK_ALIGNMENT = 3333;
openfl.gl.GL.MAX_TEXTURE_SIZE = 3379;
openfl.gl.GL.MAX_VIEWPORT_DIMS = 3386;
openfl.gl.GL.SUBPIXEL_BITS = 3408;
openfl.gl.GL.RED_BITS = 3410;
openfl.gl.GL.GREEN_BITS = 3411;
openfl.gl.GL.BLUE_BITS = 3412;
openfl.gl.GL.ALPHA_BITS = 3413;
openfl.gl.GL.DEPTH_BITS = 3414;
openfl.gl.GL.STENCIL_BITS = 3415;
openfl.gl.GL.POLYGON_OFFSET_UNITS = 10752;
openfl.gl.GL.POLYGON_OFFSET_FACTOR = 32824;
openfl.gl.GL.TEXTURE_BINDING_2D = 32873;
openfl.gl.GL.SAMPLE_BUFFERS = 32936;
openfl.gl.GL.SAMPLES = 32937;
openfl.gl.GL.SAMPLE_COVERAGE_VALUE = 32938;
openfl.gl.GL.SAMPLE_COVERAGE_INVERT = 32939;
openfl.gl.GL.COMPRESSED_TEXTURE_FORMATS = 34467;
openfl.gl.GL.DONT_CARE = 4352;
openfl.gl.GL.FASTEST = 4353;
openfl.gl.GL.NICEST = 4354;
openfl.gl.GL.GENERATE_MIPMAP_HINT = 33170;
openfl.gl.GL.BYTE = 5120;
openfl.gl.GL.UNSIGNED_BYTE = 5121;
openfl.gl.GL.SHORT = 5122;
openfl.gl.GL.UNSIGNED_SHORT = 5123;
openfl.gl.GL.INT = 5124;
openfl.gl.GL.UNSIGNED_INT = 5125;
openfl.gl.GL.FLOAT = 5126;
openfl.gl.GL.DEPTH_COMPONENT = 6402;
openfl.gl.GL.ALPHA = 6406;
openfl.gl.GL.RGB = 6407;
openfl.gl.GL.RGBA = 6408;
openfl.gl.GL.LUMINANCE = 6409;
openfl.gl.GL.LUMINANCE_ALPHA = 6410;
openfl.gl.GL.UNSIGNED_SHORT_4_4_4_4 = 32819;
openfl.gl.GL.UNSIGNED_SHORT_5_5_5_1 = 32820;
openfl.gl.GL.UNSIGNED_SHORT_5_6_5 = 33635;
openfl.gl.GL.FRAGMENT_SHADER = 35632;
openfl.gl.GL.VERTEX_SHADER = 35633;
openfl.gl.GL.MAX_VERTEX_ATTRIBS = 34921;
openfl.gl.GL.MAX_VERTEX_UNIFORM_VECTORS = 36347;
openfl.gl.GL.MAX_VARYING_VECTORS = 36348;
openfl.gl.GL.MAX_COMBINED_TEXTURE_IMAGE_UNITS = 35661;
openfl.gl.GL.MAX_VERTEX_TEXTURE_IMAGE_UNITS = 35660;
openfl.gl.GL.MAX_TEXTURE_IMAGE_UNITS = 34930;
openfl.gl.GL.MAX_FRAGMENT_UNIFORM_VECTORS = 36349;
openfl.gl.GL.SHADER_TYPE = 35663;
openfl.gl.GL.DELETE_STATUS = 35712;
openfl.gl.GL.LINK_STATUS = 35714;
openfl.gl.GL.VALIDATE_STATUS = 35715;
openfl.gl.GL.ATTACHED_SHADERS = 35717;
openfl.gl.GL.ACTIVE_UNIFORMS = 35718;
openfl.gl.GL.ACTIVE_ATTRIBUTES = 35721;
openfl.gl.GL.SHADING_LANGUAGE_VERSION = 35724;
openfl.gl.GL.CURRENT_PROGRAM = 35725;
openfl.gl.GL.NEVER = 512;
openfl.gl.GL.LESS = 513;
openfl.gl.GL.EQUAL = 514;
openfl.gl.GL.LEQUAL = 515;
openfl.gl.GL.GREATER = 516;
openfl.gl.GL.NOTEQUAL = 517;
openfl.gl.GL.GEQUAL = 518;
openfl.gl.GL.ALWAYS = 519;
openfl.gl.GL.KEEP = 7680;
openfl.gl.GL.REPLACE = 7681;
openfl.gl.GL.INCR = 7682;
openfl.gl.GL.DECR = 7683;
openfl.gl.GL.INVERT = 5386;
openfl.gl.GL.INCR_WRAP = 34055;
openfl.gl.GL.DECR_WRAP = 34056;
openfl.gl.GL.VENDOR = 7936;
openfl.gl.GL.RENDERER = 7937;
openfl.gl.GL.VERSION = 7938;
openfl.gl.GL.NEAREST = 9728;
openfl.gl.GL.LINEAR = 9729;
openfl.gl.GL.NEAREST_MIPMAP_NEAREST = 9984;
openfl.gl.GL.LINEAR_MIPMAP_NEAREST = 9985;
openfl.gl.GL.NEAREST_MIPMAP_LINEAR = 9986;
openfl.gl.GL.LINEAR_MIPMAP_LINEAR = 9987;
openfl.gl.GL.TEXTURE_MAG_FILTER = 10240;
openfl.gl.GL.TEXTURE_MIN_FILTER = 10241;
openfl.gl.GL.TEXTURE_WRAP_S = 10242;
openfl.gl.GL.TEXTURE_WRAP_T = 10243;
openfl.gl.GL.TEXTURE_2D = 3553;
openfl.gl.GL.TEXTURE = 5890;
openfl.gl.GL.TEXTURE_CUBE_MAP = 34067;
openfl.gl.GL.TEXTURE_BINDING_CUBE_MAP = 34068;
openfl.gl.GL.TEXTURE_CUBE_MAP_POSITIVE_X = 34069;
openfl.gl.GL.TEXTURE_CUBE_MAP_NEGATIVE_X = 34070;
openfl.gl.GL.TEXTURE_CUBE_MAP_POSITIVE_Y = 34071;
openfl.gl.GL.TEXTURE_CUBE_MAP_NEGATIVE_Y = 34072;
openfl.gl.GL.TEXTURE_CUBE_MAP_POSITIVE_Z = 34073;
openfl.gl.GL.TEXTURE_CUBE_MAP_NEGATIVE_Z = 34074;
openfl.gl.GL.MAX_CUBE_MAP_TEXTURE_SIZE = 34076;
openfl.gl.GL.TEXTURE0 = 33984;
openfl.gl.GL.TEXTURE1 = 33985;
openfl.gl.GL.TEXTURE2 = 33986;
openfl.gl.GL.TEXTURE3 = 33987;
openfl.gl.GL.TEXTURE4 = 33988;
openfl.gl.GL.TEXTURE5 = 33989;
openfl.gl.GL.TEXTURE6 = 33990;
openfl.gl.GL.TEXTURE7 = 33991;
openfl.gl.GL.TEXTURE8 = 33992;
openfl.gl.GL.TEXTURE9 = 33993;
openfl.gl.GL.TEXTURE10 = 33994;
openfl.gl.GL.TEXTURE11 = 33995;
openfl.gl.GL.TEXTURE12 = 33996;
openfl.gl.GL.TEXTURE13 = 33997;
openfl.gl.GL.TEXTURE14 = 33998;
openfl.gl.GL.TEXTURE15 = 33999;
openfl.gl.GL.TEXTURE16 = 34000;
openfl.gl.GL.TEXTURE17 = 34001;
openfl.gl.GL.TEXTURE18 = 34002;
openfl.gl.GL.TEXTURE19 = 34003;
openfl.gl.GL.TEXTURE20 = 34004;
openfl.gl.GL.TEXTURE21 = 34005;
openfl.gl.GL.TEXTURE22 = 34006;
openfl.gl.GL.TEXTURE23 = 34007;
openfl.gl.GL.TEXTURE24 = 34008;
openfl.gl.GL.TEXTURE25 = 34009;
openfl.gl.GL.TEXTURE26 = 34010;
openfl.gl.GL.TEXTURE27 = 34011;
openfl.gl.GL.TEXTURE28 = 34012;
openfl.gl.GL.TEXTURE29 = 34013;
openfl.gl.GL.TEXTURE30 = 34014;
openfl.gl.GL.TEXTURE31 = 34015;
openfl.gl.GL.ACTIVE_TEXTURE = 34016;
openfl.gl.GL.REPEAT = 10497;
openfl.gl.GL.CLAMP_TO_EDGE = 33071;
openfl.gl.GL.MIRRORED_REPEAT = 33648;
openfl.gl.GL.FLOAT_VEC2 = 35664;
openfl.gl.GL.FLOAT_VEC3 = 35665;
openfl.gl.GL.FLOAT_VEC4 = 35666;
openfl.gl.GL.INT_VEC2 = 35667;
openfl.gl.GL.INT_VEC3 = 35668;
openfl.gl.GL.INT_VEC4 = 35669;
openfl.gl.GL.BOOL = 35670;
openfl.gl.GL.BOOL_VEC2 = 35671;
openfl.gl.GL.BOOL_VEC3 = 35672;
openfl.gl.GL.BOOL_VEC4 = 35673;
openfl.gl.GL.FLOAT_MAT2 = 35674;
openfl.gl.GL.FLOAT_MAT3 = 35675;
openfl.gl.GL.FLOAT_MAT4 = 35676;
openfl.gl.GL.SAMPLER_2D = 35678;
openfl.gl.GL.SAMPLER_CUBE = 35680;
openfl.gl.GL.VERTEX_ATTRIB_ARRAY_ENABLED = 34338;
openfl.gl.GL.VERTEX_ATTRIB_ARRAY_SIZE = 34339;
openfl.gl.GL.VERTEX_ATTRIB_ARRAY_STRIDE = 34340;
openfl.gl.GL.VERTEX_ATTRIB_ARRAY_TYPE = 34341;
openfl.gl.GL.VERTEX_ATTRIB_ARRAY_NORMALIZED = 34922;
openfl.gl.GL.VERTEX_ATTRIB_ARRAY_POINTER = 34373;
openfl.gl.GL.VERTEX_ATTRIB_ARRAY_BUFFER_BINDING = 34975;
openfl.gl.GL.VERTEX_PROGRAM_POINT_SIZE = 34370;
openfl.gl.GL.POINT_SPRITE = 34913;
openfl.gl.GL.COMPILE_STATUS = 35713;
openfl.gl.GL.LOW_FLOAT = 36336;
openfl.gl.GL.MEDIUM_FLOAT = 36337;
openfl.gl.GL.HIGH_FLOAT = 36338;
openfl.gl.GL.LOW_INT = 36339;
openfl.gl.GL.MEDIUM_INT = 36340;
openfl.gl.GL.HIGH_INT = 36341;
openfl.gl.GL.FRAMEBUFFER = 36160;
openfl.gl.GL.RENDERBUFFER = 36161;
openfl.gl.GL.RGBA4 = 32854;
openfl.gl.GL.RGB5_A1 = 32855;
openfl.gl.GL.RGB565 = 36194;
openfl.gl.GL.DEPTH_COMPONENT16 = 33189;
openfl.gl.GL.STENCIL_INDEX = 6401;
openfl.gl.GL.STENCIL_INDEX8 = 36168;
openfl.gl.GL.DEPTH_STENCIL = 34041;
openfl.gl.GL.RENDERBUFFER_WIDTH = 36162;
openfl.gl.GL.RENDERBUFFER_HEIGHT = 36163;
openfl.gl.GL.RENDERBUFFER_INTERNAL_FORMAT = 36164;
openfl.gl.GL.RENDERBUFFER_RED_SIZE = 36176;
openfl.gl.GL.RENDERBUFFER_GREEN_SIZE = 36177;
openfl.gl.GL.RENDERBUFFER_BLUE_SIZE = 36178;
openfl.gl.GL.RENDERBUFFER_ALPHA_SIZE = 36179;
openfl.gl.GL.RENDERBUFFER_DEPTH_SIZE = 36180;
openfl.gl.GL.RENDERBUFFER_STENCIL_SIZE = 36181;
openfl.gl.GL.FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE = 36048;
openfl.gl.GL.FRAMEBUFFER_ATTACHMENT_OBJECT_NAME = 36049;
openfl.gl.GL.FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL = 36050;
openfl.gl.GL.FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE = 36051;
openfl.gl.GL.COLOR_ATTACHMENT0 = 36064;
openfl.gl.GL.DEPTH_ATTACHMENT = 36096;
openfl.gl.GL.STENCIL_ATTACHMENT = 36128;
openfl.gl.GL.DEPTH_STENCIL_ATTACHMENT = 33306;
openfl.gl.GL.NONE = 0;
openfl.gl.GL.FRAMEBUFFER_COMPLETE = 36053;
openfl.gl.GL.FRAMEBUFFER_INCOMPLETE_ATTACHMENT = 36054;
openfl.gl.GL.FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT = 36055;
openfl.gl.GL.FRAMEBUFFER_INCOMPLETE_DIMENSIONS = 36057;
openfl.gl.GL.FRAMEBUFFER_UNSUPPORTED = 36061;
openfl.gl.GL.FRAMEBUFFER_BINDING = 36006;
openfl.gl.GL.RENDERBUFFER_BINDING = 36007;
openfl.gl.GL.MAX_RENDERBUFFER_SIZE = 34024;
openfl.gl.GL.INVALID_FRAMEBUFFER_OPERATION = 1286;
openfl.gl.GL.UNPACK_FLIP_Y_WEBGL = 37440;
openfl.gl.GL.UNPACK_PREMULTIPLY_ALPHA_WEBGL = 37441;
openfl.gl.GL.CONTEXT_LOST_WEBGL = 37442;
openfl.gl.GL.UNPACK_COLORSPACE_CONVERSION_WEBGL = 37443;
openfl.gl.GL.BROWSER_DEFAULT_WEBGL = 37444;
openfl.media.Sound.__registeredSounds = new haxe.ds.StringMap();
openfl.net.URLRequestMethod.DELETE = "DELETE";
openfl.net.URLRequestMethod.GET = "GET";
openfl.net.URLRequestMethod.HEAD = "HEAD";
openfl.net.URLRequestMethod.OPTIONS = "OPTIONS";
openfl.net.URLRequestMethod.POST = "POST";
openfl.net.URLRequestMethod.PUT = "PUT";
openfl.system.ApplicationDomain.currentDomain = new openfl.system.ApplicationDomain(null);
openfl.system.Capabilities.hasAccessibility = false;
openfl.system.SecurityDomain.currentDomain = new openfl.system.SecurityDomain();
openfl.system.System.useCodePage = false;
openfl.text._AntiAliasType.AntiAliasType_Impl_.ADVANCED = "advanced";
openfl.text._AntiAliasType.AntiAliasType_Impl_.NORMAL = "normal";
openfl.ui._KeyLocation.KeyLocation_Impl_.STANDARD = 0;
openfl.ui._KeyLocation.KeyLocation_Impl_.LEFT = 1;
openfl.ui._KeyLocation.KeyLocation_Impl_.RIGHT = 2;
openfl.ui._KeyLocation.KeyLocation_Impl_.NUM_PAD = 3;
openfl.ui.Keyboard.NUMBER_0 = 48;
openfl.ui.Keyboard.NUMBER_1 = 49;
openfl.ui.Keyboard.NUMBER_2 = 50;
openfl.ui.Keyboard.NUMBER_3 = 51;
openfl.ui.Keyboard.NUMBER_4 = 52;
openfl.ui.Keyboard.NUMBER_5 = 53;
openfl.ui.Keyboard.NUMBER_6 = 54;
openfl.ui.Keyboard.NUMBER_7 = 55;
openfl.ui.Keyboard.NUMBER_8 = 56;
openfl.ui.Keyboard.NUMBER_9 = 57;
openfl.ui.Keyboard.A = 65;
openfl.ui.Keyboard.B = 66;
openfl.ui.Keyboard.C = 67;
openfl.ui.Keyboard.D = 68;
openfl.ui.Keyboard.E = 69;
openfl.ui.Keyboard.F = 70;
openfl.ui.Keyboard.G = 71;
openfl.ui.Keyboard.H = 72;
openfl.ui.Keyboard.I = 73;
openfl.ui.Keyboard.J = 74;
openfl.ui.Keyboard.K = 75;
openfl.ui.Keyboard.L = 76;
openfl.ui.Keyboard.M = 77;
openfl.ui.Keyboard.N = 78;
openfl.ui.Keyboard.O = 79;
openfl.ui.Keyboard.P = 80;
openfl.ui.Keyboard.Q = 81;
openfl.ui.Keyboard.R = 82;
openfl.ui.Keyboard.S = 83;
openfl.ui.Keyboard.T = 84;
openfl.ui.Keyboard.U = 85;
openfl.ui.Keyboard.V = 86;
openfl.ui.Keyboard.W = 87;
openfl.ui.Keyboard.X = 88;
openfl.ui.Keyboard.Y = 89;
openfl.ui.Keyboard.Z = 90;
openfl.ui.Keyboard.NUMPAD_0 = 96;
openfl.ui.Keyboard.NUMPAD_1 = 97;
openfl.ui.Keyboard.NUMPAD_2 = 98;
openfl.ui.Keyboard.NUMPAD_3 = 99;
openfl.ui.Keyboard.NUMPAD_4 = 100;
openfl.ui.Keyboard.NUMPAD_5 = 101;
openfl.ui.Keyboard.NUMPAD_6 = 102;
openfl.ui.Keyboard.NUMPAD_7 = 103;
openfl.ui.Keyboard.NUMPAD_8 = 104;
openfl.ui.Keyboard.NUMPAD_9 = 105;
openfl.ui.Keyboard.NUMPAD_MULTIPLY = 106;
openfl.ui.Keyboard.NUMPAD_ADD = 107;
openfl.ui.Keyboard.NUMPAD_ENTER = 108;
openfl.ui.Keyboard.NUMPAD_SUBTRACT = 109;
openfl.ui.Keyboard.NUMPAD_DECIMAL = 110;
openfl.ui.Keyboard.NUMPAD_DIVIDE = 111;
openfl.ui.Keyboard.F1 = 112;
openfl.ui.Keyboard.F2 = 113;
openfl.ui.Keyboard.F3 = 114;
openfl.ui.Keyboard.F4 = 115;
openfl.ui.Keyboard.F5 = 116;
openfl.ui.Keyboard.F6 = 117;
openfl.ui.Keyboard.F7 = 118;
openfl.ui.Keyboard.F8 = 119;
openfl.ui.Keyboard.F9 = 120;
openfl.ui.Keyboard.F10 = 121;
openfl.ui.Keyboard.F11 = 122;
openfl.ui.Keyboard.F12 = 123;
openfl.ui.Keyboard.F13 = 124;
openfl.ui.Keyboard.F14 = 125;
openfl.ui.Keyboard.F15 = 126;
openfl.ui.Keyboard.BACKSPACE = 8;
openfl.ui.Keyboard.TAB = 9;
openfl.ui.Keyboard.ALTERNATE = 18;
openfl.ui.Keyboard.ENTER = 13;
openfl.ui.Keyboard.COMMAND = 15;
openfl.ui.Keyboard.SHIFT = 16;
openfl.ui.Keyboard.CONTROL = 17;
openfl.ui.Keyboard.CAPS_LOCK = 20;
openfl.ui.Keyboard.NUMPAD = 21;
openfl.ui.Keyboard.ESCAPE = 27;
openfl.ui.Keyboard.SPACE = 32;
openfl.ui.Keyboard.PAGE_UP = 33;
openfl.ui.Keyboard.PAGE_DOWN = 34;
openfl.ui.Keyboard.END = 35;
openfl.ui.Keyboard.HOME = 36;
openfl.ui.Keyboard.LEFT = 37;
openfl.ui.Keyboard.RIGHT = 39;
openfl.ui.Keyboard.UP = 38;
openfl.ui.Keyboard.DOWN = 40;
openfl.ui.Keyboard.INSERT = 45;
openfl.ui.Keyboard.DELETE = 46;
openfl.ui.Keyboard.NUMLOCK = 144;
openfl.ui.Keyboard.BREAK = 19;
openfl.ui.Keyboard.SEMICOLON = 186;
openfl.ui.Keyboard.EQUAL = 187;
openfl.ui.Keyboard.COMMA = 188;
openfl.ui.Keyboard.MINUS = 189;
openfl.ui.Keyboard.PERIOD = 190;
openfl.ui.Keyboard.SLASH = 191;
openfl.ui.Keyboard.BACKQUOTE = 192;
openfl.ui.Keyboard.LEFTBRACKET = 219;
openfl.ui.Keyboard.BACKSLASH = 220;
openfl.ui.Keyboard.RIGHTBRACKET = 221;
openfl.ui.Keyboard.QUOTE = 222;
openfl.ui.Keyboard.DOM_VK_CANCEL = 3;
openfl.ui.Keyboard.DOM_VK_HELP = 6;
openfl.ui.Keyboard.DOM_VK_BACK_SPACE = 8;
openfl.ui.Keyboard.DOM_VK_TAB = 9;
openfl.ui.Keyboard.DOM_VK_CLEAR = 12;
openfl.ui.Keyboard.DOM_VK_RETURN = 13;
openfl.ui.Keyboard.DOM_VK_ENTER = 14;
openfl.ui.Keyboard.DOM_VK_SHIFT = 16;
openfl.ui.Keyboard.DOM_VK_CONTROL = 17;
openfl.ui.Keyboard.DOM_VK_ALT = 18;
openfl.ui.Keyboard.DOM_VK_PAUSE = 19;
openfl.ui.Keyboard.DOM_VK_CAPS_LOCK = 20;
openfl.ui.Keyboard.DOM_VK_ESCAPE = 27;
openfl.ui.Keyboard.DOM_VK_SPACE = 32;
openfl.ui.Keyboard.DOM_VK_PAGE_UP = 33;
openfl.ui.Keyboard.DOM_VK_PAGE_DOWN = 34;
openfl.ui.Keyboard.DOM_VK_END = 35;
openfl.ui.Keyboard.DOM_VK_HOME = 36;
openfl.ui.Keyboard.DOM_VK_LEFT = 37;
openfl.ui.Keyboard.DOM_VK_UP = 38;
openfl.ui.Keyboard.DOM_VK_RIGHT = 39;
openfl.ui.Keyboard.DOM_VK_DOWN = 40;
openfl.ui.Keyboard.DOM_VK_PRINTSCREEN = 44;
openfl.ui.Keyboard.DOM_VK_INSERT = 45;
openfl.ui.Keyboard.DOM_VK_DELETE = 46;
openfl.ui.Keyboard.DOM_VK_0 = 48;
openfl.ui.Keyboard.DOM_VK_1 = 49;
openfl.ui.Keyboard.DOM_VK_2 = 50;
openfl.ui.Keyboard.DOM_VK_3 = 51;
openfl.ui.Keyboard.DOM_VK_4 = 52;
openfl.ui.Keyboard.DOM_VK_5 = 53;
openfl.ui.Keyboard.DOM_VK_6 = 54;
openfl.ui.Keyboard.DOM_VK_7 = 55;
openfl.ui.Keyboard.DOM_VK_8 = 56;
openfl.ui.Keyboard.DOM_VK_9 = 57;
openfl.ui.Keyboard.DOM_VK_SEMICOLON = 59;
openfl.ui.Keyboard.DOM_VK_EQUALS = 61;
openfl.ui.Keyboard.DOM_VK_A = 65;
openfl.ui.Keyboard.DOM_VK_B = 66;
openfl.ui.Keyboard.DOM_VK_C = 67;
openfl.ui.Keyboard.DOM_VK_D = 68;
openfl.ui.Keyboard.DOM_VK_E = 69;
openfl.ui.Keyboard.DOM_VK_F = 70;
openfl.ui.Keyboard.DOM_VK_G = 71;
openfl.ui.Keyboard.DOM_VK_H = 72;
openfl.ui.Keyboard.DOM_VK_I = 73;
openfl.ui.Keyboard.DOM_VK_J = 74;
openfl.ui.Keyboard.DOM_VK_K = 75;
openfl.ui.Keyboard.DOM_VK_L = 76;
openfl.ui.Keyboard.DOM_VK_M = 77;
openfl.ui.Keyboard.DOM_VK_N = 78;
openfl.ui.Keyboard.DOM_VK_O = 79;
openfl.ui.Keyboard.DOM_VK_P = 80;
openfl.ui.Keyboard.DOM_VK_Q = 81;
openfl.ui.Keyboard.DOM_VK_R = 82;
openfl.ui.Keyboard.DOM_VK_S = 83;
openfl.ui.Keyboard.DOM_VK_T = 84;
openfl.ui.Keyboard.DOM_VK_U = 85;
openfl.ui.Keyboard.DOM_VK_V = 86;
openfl.ui.Keyboard.DOM_VK_W = 87;
openfl.ui.Keyboard.DOM_VK_X = 88;
openfl.ui.Keyboard.DOM_VK_Y = 89;
openfl.ui.Keyboard.DOM_VK_Z = 90;
openfl.ui.Keyboard.DOM_VK_CONTEXT_MENU = 93;
openfl.ui.Keyboard.DOM_VK_NUMPAD0 = 96;
openfl.ui.Keyboard.DOM_VK_NUMPAD1 = 97;
openfl.ui.Keyboard.DOM_VK_NUMPAD2 = 98;
openfl.ui.Keyboard.DOM_VK_NUMPAD3 = 99;
openfl.ui.Keyboard.DOM_VK_NUMPAD4 = 100;
openfl.ui.Keyboard.DOM_VK_NUMPAD5 = 101;
openfl.ui.Keyboard.DOM_VK_NUMPAD6 = 102;
openfl.ui.Keyboard.DOM_VK_NUMPAD7 = 103;
openfl.ui.Keyboard.DOM_VK_NUMPAD8 = 104;
openfl.ui.Keyboard.DOM_VK_NUMPAD9 = 105;
openfl.ui.Keyboard.DOM_VK_MULTIPLY = 106;
openfl.ui.Keyboard.DOM_VK_ADD = 107;
openfl.ui.Keyboard.DOM_VK_SEPARATOR = 108;
openfl.ui.Keyboard.DOM_VK_SUBTRACT = 109;
openfl.ui.Keyboard.DOM_VK_DECIMAL = 110;
openfl.ui.Keyboard.DOM_VK_DIVIDE = 111;
openfl.ui.Keyboard.DOM_VK_F1 = 112;
openfl.ui.Keyboard.DOM_VK_F2 = 113;
openfl.ui.Keyboard.DOM_VK_F3 = 114;
openfl.ui.Keyboard.DOM_VK_F4 = 115;
openfl.ui.Keyboard.DOM_VK_F5 = 116;
openfl.ui.Keyboard.DOM_VK_F6 = 117;
openfl.ui.Keyboard.DOM_VK_F7 = 118;
openfl.ui.Keyboard.DOM_VK_F8 = 119;
openfl.ui.Keyboard.DOM_VK_F9 = 120;
openfl.ui.Keyboard.DOM_VK_F10 = 121;
openfl.ui.Keyboard.DOM_VK_F11 = 122;
openfl.ui.Keyboard.DOM_VK_F12 = 123;
openfl.ui.Keyboard.DOM_VK_F13 = 124;
openfl.ui.Keyboard.DOM_VK_F14 = 125;
openfl.ui.Keyboard.DOM_VK_F15 = 126;
openfl.ui.Keyboard.DOM_VK_F16 = 127;
openfl.ui.Keyboard.DOM_VK_F17 = 128;
openfl.ui.Keyboard.DOM_VK_F18 = 129;
openfl.ui.Keyboard.DOM_VK_F19 = 130;
openfl.ui.Keyboard.DOM_VK_F20 = 131;
openfl.ui.Keyboard.DOM_VK_F21 = 132;
openfl.ui.Keyboard.DOM_VK_F22 = 133;
openfl.ui.Keyboard.DOM_VK_F23 = 134;
openfl.ui.Keyboard.DOM_VK_F24 = 135;
openfl.ui.Keyboard.DOM_VK_NUM_LOCK = 144;
openfl.ui.Keyboard.DOM_VK_SCROLL_LOCK = 145;
openfl.ui.Keyboard.DOM_VK_COMMA = 188;
openfl.ui.Keyboard.DOM_VK_PERIOD = 190;
openfl.ui.Keyboard.DOM_VK_SLASH = 191;
openfl.ui.Keyboard.DOM_VK_BACK_QUOTE = 192;
openfl.ui.Keyboard.DOM_VK_OPEN_BRACKET = 219;
openfl.ui.Keyboard.DOM_VK_BACK_SLASH = 220;
openfl.ui.Keyboard.DOM_VK_CLOSE_BRACKET = 221;
openfl.ui.Keyboard.DOM_VK_QUOTE = 222;
openfl.ui.Keyboard.DOM_VK_META = 224;
openfl.ui.Keyboard.DOM_VK_KANA = 21;
openfl.ui.Keyboard.DOM_VK_HANGUL = 21;
openfl.ui.Keyboard.DOM_VK_JUNJA = 23;
openfl.ui.Keyboard.DOM_VK_FINAL = 24;
openfl.ui.Keyboard.DOM_VK_HANJA = 25;
openfl.ui.Keyboard.DOM_VK_KANJI = 25;
openfl.ui.Keyboard.DOM_VK_CONVERT = 28;
openfl.ui.Keyboard.DOM_VK_NONCONVERT = 29;
openfl.ui.Keyboard.DOM_VK_ACEPT = 30;
openfl.ui.Keyboard.DOM_VK_MODECHANGE = 31;
openfl.ui.Keyboard.DOM_VK_SELECT = 41;
openfl.ui.Keyboard.DOM_VK_PRINT = 42;
openfl.ui.Keyboard.DOM_VK_EXECUTE = 43;
openfl.ui.Keyboard.DOM_VK_SLEEP = 95;
openfl.utils.Endian.BIG_ENDIAN = "bigEndian";
openfl.utils.Endian.LITTLE_ENDIAN = "littleEndian";
ApplicationMain.main();
})(typeof window != "undefined" ? window : exports);
