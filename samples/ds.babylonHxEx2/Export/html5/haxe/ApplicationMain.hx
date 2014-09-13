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
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Affiches.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Affiches.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Affiches.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Affiches.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Affiches2.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Affiches2.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Affiches2.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Affiches2.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Affiches3.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Affiches3.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Affiches3.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Affiches3.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/AffichesLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/AffichesLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/AffichesLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/AffichesLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Bafle.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Bafle.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Bafle.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Bafle.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/BafleLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/BafleLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/BafleLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/BafleLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Beton1.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Beton1.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Beton1.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Beton1.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/BlancUniLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/BlancUniLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/BlancUniLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/BlancUniLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Bois2.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Bois2.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Bois2.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Bois2.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Briques3.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Briques3.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Briques3.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Briques3.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Canape1LightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Canape1LightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Canapé1LightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Canapé1LightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Canette1.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Canette1.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Canette1.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Canette1.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Canette2.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Canette2.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Canette2.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Canette2.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ChaineHifi.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ChaineHifi.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ChaineHifi.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ChaineHifi.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ChaineHifi2.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ChaineHifi2.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ChaineHifi2.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ChaineHifi2.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ChromeBrosseLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ChromeBrosseLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ChromeBrosséLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ChromeBrosséLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ChromeLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ChromeLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ChromeLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ChromeLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ColonnesLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ColonnesLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ColonnesLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ColonnesLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Coussins2LightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Coussins2LightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Coussins2LightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Coussins2LightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/CoussinsfauteuilLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/CoussinsfauteuilLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Cuir1Spec.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Cuir1Spec.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/CuirbrunSpec.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/CuirbrunSpec.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/CuiViolet.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/CuiViolet.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/CuiViolet.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/CuiViolet.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Degrade.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Degrade.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Degradebar.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Degradebar.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Degradebar.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Degradebar.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Ecrantele1.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Ecrantele1.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Ecrantele1.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Ecrantele1.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/EscalierLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/EscalierLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/EscalierLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/EscalierLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/exit.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/exit.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/exit.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/exit.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/FauteuilRond01LightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/FauteuilRond01LightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/FauteuilRond01LightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/FauteuilRond01LightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Fauteuilsronds.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Fauteuilsronds.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Fauteuilsronds.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Fauteuilsronds.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Fndgris.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Fndgris.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Fndgris.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Fndgris.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Fndrouge2.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Fndrouge2.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Fndrouge2.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Fndrouge2.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Fondmeuble basLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Fondmeuble basLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Fondmeuble basLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Fondmeuble basLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Fvert.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Fvert.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Fvert.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Fvert.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Grille.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Grille.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/liquiorange.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/liquiorange.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/liquiorange.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/liquiorange.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Liquirouge.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Liquirouge.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Liquirouge.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Liquirouge.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Liquivert.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Liquivert.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Liquivert.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Liquivert.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Masque1.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Masque1.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Masque2.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Masque2.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/MurrdcLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/MurrdcLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/MurrdcLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/MurrdcLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Mursdivers.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Mursdivers.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Mursdivers.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Mursdivers.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/NeonarcheAmbiant.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/NeonarcheAmbiant.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/NeonarcheAmbiant.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/NeonarcheAmbiant.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/NoirmatLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/NoirmatLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/NoirmatLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/NoirmatLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Ordi.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Ordi.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Ordi.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Ordi.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/OrdiSI.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/OrdiSI.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/OrdiSI.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/OrdiSI.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/OrdisLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/OrdisLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/OrdisLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/OrdisLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Pano2Alt.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Pano2Alt.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Pano2Alt.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Pano2Alt.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Parquet1.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Parquet1.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Parquet1.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Parquet1.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Parquet3.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Parquet3.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Parquet3.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Parquet3.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Peintureverte.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Peintureverte.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Peintureverte.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Peintureverte.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/PlafondsLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/PlafondsLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/PlafondsLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/PlafondsLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Plancher2LightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Plancher2LightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Plancher2LightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Plancher2LightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Plancheretage1LightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Plancheretage1LightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Plancherétage1LightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Plancherétage1LightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/PlotDiffuseMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/PlotDiffuseMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/PlotDiffuseMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/PlotDiffuseMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Produits.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Produits.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Produits.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Produits.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/RedFlowers.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/RedFlowers.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/RedFlowers.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/RedFlowers.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Refcubenoire_nx.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Refcubenoire_nx.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Refcubenoire_ny.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Refcubenoire_ny.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Refcubenoire_nz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Refcubenoire_nz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Refcubenoire_px.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Refcubenoire_px.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Refcubenoire_py.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Refcubenoire_py.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Refcubenoire_pz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Refcubenoire_pz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Refcubenoireplate.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Refcubenoireplate.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Refcubenoireplate.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Refcubenoireplate.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Salade.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Salade.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Salade.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Salade.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/SaladesLM.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/SaladesLM.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/SaladesLM.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/SaladesLM.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/SolRDCLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/SolRDCLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/SolRDCLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/SolRDCLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/SpecMetalbrosse.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/SpecMetalbrosse.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Sponsor01DiffuseMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Sponsor01DiffuseMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Sponsor01DiffuseMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Sponsor01DiffuseMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Sticker haut.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Sticker haut.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Sticker haut.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Sticker haut.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Surface.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Surface.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Surface.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Surface.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/tableaux.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/tableaux.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/tableaux.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/tableaux.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/TableSurfaceLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/TableSurfaceLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/TableSurfaceLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/TableSurfaceLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/tapis4.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/tapis4.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/tapis4.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/tapis4.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/TapisLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/TapisLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/TapisLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/TapisLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Tele.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Tele.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Tele.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Tele.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/TeleLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/TeleLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/TeleSI.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/TeleSI.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/TeleSI.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/TeleSI.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/TéléLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/TéléLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/vENT.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/vENT.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/vENT.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/vENT.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Verticola.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Verticola.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Verticola.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Verticola.png", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/scenes/WCafe/WCafe.babylon", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/scenes/WCafe/WCafe.babylon.manifest", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Wifi.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Wifi.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Wifi.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Wifi.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Win7.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Win7.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Win7.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Win7.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Win7A.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Win7A.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Win7A.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Win7A.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/WinCafe1.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/WinCafe1.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/WinCafe1.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/WinCafe1.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/WinCafe1IL.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/WinCafe1IL.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/WinCafe1IL.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/WinCafe1IL.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/xBOXLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/xBOXLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/xBOXLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/xBOXLightingMap.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Xbrique.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Xbrique.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Xbrique.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Xbrique.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Zebu.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Zebu.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/Zebu.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/Zebu.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ZincLightingMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ZincLightingMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/scenes/WCafe/ZincLightingMap.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/scenes/WCafe/ZincLightingMap.png", loader);
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