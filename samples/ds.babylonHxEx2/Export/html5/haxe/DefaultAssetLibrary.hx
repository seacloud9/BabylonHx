package;


import haxe.Timer;
import haxe.Unserializer;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.MovieClip;
import openfl.events.Event;
import openfl.text.Font;
import openfl.media.Sound;
import openfl.net.URLRequest;
import openfl.utils.ByteArray;
import openfl.Assets;

#if (flash || js)
import openfl.display.Loader;
import openfl.events.Event;
import openfl.net.URLLoader;
#end

#if sys
import sys.FileSystem;
#end

#if ios
import openfl.utils.SystemPath;
#end


@:access(openfl.media.Sound)
class DefaultAssetLibrary extends AssetLibrary {
	
	
	public var className (default, null) = new Map <String, Dynamic> ();
	public var path (default, null) = new Map <String, String> ();
	public var type (default, null) = new Map <String, AssetType> ();
	
	private var lastModified:Float;
	private var timer:Timer;
	
	
	public function new () {
		
		super ();
		
		#if flash
		
		className.set ("assets/scenes/WCafe/Affiches.jpg", __ASSET__assets_scenes_wcafe_affiches_jpg);
		type.set ("assets/scenes/WCafe/Affiches.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Affiches.png", __ASSET__assets_scenes_wcafe_affiches_png);
		type.set ("assets/scenes/WCafe/Affiches.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Affiches2.jpg", __ASSET__assets_scenes_wcafe_affiches2_jpg);
		type.set ("assets/scenes/WCafe/Affiches2.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Affiches2.png", __ASSET__assets_scenes_wcafe_affiches2_png);
		type.set ("assets/scenes/WCafe/Affiches2.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Affiches3.jpg", __ASSET__assets_scenes_wcafe_affiches3_jpg);
		type.set ("assets/scenes/WCafe/Affiches3.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Affiches3.png", __ASSET__assets_scenes_wcafe_affiches3_png);
		type.set ("assets/scenes/WCafe/Affiches3.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/AffichesLightingMap.jpg", __ASSET__assets_scenes_wcafe_afficheslightingmap_jpg);
		type.set ("assets/scenes/WCafe/AffichesLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/AffichesLightingMap.png", __ASSET__assets_scenes_wcafe_afficheslightingmap_png);
		type.set ("assets/scenes/WCafe/AffichesLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Bafle.jpg", __ASSET__assets_scenes_wcafe_bafle_jpg);
		type.set ("assets/scenes/WCafe/Bafle.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Bafle.png", __ASSET__assets_scenes_wcafe_bafle_png);
		type.set ("assets/scenes/WCafe/Bafle.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/BafleLightingMap.jpg", __ASSET__assets_scenes_wcafe_baflelightingmap_jpg);
		type.set ("assets/scenes/WCafe/BafleLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/BafleLightingMap.png", __ASSET__assets_scenes_wcafe_baflelightingmap_png);
		type.set ("assets/scenes/WCafe/BafleLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Beton1.jpg", __ASSET__assets_scenes_wcafe_beton1_jpg);
		type.set ("assets/scenes/WCafe/Beton1.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Beton1.png", __ASSET__assets_scenes_wcafe_beton1_png);
		type.set ("assets/scenes/WCafe/Beton1.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/BlancUniLightingMap.jpg", __ASSET__assets_scenes_wcafe_blancunilightingmap_jpg);
		type.set ("assets/scenes/WCafe/BlancUniLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/BlancUniLightingMap.png", __ASSET__assets_scenes_wcafe_blancunilightingmap_png);
		type.set ("assets/scenes/WCafe/BlancUniLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Bois2.jpg", __ASSET__assets_scenes_wcafe_bois2_jpg);
		type.set ("assets/scenes/WCafe/Bois2.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Bois2.png", __ASSET__assets_scenes_wcafe_bois2_png);
		type.set ("assets/scenes/WCafe/Bois2.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Briques3.jpg", __ASSET__assets_scenes_wcafe_briques3_jpg);
		type.set ("assets/scenes/WCafe/Briques3.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Briques3.png", __ASSET__assets_scenes_wcafe_briques3_png);
		type.set ("assets/scenes/WCafe/Briques3.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Canape1LightingMap.jpg", __ASSET__assets_scenes_wcafe_canape1lightingmap_jpg);
		type.set ("assets/scenes/WCafe/Canape1LightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Canapé1LightingMap.png", __ASSET__assets_scenes_wcafe_canape__1lightingmap_png);
		type.set ("assets/scenes/WCafe/Canapé1LightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Canette1.jpg", __ASSET__assets_scenes_wcafe_canette1_jpg);
		type.set ("assets/scenes/WCafe/Canette1.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Canette1.png", __ASSET__assets_scenes_wcafe_canette1_png);
		type.set ("assets/scenes/WCafe/Canette1.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Canette2.jpg", __ASSET__assets_scenes_wcafe_canette2_jpg);
		type.set ("assets/scenes/WCafe/Canette2.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Canette2.png", __ASSET__assets_scenes_wcafe_canette2_png);
		type.set ("assets/scenes/WCafe/Canette2.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ChaineHifi.jpg", __ASSET__assets_scenes_wcafe_chainehifi_jpg);
		type.set ("assets/scenes/WCafe/ChaineHifi.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ChaineHifi.png", __ASSET__assets_scenes_wcafe_chainehifi_png);
		type.set ("assets/scenes/WCafe/ChaineHifi.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ChaineHifi2.jpg", __ASSET__assets_scenes_wcafe_chainehifi2_jpg);
		type.set ("assets/scenes/WCafe/ChaineHifi2.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ChaineHifi2.png", __ASSET__assets_scenes_wcafe_chainehifi2_png);
		type.set ("assets/scenes/WCafe/ChaineHifi2.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ChromeBrosseLightingMap.jpg", __ASSET__assets_scenes_wcafe_chromebrosselightingmap_jpg);
		type.set ("assets/scenes/WCafe/ChromeBrosseLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ChromeBrosséLightingMap.png", __ASSET__assets_scenes_wcafe_chromebrosse__lightingmap_png);
		type.set ("assets/scenes/WCafe/ChromeBrosséLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ChromeLightingMap.jpg", __ASSET__assets_scenes_wcafe_chromelightingmap_jpg);
		type.set ("assets/scenes/WCafe/ChromeLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ChromeLightingMap.png", __ASSET__assets_scenes_wcafe_chromelightingmap_png);
		type.set ("assets/scenes/WCafe/ChromeLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ColonnesLightingMap.jpg", __ASSET__assets_scenes_wcafe_colonneslightingmap_jpg);
		type.set ("assets/scenes/WCafe/ColonnesLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ColonnesLightingMap.png", __ASSET__assets_scenes_wcafe_colonneslightingmap_png);
		type.set ("assets/scenes/WCafe/ColonnesLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Coussins2LightingMap.jpg", __ASSET__assets_scenes_wcafe_coussins2lightingmap_jpg);
		type.set ("assets/scenes/WCafe/Coussins2LightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Coussins2LightingMap.png", __ASSET__assets_scenes_wcafe_coussins2lightingmap_png);
		type.set ("assets/scenes/WCafe/Coussins2LightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg", __ASSET__assets_scenes_wcafe_coussinsfauteuillightingmap_jpg);
		type.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.png", __ASSET__assets_scenes_wcafe_coussinsfauteuillightingmap_png);
		type.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Cuir1Spec.png", __ASSET__assets_scenes_wcafe_cuir1spec_png);
		type.set ("assets/scenes/WCafe/Cuir1Spec.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/CuirbrunSpec.png", __ASSET__assets_scenes_wcafe_cuirbrunspec_png);
		type.set ("assets/scenes/WCafe/CuirbrunSpec.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/CuiViolet.jpg", __ASSET__assets_scenes_wcafe_cuiviolet_jpg);
		type.set ("assets/scenes/WCafe/CuiViolet.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/CuiViolet.png", __ASSET__assets_scenes_wcafe_cuiviolet_png);
		type.set ("assets/scenes/WCafe/CuiViolet.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Degrade.png", __ASSET__assets_scenes_wcafe_degrade_png);
		type.set ("assets/scenes/WCafe/Degrade.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Degradebar.jpg", __ASSET__assets_scenes_wcafe_degradebar_jpg);
		type.set ("assets/scenes/WCafe/Degradebar.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Degradebar.png", __ASSET__assets_scenes_wcafe_degradebar_png);
		type.set ("assets/scenes/WCafe/Degradebar.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Ecrantele1.jpg", __ASSET__assets_scenes_wcafe_ecrantele1_jpg);
		type.set ("assets/scenes/WCafe/Ecrantele1.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Ecrantele1.png", __ASSET__assets_scenes_wcafe_ecrantele1_png);
		type.set ("assets/scenes/WCafe/Ecrantele1.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/EscalierLightingMap.jpg", __ASSET__assets_scenes_wcafe_escalierlightingmap_jpg);
		type.set ("assets/scenes/WCafe/EscalierLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/EscalierLightingMap.png", __ASSET__assets_scenes_wcafe_escalierlightingmap_png);
		type.set ("assets/scenes/WCafe/EscalierLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/exit.jpg", __ASSET__assets_scenes_wcafe_exit_jpg);
		type.set ("assets/scenes/WCafe/exit.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/exit.png", __ASSET__assets_scenes_wcafe_exit_png);
		type.set ("assets/scenes/WCafe/exit.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.jpg", __ASSET__assets_scenes_wcafe_fauteuilrond01lightingmap_jpg);
		type.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.png", __ASSET__assets_scenes_wcafe_fauteuilrond01lightingmap_png);
		type.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Fauteuilsronds.jpg", __ASSET__assets_scenes_wcafe_fauteuilsronds_jpg);
		type.set ("assets/scenes/WCafe/Fauteuilsronds.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Fauteuilsronds.png", __ASSET__assets_scenes_wcafe_fauteuilsronds_png);
		type.set ("assets/scenes/WCafe/Fauteuilsronds.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Fndgris.jpg", __ASSET__assets_scenes_wcafe_fndgris_jpg);
		type.set ("assets/scenes/WCafe/Fndgris.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Fndgris.png", __ASSET__assets_scenes_wcafe_fndgris_png);
		type.set ("assets/scenes/WCafe/Fndgris.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Fndrouge2.jpg", __ASSET__assets_scenes_wcafe_fndrouge2_jpg);
		type.set ("assets/scenes/WCafe/Fndrouge2.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Fndrouge2.png", __ASSET__assets_scenes_wcafe_fndrouge2_png);
		type.set ("assets/scenes/WCafe/Fndrouge2.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.jpg", __ASSET__assets_scenes_wcafe_fondmeuble_baslightingmap_jpg);
		type.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.png", __ASSET__assets_scenes_wcafe_fondmeuble_baslightingmap_png);
		type.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Fvert.jpg", __ASSET__assets_scenes_wcafe_fvert_jpg);
		type.set ("assets/scenes/WCafe/Fvert.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Fvert.png", __ASSET__assets_scenes_wcafe_fvert_png);
		type.set ("assets/scenes/WCafe/Fvert.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Grille.png", __ASSET__assets_scenes_wcafe_grille_png);
		type.set ("assets/scenes/WCafe/Grille.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/liquiorange.jpg", __ASSET__assets_scenes_wcafe_liquiorange_jpg);
		type.set ("assets/scenes/WCafe/liquiorange.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/liquiorange.png", __ASSET__assets_scenes_wcafe_liquiorange_png);
		type.set ("assets/scenes/WCafe/liquiorange.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Liquirouge.jpg", __ASSET__assets_scenes_wcafe_liquirouge_jpg);
		type.set ("assets/scenes/WCafe/Liquirouge.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Liquirouge.png", __ASSET__assets_scenes_wcafe_liquirouge_png);
		type.set ("assets/scenes/WCafe/Liquirouge.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Liquivert.jpg", __ASSET__assets_scenes_wcafe_liquivert_jpg);
		type.set ("assets/scenes/WCafe/Liquivert.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Liquivert.png", __ASSET__assets_scenes_wcafe_liquivert_png);
		type.set ("assets/scenes/WCafe/Liquivert.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Masque1.png", __ASSET__assets_scenes_wcafe_masque1_png);
		type.set ("assets/scenes/WCafe/Masque1.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Masque2.png", __ASSET__assets_scenes_wcafe_masque2_png);
		type.set ("assets/scenes/WCafe/Masque2.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/MurrdcLightingMap.jpg", __ASSET__assets_scenes_wcafe_murrdclightingmap_jpg);
		type.set ("assets/scenes/WCafe/MurrdcLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/MurrdcLightingMap.png", __ASSET__assets_scenes_wcafe_murrdclightingmap_png);
		type.set ("assets/scenes/WCafe/MurrdcLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Mursdivers.jpg", __ASSET__assets_scenes_wcafe_mursdivers_jpg);
		type.set ("assets/scenes/WCafe/Mursdivers.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Mursdivers.png", __ASSET__assets_scenes_wcafe_mursdivers_png);
		type.set ("assets/scenes/WCafe/Mursdivers.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/NeonarcheAmbiant.jpg", __ASSET__assets_scenes_wcafe_neonarcheambiant_jpg);
		type.set ("assets/scenes/WCafe/NeonarcheAmbiant.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/NeonarcheAmbiant.png", __ASSET__assets_scenes_wcafe_neonarcheambiant_png);
		type.set ("assets/scenes/WCafe/NeonarcheAmbiant.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/NoirmatLightingMap.jpg", __ASSET__assets_scenes_wcafe_noirmatlightingmap_jpg);
		type.set ("assets/scenes/WCafe/NoirmatLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/NoirmatLightingMap.png", __ASSET__assets_scenes_wcafe_noirmatlightingmap_png);
		type.set ("assets/scenes/WCafe/NoirmatLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Ordi.jpg", __ASSET__assets_scenes_wcafe_ordi_jpg);
		type.set ("assets/scenes/WCafe/Ordi.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Ordi.png", __ASSET__assets_scenes_wcafe_ordi_png);
		type.set ("assets/scenes/WCafe/Ordi.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/OrdiSI.jpg", __ASSET__assets_scenes_wcafe_ordisi_jpg);
		type.set ("assets/scenes/WCafe/OrdiSI.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/OrdiSI.png", __ASSET__assets_scenes_wcafe_ordisi_png);
		type.set ("assets/scenes/WCafe/OrdiSI.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/OrdisLightingMap.jpg", __ASSET__assets_scenes_wcafe_ordislightingmap_jpg);
		type.set ("assets/scenes/WCafe/OrdisLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/OrdisLightingMap.png", __ASSET__assets_scenes_wcafe_ordislightingmap_png);
		type.set ("assets/scenes/WCafe/OrdisLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Pano2Alt.jpg", __ASSET__assets_scenes_wcafe_pano2alt_jpg);
		type.set ("assets/scenes/WCafe/Pano2Alt.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Pano2Alt.png", __ASSET__assets_scenes_wcafe_pano2alt_png);
		type.set ("assets/scenes/WCafe/Pano2Alt.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_nx_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_ny_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_nz_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_px_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_py_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_pz_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Parquet1.jpg", __ASSET__assets_scenes_wcafe_parquet1_jpg);
		type.set ("assets/scenes/WCafe/Parquet1.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Parquet1.png", __ASSET__assets_scenes_wcafe_parquet1_png);
		type.set ("assets/scenes/WCafe/Parquet1.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Parquet3.jpg", __ASSET__assets_scenes_wcafe_parquet3_jpg);
		type.set ("assets/scenes/WCafe/Parquet3.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Parquet3.png", __ASSET__assets_scenes_wcafe_parquet3_png);
		type.set ("assets/scenes/WCafe/Parquet3.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Peintureverte.jpg", __ASSET__assets_scenes_wcafe_peintureverte_jpg);
		type.set ("assets/scenes/WCafe/Peintureverte.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Peintureverte.png", __ASSET__assets_scenes_wcafe_peintureverte_png);
		type.set ("assets/scenes/WCafe/Peintureverte.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/PlafondsLightingMap.jpg", __ASSET__assets_scenes_wcafe_plafondslightingmap_jpg);
		type.set ("assets/scenes/WCafe/PlafondsLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/PlafondsLightingMap.png", __ASSET__assets_scenes_wcafe_plafondslightingmap_png);
		type.set ("assets/scenes/WCafe/PlafondsLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Plancher2LightingMap.jpg", __ASSET__assets_scenes_wcafe_plancher2lightingmap_jpg);
		type.set ("assets/scenes/WCafe/Plancher2LightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Plancher2LightingMap.png", __ASSET__assets_scenes_wcafe_plancher2lightingmap_png);
		type.set ("assets/scenes/WCafe/Plancher2LightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Plancheretage1LightingMap.jpg", __ASSET__assets_scenes_wcafe_plancheretage1lightingmap_jpg);
		type.set ("assets/scenes/WCafe/Plancheretage1LightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Plancherétage1LightingMap.png", __ASSET__assets_scenes_wcafe_planchere__tage1lightingmap_png);
		type.set ("assets/scenes/WCafe/Plancherétage1LightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/PlotDiffuseMap.jpg", __ASSET__assets_scenes_wcafe_plotdiffusemap_jpg);
		type.set ("assets/scenes/WCafe/PlotDiffuseMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/PlotDiffuseMap.png", __ASSET__assets_scenes_wcafe_plotdiffusemap_png);
		type.set ("assets/scenes/WCafe/PlotDiffuseMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Produits.jpg", __ASSET__assets_scenes_wcafe_produits_jpg);
		type.set ("assets/scenes/WCafe/Produits.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Produits.png", __ASSET__assets_scenes_wcafe_produits_png);
		type.set ("assets/scenes/WCafe/Produits.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/RedFlowers.jpg", __ASSET__assets_scenes_wcafe_redflowers_jpg);
		type.set ("assets/scenes/WCafe/RedFlowers.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/RedFlowers.png", __ASSET__assets_scenes_wcafe_redflowers_png);
		type.set ("assets/scenes/WCafe/RedFlowers.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Refcubenoire_nx.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_nx_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_nx.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Refcubenoire_ny.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_ny_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_ny.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Refcubenoire_nz.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_nz_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_nz.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Refcubenoire_px.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_px_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_px.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Refcubenoire_py.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_py_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_py.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Refcubenoire_pz.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_pz_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_pz.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Refcubenoireplate.jpg", __ASSET__assets_scenes_wcafe_refcubenoireplate_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoireplate.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Refcubenoireplate.png", __ASSET__assets_scenes_wcafe_refcubenoireplate_png);
		type.set ("assets/scenes/WCafe/Refcubenoireplate.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Salade.jpg", __ASSET__assets_scenes_wcafe_salade_jpg);
		type.set ("assets/scenes/WCafe/Salade.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Salade.png", __ASSET__assets_scenes_wcafe_salade_png);
		type.set ("assets/scenes/WCafe/Salade.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/SaladesLM.jpg", __ASSET__assets_scenes_wcafe_saladeslm_jpg);
		type.set ("assets/scenes/WCafe/SaladesLM.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/SaladesLM.png", __ASSET__assets_scenes_wcafe_saladeslm_png);
		type.set ("assets/scenes/WCafe/SaladesLM.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/SolRDCLightingMap.jpg", __ASSET__assets_scenes_wcafe_solrdclightingmap_jpg);
		type.set ("assets/scenes/WCafe/SolRDCLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/SolRDCLightingMap.png", __ASSET__assets_scenes_wcafe_solrdclightingmap_png);
		type.set ("assets/scenes/WCafe/SolRDCLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/SpecMetalbrosse.png", __ASSET__assets_scenes_wcafe_specmetalbrosse_png);
		type.set ("assets/scenes/WCafe/SpecMetalbrosse.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.jpg", __ASSET__assets_scenes_wcafe_sponsor01diffusemap_jpg);
		type.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.png", __ASSET__assets_scenes_wcafe_sponsor01diffusemap_png);
		type.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Sticker haut.jpg", __ASSET__assets_scenes_wcafe_sticker_haut_jpg);
		type.set ("assets/scenes/WCafe/Sticker haut.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Sticker haut.png", __ASSET__assets_scenes_wcafe_sticker_haut_png);
		type.set ("assets/scenes/WCafe/Sticker haut.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Surface.jpg", __ASSET__assets_scenes_wcafe_surface_jpg);
		type.set ("assets/scenes/WCafe/Surface.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Surface.png", __ASSET__assets_scenes_wcafe_surface_png);
		type.set ("assets/scenes/WCafe/Surface.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/tableaux.jpg", __ASSET__assets_scenes_wcafe_tableaux_jpg);
		type.set ("assets/scenes/WCafe/tableaux.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/tableaux.png", __ASSET__assets_scenes_wcafe_tableaux_png);
		type.set ("assets/scenes/WCafe/tableaux.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/TableSurfaceLightingMap.jpg", __ASSET__assets_scenes_wcafe_tablesurfacelightingmap_jpg);
		type.set ("assets/scenes/WCafe/TableSurfaceLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/TableSurfaceLightingMap.png", __ASSET__assets_scenes_wcafe_tablesurfacelightingmap_png);
		type.set ("assets/scenes/WCafe/TableSurfaceLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/tapis4.jpg", __ASSET__assets_scenes_wcafe_tapis4_jpg);
		type.set ("assets/scenes/WCafe/tapis4.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/tapis4.png", __ASSET__assets_scenes_wcafe_tapis4_png);
		type.set ("assets/scenes/WCafe/tapis4.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/TapisLightingMap.jpg", __ASSET__assets_scenes_wcafe_tapislightingmap_jpg);
		type.set ("assets/scenes/WCafe/TapisLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/TapisLightingMap.png", __ASSET__assets_scenes_wcafe_tapislightingmap_png);
		type.set ("assets/scenes/WCafe/TapisLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Tele.jpg", __ASSET__assets_scenes_wcafe_tele_jpg);
		type.set ("assets/scenes/WCafe/Tele.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Tele.png", __ASSET__assets_scenes_wcafe_tele_png);
		type.set ("assets/scenes/WCafe/Tele.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/TeleLightingMap.jpg", __ASSET__assets_scenes_wcafe_telelightingmap_jpg);
		type.set ("assets/scenes/WCafe/TeleLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/TeleSI.jpg", __ASSET__assets_scenes_wcafe_telesi_jpg);
		type.set ("assets/scenes/WCafe/TeleSI.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/TeleSI.png", __ASSET__assets_scenes_wcafe_telesi_png);
		type.set ("assets/scenes/WCafe/TeleSI.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/TéléLightingMap.png", __ASSET__assets_scenes_wcafe_te__le__lightingmap_png);
		type.set ("assets/scenes/WCafe/TéléLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/vENT.jpg", __ASSET__assets_scenes_wcafe_vent_jpg);
		type.set ("assets/scenes/WCafe/vENT.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/vENT.png", __ASSET__assets_scenes_wcafe_vent_png);
		type.set ("assets/scenes/WCafe/vENT.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Verticola.jpg", __ASSET__assets_scenes_wcafe_verticola_jpg);
		type.set ("assets/scenes/WCafe/Verticola.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Verticola.png", __ASSET__assets_scenes_wcafe_verticola_png);
		type.set ("assets/scenes/WCafe/Verticola.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/WCafe.babylon", __ASSET__assets_scenes_wcafe_wcafe_babylon);
		type.set ("assets/scenes/WCafe/WCafe.babylon", AssetType.TEXT);
		className.set ("assets/scenes/WCafe/WCafe.babylon.manifest", __ASSET__assets_scenes_wcafe_wcafe_babylon_manifest);
		type.set ("assets/scenes/WCafe/WCafe.babylon.manifest", AssetType.TEXT);
		className.set ("assets/scenes/WCafe/Wifi.jpg", __ASSET__assets_scenes_wcafe_wifi_jpg);
		type.set ("assets/scenes/WCafe/Wifi.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Wifi.png", __ASSET__assets_scenes_wcafe_wifi_png);
		type.set ("assets/scenes/WCafe/Wifi.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Win7.jpg", __ASSET__assets_scenes_wcafe_win7_jpg);
		type.set ("assets/scenes/WCafe/Win7.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Win7.png", __ASSET__assets_scenes_wcafe_win7_png);
		type.set ("assets/scenes/WCafe/Win7.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Win7A.jpg", __ASSET__assets_scenes_wcafe_win7a_jpg);
		type.set ("assets/scenes/WCafe/Win7A.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Win7A.png", __ASSET__assets_scenes_wcafe_win7a_png);
		type.set ("assets/scenes/WCafe/Win7A.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/WinCafe1.jpg", __ASSET__assets_scenes_wcafe_wincafe1_jpg);
		type.set ("assets/scenes/WCafe/WinCafe1.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/WinCafe1.png", __ASSET__assets_scenes_wcafe_wincafe1_png);
		type.set ("assets/scenes/WCafe/WinCafe1.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/WinCafe1IL.jpg", __ASSET__assets_scenes_wcafe_wincafe1il_jpg);
		type.set ("assets/scenes/WCafe/WinCafe1IL.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/WinCafe1IL.png", __ASSET__assets_scenes_wcafe_wincafe1il_png);
		type.set ("assets/scenes/WCafe/WinCafe1IL.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/xBOXLightingMap.jpg", __ASSET__assets_scenes_wcafe_xboxlightingmap_jpg);
		type.set ("assets/scenes/WCafe/xBOXLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/xBOXLightingMap.png", __ASSET__assets_scenes_wcafe_xboxlightingmap_png);
		type.set ("assets/scenes/WCafe/xBOXLightingMap.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Xbrique.jpg", __ASSET__assets_scenes_wcafe_xbrique_jpg);
		type.set ("assets/scenes/WCafe/Xbrique.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Xbrique.png", __ASSET__assets_scenes_wcafe_xbrique_png);
		type.set ("assets/scenes/WCafe/Xbrique.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Zebu.jpg", __ASSET__assets_scenes_wcafe_zebu_jpg);
		type.set ("assets/scenes/WCafe/Zebu.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/Zebu.png", __ASSET__assets_scenes_wcafe_zebu_png);
		type.set ("assets/scenes/WCafe/Zebu.png", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ZincLightingMap.jpg", __ASSET__assets_scenes_wcafe_zinclightingmap_jpg);
		type.set ("assets/scenes/WCafe/ZincLightingMap.jpg", AssetType.IMAGE);
		className.set ("assets/scenes/WCafe/ZincLightingMap.png", __ASSET__assets_scenes_wcafe_zinclightingmap_png);
		type.set ("assets/scenes/WCafe/ZincLightingMap.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/scenes/WCafe/Affiches.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Affiches.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Affiches2.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Affiches2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Affiches3.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Affiches3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/AffichesLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/AffichesLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Bafle.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Bafle.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/BafleLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/BafleLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Beton1.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Beton1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/BlancUniLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/BlancUniLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Bois2.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Bois2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Briques3.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Briques3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Canape1LightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Canapé1LightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Canette1.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Canette1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Canette2.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Canette2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ChaineHifi.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ChaineHifi.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ChaineHifi2.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ChaineHifi2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ChromeBrosseLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ChromeBrosséLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ChromeLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ChromeLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ColonnesLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ColonnesLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Coussins2LightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Coussins2LightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/CoussinsfauteuilLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Cuir1Spec.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/CuirbrunSpec.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/CuiViolet.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/CuiViolet.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Degrade.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Degradebar.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Degradebar.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Ecrantele1.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Ecrantele1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/EscalierLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/EscalierLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/exit.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/exit.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/FauteuilRond01LightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/FauteuilRond01LightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Fauteuilsronds.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Fauteuilsronds.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Fndgris.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Fndgris.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Fndrouge2.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Fndrouge2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Fondmeuble basLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Fondmeuble basLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Fvert.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Fvert.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Grille.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/liquiorange.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/liquiorange.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Liquirouge.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Liquirouge.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Liquivert.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Liquivert.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Masque1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Masque2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/MurrdcLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/MurrdcLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Mursdivers.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Mursdivers.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/NeonarcheAmbiant.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/NeonarcheAmbiant.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/NoirmatLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/NoirmatLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Ordi.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Ordi.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/OrdiSI.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/OrdiSI.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/OrdisLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/OrdisLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Pano2Alt.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Pano2Alt.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Parquet1.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Parquet1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Parquet3.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Parquet3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Peintureverte.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Peintureverte.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/PlafondsLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/PlafondsLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Plancher2LightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Plancher2LightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Plancheretage1LightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Plancherétage1LightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/PlotDiffuseMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/PlotDiffuseMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Produits.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Produits.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/RedFlowers.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/RedFlowers.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Refcubenoire_nx.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Refcubenoire_ny.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Refcubenoire_nz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Refcubenoire_px.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Refcubenoire_py.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Refcubenoire_pz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Refcubenoireplate.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Refcubenoireplate.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Salade.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Salade.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/SaladesLM.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/SaladesLM.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/SolRDCLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/SolRDCLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/SpecMetalbrosse.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Sponsor01DiffuseMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Sponsor01DiffuseMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Sticker haut.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Sticker haut.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Surface.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Surface.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/tableaux.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/tableaux.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/TableSurfaceLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/TableSurfaceLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/tapis4.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/tapis4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/TapisLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/TapisLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Tele.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Tele.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/TeleLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/TeleSI.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/TeleSI.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/TéléLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/vENT.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/vENT.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Verticola.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Verticola.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/WCafe.babylon";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/scenes/WCafe/WCafe.babylon.manifest";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/scenes/WCafe/Wifi.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Wifi.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Win7.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Win7.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Win7A.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Win7A.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/WinCafe1.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/WinCafe1.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/WinCafe1IL.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/WinCafe1IL.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/xBOXLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/xBOXLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Xbrique.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Xbrique.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Zebu.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/Zebu.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ZincLightingMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/scenes/WCafe/ZincLightingMap.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/scenes/WCafe/Affiches.jpg", __ASSET__assets_scenes_wcafe_affiches_jpg);
		type.set ("assets/scenes/WCafe/Affiches.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Affiches.png", __ASSET__assets_scenes_wcafe_affiches_png);
		type.set ("assets/scenes/WCafe/Affiches.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Affiches2.jpg", __ASSET__assets_scenes_wcafe_affiches2_jpg);
		type.set ("assets/scenes/WCafe/Affiches2.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Affiches2.png", __ASSET__assets_scenes_wcafe_affiches2_png);
		type.set ("assets/scenes/WCafe/Affiches2.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Affiches3.jpg", __ASSET__assets_scenes_wcafe_affiches3_jpg);
		type.set ("assets/scenes/WCafe/Affiches3.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Affiches3.png", __ASSET__assets_scenes_wcafe_affiches3_png);
		type.set ("assets/scenes/WCafe/Affiches3.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/AffichesLightingMap.jpg", __ASSET__assets_scenes_wcafe_afficheslightingmap_jpg);
		type.set ("assets/scenes/WCafe/AffichesLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/AffichesLightingMap.png", __ASSET__assets_scenes_wcafe_afficheslightingmap_png);
		type.set ("assets/scenes/WCafe/AffichesLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Bafle.jpg", __ASSET__assets_scenes_wcafe_bafle_jpg);
		type.set ("assets/scenes/WCafe/Bafle.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Bafle.png", __ASSET__assets_scenes_wcafe_bafle_png);
		type.set ("assets/scenes/WCafe/Bafle.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/BafleLightingMap.jpg", __ASSET__assets_scenes_wcafe_baflelightingmap_jpg);
		type.set ("assets/scenes/WCafe/BafleLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/BafleLightingMap.png", __ASSET__assets_scenes_wcafe_baflelightingmap_png);
		type.set ("assets/scenes/WCafe/BafleLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Beton1.jpg", __ASSET__assets_scenes_wcafe_beton1_jpg);
		type.set ("assets/scenes/WCafe/Beton1.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Beton1.png", __ASSET__assets_scenes_wcafe_beton1_png);
		type.set ("assets/scenes/WCafe/Beton1.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/BlancUniLightingMap.jpg", __ASSET__assets_scenes_wcafe_blancunilightingmap_jpg);
		type.set ("assets/scenes/WCafe/BlancUniLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/BlancUniLightingMap.png", __ASSET__assets_scenes_wcafe_blancunilightingmap_png);
		type.set ("assets/scenes/WCafe/BlancUniLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Bois2.jpg", __ASSET__assets_scenes_wcafe_bois2_jpg);
		type.set ("assets/scenes/WCafe/Bois2.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Bois2.png", __ASSET__assets_scenes_wcafe_bois2_png);
		type.set ("assets/scenes/WCafe/Bois2.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Briques3.jpg", __ASSET__assets_scenes_wcafe_briques3_jpg);
		type.set ("assets/scenes/WCafe/Briques3.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Briques3.png", __ASSET__assets_scenes_wcafe_briques3_png);
		type.set ("assets/scenes/WCafe/Briques3.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Canape1LightingMap.jpg", __ASSET__assets_scenes_wcafe_canape1lightingmap_jpg);
		type.set ("assets/scenes/WCafe/Canape1LightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Canapé1LightingMap.png", __ASSET__assets_scenes_wcafe_canape__1lightingmap_png);
		type.set ("assets/scenes/WCafe/Canapé1LightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Canette1.jpg", __ASSET__assets_scenes_wcafe_canette1_jpg);
		type.set ("assets/scenes/WCafe/Canette1.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Canette1.png", __ASSET__assets_scenes_wcafe_canette1_png);
		type.set ("assets/scenes/WCafe/Canette1.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Canette2.jpg", __ASSET__assets_scenes_wcafe_canette2_jpg);
		type.set ("assets/scenes/WCafe/Canette2.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Canette2.png", __ASSET__assets_scenes_wcafe_canette2_png);
		type.set ("assets/scenes/WCafe/Canette2.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ChaineHifi.jpg", __ASSET__assets_scenes_wcafe_chainehifi_jpg);
		type.set ("assets/scenes/WCafe/ChaineHifi.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ChaineHifi.png", __ASSET__assets_scenes_wcafe_chainehifi_png);
		type.set ("assets/scenes/WCafe/ChaineHifi.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ChaineHifi2.jpg", __ASSET__assets_scenes_wcafe_chainehifi2_jpg);
		type.set ("assets/scenes/WCafe/ChaineHifi2.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ChaineHifi2.png", __ASSET__assets_scenes_wcafe_chainehifi2_png);
		type.set ("assets/scenes/WCafe/ChaineHifi2.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ChromeBrosseLightingMap.jpg", __ASSET__assets_scenes_wcafe_chromebrosselightingmap_jpg);
		type.set ("assets/scenes/WCafe/ChromeBrosseLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ChromeBrosséLightingMap.png", __ASSET__assets_scenes_wcafe_chromebrosse__lightingmap_png);
		type.set ("assets/scenes/WCafe/ChromeBrosséLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ChromeLightingMap.jpg", __ASSET__assets_scenes_wcafe_chromelightingmap_jpg);
		type.set ("assets/scenes/WCafe/ChromeLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ChromeLightingMap.png", __ASSET__assets_scenes_wcafe_chromelightingmap_png);
		type.set ("assets/scenes/WCafe/ChromeLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ColonnesLightingMap.jpg", __ASSET__assets_scenes_wcafe_colonneslightingmap_jpg);
		type.set ("assets/scenes/WCafe/ColonnesLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ColonnesLightingMap.png", __ASSET__assets_scenes_wcafe_colonneslightingmap_png);
		type.set ("assets/scenes/WCafe/ColonnesLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Coussins2LightingMap.jpg", __ASSET__assets_scenes_wcafe_coussins2lightingmap_jpg);
		type.set ("assets/scenes/WCafe/Coussins2LightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Coussins2LightingMap.png", __ASSET__assets_scenes_wcafe_coussins2lightingmap_png);
		type.set ("assets/scenes/WCafe/Coussins2LightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg", __ASSET__assets_scenes_wcafe_coussinsfauteuillightingmap_jpg);
		type.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.png", __ASSET__assets_scenes_wcafe_coussinsfauteuillightingmap_png);
		type.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Cuir1Spec.png", __ASSET__assets_scenes_wcafe_cuir1spec_png);
		type.set ("assets/scenes/WCafe/Cuir1Spec.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/CuirbrunSpec.png", __ASSET__assets_scenes_wcafe_cuirbrunspec_png);
		type.set ("assets/scenes/WCafe/CuirbrunSpec.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/CuiViolet.jpg", __ASSET__assets_scenes_wcafe_cuiviolet_jpg);
		type.set ("assets/scenes/WCafe/CuiViolet.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/CuiViolet.png", __ASSET__assets_scenes_wcafe_cuiviolet_png);
		type.set ("assets/scenes/WCafe/CuiViolet.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Degrade.png", __ASSET__assets_scenes_wcafe_degrade_png);
		type.set ("assets/scenes/WCafe/Degrade.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Degradebar.jpg", __ASSET__assets_scenes_wcafe_degradebar_jpg);
		type.set ("assets/scenes/WCafe/Degradebar.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Degradebar.png", __ASSET__assets_scenes_wcafe_degradebar_png);
		type.set ("assets/scenes/WCafe/Degradebar.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Ecrantele1.jpg", __ASSET__assets_scenes_wcafe_ecrantele1_jpg);
		type.set ("assets/scenes/WCafe/Ecrantele1.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Ecrantele1.png", __ASSET__assets_scenes_wcafe_ecrantele1_png);
		type.set ("assets/scenes/WCafe/Ecrantele1.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/EscalierLightingMap.jpg", __ASSET__assets_scenes_wcafe_escalierlightingmap_jpg);
		type.set ("assets/scenes/WCafe/EscalierLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/EscalierLightingMap.png", __ASSET__assets_scenes_wcafe_escalierlightingmap_png);
		type.set ("assets/scenes/WCafe/EscalierLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/exit.jpg", __ASSET__assets_scenes_wcafe_exit_jpg);
		type.set ("assets/scenes/WCafe/exit.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/exit.png", __ASSET__assets_scenes_wcafe_exit_png);
		type.set ("assets/scenes/WCafe/exit.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.jpg", __ASSET__assets_scenes_wcafe_fauteuilrond01lightingmap_jpg);
		type.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.png", __ASSET__assets_scenes_wcafe_fauteuilrond01lightingmap_png);
		type.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Fauteuilsronds.jpg", __ASSET__assets_scenes_wcafe_fauteuilsronds_jpg);
		type.set ("assets/scenes/WCafe/Fauteuilsronds.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Fauteuilsronds.png", __ASSET__assets_scenes_wcafe_fauteuilsronds_png);
		type.set ("assets/scenes/WCafe/Fauteuilsronds.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Fndgris.jpg", __ASSET__assets_scenes_wcafe_fndgris_jpg);
		type.set ("assets/scenes/WCafe/Fndgris.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Fndgris.png", __ASSET__assets_scenes_wcafe_fndgris_png);
		type.set ("assets/scenes/WCafe/Fndgris.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Fndrouge2.jpg", __ASSET__assets_scenes_wcafe_fndrouge2_jpg);
		type.set ("assets/scenes/WCafe/Fndrouge2.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Fndrouge2.png", __ASSET__assets_scenes_wcafe_fndrouge2_png);
		type.set ("assets/scenes/WCafe/Fndrouge2.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.jpg", __ASSET__assets_scenes_wcafe_fondmeuble_baslightingmap_jpg);
		type.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.png", __ASSET__assets_scenes_wcafe_fondmeuble_baslightingmap_png);
		type.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Fvert.jpg", __ASSET__assets_scenes_wcafe_fvert_jpg);
		type.set ("assets/scenes/WCafe/Fvert.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Fvert.png", __ASSET__assets_scenes_wcafe_fvert_png);
		type.set ("assets/scenes/WCafe/Fvert.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Grille.png", __ASSET__assets_scenes_wcafe_grille_png);
		type.set ("assets/scenes/WCafe/Grille.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/liquiorange.jpg", __ASSET__assets_scenes_wcafe_liquiorange_jpg);
		type.set ("assets/scenes/WCafe/liquiorange.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/liquiorange.png", __ASSET__assets_scenes_wcafe_liquiorange_png);
		type.set ("assets/scenes/WCafe/liquiorange.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Liquirouge.jpg", __ASSET__assets_scenes_wcafe_liquirouge_jpg);
		type.set ("assets/scenes/WCafe/Liquirouge.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Liquirouge.png", __ASSET__assets_scenes_wcafe_liquirouge_png);
		type.set ("assets/scenes/WCafe/Liquirouge.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Liquivert.jpg", __ASSET__assets_scenes_wcafe_liquivert_jpg);
		type.set ("assets/scenes/WCafe/Liquivert.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Liquivert.png", __ASSET__assets_scenes_wcafe_liquivert_png);
		type.set ("assets/scenes/WCafe/Liquivert.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Masque1.png", __ASSET__assets_scenes_wcafe_masque1_png);
		type.set ("assets/scenes/WCafe/Masque1.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Masque2.png", __ASSET__assets_scenes_wcafe_masque2_png);
		type.set ("assets/scenes/WCafe/Masque2.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/MurrdcLightingMap.jpg", __ASSET__assets_scenes_wcafe_murrdclightingmap_jpg);
		type.set ("assets/scenes/WCafe/MurrdcLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/MurrdcLightingMap.png", __ASSET__assets_scenes_wcafe_murrdclightingmap_png);
		type.set ("assets/scenes/WCafe/MurrdcLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Mursdivers.jpg", __ASSET__assets_scenes_wcafe_mursdivers_jpg);
		type.set ("assets/scenes/WCafe/Mursdivers.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Mursdivers.png", __ASSET__assets_scenes_wcafe_mursdivers_png);
		type.set ("assets/scenes/WCafe/Mursdivers.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/NeonarcheAmbiant.jpg", __ASSET__assets_scenes_wcafe_neonarcheambiant_jpg);
		type.set ("assets/scenes/WCafe/NeonarcheAmbiant.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/NeonarcheAmbiant.png", __ASSET__assets_scenes_wcafe_neonarcheambiant_png);
		type.set ("assets/scenes/WCafe/NeonarcheAmbiant.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/NoirmatLightingMap.jpg", __ASSET__assets_scenes_wcafe_noirmatlightingmap_jpg);
		type.set ("assets/scenes/WCafe/NoirmatLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/NoirmatLightingMap.png", __ASSET__assets_scenes_wcafe_noirmatlightingmap_png);
		type.set ("assets/scenes/WCafe/NoirmatLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Ordi.jpg", __ASSET__assets_scenes_wcafe_ordi_jpg);
		type.set ("assets/scenes/WCafe/Ordi.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Ordi.png", __ASSET__assets_scenes_wcafe_ordi_png);
		type.set ("assets/scenes/WCafe/Ordi.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/OrdiSI.jpg", __ASSET__assets_scenes_wcafe_ordisi_jpg);
		type.set ("assets/scenes/WCafe/OrdiSI.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/OrdiSI.png", __ASSET__assets_scenes_wcafe_ordisi_png);
		type.set ("assets/scenes/WCafe/OrdiSI.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/OrdisLightingMap.jpg", __ASSET__assets_scenes_wcafe_ordislightingmap_jpg);
		type.set ("assets/scenes/WCafe/OrdisLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/OrdisLightingMap.png", __ASSET__assets_scenes_wcafe_ordislightingmap_png);
		type.set ("assets/scenes/WCafe/OrdisLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Pano2Alt.jpg", __ASSET__assets_scenes_wcafe_pano2alt_jpg);
		type.set ("assets/scenes/WCafe/Pano2Alt.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Pano2Alt.png", __ASSET__assets_scenes_wcafe_pano2alt_png);
		type.set ("assets/scenes/WCafe/Pano2Alt.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_nx_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_ny_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_nz_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_px_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_py_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg", __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_pz_jpg);
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Parquet1.jpg", __ASSET__assets_scenes_wcafe_parquet1_jpg);
		type.set ("assets/scenes/WCafe/Parquet1.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Parquet1.png", __ASSET__assets_scenes_wcafe_parquet1_png);
		type.set ("assets/scenes/WCafe/Parquet1.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Parquet3.jpg", __ASSET__assets_scenes_wcafe_parquet3_jpg);
		type.set ("assets/scenes/WCafe/Parquet3.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Parquet3.png", __ASSET__assets_scenes_wcafe_parquet3_png);
		type.set ("assets/scenes/WCafe/Parquet3.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Peintureverte.jpg", __ASSET__assets_scenes_wcafe_peintureverte_jpg);
		type.set ("assets/scenes/WCafe/Peintureverte.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Peintureverte.png", __ASSET__assets_scenes_wcafe_peintureverte_png);
		type.set ("assets/scenes/WCafe/Peintureverte.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/PlafondsLightingMap.jpg", __ASSET__assets_scenes_wcafe_plafondslightingmap_jpg);
		type.set ("assets/scenes/WCafe/PlafondsLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/PlafondsLightingMap.png", __ASSET__assets_scenes_wcafe_plafondslightingmap_png);
		type.set ("assets/scenes/WCafe/PlafondsLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Plancher2LightingMap.jpg", __ASSET__assets_scenes_wcafe_plancher2lightingmap_jpg);
		type.set ("assets/scenes/WCafe/Plancher2LightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Plancher2LightingMap.png", __ASSET__assets_scenes_wcafe_plancher2lightingmap_png);
		type.set ("assets/scenes/WCafe/Plancher2LightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Plancheretage1LightingMap.jpg", __ASSET__assets_scenes_wcafe_plancheretage1lightingmap_jpg);
		type.set ("assets/scenes/WCafe/Plancheretage1LightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Plancherétage1LightingMap.png", __ASSET__assets_scenes_wcafe_planchere__tage1lightingmap_png);
		type.set ("assets/scenes/WCafe/Plancherétage1LightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/PlotDiffuseMap.jpg", __ASSET__assets_scenes_wcafe_plotdiffusemap_jpg);
		type.set ("assets/scenes/WCafe/PlotDiffuseMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/PlotDiffuseMap.png", __ASSET__assets_scenes_wcafe_plotdiffusemap_png);
		type.set ("assets/scenes/WCafe/PlotDiffuseMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Produits.jpg", __ASSET__assets_scenes_wcafe_produits_jpg);
		type.set ("assets/scenes/WCafe/Produits.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Produits.png", __ASSET__assets_scenes_wcafe_produits_png);
		type.set ("assets/scenes/WCafe/Produits.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/RedFlowers.jpg", __ASSET__assets_scenes_wcafe_redflowers_jpg);
		type.set ("assets/scenes/WCafe/RedFlowers.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/RedFlowers.png", __ASSET__assets_scenes_wcafe_redflowers_png);
		type.set ("assets/scenes/WCafe/RedFlowers.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Refcubenoire_nx.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_nx_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_nx.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Refcubenoire_ny.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_ny_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_ny.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Refcubenoire_nz.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_nz_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_nz.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Refcubenoire_px.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_px_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_px.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Refcubenoire_py.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_py_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_py.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Refcubenoire_pz.jpg", __ASSET__assets_scenes_wcafe_refcubenoire_pz_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoire_pz.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Refcubenoireplate.jpg", __ASSET__assets_scenes_wcafe_refcubenoireplate_jpg);
		type.set ("assets/scenes/WCafe/Refcubenoireplate.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Refcubenoireplate.png", __ASSET__assets_scenes_wcafe_refcubenoireplate_png);
		type.set ("assets/scenes/WCafe/Refcubenoireplate.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Salade.jpg", __ASSET__assets_scenes_wcafe_salade_jpg);
		type.set ("assets/scenes/WCafe/Salade.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Salade.png", __ASSET__assets_scenes_wcafe_salade_png);
		type.set ("assets/scenes/WCafe/Salade.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/SaladesLM.jpg", __ASSET__assets_scenes_wcafe_saladeslm_jpg);
		type.set ("assets/scenes/WCafe/SaladesLM.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/SaladesLM.png", __ASSET__assets_scenes_wcafe_saladeslm_png);
		type.set ("assets/scenes/WCafe/SaladesLM.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/SolRDCLightingMap.jpg", __ASSET__assets_scenes_wcafe_solrdclightingmap_jpg);
		type.set ("assets/scenes/WCafe/SolRDCLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/SolRDCLightingMap.png", __ASSET__assets_scenes_wcafe_solrdclightingmap_png);
		type.set ("assets/scenes/WCafe/SolRDCLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/SpecMetalbrosse.png", __ASSET__assets_scenes_wcafe_specmetalbrosse_png);
		type.set ("assets/scenes/WCafe/SpecMetalbrosse.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.jpg", __ASSET__assets_scenes_wcafe_sponsor01diffusemap_jpg);
		type.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.png", __ASSET__assets_scenes_wcafe_sponsor01diffusemap_png);
		type.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Sticker haut.jpg", __ASSET__assets_scenes_wcafe_sticker_haut_jpg);
		type.set ("assets/scenes/WCafe/Sticker haut.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Sticker haut.png", __ASSET__assets_scenes_wcafe_sticker_haut_png);
		type.set ("assets/scenes/WCafe/Sticker haut.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Surface.jpg", __ASSET__assets_scenes_wcafe_surface_jpg);
		type.set ("assets/scenes/WCafe/Surface.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Surface.png", __ASSET__assets_scenes_wcafe_surface_png);
		type.set ("assets/scenes/WCafe/Surface.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/tableaux.jpg", __ASSET__assets_scenes_wcafe_tableaux_jpg);
		type.set ("assets/scenes/WCafe/tableaux.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/tableaux.png", __ASSET__assets_scenes_wcafe_tableaux_png);
		type.set ("assets/scenes/WCafe/tableaux.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/TableSurfaceLightingMap.jpg", __ASSET__assets_scenes_wcafe_tablesurfacelightingmap_jpg);
		type.set ("assets/scenes/WCafe/TableSurfaceLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/TableSurfaceLightingMap.png", __ASSET__assets_scenes_wcafe_tablesurfacelightingmap_png);
		type.set ("assets/scenes/WCafe/TableSurfaceLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/tapis4.jpg", __ASSET__assets_scenes_wcafe_tapis4_jpg);
		type.set ("assets/scenes/WCafe/tapis4.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/tapis4.png", __ASSET__assets_scenes_wcafe_tapis4_png);
		type.set ("assets/scenes/WCafe/tapis4.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/TapisLightingMap.jpg", __ASSET__assets_scenes_wcafe_tapislightingmap_jpg);
		type.set ("assets/scenes/WCafe/TapisLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/TapisLightingMap.png", __ASSET__assets_scenes_wcafe_tapislightingmap_png);
		type.set ("assets/scenes/WCafe/TapisLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Tele.jpg", __ASSET__assets_scenes_wcafe_tele_jpg);
		type.set ("assets/scenes/WCafe/Tele.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Tele.png", __ASSET__assets_scenes_wcafe_tele_png);
		type.set ("assets/scenes/WCafe/Tele.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/TeleLightingMap.jpg", __ASSET__assets_scenes_wcafe_telelightingmap_jpg);
		type.set ("assets/scenes/WCafe/TeleLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/TeleSI.jpg", __ASSET__assets_scenes_wcafe_telesi_jpg);
		type.set ("assets/scenes/WCafe/TeleSI.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/TeleSI.png", __ASSET__assets_scenes_wcafe_telesi_png);
		type.set ("assets/scenes/WCafe/TeleSI.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/TéléLightingMap.png", __ASSET__assets_scenes_wcafe_te__le__lightingmap_png);
		type.set ("assets/scenes/WCafe/TéléLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/vENT.jpg", __ASSET__assets_scenes_wcafe_vent_jpg);
		type.set ("assets/scenes/WCafe/vENT.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/vENT.png", __ASSET__assets_scenes_wcafe_vent_png);
		type.set ("assets/scenes/WCafe/vENT.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Verticola.jpg", __ASSET__assets_scenes_wcafe_verticola_jpg);
		type.set ("assets/scenes/WCafe/Verticola.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Verticola.png", __ASSET__assets_scenes_wcafe_verticola_png);
		type.set ("assets/scenes/WCafe/Verticola.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/WCafe.babylon", __ASSET__assets_scenes_wcafe_wcafe_babylon);
		type.set ("assets/scenes/WCafe/WCafe.babylon", AssetType.TEXT);
		
		className.set ("assets/scenes/WCafe/WCafe.babylon.manifest", __ASSET__assets_scenes_wcafe_wcafe_babylon_manifest);
		type.set ("assets/scenes/WCafe/WCafe.babylon.manifest", AssetType.TEXT);
		
		className.set ("assets/scenes/WCafe/Wifi.jpg", __ASSET__assets_scenes_wcafe_wifi_jpg);
		type.set ("assets/scenes/WCafe/Wifi.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Wifi.png", __ASSET__assets_scenes_wcafe_wifi_png);
		type.set ("assets/scenes/WCafe/Wifi.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Win7.jpg", __ASSET__assets_scenes_wcafe_win7_jpg);
		type.set ("assets/scenes/WCafe/Win7.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Win7.png", __ASSET__assets_scenes_wcafe_win7_png);
		type.set ("assets/scenes/WCafe/Win7.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Win7A.jpg", __ASSET__assets_scenes_wcafe_win7a_jpg);
		type.set ("assets/scenes/WCafe/Win7A.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Win7A.png", __ASSET__assets_scenes_wcafe_win7a_png);
		type.set ("assets/scenes/WCafe/Win7A.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/WinCafe1.jpg", __ASSET__assets_scenes_wcafe_wincafe1_jpg);
		type.set ("assets/scenes/WCafe/WinCafe1.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/WinCafe1.png", __ASSET__assets_scenes_wcafe_wincafe1_png);
		type.set ("assets/scenes/WCafe/WinCafe1.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/WinCafe1IL.jpg", __ASSET__assets_scenes_wcafe_wincafe1il_jpg);
		type.set ("assets/scenes/WCafe/WinCafe1IL.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/WinCafe1IL.png", __ASSET__assets_scenes_wcafe_wincafe1il_png);
		type.set ("assets/scenes/WCafe/WinCafe1IL.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/xBOXLightingMap.jpg", __ASSET__assets_scenes_wcafe_xboxlightingmap_jpg);
		type.set ("assets/scenes/WCafe/xBOXLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/xBOXLightingMap.png", __ASSET__assets_scenes_wcafe_xboxlightingmap_png);
		type.set ("assets/scenes/WCafe/xBOXLightingMap.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Xbrique.jpg", __ASSET__assets_scenes_wcafe_xbrique_jpg);
		type.set ("assets/scenes/WCafe/Xbrique.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Xbrique.png", __ASSET__assets_scenes_wcafe_xbrique_png);
		type.set ("assets/scenes/WCafe/Xbrique.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Zebu.jpg", __ASSET__assets_scenes_wcafe_zebu_jpg);
		type.set ("assets/scenes/WCafe/Zebu.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/Zebu.png", __ASSET__assets_scenes_wcafe_zebu_png);
		type.set ("assets/scenes/WCafe/Zebu.png", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ZincLightingMap.jpg", __ASSET__assets_scenes_wcafe_zinclightingmap_jpg);
		type.set ("assets/scenes/WCafe/ZincLightingMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/scenes/WCafe/ZincLightingMap.png", __ASSET__assets_scenes_wcafe_zinclightingmap_png);
		type.set ("assets/scenes/WCafe/ZincLightingMap.png", AssetType.IMAGE);
		
		
		if (useManifest) {
			
			loadManifest ();
			
			if (Sys.args ().indexOf ("-livereload") > -1) {
				
				var path = FileSystem.fullPath ("manifest");
				lastModified = FileSystem.stat (path).mtime.getTime ();
				
				timer = new Timer (2000);
				timer.run = function () {
					
					var modified = FileSystem.stat (path).mtime.getTime ();
					
					if (modified > lastModified) {
						
						lastModified = modified;
						loadManifest ();
						
						if (eventCallback != null) {
							
							eventCallback (this, "change");
							
						}
						
					}
					
				}
				
			}
			
		}
		
		#else
		
		loadManifest ();
		
		#end
		#end
		
	}
	
	
	public override function exists (id:String, type:AssetType):Bool {
		
		var assetType = this.type.get (id);
		
		#if pixi
		
		if (assetType == IMAGE) {
			
			return true;
			
		} else {
			
			return false;
			
		}
		
		#end
		
		if (assetType != null) {
			
			if (assetType == type || ((type == SOUND || type == MUSIC) && (assetType == MUSIC || assetType == SOUND))) {
				
				return true;
				
			}
			
			#if flash
			
			if ((assetType == BINARY || assetType == TEXT) && type == BINARY) {
				
				return true;
				
			} else if (path.exists (id)) {
				
				return true;
				
			}
			
			#else
			
			if (type == BINARY || type == null) {
				
				return true;
				
			}
			
			#end
			
		}
		
		return false;
		
	}
	
	
	public override function getBitmapData (id:String):BitmapData {
		
		#if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif openfl_html5
		
		return BitmapData.fromImage (ApplicationMain.images.get (path.get (id)));
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), BitmapData);
		else return BitmapData.load (path.get (id));
		
		#end
		
	}
	
	
	public override function getBytes (id:String):ByteArray {
		
		#if (flash)
		
		return cast (Type.createInstance (className.get (id), []), ByteArray);

		#elseif (js || openfl_html5 || pixi)
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			bytes = new ByteArray ();
			bytes.writeUTFBytes (data);
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}

		if (bytes != null) {
			
			bytes.position = 0;
			return bytes;
			
		} else {
			
			return null;
		}
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), ByteArray);
		else return ByteArray.readFile (path.get (id));
		
		#end
		
	}
	
	
	public override function getFont (id:String):Font {
		
		#if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else
		
		if (className.exists(id)) {
			var fontClass = className.get(id);
			Font.registerFont(fontClass);
			return cast (Type.createInstance (fontClass, []), Font);
		} else return new Font (path.get (id));
		
		#end
		
	}
	
	
	public override function getMusic (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif openfl_html5
		
		var sound = new Sound ();
		sound.__buffer = true;
		sound.load (new URLRequest (path.get (id)));
		return sound; 
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, true);
		
		#end
		
	}
	
	
	public override function getPath (id:String):String {
		
		#if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else
		
		return path.get (id);
		
		#end
		
	}
	
	
	public override function getSound (id:String):Sound {
		
		#if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else
		
		if (className.exists(id)) return cast (Type.createInstance (className.get (id), []), Sound);
		else return new Sound (new URLRequest (path.get (id)), null, type.get (id) == MUSIC);
		
		#end
		
	}
	
	
	public override function getText (id:String):String {
		
		#if js
		
		var bytes:ByteArray = null;
		var data = ApplicationMain.urlLoaders.get (path.get (id)).data;
		
		if (Std.is (data, String)) {
			
			return cast data;
			
		} else if (Std.is (data, ByteArray)) {
			
			bytes = cast data;
			
		} else {
			
			bytes = null;
			
		}
		
		if (bytes != null) {
			
			bytes.position = 0;
			return bytes.readUTFBytes (bytes.length);
			
		} else {
			
			return null;
		}
		
		#else
		
		var bytes = getBytes (id);
		
		if (bytes == null) {
			
			return null;
			
		} else {
			
			return bytes.readUTFBytes (bytes.length);
			
		}
		
		#end
		
	}
	
	
	public override function isLocal (id:String, type:AssetType):Bool {
		
		#if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end
		
		return true;
		
	}
	
	
	public override function list (type:AssetType):Array<String> {
		
		var items = [];
		
		for (id in this.type.keys ()) {
			
			if (type == null || exists (id, type)) {
				
				items.push (id);
				
			}
			
		}
		
		return items;
		
	}
	
	
	public override function loadBitmapData (id:String, handler:BitmapData -> Void):Void {
		
		#if pixi
		
		handler (getBitmapData (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBitmapData (id));
			
		}
		
		#else
		
		handler (getBitmapData (id));
		
		#end
		
	}
	
	
	public override function loadBytes (id:String, handler:ByteArray -> Void):Void {
		
		#if pixi
		
		handler (getBytes (id));
		
		#elseif (flash || js)
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				var bytes = new ByteArray ();
				bytes.writeUTFBytes (event.currentTarget.data);
				bytes.position = 0;
				
				handler (bytes);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getBytes (id));
			
		}
		
		#else
		
		handler (getBytes (id));
		
		#end
		
	}
	
	
	public override function loadFont (id:String, handler:Font -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getFont (id));
			
		//}
		
		#else
		
		handler (getFont (id));
		
		#end
		
	}
	
	
	#if (!flash && !html5)
	private function loadManifest ():Void {
		
		try {
			
			#if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
			var bytes = ByteArray.readFile ("manifest");
			#end
			
			if (bytes != null) {
				
				bytes.position = 0;
				
				if (bytes.length > 0) {
					
					var data = bytes.readUTFBytes (bytes.length);
					
					if (data != null && data.length > 0) {
						
						var manifest:Array<Dynamic> = Unserializer.run (data);
						
						for (asset in manifest) {
							
							if (!className.exists (asset.id)) {
								
								path.set (asset.id, asset.path);
								type.set (asset.id, Type.createEnum (AssetType, asset.type));
								
							}
							
						}
						
					}
					
				}
				
			} else {
				
				trace ("Warning: Could not load asset manifest (bytes was null)");
				
			}
		
		} catch (e:Dynamic) {
			
			trace ('Warning: Could not load asset manifest (${e})');
			
		}
		
	}
	#end
	
	
	public override function loadMusic (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getMusic (id));
			
		//}
		
		#else
		
		handler (getMusic (id));
		
		#end
		
	}
	
	
	public override function loadSound (id:String, handler:Sound -> Void):Void {
		
		#if (flash || js)
		
		/*if (path.exists (id)) {
			
			var loader = new Loader ();
			loader.contentLoaderInfo.addEventListener (Event.COMPLETE, function (event) {
				
				handler (cast (event.currentTarget.content, Bitmap).bitmapData);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {*/
			
			handler (getSound (id));
			
		//}
		
		#else
		
		handler (getSound (id));
		
		#end
		
	}
	
	
	public override function loadText (id:String, handler:String -> Void):Void {
		
		#if js
		
		if (path.exists (id)) {
			
			var loader = new URLLoader ();
			loader.addEventListener (Event.COMPLETE, function (event:Event) {
				
				handler (event.currentTarget.data);
				
			});
			loader.load (new URLRequest (path.get (id)));
			
		} else {
			
			handler (getText (id));
			
		}
		
		#else
		
		var callback = function (bytes:ByteArray):Void {
			
			if (bytes == null) {
				
				handler (null);
				
			} else {
				
				handler (bytes.readUTFBytes (bytes.length));
				
			}
			
		}
		
		loadBytes (id, callback);
		
		#end
		
	}
	
	
}


#if pixi
#elseif flash

@:keep class __ASSET__assets_scenes_wcafe_affiches_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_affiches_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_affiches2_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_affiches2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_affiches3_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_affiches3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_afficheslightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_afficheslightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_bafle_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_bafle_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_baflelightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_baflelightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_beton1_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_beton1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_blancunilightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_blancunilightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_bois2_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_bois2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_briques3_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_briques3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_canape1lightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_canape__1lightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_canette1_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_canette1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_canette2_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_canette2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_chainehifi_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_chainehifi_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_chainehifi2_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_chainehifi2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_chromebrosselightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_chromebrosse__lightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_chromelightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_chromelightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_colonneslightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_colonneslightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_coussins2lightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_coussins2lightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_coussinsfauteuillightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_coussinsfauteuillightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_cuir1spec_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_cuirbrunspec_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_cuiviolet_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_cuiviolet_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_degrade_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_degradebar_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_degradebar_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_ecrantele1_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_ecrantele1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_escalierlightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_escalierlightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_exit_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_exit_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fauteuilrond01lightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fauteuilrond01lightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fauteuilsronds_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fauteuilsronds_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fndgris_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fndgris_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fndrouge2_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fndrouge2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fondmeuble_baslightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fondmeuble_baslightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fvert_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_fvert_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_grille_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_liquiorange_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_liquiorange_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_liquirouge_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_liquirouge_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_liquivert_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_liquivert_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_masque1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_masque2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_murrdclightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_murrdclightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_mursdivers_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_mursdivers_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_neonarcheambiant_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_neonarcheambiant_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_noirmatlightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_noirmatlightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_ordi_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_ordi_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_ordisi_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_ordisi_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_ordislightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_ordislightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_pano2alt_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_pano2alt_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_nx_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_ny_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_nz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_px_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_py_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_pz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_parquet1_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_parquet1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_parquet3_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_parquet3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_peintureverte_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_peintureverte_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_plafondslightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_plafondslightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_plancher2lightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_plancher2lightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_plancheretage1lightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_planchere__tage1lightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_plotdiffusemap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_plotdiffusemap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_produits_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_produits_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_redflowers_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_redflowers_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_refcubenoire_nx_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_refcubenoire_ny_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_refcubenoire_nz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_refcubenoire_px_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_refcubenoire_py_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_refcubenoire_pz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_refcubenoireplate_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_refcubenoireplate_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_salade_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_salade_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_saladeslm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_saladeslm_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_solrdclightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_solrdclightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_specmetalbrosse_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_sponsor01diffusemap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_sponsor01diffusemap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_sticker_haut_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_sticker_haut_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_surface_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_surface_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_tableaux_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_tableaux_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_tablesurfacelightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_tablesurfacelightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_tapis4_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_tapis4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_tapislightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_tapislightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_tele_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_tele_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_telelightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_telesi_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_telesi_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_te__le__lightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_vent_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_vent_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_verticola_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_verticola_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_wcafe_babylon extends null { }
@:keep class __ASSET__assets_scenes_wcafe_wcafe_babylon_manifest extends null { }
@:keep class __ASSET__assets_scenes_wcafe_wifi_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_wifi_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_win7_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_win7_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_win7a_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_win7a_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_wincafe1_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_wincafe1_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_wincafe1il_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_wincafe1il_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_xboxlightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_xboxlightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_xbrique_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_xbrique_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_zebu_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_zebu_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_zinclightingmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_scenes_wcafe_zinclightingmap_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5
















































































































































































#elseif (windows || mac || linux)


@:bitmap("assets/scenes/WCafe/Affiches.jpg") class __ASSET__assets_scenes_wcafe_affiches_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Affiches.png") class __ASSET__assets_scenes_wcafe_affiches_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Affiches2.jpg") class __ASSET__assets_scenes_wcafe_affiches2_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Affiches2.png") class __ASSET__assets_scenes_wcafe_affiches2_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Affiches3.jpg") class __ASSET__assets_scenes_wcafe_affiches3_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Affiches3.png") class __ASSET__assets_scenes_wcafe_affiches3_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/AffichesLightingMap.jpg") class __ASSET__assets_scenes_wcafe_afficheslightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/AffichesLightingMap.png") class __ASSET__assets_scenes_wcafe_afficheslightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Bafle.jpg") class __ASSET__assets_scenes_wcafe_bafle_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Bafle.png") class __ASSET__assets_scenes_wcafe_bafle_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/BafleLightingMap.jpg") class __ASSET__assets_scenes_wcafe_baflelightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/BafleLightingMap.png") class __ASSET__assets_scenes_wcafe_baflelightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Beton1.jpg") class __ASSET__assets_scenes_wcafe_beton1_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Beton1.png") class __ASSET__assets_scenes_wcafe_beton1_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/BlancUniLightingMap.jpg") class __ASSET__assets_scenes_wcafe_blancunilightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/BlancUniLightingMap.png") class __ASSET__assets_scenes_wcafe_blancunilightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Bois2.jpg") class __ASSET__assets_scenes_wcafe_bois2_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Bois2.png") class __ASSET__assets_scenes_wcafe_bois2_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Briques3.jpg") class __ASSET__assets_scenes_wcafe_briques3_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Briques3.png") class __ASSET__assets_scenes_wcafe_briques3_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Canape1LightingMap.jpg") class __ASSET__assets_scenes_wcafe_canape1lightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Canapé1LightingMap.png") class __ASSET__assets_scenes_wcafe_canape__1lightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Canette1.jpg") class __ASSET__assets_scenes_wcafe_canette1_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Canette1.png") class __ASSET__assets_scenes_wcafe_canette1_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Canette2.jpg") class __ASSET__assets_scenes_wcafe_canette2_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Canette2.png") class __ASSET__assets_scenes_wcafe_canette2_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ChaineHifi.jpg") class __ASSET__assets_scenes_wcafe_chainehifi_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ChaineHifi.png") class __ASSET__assets_scenes_wcafe_chainehifi_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ChaineHifi2.jpg") class __ASSET__assets_scenes_wcafe_chainehifi2_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ChaineHifi2.png") class __ASSET__assets_scenes_wcafe_chainehifi2_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ChromeBrosseLightingMap.jpg") class __ASSET__assets_scenes_wcafe_chromebrosselightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ChromeBrosséLightingMap.png") class __ASSET__assets_scenes_wcafe_chromebrosse__lightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ChromeLightingMap.jpg") class __ASSET__assets_scenes_wcafe_chromelightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ChromeLightingMap.png") class __ASSET__assets_scenes_wcafe_chromelightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ColonnesLightingMap.jpg") class __ASSET__assets_scenes_wcafe_colonneslightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ColonnesLightingMap.png") class __ASSET__assets_scenes_wcafe_colonneslightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Coussins2LightingMap.jpg") class __ASSET__assets_scenes_wcafe_coussins2lightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Coussins2LightingMap.png") class __ASSET__assets_scenes_wcafe_coussins2lightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg") class __ASSET__assets_scenes_wcafe_coussinsfauteuillightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/CoussinsfauteuilLightingMap.png") class __ASSET__assets_scenes_wcafe_coussinsfauteuillightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Cuir1Spec.png") class __ASSET__assets_scenes_wcafe_cuir1spec_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/CuirbrunSpec.png") class __ASSET__assets_scenes_wcafe_cuirbrunspec_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/CuiViolet.jpg") class __ASSET__assets_scenes_wcafe_cuiviolet_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/CuiViolet.png") class __ASSET__assets_scenes_wcafe_cuiviolet_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Degrade.png") class __ASSET__assets_scenes_wcafe_degrade_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Degradebar.jpg") class __ASSET__assets_scenes_wcafe_degradebar_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Degradebar.png") class __ASSET__assets_scenes_wcafe_degradebar_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Ecrantele1.jpg") class __ASSET__assets_scenes_wcafe_ecrantele1_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Ecrantele1.png") class __ASSET__assets_scenes_wcafe_ecrantele1_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/EscalierLightingMap.jpg") class __ASSET__assets_scenes_wcafe_escalierlightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/EscalierLightingMap.png") class __ASSET__assets_scenes_wcafe_escalierlightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/exit.jpg") class __ASSET__assets_scenes_wcafe_exit_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/exit.png") class __ASSET__assets_scenes_wcafe_exit_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/FauteuilRond01LightingMap.jpg") class __ASSET__assets_scenes_wcafe_fauteuilrond01lightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/FauteuilRond01LightingMap.png") class __ASSET__assets_scenes_wcafe_fauteuilrond01lightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Fauteuilsronds.jpg") class __ASSET__assets_scenes_wcafe_fauteuilsronds_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Fauteuilsronds.png") class __ASSET__assets_scenes_wcafe_fauteuilsronds_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Fndgris.jpg") class __ASSET__assets_scenes_wcafe_fndgris_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Fndgris.png") class __ASSET__assets_scenes_wcafe_fndgris_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Fndrouge2.jpg") class __ASSET__assets_scenes_wcafe_fndrouge2_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Fndrouge2.png") class __ASSET__assets_scenes_wcafe_fndrouge2_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Fondmeuble basLightingMap.jpg") class __ASSET__assets_scenes_wcafe_fondmeuble_baslightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Fondmeuble basLightingMap.png") class __ASSET__assets_scenes_wcafe_fondmeuble_baslightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Fvert.jpg") class __ASSET__assets_scenes_wcafe_fvert_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Fvert.png") class __ASSET__assets_scenes_wcafe_fvert_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Grille.png") class __ASSET__assets_scenes_wcafe_grille_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/liquiorange.jpg") class __ASSET__assets_scenes_wcafe_liquiorange_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/liquiorange.png") class __ASSET__assets_scenes_wcafe_liquiorange_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Liquirouge.jpg") class __ASSET__assets_scenes_wcafe_liquirouge_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Liquirouge.png") class __ASSET__assets_scenes_wcafe_liquirouge_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Liquivert.jpg") class __ASSET__assets_scenes_wcafe_liquivert_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Liquivert.png") class __ASSET__assets_scenes_wcafe_liquivert_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Masque1.png") class __ASSET__assets_scenes_wcafe_masque1_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Masque2.png") class __ASSET__assets_scenes_wcafe_masque2_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/MurrdcLightingMap.jpg") class __ASSET__assets_scenes_wcafe_murrdclightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/MurrdcLightingMap.png") class __ASSET__assets_scenes_wcafe_murrdclightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Mursdivers.jpg") class __ASSET__assets_scenes_wcafe_mursdivers_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Mursdivers.png") class __ASSET__assets_scenes_wcafe_mursdivers_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/NeonarcheAmbiant.jpg") class __ASSET__assets_scenes_wcafe_neonarcheambiant_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/NeonarcheAmbiant.png") class __ASSET__assets_scenes_wcafe_neonarcheambiant_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/NoirmatLightingMap.jpg") class __ASSET__assets_scenes_wcafe_noirmatlightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/NoirmatLightingMap.png") class __ASSET__assets_scenes_wcafe_noirmatlightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Ordi.jpg") class __ASSET__assets_scenes_wcafe_ordi_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Ordi.png") class __ASSET__assets_scenes_wcafe_ordi_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/OrdiSI.jpg") class __ASSET__assets_scenes_wcafe_ordisi_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/OrdiSI.png") class __ASSET__assets_scenes_wcafe_ordisi_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/OrdisLightingMap.jpg") class __ASSET__assets_scenes_wcafe_ordislightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/OrdisLightingMap.png") class __ASSET__assets_scenes_wcafe_ordislightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Pano2Alt.jpg") class __ASSET__assets_scenes_wcafe_pano2alt_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Pano2Alt.png") class __ASSET__assets_scenes_wcafe_pano2alt_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg") class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_nx_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg") class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_ny_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg") class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_nz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg") class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_px_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg") class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_py_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg") class __ASSET__assets_scenes_wcafe_pano5refnoirpurfloue_pz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Parquet1.jpg") class __ASSET__assets_scenes_wcafe_parquet1_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Parquet1.png") class __ASSET__assets_scenes_wcafe_parquet1_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Parquet3.jpg") class __ASSET__assets_scenes_wcafe_parquet3_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Parquet3.png") class __ASSET__assets_scenes_wcafe_parquet3_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Peintureverte.jpg") class __ASSET__assets_scenes_wcafe_peintureverte_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Peintureverte.png") class __ASSET__assets_scenes_wcafe_peintureverte_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/PlafondsLightingMap.jpg") class __ASSET__assets_scenes_wcafe_plafondslightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/PlafondsLightingMap.png") class __ASSET__assets_scenes_wcafe_plafondslightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Plancher2LightingMap.jpg") class __ASSET__assets_scenes_wcafe_plancher2lightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Plancher2LightingMap.png") class __ASSET__assets_scenes_wcafe_plancher2lightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Plancheretage1LightingMap.jpg") class __ASSET__assets_scenes_wcafe_plancheretage1lightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Plancherétage1LightingMap.png") class __ASSET__assets_scenes_wcafe_planchere__tage1lightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/PlotDiffuseMap.jpg") class __ASSET__assets_scenes_wcafe_plotdiffusemap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/PlotDiffuseMap.png") class __ASSET__assets_scenes_wcafe_plotdiffusemap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Produits.jpg") class __ASSET__assets_scenes_wcafe_produits_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Produits.png") class __ASSET__assets_scenes_wcafe_produits_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/RedFlowers.jpg") class __ASSET__assets_scenes_wcafe_redflowers_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/RedFlowers.png") class __ASSET__assets_scenes_wcafe_redflowers_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Refcubenoire_nx.jpg") class __ASSET__assets_scenes_wcafe_refcubenoire_nx_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Refcubenoire_ny.jpg") class __ASSET__assets_scenes_wcafe_refcubenoire_ny_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Refcubenoire_nz.jpg") class __ASSET__assets_scenes_wcafe_refcubenoire_nz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Refcubenoire_px.jpg") class __ASSET__assets_scenes_wcafe_refcubenoire_px_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Refcubenoire_py.jpg") class __ASSET__assets_scenes_wcafe_refcubenoire_py_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Refcubenoire_pz.jpg") class __ASSET__assets_scenes_wcafe_refcubenoire_pz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Refcubenoireplate.jpg") class __ASSET__assets_scenes_wcafe_refcubenoireplate_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Refcubenoireplate.png") class __ASSET__assets_scenes_wcafe_refcubenoireplate_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Salade.jpg") class __ASSET__assets_scenes_wcafe_salade_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Salade.png") class __ASSET__assets_scenes_wcafe_salade_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/SaladesLM.jpg") class __ASSET__assets_scenes_wcafe_saladeslm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/SaladesLM.png") class __ASSET__assets_scenes_wcafe_saladeslm_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/SolRDCLightingMap.jpg") class __ASSET__assets_scenes_wcafe_solrdclightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/SolRDCLightingMap.png") class __ASSET__assets_scenes_wcafe_solrdclightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/SpecMetalbrosse.png") class __ASSET__assets_scenes_wcafe_specmetalbrosse_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Sponsor01DiffuseMap.jpg") class __ASSET__assets_scenes_wcafe_sponsor01diffusemap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Sponsor01DiffuseMap.png") class __ASSET__assets_scenes_wcafe_sponsor01diffusemap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Sticker haut.jpg") class __ASSET__assets_scenes_wcafe_sticker_haut_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Sticker haut.png") class __ASSET__assets_scenes_wcafe_sticker_haut_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Surface.jpg") class __ASSET__assets_scenes_wcafe_surface_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Surface.png") class __ASSET__assets_scenes_wcafe_surface_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/tableaux.jpg") class __ASSET__assets_scenes_wcafe_tableaux_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/tableaux.png") class __ASSET__assets_scenes_wcafe_tableaux_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/TableSurfaceLightingMap.jpg") class __ASSET__assets_scenes_wcafe_tablesurfacelightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/TableSurfaceLightingMap.png") class __ASSET__assets_scenes_wcafe_tablesurfacelightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/tapis4.jpg") class __ASSET__assets_scenes_wcafe_tapis4_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/tapis4.png") class __ASSET__assets_scenes_wcafe_tapis4_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/TapisLightingMap.jpg") class __ASSET__assets_scenes_wcafe_tapislightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/TapisLightingMap.png") class __ASSET__assets_scenes_wcafe_tapislightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Tele.jpg") class __ASSET__assets_scenes_wcafe_tele_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Tele.png") class __ASSET__assets_scenes_wcafe_tele_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/TeleLightingMap.jpg") class __ASSET__assets_scenes_wcafe_telelightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/TeleSI.jpg") class __ASSET__assets_scenes_wcafe_telesi_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/TeleSI.png") class __ASSET__assets_scenes_wcafe_telesi_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/TéléLightingMap.png") class __ASSET__assets_scenes_wcafe_te__le__lightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/vENT.jpg") class __ASSET__assets_scenes_wcafe_vent_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/vENT.png") class __ASSET__assets_scenes_wcafe_vent_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Verticola.jpg") class __ASSET__assets_scenes_wcafe_verticola_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Verticola.png") class __ASSET__assets_scenes_wcafe_verticola_png extends flash.display.BitmapData {}
@:file("assets/scenes/WCafe/WCafe.babylon") class __ASSET__assets_scenes_wcafe_wcafe_babylon extends flash.utils.ByteArray {}
@:file("assets/scenes/WCafe/WCafe.babylon.manifest") class __ASSET__assets_scenes_wcafe_wcafe_babylon_manifest extends flash.utils.ByteArray {}
@:bitmap("assets/scenes/WCafe/Wifi.jpg") class __ASSET__assets_scenes_wcafe_wifi_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Wifi.png") class __ASSET__assets_scenes_wcafe_wifi_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Win7.jpg") class __ASSET__assets_scenes_wcafe_win7_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Win7.png") class __ASSET__assets_scenes_wcafe_win7_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Win7A.jpg") class __ASSET__assets_scenes_wcafe_win7a_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Win7A.png") class __ASSET__assets_scenes_wcafe_win7a_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/WinCafe1.jpg") class __ASSET__assets_scenes_wcafe_wincafe1_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/WinCafe1.png") class __ASSET__assets_scenes_wcafe_wincafe1_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/WinCafe1IL.jpg") class __ASSET__assets_scenes_wcafe_wincafe1il_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/WinCafe1IL.png") class __ASSET__assets_scenes_wcafe_wincafe1il_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/xBOXLightingMap.jpg") class __ASSET__assets_scenes_wcafe_xboxlightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/xBOXLightingMap.png") class __ASSET__assets_scenes_wcafe_xboxlightingmap_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Xbrique.jpg") class __ASSET__assets_scenes_wcafe_xbrique_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Xbrique.png") class __ASSET__assets_scenes_wcafe_xbrique_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Zebu.jpg") class __ASSET__assets_scenes_wcafe_zebu_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/Zebu.png") class __ASSET__assets_scenes_wcafe_zebu_png extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ZincLightingMap.jpg") class __ASSET__assets_scenes_wcafe_zinclightingmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/scenes/WCafe/ZincLightingMap.png") class __ASSET__assets_scenes_wcafe_zinclightingmap_png extends flash.display.BitmapData {}


#end
