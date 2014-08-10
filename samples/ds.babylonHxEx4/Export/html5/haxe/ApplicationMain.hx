package;


import openfl.Assets;


#if (!macro && !display)


import haxe.io.Path;
import js.html.HtmlElement;
import js.html.Image;
import openfl.display.Loader;
import openfl.events.Event;
import openfl.events.IOErrorEvent;
import openfl.media.Sound;
import openfl.net.URLLoader;
import openfl.net.URLRequest;
import openfl.Lib;


@:access(openfl.Lib) class ApplicationMain {
	
	
	public static var images (default, null) = new Map <String, Image> ();
	public static var urlLoaders = new Map <String, URLLoader> ();
	
	private static var assetsLoaded = 0;
	private static var preloader:NMEPreloader;
	private static var total = 0;
	
	
	@:keep @:expose("openfl.embed")
	public static function embed (elementName:String, width:Null<Int> = null, height:Null<Int> = null, background:String = null) {
		
		var element:HtmlElement = null;
		
		if (elementName != null) {
			
			element = cast js.Browser.document.getElementById (elementName);
			
		}
		
		var color = null;
		
		if (background != null) {
			
			background = StringTools.replace (background, "#", "");
			
			if (background.indexOf ("0x") > -1) {
				
				color = Std.parseInt (background);
				
			} else {
				
				color = Std.parseInt ("0x" + background);
				
			}
			
		}
		
		flash.Lib.create (element, width, height, color);
		
		preloader = new NMEPreloader ();
		Lib.current.addChild (preloader);
		preloader.onInit ();
		
		var sounds = [];
		var id;
		
		
		
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/font/Tup Wanders Font License.txt", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/cloud.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/cloud.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/cloud.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/cloud.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/cloud__.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/cloud__.png", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/img/skybox/README.TXT", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_nx.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_nx.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_nx.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_nx.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_ny.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_ny.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_ny.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_ny.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_nz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_nz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_nz.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_nz.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_px.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_px.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_px.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_px.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_py.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_py.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_py.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_py.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_pz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_pz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/skybox/skybox_pz.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/skybox/skybox_pz.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/BalanceDM.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/BalanceDM.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/BalanceDM.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/BalanceDM.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/BalanceLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/BalanceLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/BalanceLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/BalanceLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/BoisLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/BoisLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/BoisLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/BoisLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Book.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Book.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Book.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Book.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Box029CompleteMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Box029CompleteMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Box029CompleteMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Box029CompleteMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Box079LightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Box079LightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Box079LightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Box079LightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Briquesblanches.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Briquesblanches.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Briquesblanches.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Briquesblanches.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Bumpverre.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Bumpverre.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Bumpverre.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Bumpverre.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/ChalkboardCompleteMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/ChalkboardCompleteMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/ChalkboardCompleteMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/ChalkboardCompleteMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Chimie.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Chimie.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Chimie.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Chimie.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/ChromeLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/ChromeLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/ChromeLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/ChromeLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Coeur.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Coeur.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Cylinder008LightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Cylinder008LightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Cylinder008LightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Cylinder008LightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/flamme-gaz.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/flamme-gaz.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Floor.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Floor.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Floor.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Floor.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Graph.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Graph.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Gris somreLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Gris somreLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Gris somreLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Gris somreLightingMap.png", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/scenes/Heart/Heart.babylon", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/scenes/Heart/Heart.babylon.manifest", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/heartSpecjpg.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/heartSpecjpg.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Labels.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Labels.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Marble.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Marble.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Marble.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Marble.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/MursLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/MursLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/MursLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/MursLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Object1LightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Object1LightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Object1LightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Object1LightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Ordi001LightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Ordi001LightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Ordi001LightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Ordi001LightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/OrdiDiffuseMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/OrdiDiffuseMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/OrdiDiffuseMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/OrdiDiffuseMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/PaillasseLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/PaillasseLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/PaillasseLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/PaillasseLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Plane003LightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Plane003LightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Plane003LightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Plane003LightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Plaque.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Plaque.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Plaque.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Plaque.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/ref1_nx.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/ref1_nx.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/ref1_ny.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/ref1_ny.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/ref1_nz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/ref1_nz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/ref1_px.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/ref1_px.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/ref1_py.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/ref1_py.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/ref1_pz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/ref1_pz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Sky.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Sky.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Sky.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Sky.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/VerreLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/VerreLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/VerreLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/VerreLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Wood.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Wood.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/Heart/Wood.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/Heart/Wood.png", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/shaders/clouds.fragment.txt", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/shaders/clouds.vertex.txt", urlLoader);
		total ++;
		
		
		
		if (total == 0) {
			
			start ();
			
		} else {
			
			for (path in urlLoaders.keys ()) {
				
				var urlLoader = urlLoaders.get (path);
				urlLoader.addEventListener ("complete", loader_onComplete);
				urlLoader.load (new URLRequest (path));
				
			}
			
			for (soundName in sounds) {
				
				var sound = new Sound ();
				sound.addEventListener (Event.COMPLETE, sound_onComplete);
				sound.addEventListener (IOErrorEvent.IO_ERROR, sound_onIOError);
				sound.load (new URLRequest (soundName + ".ogg"));
				
			}
			
		}
		
	}
	
	
	public static function main () {
		
		#if munit
		embed (null, 0, 0, "FFFFFF");
		#end
		
	}
	
	
	private static function start ():Void {
		
		preloader.addEventListener (Event.COMPLETE, preloader_onComplete);
		preloader.onLoaded ();
		
	}
	
	
	private static function image_onLoad (_):Void {
		
		assetsLoaded++;
		
		preloader.onUpdate (assetsLoaded, total);
		
		if (assetsLoaded == total) {
			
			start ();
			
		}
		
	}
	
	
	private static function loader_onComplete (event:Event):Void {
		
		assetsLoaded++;
		
		preloader.onUpdate (assetsLoaded, total);
		
		if (assetsLoaded == total) {
			
			start ();
			
		}
		
	}
	
	
	private static function preloader_onComplete (event:Event):Void {
		
		preloader.removeEventListener (Event.COMPLETE, preloader_onComplete);
		Lib.current.removeChild (preloader);
		preloader = null;
		
		var hasMain = false;
		
		for (methodName in Type.getClassFields (Main)) {
			
			if (methodName == "main") {
				
				hasMain = true;
				break;
				
			}
			
		}
		
		if (hasMain) {
			
			Reflect.callMethod (Main, Reflect.field (Main, "main"), []);
			
		} else {
			
			var instance:DocumentClass = Type.createInstance(DocumentClass, []);
			
			if (Std.is (instance, flash.display.DisplayObject)) {
				
				flash.Lib.current.addChild (cast instance);
				
			} else {
				
				trace ("Error: No entry point found");
				trace ("If you are using DCE with a static main, you may need to @:keep the function");
				
			}
			
		}
		
	}
	
	
	private static function sound_onComplete (event:Event):Void {
		
		assetsLoaded++;
		
		preloader.onUpdate (assetsLoaded, total);
		
		if (assetsLoaded == total) {
			
			start ();
			
		}
		
	}
	
	
	private static function sound_onIOError (event:IOErrorEvent):Void {
		
		// if it is actually valid, it will load later when requested
		
		assetsLoaded++;
		
		preloader.onUpdate (assetsLoaded, total);
		
		if (assetsLoaded == total) {
			
			start ();
			
		}
		
	}
	
	
}


@:build(DocumentClass.build())
@:keep class DocumentClass extends Main {}


#elseif macro


import haxe.macro.Context;
import haxe.macro.Expr;


class DocumentClass {
	
	
	macro public static function build ():Array<Field> {
		
		var classType = Context.getLocalClass ().get ();
		var searchTypes = classType;
		
		while (searchTypes.superClass != null) {
			
			if (searchTypes.pack.length == 2 && searchTypes.pack[1] == "display" && searchTypes.name == "DisplayObject") {
				
				var fields = Context.getBuildFields ();
				var method = macro {
					
					this.stage = flash.Lib.current.stage;
					super ();
					dispatchEvent (new Event (Event.ADDED_TO_STAGE, false, false));
					
				}
				
				fields.push ({ name: "new", access: [ APublic ], kind: FFun({ args: [], expr: method, params: [], ret: macro :Void }), pos: Context.currentPos () });
				return fields;
				
			}
			
			searchTypes = searchTypes.superClass.t.get ();
			
		}
		
		return null;
		
	}
	
	
}


#else


import Main;

class ApplicationMain {
	
	
	public static function main () {
		
		
		
	}
	
	
}


#end