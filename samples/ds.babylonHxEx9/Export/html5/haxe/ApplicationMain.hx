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
		id = "assets/_train/barrieres_bois.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/barrieres_bois.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/barrieres_bois_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/barrieres_bois_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/bat_console_murs_ext_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/bat_console_murs_ext_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/bat_console_murs_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/bat_console_murs_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/bat_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/bat_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/bosquet_grass.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/bosquet_grass.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/bosquet_grass.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/bosquet_grass.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/bottes_paille.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/bottes_paille.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/bottes_paille_face.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/bottes_paille_face.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/champ_ble.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/champ_ble.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/champ_ble.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/champ_ble.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/chariot_planche.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/chariot_planche.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/chariot_planche_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/chariot_planche_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/chariot_roue.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/chariot_roue.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/chariot_roue_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/chariot_roue_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/console.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/console.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/console_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/console_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap5_nx.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap5_nx.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap5_ny.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap5_ny.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap5_nz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap5_nz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap5_px.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap5_px.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap5_py.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap5_py.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap5_pz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap5_pz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_nx.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_nx.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_ny.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_ny.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_nz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_nz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_px.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_px.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_py.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_py.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_pz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_pz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_vitres_nx.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_vitres_nx.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_vitres_ny.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_vitres_ny.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_vitres_nz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_vitres_nz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_vitres_px.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_vitres_px.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_vitres_py.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_vitres_py.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cubemap_vitres_pz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cubemap_vitres_pz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cuir.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cuir.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/cuir_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/cuir_n.jpg", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/debug.txt", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/disneyland_paris.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/disneyland_paris.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/flechage.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/flechage.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/flechage.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/flechage.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/flechage2.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/flechage2.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/flechage2.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/flechage2.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/grass.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/grass.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/grass.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/grass.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/grillage.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/grillage.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/grillage.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/grillage.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/lens2.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/lens2.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/lens3.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/lens3.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/lens4.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/lens4.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/lens5.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/lens5.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/lens6.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/lens6.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/metal_rouille.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/metal_rouille.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/metal_rouille_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/metal_rouille_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/metal_tache.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/metal_tache.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/metal_tache_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/metal_tache_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/murs_wood.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/murs_wood.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/murs_wood_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/murs_wood_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/no_signal.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/no_signal.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/paille_alpha.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/paille_alpha.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/paille_alpha.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/paille_alpha.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/pile_bois.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/pile_bois.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/pile_bois_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/pile_bois_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/planches.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/planches.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/planches_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/planches_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/poteaux.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/poteaux.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/poteaux_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/poteaux_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/poubelle.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/poubelle.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/poubelle_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/poubelle_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/rochers_big.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/rochers_big.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/rochers_big_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/rochers_big_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/rock_tunnel.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/rock_tunnel.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/rock_tunnel_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/rock_tunnel_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/sacs_sable.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/sacs_sable.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/sacs_sable_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/sacs_sable_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/sapin_leaves.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/sapin_leaves.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/sapin_leaves.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/sapin_leaves.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/sapin_trunk_up.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/sapin_trunk_up.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/sapin_trunk_up_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/sapin_trunk_up_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/skydome.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/skydome.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/smoke.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/smoke.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/sol_metal.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/sol_metal.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/sol_metal_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/sol_metal_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain1.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain1.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain1_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain1_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain1_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain1_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain2.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain2.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain2_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain2_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain2_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain2_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain3.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain3.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain3_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain3_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain3_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain3_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain4.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain4.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain4_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain4_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain4_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain4_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain_clotures_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain_clotures_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain_escalier_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain_escalier_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/terrain_tunnel_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/terrain_tunnel_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/toit_bois.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/toit_bois.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/toit_bois_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/toit_bois_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/tole.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/tole.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/tole_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/tole_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/tonneau.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/tonneau.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/tonneau_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/tonneau_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/tracteur.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/tracteur.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/tracteur_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/tracteur_n.jpg", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.babylon", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.babylon.manifest", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.barrieres_bois.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.bosquets_herbe.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.bottes_paille.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.bt_marche_arret_av_arr.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.bt_marche_arret_mode_OK.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.CAM_CONSOLE.Target.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.CAM_FREE.Target.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.CAM_FREE_STEREO.Target.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.CAM_ROT.Target.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.CAM_TRAIIN_AVANT.Target.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.CAM_TRAIN.Target.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.CAM_WALK.Target.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.champs_ble.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chariot.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_gare.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_in.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_lum_part1_cercle.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_lum_part1_fleche.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_lum_part2_cercle.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_lum_part2_fleche.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_out.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_zone00.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_zone01.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_zone02.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_zone03.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_zone04.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_zone05.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_zone06.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.chemin_zone07.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.console_bt_urgence02.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.console_bts.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.console_bts_verre.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.dummy_cam_target_train.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.dummy_cam_target_train_avant.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.dummy_cam_train.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.dummy_cam_train_avant.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.ecran1.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.ecran1_led.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.ecran2.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.ecran2_led.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.ecran3.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.ecran3_led.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.ecran4_led.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.ecran5_led.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.ecrans_off.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.ecrans_off2.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.emiter_particules.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.herbes.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.incremental.babylon", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.incremental.babylon.manifest", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.pencarte.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.pencarte_contour.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.piles_bois.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.planches.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.portail_poteaux.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.poteaux.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.poteaux_cable.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.poubelles.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.roues_chariot.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.sacs_sable.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.sapins_leaf_high.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.sapins_leaf_low.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.sapins_trunk_high_0.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.sapins_trunk_high_1.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.sapins_trunk_high_2.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.sapins_trunk_low.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.skydome.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.terrain_escalier.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.terrain_lampadaires.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.terrain_lampadaires_lampes.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.terrain_lampadaires_rouille_0.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.terrain_lampadaires_rouille_1.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.terrain_lampadaires_rouille_2.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.terrain_lampadaires_verre.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.terrain_poteaux.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.terrain_rails.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.tonneaux.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.tracteur.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.train_a1.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.train_a2.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.train_a3.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.train_a4.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.train_loco.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.train_wagon09.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.train_wagon10.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.train_wagon11.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/_train/Train.troncs_arbre.babylonmeshdata", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/train_4.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/train_4.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/train_4_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/train_4_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/train_cote.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/train_cote.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/train_cote_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/train_cote_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/train_loco_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/train_loco_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/train_wagon_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/train_wagon_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/tronc.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/tronc.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/tronc_face.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/tronc_face.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/tronc_face_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/tronc_face_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/tronc_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/tronc_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/verre_lampes.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/verre_lampes.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/_train/water_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/_train/water_n.jpg", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/font/Aaargh.eot", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/font/Aaargh.svg", urlLoader);
		total ++;
		
		
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/font/Aaargh.woff", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/font/OpenSansRegular.eot", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/font/OpenSansRegular.svg", urlLoader);
		total ++;
		
		
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/font/OpenSansRegular.woff", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/font/Tup Wanders Font License.txt", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/Flare.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/Flare.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/grass.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/grass.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/lens4.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/lens4.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/lens5.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/lens5.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/normalMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/normalMap.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/img/refMap.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/img/refMap.jpg", loader);
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
		id = "assets/train/barrieres_bois.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/barrieres_bois.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/barrieres_bois_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/barrieres_bois_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/bat_console_murs_ext_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/bat_console_murs_ext_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/bat_console_murs_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/bat_console_murs_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/bat_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/bat_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/bosquet_grass.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/bosquet_grass.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/bosquet_grass.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/bosquet_grass.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/bottes_paille.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/bottes_paille.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/bottes_paille_face.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/bottes_paille_face.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/champ_ble.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/champ_ble.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/champ_ble.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/champ_ble.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/chariot_planche.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/chariot_planche.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/chariot_planche_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/chariot_planche_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/chariot_roue.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/chariot_roue.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/chariot_roue_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/chariot_roue_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/console.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/console.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/console_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/console_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap5_nx.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap5_nx.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap5_ny.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap5_ny.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap5_nz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap5_nz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap5_px.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap5_px.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap5_py.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap5_py.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap5_pz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap5_pz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_nx.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_nx.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_ny.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_ny.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_nz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_nz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_px.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_px.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_py.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_py.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_pz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_pz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_vitres_nx.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_vitres_nx.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_vitres_ny.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_vitres_ny.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_vitres_nz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_vitres_nz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_vitres_px.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_vitres_px.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_vitres_py.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_vitres_py.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cubemap_vitres_pz.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cubemap_vitres_pz.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cuir.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cuir.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/cuir_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/cuir_n.jpg", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/train/debug.txt", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/disneyland_paris.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/disneyland_paris.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/flechage.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/flechage.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/flechage.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/flechage.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/flechage2.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/flechage2.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/flechage2.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/flechage2.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/grass.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/grass.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/grass.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/grass.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/grillage.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/grillage.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/grillage.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/grillage.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/lens2.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/lens2.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/lens3.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/lens3.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/lens4.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/lens4.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/lens5.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/lens5.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/lens6.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/lens6.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/metal_rouille.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/metal_rouille.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/metal_rouille_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/metal_rouille_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/metal_tache.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/metal_tache.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/metal_tache_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/metal_tache_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/murs_wood.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/murs_wood.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/murs_wood_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/murs_wood_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/no_signal.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/no_signal.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/paille_alpha.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/paille_alpha.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/paille_alpha.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/paille_alpha.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/pile_bois.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/pile_bois.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/pile_bois_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/pile_bois_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/planches.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/planches.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/planches_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/planches_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/poteaux.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/poteaux.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/poteaux_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/poteaux_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/poubelle.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/poubelle.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/poubelle_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/poubelle_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/rochers_big.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/rochers_big.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/rochers_big_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/rochers_big_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/rock_tunnel.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/rock_tunnel.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/rock_tunnel_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/rock_tunnel_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/sacs_sable.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/sacs_sable.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/sacs_sable_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/sacs_sable_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/sapin_leaves.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/sapin_leaves.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/sapin_leaves.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/sapin_leaves.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/sapin_trunk_up.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/sapin_trunk_up.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/sapin_trunk_up_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/sapin_trunk_up_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/skydome.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/skydome.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/smoke.png";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/smoke.png", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/sol_metal.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/sol_metal.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/sol_metal_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/sol_metal_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain1.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain1.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain1_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain1_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain1_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain1_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain2.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain2.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain2_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain2_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain2_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain2_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain3.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain3.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain3_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain3_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain3_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain3_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain4.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain4.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain4_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain4_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain4_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain4_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain_clotures_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain_clotures_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain_escalier_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain_escalier_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/terrain_tunnel_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/terrain_tunnel_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/toit_bois.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/toit_bois.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/toit_bois_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/toit_bois_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/tole.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/tole.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/tole_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/tole_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/tonneau.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/tonneau.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/tonneau_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/tonneau_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/tracteur.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/tracteur.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/tracteur_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/tracteur_n.jpg", loader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/train/Train.babylon", urlLoader);
		total ++;
		
		
		
		var urlLoader = new URLLoader ();
		urlLoader.dataFormat = BINARY;
		urlLoaders.set("assets/train/Train.babylon.manifest", urlLoader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/train_4.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/train_4.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/train_4_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/train_4_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/train_cote.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/train_cote.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/train_cote_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/train_cote_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/train_loco_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/train_loco_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/train_wagon_lm.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/train_wagon_lm.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/tronc.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/tronc.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/tronc_face.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/tronc_face.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/tronc_face_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/tronc_face_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/tronc_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/tronc_n.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/verre_lampes.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/verre_lampes.jpg", loader);
		total ++;
		
		
		
		var image = new Image ();
		id = "assets/train/water_n.jpg";
		images.set (id, image);
		image.onload = image_onLoad;
		image.src = id;
		//var loader:Loader = new Loader();
		//loaders.set("assets/train/water_n.jpg", loader);
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