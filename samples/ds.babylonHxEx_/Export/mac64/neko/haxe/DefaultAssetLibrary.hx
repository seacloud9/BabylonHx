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


    public function new() {

        super();

        #if flash
		
		path.set ("assets/scenes/WCafe/Affiches.jpg", "assets/scenes/WCafe/Affiches.jpg");
		type.set ("assets/scenes/WCafe/Affiches.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Affiches.png", "assets/scenes/WCafe/Affiches.png");
		type.set ("assets/scenes/WCafe/Affiches.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Affiches2.jpg", "assets/scenes/WCafe/Affiches2.jpg");
		type.set ("assets/scenes/WCafe/Affiches2.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Affiches2.png", "assets/scenes/WCafe/Affiches2.png");
		type.set ("assets/scenes/WCafe/Affiches2.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Affiches3.jpg", "assets/scenes/WCafe/Affiches3.jpg");
		type.set ("assets/scenes/WCafe/Affiches3.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Affiches3.png", "assets/scenes/WCafe/Affiches3.png");
		type.set ("assets/scenes/WCafe/Affiches3.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/AffichesLightingMap.jpg", "assets/scenes/WCafe/AffichesLightingMap.jpg");
		type.set ("assets/scenes/WCafe/AffichesLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/AffichesLightingMap.png", "assets/scenes/WCafe/AffichesLightingMap.png");
		type.set ("assets/scenes/WCafe/AffichesLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Bafle.jpg", "assets/scenes/WCafe/Bafle.jpg");
		type.set ("assets/scenes/WCafe/Bafle.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Bafle.png", "assets/scenes/WCafe/Bafle.png");
		type.set ("assets/scenes/WCafe/Bafle.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/BafleLightingMap.jpg", "assets/scenes/WCafe/BafleLightingMap.jpg");
		type.set ("assets/scenes/WCafe/BafleLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/BafleLightingMap.png", "assets/scenes/WCafe/BafleLightingMap.png");
		type.set ("assets/scenes/WCafe/BafleLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Beton1.jpg", "assets/scenes/WCafe/Beton1.jpg");
		type.set ("assets/scenes/WCafe/Beton1.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Beton1.png", "assets/scenes/WCafe/Beton1.png");
		type.set ("assets/scenes/WCafe/Beton1.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/BlancUniLightingMap.jpg", "assets/scenes/WCafe/BlancUniLightingMap.jpg");
		type.set ("assets/scenes/WCafe/BlancUniLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/BlancUniLightingMap.png", "assets/scenes/WCafe/BlancUniLightingMap.png");
		type.set ("assets/scenes/WCafe/BlancUniLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Bois2.jpg", "assets/scenes/WCafe/Bois2.jpg");
		type.set ("assets/scenes/WCafe/Bois2.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Bois2.png", "assets/scenes/WCafe/Bois2.png");
		type.set ("assets/scenes/WCafe/Bois2.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Briques3.jpg", "assets/scenes/WCafe/Briques3.jpg");
		type.set ("assets/scenes/WCafe/Briques3.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Briques3.png", "assets/scenes/WCafe/Briques3.png");
		type.set ("assets/scenes/WCafe/Briques3.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Canape1LightingMap.jpg", "assets/scenes/WCafe/Canape1LightingMap.jpg");
		type.set ("assets/scenes/WCafe/Canape1LightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Canapé1LightingMap.png", "assets/scenes/WCafe/Canapé1LightingMap.png");
		type.set ("assets/scenes/WCafe/Canapé1LightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Canette1.jpg", "assets/scenes/WCafe/Canette1.jpg");
		type.set ("assets/scenes/WCafe/Canette1.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Canette1.png", "assets/scenes/WCafe/Canette1.png");
		type.set ("assets/scenes/WCafe/Canette1.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Canette2.jpg", "assets/scenes/WCafe/Canette2.jpg");
		type.set ("assets/scenes/WCafe/Canette2.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Canette2.png", "assets/scenes/WCafe/Canette2.png");
		type.set ("assets/scenes/WCafe/Canette2.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ChaineHifi.jpg", "assets/scenes/WCafe/ChaineHifi.jpg");
		type.set ("assets/scenes/WCafe/ChaineHifi.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ChaineHifi.png", "assets/scenes/WCafe/ChaineHifi.png");
		type.set ("assets/scenes/WCafe/ChaineHifi.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ChaineHifi2.jpg", "assets/scenes/WCafe/ChaineHifi2.jpg");
		type.set ("assets/scenes/WCafe/ChaineHifi2.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ChaineHifi2.png", "assets/scenes/WCafe/ChaineHifi2.png");
		type.set ("assets/scenes/WCafe/ChaineHifi2.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ChromeBrosseLightingMap.jpg", "assets/scenes/WCafe/ChromeBrosseLightingMap.jpg");
		type.set ("assets/scenes/WCafe/ChromeBrosseLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ChromeBrosséLightingMap.png", "assets/scenes/WCafe/ChromeBrosséLightingMap.png");
		type.set ("assets/scenes/WCafe/ChromeBrosséLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ChromeLightingMap.jpg", "assets/scenes/WCafe/ChromeLightingMap.jpg");
		type.set ("assets/scenes/WCafe/ChromeLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ChromeLightingMap.png", "assets/scenes/WCafe/ChromeLightingMap.png");
		type.set ("assets/scenes/WCafe/ChromeLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ColonnesLightingMap.jpg", "assets/scenes/WCafe/ColonnesLightingMap.jpg");
		type.set ("assets/scenes/WCafe/ColonnesLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ColonnesLightingMap.png", "assets/scenes/WCafe/ColonnesLightingMap.png");
		type.set ("assets/scenes/WCafe/ColonnesLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Coussins2LightingMap.jpg", "assets/scenes/WCafe/Coussins2LightingMap.jpg");
		type.set ("assets/scenes/WCafe/Coussins2LightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Coussins2LightingMap.png", "assets/scenes/WCafe/Coussins2LightingMap.png");
		type.set ("assets/scenes/WCafe/Coussins2LightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg", "assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg");
		type.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.png", "assets/scenes/WCafe/CoussinsfauteuilLightingMap.png");
		type.set ("assets/scenes/WCafe/CoussinsfauteuilLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Cuir1Spec.png", "assets/scenes/WCafe/Cuir1Spec.png");
		type.set ("assets/scenes/WCafe/Cuir1Spec.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/CuirbrunSpec.png", "assets/scenes/WCafe/CuirbrunSpec.png");
		type.set ("assets/scenes/WCafe/CuirbrunSpec.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/CuiViolet.jpg", "assets/scenes/WCafe/CuiViolet.jpg");
		type.set ("assets/scenes/WCafe/CuiViolet.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/CuiViolet.png", "assets/scenes/WCafe/CuiViolet.png");
		type.set ("assets/scenes/WCafe/CuiViolet.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Degrade.png", "assets/scenes/WCafe/Degrade.png");
		type.set ("assets/scenes/WCafe/Degrade.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Degradebar.jpg", "assets/scenes/WCafe/Degradebar.jpg");
		type.set ("assets/scenes/WCafe/Degradebar.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Degradebar.png", "assets/scenes/WCafe/Degradebar.png");
		type.set ("assets/scenes/WCafe/Degradebar.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Ecrantele1.jpg", "assets/scenes/WCafe/Ecrantele1.jpg");
		type.set ("assets/scenes/WCafe/Ecrantele1.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Ecrantele1.png", "assets/scenes/WCafe/Ecrantele1.png");
		type.set ("assets/scenes/WCafe/Ecrantele1.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/EscalierLightingMap.jpg", "assets/scenes/WCafe/EscalierLightingMap.jpg");
		type.set ("assets/scenes/WCafe/EscalierLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/EscalierLightingMap.png", "assets/scenes/WCafe/EscalierLightingMap.png");
		type.set ("assets/scenes/WCafe/EscalierLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/exit.jpg", "assets/scenes/WCafe/exit.jpg");
		type.set ("assets/scenes/WCafe/exit.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/exit.png", "assets/scenes/WCafe/exit.png");
		type.set ("assets/scenes/WCafe/exit.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.jpg", "assets/scenes/WCafe/FauteuilRond01LightingMap.jpg");
		type.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.png", "assets/scenes/WCafe/FauteuilRond01LightingMap.png");
		type.set ("assets/scenes/WCafe/FauteuilRond01LightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Fauteuilsronds.jpg", "assets/scenes/WCafe/Fauteuilsronds.jpg");
		type.set ("assets/scenes/WCafe/Fauteuilsronds.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Fauteuilsronds.png", "assets/scenes/WCafe/Fauteuilsronds.png");
		type.set ("assets/scenes/WCafe/Fauteuilsronds.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Fndgris.jpg", "assets/scenes/WCafe/Fndgris.jpg");
		type.set ("assets/scenes/WCafe/Fndgris.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Fndgris.png", "assets/scenes/WCafe/Fndgris.png");
		type.set ("assets/scenes/WCafe/Fndgris.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Fndrouge2.jpg", "assets/scenes/WCafe/Fndrouge2.jpg");
		type.set ("assets/scenes/WCafe/Fndrouge2.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Fndrouge2.png", "assets/scenes/WCafe/Fndrouge2.png");
		type.set ("assets/scenes/WCafe/Fndrouge2.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.jpg", "assets/scenes/WCafe/Fondmeuble basLightingMap.jpg");
		type.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.png", "assets/scenes/WCafe/Fondmeuble basLightingMap.png");
		type.set ("assets/scenes/WCafe/Fondmeuble basLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Fvert.jpg", "assets/scenes/WCafe/Fvert.jpg");
		type.set ("assets/scenes/WCafe/Fvert.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Fvert.png", "assets/scenes/WCafe/Fvert.png");
		type.set ("assets/scenes/WCafe/Fvert.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Grille.png", "assets/scenes/WCafe/Grille.png");
		type.set ("assets/scenes/WCafe/Grille.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/liquiorange.jpg", "assets/scenes/WCafe/liquiorange.jpg");
		type.set ("assets/scenes/WCafe/liquiorange.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/liquiorange.png", "assets/scenes/WCafe/liquiorange.png");
		type.set ("assets/scenes/WCafe/liquiorange.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Liquirouge.jpg", "assets/scenes/WCafe/Liquirouge.jpg");
		type.set ("assets/scenes/WCafe/Liquirouge.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Liquirouge.png", "assets/scenes/WCafe/Liquirouge.png");
		type.set ("assets/scenes/WCafe/Liquirouge.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Liquivert.jpg", "assets/scenes/WCafe/Liquivert.jpg");
		type.set ("assets/scenes/WCafe/Liquivert.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Liquivert.png", "assets/scenes/WCafe/Liquivert.png");
		type.set ("assets/scenes/WCafe/Liquivert.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Masque1.png", "assets/scenes/WCafe/Masque1.png");
		type.set ("assets/scenes/WCafe/Masque1.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Masque2.png", "assets/scenes/WCafe/Masque2.png");
		type.set ("assets/scenes/WCafe/Masque2.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/MurrdcLightingMap.jpg", "assets/scenes/WCafe/MurrdcLightingMap.jpg");
		type.set ("assets/scenes/WCafe/MurrdcLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/MurrdcLightingMap.png", "assets/scenes/WCafe/MurrdcLightingMap.png");
		type.set ("assets/scenes/WCafe/MurrdcLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Mursdivers.jpg", "assets/scenes/WCafe/Mursdivers.jpg");
		type.set ("assets/scenes/WCafe/Mursdivers.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Mursdivers.png", "assets/scenes/WCafe/Mursdivers.png");
		type.set ("assets/scenes/WCafe/Mursdivers.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/NeonarcheAmbiant.jpg", "assets/scenes/WCafe/NeonarcheAmbiant.jpg");
		type.set ("assets/scenes/WCafe/NeonarcheAmbiant.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/NeonarcheAmbiant.png", "assets/scenes/WCafe/NeonarcheAmbiant.png");
		type.set ("assets/scenes/WCafe/NeonarcheAmbiant.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/NoirmatLightingMap.jpg", "assets/scenes/WCafe/NoirmatLightingMap.jpg");
		type.set ("assets/scenes/WCafe/NoirmatLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/NoirmatLightingMap.png", "assets/scenes/WCafe/NoirmatLightingMap.png");
		type.set ("assets/scenes/WCafe/NoirmatLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Ordi.jpg", "assets/scenes/WCafe/Ordi.jpg");
		type.set ("assets/scenes/WCafe/Ordi.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Ordi.png", "assets/scenes/WCafe/Ordi.png");
		type.set ("assets/scenes/WCafe/Ordi.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/OrdiSI.jpg", "assets/scenes/WCafe/OrdiSI.jpg");
		type.set ("assets/scenes/WCafe/OrdiSI.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/OrdiSI.png", "assets/scenes/WCafe/OrdiSI.png");
		type.set ("assets/scenes/WCafe/OrdiSI.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/OrdisLightingMap.jpg", "assets/scenes/WCafe/OrdisLightingMap.jpg");
		type.set ("assets/scenes/WCafe/OrdisLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/OrdisLightingMap.png", "assets/scenes/WCafe/OrdisLightingMap.png");
		type.set ("assets/scenes/WCafe/OrdisLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Pano2Alt.jpg", "assets/scenes/WCafe/Pano2Alt.jpg");
		type.set ("assets/scenes/WCafe/Pano2Alt.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Pano2Alt.png", "assets/scenes/WCafe/Pano2Alt.png");
		type.set ("assets/scenes/WCafe/Pano2Alt.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg");
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg");
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg");
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg");
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg");
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg");
		type.set ("assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Parquet1.jpg", "assets/scenes/WCafe/Parquet1.jpg");
		type.set ("assets/scenes/WCafe/Parquet1.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Parquet1.png", "assets/scenes/WCafe/Parquet1.png");
		type.set ("assets/scenes/WCafe/Parquet1.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Parquet3.jpg", "assets/scenes/WCafe/Parquet3.jpg");
		type.set ("assets/scenes/WCafe/Parquet3.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Parquet3.png", "assets/scenes/WCafe/Parquet3.png");
		type.set ("assets/scenes/WCafe/Parquet3.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Peintureverte.jpg", "assets/scenes/WCafe/Peintureverte.jpg");
		type.set ("assets/scenes/WCafe/Peintureverte.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Peintureverte.png", "assets/scenes/WCafe/Peintureverte.png");
		type.set ("assets/scenes/WCafe/Peintureverte.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/PlafondsLightingMap.jpg", "assets/scenes/WCafe/PlafondsLightingMap.jpg");
		type.set ("assets/scenes/WCafe/PlafondsLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/PlafondsLightingMap.png", "assets/scenes/WCafe/PlafondsLightingMap.png");
		type.set ("assets/scenes/WCafe/PlafondsLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Plancher2LightingMap.jpg", "assets/scenes/WCafe/Plancher2LightingMap.jpg");
		type.set ("assets/scenes/WCafe/Plancher2LightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Plancher2LightingMap.png", "assets/scenes/WCafe/Plancher2LightingMap.png");
		type.set ("assets/scenes/WCafe/Plancher2LightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Plancheretage1LightingMap.jpg", "assets/scenes/WCafe/Plancheretage1LightingMap.jpg");
		type.set ("assets/scenes/WCafe/Plancheretage1LightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Plancherétage1LightingMap.png", "assets/scenes/WCafe/Plancherétage1LightingMap.png");
		type.set ("assets/scenes/WCafe/Plancherétage1LightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/PlotDiffuseMap.jpg", "assets/scenes/WCafe/PlotDiffuseMap.jpg");
		type.set ("assets/scenes/WCafe/PlotDiffuseMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/PlotDiffuseMap.png", "assets/scenes/WCafe/PlotDiffuseMap.png");
		type.set ("assets/scenes/WCafe/PlotDiffuseMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Produits.jpg", "assets/scenes/WCafe/Produits.jpg");
		type.set ("assets/scenes/WCafe/Produits.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Produits.png", "assets/scenes/WCafe/Produits.png");
		type.set ("assets/scenes/WCafe/Produits.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/RedFlowers.jpg", "assets/scenes/WCafe/RedFlowers.jpg");
		type.set ("assets/scenes/WCafe/RedFlowers.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/RedFlowers.png", "assets/scenes/WCafe/RedFlowers.png");
		type.set ("assets/scenes/WCafe/RedFlowers.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Refcubenoire_nx.jpg", "assets/scenes/WCafe/Refcubenoire_nx.jpg");
		type.set ("assets/scenes/WCafe/Refcubenoire_nx.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Refcubenoire_ny.jpg", "assets/scenes/WCafe/Refcubenoire_ny.jpg");
		type.set ("assets/scenes/WCafe/Refcubenoire_ny.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Refcubenoire_nz.jpg", "assets/scenes/WCafe/Refcubenoire_nz.jpg");
		type.set ("assets/scenes/WCafe/Refcubenoire_nz.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Refcubenoire_px.jpg", "assets/scenes/WCafe/Refcubenoire_px.jpg");
		type.set ("assets/scenes/WCafe/Refcubenoire_px.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Refcubenoire_py.jpg", "assets/scenes/WCafe/Refcubenoire_py.jpg");
		type.set ("assets/scenes/WCafe/Refcubenoire_py.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Refcubenoire_pz.jpg", "assets/scenes/WCafe/Refcubenoire_pz.jpg");
		type.set ("assets/scenes/WCafe/Refcubenoire_pz.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Refcubenoireplate.jpg", "assets/scenes/WCafe/Refcubenoireplate.jpg");
		type.set ("assets/scenes/WCafe/Refcubenoireplate.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Refcubenoireplate.png", "assets/scenes/WCafe/Refcubenoireplate.png");
		type.set ("assets/scenes/WCafe/Refcubenoireplate.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Salade.jpg", "assets/scenes/WCafe/Salade.jpg");
		type.set ("assets/scenes/WCafe/Salade.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Salade.png", "assets/scenes/WCafe/Salade.png");
		type.set ("assets/scenes/WCafe/Salade.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/SaladesLM.jpg", "assets/scenes/WCafe/SaladesLM.jpg");
		type.set ("assets/scenes/WCafe/SaladesLM.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/SaladesLM.png", "assets/scenes/WCafe/SaladesLM.png");
		type.set ("assets/scenes/WCafe/SaladesLM.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/SolRDCLightingMap.jpg", "assets/scenes/WCafe/SolRDCLightingMap.jpg");
		type.set ("assets/scenes/WCafe/SolRDCLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/SolRDCLightingMap.png", "assets/scenes/WCafe/SolRDCLightingMap.png");
		type.set ("assets/scenes/WCafe/SolRDCLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/SpecMetalbrosse.png", "assets/scenes/WCafe/SpecMetalbrosse.png");
		type.set ("assets/scenes/WCafe/SpecMetalbrosse.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.jpg", "assets/scenes/WCafe/Sponsor01DiffuseMap.jpg");
		type.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.png", "assets/scenes/WCafe/Sponsor01DiffuseMap.png");
		type.set ("assets/scenes/WCafe/Sponsor01DiffuseMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Sticker haut.jpg", "assets/scenes/WCafe/Sticker haut.jpg");
		type.set ("assets/scenes/WCafe/Sticker haut.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Sticker haut.png", "assets/scenes/WCafe/Sticker haut.png");
		type.set ("assets/scenes/WCafe/Sticker haut.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Surface.jpg", "assets/scenes/WCafe/Surface.jpg");
		type.set ("assets/scenes/WCafe/Surface.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Surface.png", "assets/scenes/WCafe/Surface.png");
		type.set ("assets/scenes/WCafe/Surface.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/tableaux.jpg", "assets/scenes/WCafe/tableaux.jpg");
		type.set ("assets/scenes/WCafe/tableaux.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/tableaux.png", "assets/scenes/WCafe/tableaux.png");
		type.set ("assets/scenes/WCafe/tableaux.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/TableSurfaceLightingMap.jpg", "assets/scenes/WCafe/TableSurfaceLightingMap.jpg");
		type.set ("assets/scenes/WCafe/TableSurfaceLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/TableSurfaceLightingMap.png", "assets/scenes/WCafe/TableSurfaceLightingMap.png");
		type.set ("assets/scenes/WCafe/TableSurfaceLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/tapis4.jpg", "assets/scenes/WCafe/tapis4.jpg");
		type.set ("assets/scenes/WCafe/tapis4.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/tapis4.png", "assets/scenes/WCafe/tapis4.png");
		type.set ("assets/scenes/WCafe/tapis4.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/TapisLightingMap.jpg", "assets/scenes/WCafe/TapisLightingMap.jpg");
		type.set ("assets/scenes/WCafe/TapisLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/TapisLightingMap.png", "assets/scenes/WCafe/TapisLightingMap.png");
		type.set ("assets/scenes/WCafe/TapisLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Tele.jpg", "assets/scenes/WCafe/Tele.jpg");
		type.set ("assets/scenes/WCafe/Tele.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Tele.png", "assets/scenes/WCafe/Tele.png");
		type.set ("assets/scenes/WCafe/Tele.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/TeleLightingMap.jpg", "assets/scenes/WCafe/TeleLightingMap.jpg");
		type.set ("assets/scenes/WCafe/TeleLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/TeleSI.jpg", "assets/scenes/WCafe/TeleSI.jpg");
		type.set ("assets/scenes/WCafe/TeleSI.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/TeleSI.png", "assets/scenes/WCafe/TeleSI.png");
		type.set ("assets/scenes/WCafe/TeleSI.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/TéléLightingMap.png", "assets/scenes/WCafe/TéléLightingMap.png");
		type.set ("assets/scenes/WCafe/TéléLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/vENT.jpg", "assets/scenes/WCafe/vENT.jpg");
		type.set ("assets/scenes/WCafe/vENT.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/vENT.png", "assets/scenes/WCafe/vENT.png");
		type.set ("assets/scenes/WCafe/vENT.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Verticola.jpg", "assets/scenes/WCafe/Verticola.jpg");
		type.set ("assets/scenes/WCafe/Verticola.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Verticola.png", "assets/scenes/WCafe/Verticola.png");
		type.set ("assets/scenes/WCafe/Verticola.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/WCafe.babylon", "assets/scenes/WCafe/WCafe.babylon");
		type.set ("assets/scenes/WCafe/WCafe.babylon", AssetType.TEXT);
		path.set ("assets/scenes/WCafe/WCafe.babylon.manifest", "assets/scenes/WCafe/WCafe.babylon.manifest");
		type.set ("assets/scenes/WCafe/WCafe.babylon.manifest", AssetType.TEXT);
		path.set ("assets/scenes/WCafe/Wifi.jpg", "assets/scenes/WCafe/Wifi.jpg");
		type.set ("assets/scenes/WCafe/Wifi.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Wifi.png", "assets/scenes/WCafe/Wifi.png");
		type.set ("assets/scenes/WCafe/Wifi.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Win7.jpg", "assets/scenes/WCafe/Win7.jpg");
		type.set ("assets/scenes/WCafe/Win7.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Win7.png", "assets/scenes/WCafe/Win7.png");
		type.set ("assets/scenes/WCafe/Win7.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Win7A.jpg", "assets/scenes/WCafe/Win7A.jpg");
		type.set ("assets/scenes/WCafe/Win7A.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Win7A.png", "assets/scenes/WCafe/Win7A.png");
		type.set ("assets/scenes/WCafe/Win7A.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/WinCafe1.jpg", "assets/scenes/WCafe/WinCafe1.jpg");
		type.set ("assets/scenes/WCafe/WinCafe1.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/WinCafe1.png", "assets/scenes/WCafe/WinCafe1.png");
		type.set ("assets/scenes/WCafe/WinCafe1.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/WinCafe1IL.jpg", "assets/scenes/WCafe/WinCafe1IL.jpg");
		type.set ("assets/scenes/WCafe/WinCafe1IL.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/WinCafe1IL.png", "assets/scenes/WCafe/WinCafe1IL.png");
		type.set ("assets/scenes/WCafe/WinCafe1IL.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/xBOXLightingMap.jpg", "assets/scenes/WCafe/xBOXLightingMap.jpg");
		type.set ("assets/scenes/WCafe/xBOXLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/xBOXLightingMap.png", "assets/scenes/WCafe/xBOXLightingMap.png");
		type.set ("assets/scenes/WCafe/xBOXLightingMap.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Xbrique.jpg", "assets/scenes/WCafe/Xbrique.jpg");
		type.set ("assets/scenes/WCafe/Xbrique.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Xbrique.png", "assets/scenes/WCafe/Xbrique.png");
		type.set ("assets/scenes/WCafe/Xbrique.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Zebu.jpg", "assets/scenes/WCafe/Zebu.jpg");
		type.set ("assets/scenes/WCafe/Zebu.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/Zebu.png", "assets/scenes/WCafe/Zebu.png");
		type.set ("assets/scenes/WCafe/Zebu.png", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ZincLightingMap.jpg", "assets/scenes/WCafe/ZincLightingMap.jpg");
		type.set ("assets/scenes/WCafe/ZincLightingMap.jpg", AssetType.IMAGE);
		path.set ("assets/scenes/WCafe/ZincLightingMap.png", "assets/scenes/WCafe/ZincLightingMap.png");
		type.set ("assets/scenes/WCafe/ZincLightingMap.png", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		
		
		#else

        #if (windows || mac || linux)
		
		var useManifest = false;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		useManifest = true;
		
		
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

        loadManifest();

        #end
        #end

    }


    public override function exists(id:String, type:AssetType):Bool {

        var assetType = this.type.get(id);

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


    public override function getBitmapData(id:String):BitmapData {

        #if pixi
		
		return BitmapData.fromImage (path.get (id));
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), BitmapData);
		
		#elseif openfl_html5
		
		return BitmapData.fromImage (ApplicationMain.images.get (path.get (id)));
		
		#elseif js
		
		return cast (ApplicationMain.loaders.get (path.get (id)).contentLoaderInfo.content, Bitmap).bitmapData;
		
		#else

        if (className.exists(id)) return cast (Type.createInstance(className.get(id), []), BitmapData); else return BitmapData.load(path.get(id));

        #end

    }


    public override function getBytes(id:String):ByteArray {

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

        if (className.exists(id)) return cast (Type.createInstance(className.get(id), []), ByteArray); else return ByteArray.readFile(path.get(id));

        #end

    }


    public override function getFont(id:String):Font {

        #if pixi
		
		return null;
		
		#elseif (flash || js)
		
		return cast (Type.createInstance (className.get (id), []), Font);
		
		#else

        if (className.exists(id)) {
            var fontClass = className.get(id);
            Font.registerFont(fontClass);
            return cast (Type.createInstance(fontClass, []), Font);
        } else return new Font (path.get(id));

        #end

    }


    public override function getMusic(id:String):Sound {

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

        if (className.exists(id)) return cast (Type.createInstance(className.get(id), []), Sound); else return new Sound (new URLRequest (path.get(id)), null, true);

        #end

    }


    public override function getPath(id:String):String {

        #if ios
		
		return SystemPath.applicationDirectory + "/assets/" + path.get (id);
		
		#else

        return path.get(id);

        #end

    }


    public override function getSound(id:String):Sound {

        #if pixi
		
		return null;
		
		#elseif (flash)
		
		return cast (Type.createInstance (className.get (id), []), Sound);
		
		#elseif js
		
		return new Sound (new URLRequest (path.get (id)));
		
		#else

        if (className.exists(id)) return cast (Type.createInstance(className.get(id), []), Sound); else return new Sound (new URLRequest (path.get(id)), null, type.get(id) == MUSIC);

        #end

    }


    public override function getText(id:String):String {

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

        var bytes = getBytes(id);

        if (bytes == null) {

            return null;

        } else {

            return bytes.readUTFBytes(bytes.length);

        }

        #end

    }


    public override function isLocal(id:String, type:AssetType):Bool {

        #if flash
		
		if (type != AssetType.MUSIC && type != AssetType.SOUND) {
			
			return className.exists (id);
			
		}
		
		#end

        return true;

    }


    public override function list(type:AssetType):Array<String> {

        var items = [];

        for (id in this.type.keys()) {

            if (type == null || exists(id, type)) {

                items.push(id);

            }

        }

        return items;

    }


    public override function loadBitmapData(id:String, handler:BitmapData -> Void):Void {

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

        handler(getBitmapData(id));

        #end

    }


    public override function loadBytes(id:String, handler:ByteArray -> Void):Void {

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

        handler(getBytes(id));

        #end

    }


    public override function loadFont(id:String, handler:Font -> Void):Void {

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

        handler(getFont(id));

        #end

    }


    #if (!flash && !html5)




    private function loadManifest():Void {

        try {

            #if blackberry
			var bytes = ByteArray.readFile ("app/native/manifest");
			#elseif tizen
			var bytes = ByteArray.readFile ("../res/manifest");
			#elseif emscripten
			var bytes = ByteArray.readFile ("assets/manifest");
			#else
            var bytes = ByteArray.readFile("manifest");
            #end

            if (bytes != null) {

                bytes.position = 0;

                if (bytes.length > 0) {

                    var data = bytes.readUTFBytes(bytes.length);

                    if (data != null && data.length > 0) {

                        var manifest:Array<Dynamic> = Unserializer.run(data);

                        for (asset in manifest) {

                            if (!className.exists(asset.id)) {

                                path.set(asset.id, asset.path);
                                type.set(asset.id, Type.createEnum(AssetType, asset.type));

                            }

                        }

                    }

                }

            } else {

                trace("Warning: Could not load asset manifest (bytes was null)");

            }

        } catch (e:Dynamic) {

            trace('Warning: Could not load asset manifest (${e})');

        }

    }
    #end


    public override function loadMusic(id:String, handler:Sound -> Void):Void {

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

        handler(getMusic(id));

        #end

    }


    public override function loadSound(id:String, handler:Sound -> Void):Void {

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

        handler(getSound(id));

        #end

    }


    public override function loadText(id:String, handler:String -> Void):Void {

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

        var callback = function(bytes:ByteArray):Void {

            if (bytes == null) {

                handler(null);

            } else {

                handler(bytes.readUTFBytes(bytes.length));

            }

        }

        loadBytes(id, callback);

        #end

    }


}


#if pixi
#elseif flash
















































































































































































#elseif html5
















































































































































































#elseif (windows || mac || linux)




#end
