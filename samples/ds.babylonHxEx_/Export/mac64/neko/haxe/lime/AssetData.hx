package lime;


import lime.utils.Assets;


class AssetData {

    private static var initialized:Bool = false;

    public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
    public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
    public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();

    public static function initialize():Void {

        if (!initialized) {

            path.set("assets/scenes/WCafe/Affiches.jpg", "assets/scenes/WCafe/Affiches.jpg");
            type.set("assets/scenes/WCafe/Affiches.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Affiches.png", "assets/scenes/WCafe/Affiches.png");
            type.set("assets/scenes/WCafe/Affiches.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Affiches2.jpg", "assets/scenes/WCafe/Affiches2.jpg");
            type.set("assets/scenes/WCafe/Affiches2.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Affiches2.png", "assets/scenes/WCafe/Affiches2.png");
            type.set("assets/scenes/WCafe/Affiches2.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Affiches3.jpg", "assets/scenes/WCafe/Affiches3.jpg");
            type.set("assets/scenes/WCafe/Affiches3.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Affiches3.png", "assets/scenes/WCafe/Affiches3.png");
            type.set("assets/scenes/WCafe/Affiches3.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/AffichesLightingMap.jpg", "assets/scenes/WCafe/AffichesLightingMap.jpg");
            type.set("assets/scenes/WCafe/AffichesLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/AffichesLightingMap.png", "assets/scenes/WCafe/AffichesLightingMap.png");
            type.set("assets/scenes/WCafe/AffichesLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Bafle.jpg", "assets/scenes/WCafe/Bafle.jpg");
            type.set("assets/scenes/WCafe/Bafle.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Bafle.png", "assets/scenes/WCafe/Bafle.png");
            type.set("assets/scenes/WCafe/Bafle.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/BafleLightingMap.jpg", "assets/scenes/WCafe/BafleLightingMap.jpg");
            type.set("assets/scenes/WCafe/BafleLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/BafleLightingMap.png", "assets/scenes/WCafe/BafleLightingMap.png");
            type.set("assets/scenes/WCafe/BafleLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Beton1.jpg", "assets/scenes/WCafe/Beton1.jpg");
            type.set("assets/scenes/WCafe/Beton1.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Beton1.png", "assets/scenes/WCafe/Beton1.png");
            type.set("assets/scenes/WCafe/Beton1.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/BlancUniLightingMap.jpg", "assets/scenes/WCafe/BlancUniLightingMap.jpg");
            type.set("assets/scenes/WCafe/BlancUniLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/BlancUniLightingMap.png", "assets/scenes/WCafe/BlancUniLightingMap.png");
            type.set("assets/scenes/WCafe/BlancUniLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Bois2.jpg", "assets/scenes/WCafe/Bois2.jpg");
            type.set("assets/scenes/WCafe/Bois2.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Bois2.png", "assets/scenes/WCafe/Bois2.png");
            type.set("assets/scenes/WCafe/Bois2.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Briques3.jpg", "assets/scenes/WCafe/Briques3.jpg");
            type.set("assets/scenes/WCafe/Briques3.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Briques3.png", "assets/scenes/WCafe/Briques3.png");
            type.set("assets/scenes/WCafe/Briques3.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Canape1LightingMap.jpg", "assets/scenes/WCafe/Canape1LightingMap.jpg");
            type.set("assets/scenes/WCafe/Canape1LightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Canapé1LightingMap.png", "assets/scenes/WCafe/Canapé1LightingMap.png");
            type.set("assets/scenes/WCafe/Canapé1LightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Canette1.jpg", "assets/scenes/WCafe/Canette1.jpg");
            type.set("assets/scenes/WCafe/Canette1.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Canette1.png", "assets/scenes/WCafe/Canette1.png");
            type.set("assets/scenes/WCafe/Canette1.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Canette2.jpg", "assets/scenes/WCafe/Canette2.jpg");
            type.set("assets/scenes/WCafe/Canette2.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Canette2.png", "assets/scenes/WCafe/Canette2.png");
            type.set("assets/scenes/WCafe/Canette2.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ChaineHifi.jpg", "assets/scenes/WCafe/ChaineHifi.jpg");
            type.set("assets/scenes/WCafe/ChaineHifi.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ChaineHifi.png", "assets/scenes/WCafe/ChaineHifi.png");
            type.set("assets/scenes/WCafe/ChaineHifi.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ChaineHifi2.jpg", "assets/scenes/WCafe/ChaineHifi2.jpg");
            type.set("assets/scenes/WCafe/ChaineHifi2.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ChaineHifi2.png", "assets/scenes/WCafe/ChaineHifi2.png");
            type.set("assets/scenes/WCafe/ChaineHifi2.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ChromeBrosseLightingMap.jpg", "assets/scenes/WCafe/ChromeBrosseLightingMap.jpg");
            type.set("assets/scenes/WCafe/ChromeBrosseLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ChromeBrosséLightingMap.png", "assets/scenes/WCafe/ChromeBrosséLightingMap.png");
            type.set("assets/scenes/WCafe/ChromeBrosséLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ChromeLightingMap.jpg", "assets/scenes/WCafe/ChromeLightingMap.jpg");
            type.set("assets/scenes/WCafe/ChromeLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ChromeLightingMap.png", "assets/scenes/WCafe/ChromeLightingMap.png");
            type.set("assets/scenes/WCafe/ChromeLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ColonnesLightingMap.jpg", "assets/scenes/WCafe/ColonnesLightingMap.jpg");
            type.set("assets/scenes/WCafe/ColonnesLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ColonnesLightingMap.png", "assets/scenes/WCafe/ColonnesLightingMap.png");
            type.set("assets/scenes/WCafe/ColonnesLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Coussins2LightingMap.jpg", "assets/scenes/WCafe/Coussins2LightingMap.jpg");
            type.set("assets/scenes/WCafe/Coussins2LightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Coussins2LightingMap.png", "assets/scenes/WCafe/Coussins2LightingMap.png");
            type.set("assets/scenes/WCafe/Coussins2LightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg", "assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg");
            type.set("assets/scenes/WCafe/CoussinsfauteuilLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/CoussinsfauteuilLightingMap.png", "assets/scenes/WCafe/CoussinsfauteuilLightingMap.png");
            type.set("assets/scenes/WCafe/CoussinsfauteuilLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Cuir1Spec.png", "assets/scenes/WCafe/Cuir1Spec.png");
            type.set("assets/scenes/WCafe/Cuir1Spec.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/CuirbrunSpec.png", "assets/scenes/WCafe/CuirbrunSpec.png");
            type.set("assets/scenes/WCafe/CuirbrunSpec.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/CuiViolet.jpg", "assets/scenes/WCafe/CuiViolet.jpg");
            type.set("assets/scenes/WCafe/CuiViolet.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/CuiViolet.png", "assets/scenes/WCafe/CuiViolet.png");
            type.set("assets/scenes/WCafe/CuiViolet.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Degrade.png", "assets/scenes/WCafe/Degrade.png");
            type.set("assets/scenes/WCafe/Degrade.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Degradebar.jpg", "assets/scenes/WCafe/Degradebar.jpg");
            type.set("assets/scenes/WCafe/Degradebar.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Degradebar.png", "assets/scenes/WCafe/Degradebar.png");
            type.set("assets/scenes/WCafe/Degradebar.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Ecrantele1.jpg", "assets/scenes/WCafe/Ecrantele1.jpg");
            type.set("assets/scenes/WCafe/Ecrantele1.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Ecrantele1.png", "assets/scenes/WCafe/Ecrantele1.png");
            type.set("assets/scenes/WCafe/Ecrantele1.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/EscalierLightingMap.jpg", "assets/scenes/WCafe/EscalierLightingMap.jpg");
            type.set("assets/scenes/WCafe/EscalierLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/EscalierLightingMap.png", "assets/scenes/WCafe/EscalierLightingMap.png");
            type.set("assets/scenes/WCafe/EscalierLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/exit.jpg", "assets/scenes/WCafe/exit.jpg");
            type.set("assets/scenes/WCafe/exit.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/exit.png", "assets/scenes/WCafe/exit.png");
            type.set("assets/scenes/WCafe/exit.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/FauteuilRond01LightingMap.jpg", "assets/scenes/WCafe/FauteuilRond01LightingMap.jpg");
            type.set("assets/scenes/WCafe/FauteuilRond01LightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/FauteuilRond01LightingMap.png", "assets/scenes/WCafe/FauteuilRond01LightingMap.png");
            type.set("assets/scenes/WCafe/FauteuilRond01LightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Fauteuilsronds.jpg", "assets/scenes/WCafe/Fauteuilsronds.jpg");
            type.set("assets/scenes/WCafe/Fauteuilsronds.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Fauteuilsronds.png", "assets/scenes/WCafe/Fauteuilsronds.png");
            type.set("assets/scenes/WCafe/Fauteuilsronds.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Fndgris.jpg", "assets/scenes/WCafe/Fndgris.jpg");
            type.set("assets/scenes/WCafe/Fndgris.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Fndgris.png", "assets/scenes/WCafe/Fndgris.png");
            type.set("assets/scenes/WCafe/Fndgris.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Fndrouge2.jpg", "assets/scenes/WCafe/Fndrouge2.jpg");
            type.set("assets/scenes/WCafe/Fndrouge2.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Fndrouge2.png", "assets/scenes/WCafe/Fndrouge2.png");
            type.set("assets/scenes/WCafe/Fndrouge2.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Fondmeuble basLightingMap.jpg", "assets/scenes/WCafe/Fondmeuble basLightingMap.jpg");
            type.set("assets/scenes/WCafe/Fondmeuble basLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Fondmeuble basLightingMap.png", "assets/scenes/WCafe/Fondmeuble basLightingMap.png");
            type.set("assets/scenes/WCafe/Fondmeuble basLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Fvert.jpg", "assets/scenes/WCafe/Fvert.jpg");
            type.set("assets/scenes/WCafe/Fvert.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Fvert.png", "assets/scenes/WCafe/Fvert.png");
            type.set("assets/scenes/WCafe/Fvert.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Grille.png", "assets/scenes/WCafe/Grille.png");
            type.set("assets/scenes/WCafe/Grille.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/liquiorange.jpg", "assets/scenes/WCafe/liquiorange.jpg");
            type.set("assets/scenes/WCafe/liquiorange.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/liquiorange.png", "assets/scenes/WCafe/liquiorange.png");
            type.set("assets/scenes/WCafe/liquiorange.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Liquirouge.jpg", "assets/scenes/WCafe/Liquirouge.jpg");
            type.set("assets/scenes/WCafe/Liquirouge.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Liquirouge.png", "assets/scenes/WCafe/Liquirouge.png");
            type.set("assets/scenes/WCafe/Liquirouge.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Liquivert.jpg", "assets/scenes/WCafe/Liquivert.jpg");
            type.set("assets/scenes/WCafe/Liquivert.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Liquivert.png", "assets/scenes/WCafe/Liquivert.png");
            type.set("assets/scenes/WCafe/Liquivert.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Masque1.png", "assets/scenes/WCafe/Masque1.png");
            type.set("assets/scenes/WCafe/Masque1.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Masque2.png", "assets/scenes/WCafe/Masque2.png");
            type.set("assets/scenes/WCafe/Masque2.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/MurrdcLightingMap.jpg", "assets/scenes/WCafe/MurrdcLightingMap.jpg");
            type.set("assets/scenes/WCafe/MurrdcLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/MurrdcLightingMap.png", "assets/scenes/WCafe/MurrdcLightingMap.png");
            type.set("assets/scenes/WCafe/MurrdcLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Mursdivers.jpg", "assets/scenes/WCafe/Mursdivers.jpg");
            type.set("assets/scenes/WCafe/Mursdivers.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Mursdivers.png", "assets/scenes/WCafe/Mursdivers.png");
            type.set("assets/scenes/WCafe/Mursdivers.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/NeonarcheAmbiant.jpg", "assets/scenes/WCafe/NeonarcheAmbiant.jpg");
            type.set("assets/scenes/WCafe/NeonarcheAmbiant.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/NeonarcheAmbiant.png", "assets/scenes/WCafe/NeonarcheAmbiant.png");
            type.set("assets/scenes/WCafe/NeonarcheAmbiant.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/NoirmatLightingMap.jpg", "assets/scenes/WCafe/NoirmatLightingMap.jpg");
            type.set("assets/scenes/WCafe/NoirmatLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/NoirmatLightingMap.png", "assets/scenes/WCafe/NoirmatLightingMap.png");
            type.set("assets/scenes/WCafe/NoirmatLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Ordi.jpg", "assets/scenes/WCafe/Ordi.jpg");
            type.set("assets/scenes/WCafe/Ordi.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Ordi.png", "assets/scenes/WCafe/Ordi.png");
            type.set("assets/scenes/WCafe/Ordi.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/OrdiSI.jpg", "assets/scenes/WCafe/OrdiSI.jpg");
            type.set("assets/scenes/WCafe/OrdiSI.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/OrdiSI.png", "assets/scenes/WCafe/OrdiSI.png");
            type.set("assets/scenes/WCafe/OrdiSI.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/OrdisLightingMap.jpg", "assets/scenes/WCafe/OrdisLightingMap.jpg");
            type.set("assets/scenes/WCafe/OrdisLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/OrdisLightingMap.png", "assets/scenes/WCafe/OrdisLightingMap.png");
            type.set("assets/scenes/WCafe/OrdisLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Pano2Alt.jpg", "assets/scenes/WCafe/Pano2Alt.jpg");
            type.set("assets/scenes/WCafe/Pano2Alt.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Pano2Alt.png", "assets/scenes/WCafe/Pano2Alt.png");
            type.set("assets/scenes/WCafe/Pano2Alt.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg");
            type.set("assets/scenes/WCafe/Pano5refNoirpurFloue_nx.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg");
            type.set("assets/scenes/WCafe/Pano5refNoirpurFloue_ny.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg");
            type.set("assets/scenes/WCafe/Pano5refNoirpurFloue_nz.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg");
            type.set("assets/scenes/WCafe/Pano5refNoirpurFloue_px.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg");
            type.set("assets/scenes/WCafe/Pano5refNoirpurFloue_py.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg", "assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg");
            type.set("assets/scenes/WCafe/Pano5refNoirpurFloue_pz.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Parquet1.jpg", "assets/scenes/WCafe/Parquet1.jpg");
            type.set("assets/scenes/WCafe/Parquet1.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Parquet1.png", "assets/scenes/WCafe/Parquet1.png");
            type.set("assets/scenes/WCafe/Parquet1.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Parquet3.jpg", "assets/scenes/WCafe/Parquet3.jpg");
            type.set("assets/scenes/WCafe/Parquet3.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Parquet3.png", "assets/scenes/WCafe/Parquet3.png");
            type.set("assets/scenes/WCafe/Parquet3.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Peintureverte.jpg", "assets/scenes/WCafe/Peintureverte.jpg");
            type.set("assets/scenes/WCafe/Peintureverte.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Peintureverte.png", "assets/scenes/WCafe/Peintureverte.png");
            type.set("assets/scenes/WCafe/Peintureverte.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/PlafondsLightingMap.jpg", "assets/scenes/WCafe/PlafondsLightingMap.jpg");
            type.set("assets/scenes/WCafe/PlafondsLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/PlafondsLightingMap.png", "assets/scenes/WCafe/PlafondsLightingMap.png");
            type.set("assets/scenes/WCafe/PlafondsLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Plancher2LightingMap.jpg", "assets/scenes/WCafe/Plancher2LightingMap.jpg");
            type.set("assets/scenes/WCafe/Plancher2LightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Plancher2LightingMap.png", "assets/scenes/WCafe/Plancher2LightingMap.png");
            type.set("assets/scenes/WCafe/Plancher2LightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Plancheretage1LightingMap.jpg", "assets/scenes/WCafe/Plancheretage1LightingMap.jpg");
            type.set("assets/scenes/WCafe/Plancheretage1LightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Plancherétage1LightingMap.png", "assets/scenes/WCafe/Plancherétage1LightingMap.png");
            type.set("assets/scenes/WCafe/Plancherétage1LightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/PlotDiffuseMap.jpg", "assets/scenes/WCafe/PlotDiffuseMap.jpg");
            type.set("assets/scenes/WCafe/PlotDiffuseMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/PlotDiffuseMap.png", "assets/scenes/WCafe/PlotDiffuseMap.png");
            type.set("assets/scenes/WCafe/PlotDiffuseMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Produits.jpg", "assets/scenes/WCafe/Produits.jpg");
            type.set("assets/scenes/WCafe/Produits.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Produits.png", "assets/scenes/WCafe/Produits.png");
            type.set("assets/scenes/WCafe/Produits.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/RedFlowers.jpg", "assets/scenes/WCafe/RedFlowers.jpg");
            type.set("assets/scenes/WCafe/RedFlowers.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/RedFlowers.png", "assets/scenes/WCafe/RedFlowers.png");
            type.set("assets/scenes/WCafe/RedFlowers.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Refcubenoire_nx.jpg", "assets/scenes/WCafe/Refcubenoire_nx.jpg");
            type.set("assets/scenes/WCafe/Refcubenoire_nx.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Refcubenoire_ny.jpg", "assets/scenes/WCafe/Refcubenoire_ny.jpg");
            type.set("assets/scenes/WCafe/Refcubenoire_ny.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Refcubenoire_nz.jpg", "assets/scenes/WCafe/Refcubenoire_nz.jpg");
            type.set("assets/scenes/WCafe/Refcubenoire_nz.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Refcubenoire_px.jpg", "assets/scenes/WCafe/Refcubenoire_px.jpg");
            type.set("assets/scenes/WCafe/Refcubenoire_px.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Refcubenoire_py.jpg", "assets/scenes/WCafe/Refcubenoire_py.jpg");
            type.set("assets/scenes/WCafe/Refcubenoire_py.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Refcubenoire_pz.jpg", "assets/scenes/WCafe/Refcubenoire_pz.jpg");
            type.set("assets/scenes/WCafe/Refcubenoire_pz.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Refcubenoireplate.jpg", "assets/scenes/WCafe/Refcubenoireplate.jpg");
            type.set("assets/scenes/WCafe/Refcubenoireplate.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Refcubenoireplate.png", "assets/scenes/WCafe/Refcubenoireplate.png");
            type.set("assets/scenes/WCafe/Refcubenoireplate.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Salade.jpg", "assets/scenes/WCafe/Salade.jpg");
            type.set("assets/scenes/WCafe/Salade.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Salade.png", "assets/scenes/WCafe/Salade.png");
            type.set("assets/scenes/WCafe/Salade.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/SaladesLM.jpg", "assets/scenes/WCafe/SaladesLM.jpg");
            type.set("assets/scenes/WCafe/SaladesLM.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/SaladesLM.png", "assets/scenes/WCafe/SaladesLM.png");
            type.set("assets/scenes/WCafe/SaladesLM.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/SolRDCLightingMap.jpg", "assets/scenes/WCafe/SolRDCLightingMap.jpg");
            type.set("assets/scenes/WCafe/SolRDCLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/SolRDCLightingMap.png", "assets/scenes/WCafe/SolRDCLightingMap.png");
            type.set("assets/scenes/WCafe/SolRDCLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/SpecMetalbrosse.png", "assets/scenes/WCafe/SpecMetalbrosse.png");
            type.set("assets/scenes/WCafe/SpecMetalbrosse.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Sponsor01DiffuseMap.jpg", "assets/scenes/WCafe/Sponsor01DiffuseMap.jpg");
            type.set("assets/scenes/WCafe/Sponsor01DiffuseMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Sponsor01DiffuseMap.png", "assets/scenes/WCafe/Sponsor01DiffuseMap.png");
            type.set("assets/scenes/WCafe/Sponsor01DiffuseMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Sticker haut.jpg", "assets/scenes/WCafe/Sticker haut.jpg");
            type.set("assets/scenes/WCafe/Sticker haut.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Sticker haut.png", "assets/scenes/WCafe/Sticker haut.png");
            type.set("assets/scenes/WCafe/Sticker haut.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Surface.jpg", "assets/scenes/WCafe/Surface.jpg");
            type.set("assets/scenes/WCafe/Surface.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Surface.png", "assets/scenes/WCafe/Surface.png");
            type.set("assets/scenes/WCafe/Surface.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/tableaux.jpg", "assets/scenes/WCafe/tableaux.jpg");
            type.set("assets/scenes/WCafe/tableaux.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/tableaux.png", "assets/scenes/WCafe/tableaux.png");
            type.set("assets/scenes/WCafe/tableaux.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/TableSurfaceLightingMap.jpg", "assets/scenes/WCafe/TableSurfaceLightingMap.jpg");
            type.set("assets/scenes/WCafe/TableSurfaceLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/TableSurfaceLightingMap.png", "assets/scenes/WCafe/TableSurfaceLightingMap.png");
            type.set("assets/scenes/WCafe/TableSurfaceLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/tapis4.jpg", "assets/scenes/WCafe/tapis4.jpg");
            type.set("assets/scenes/WCafe/tapis4.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/tapis4.png", "assets/scenes/WCafe/tapis4.png");
            type.set("assets/scenes/WCafe/tapis4.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/TapisLightingMap.jpg", "assets/scenes/WCafe/TapisLightingMap.jpg");
            type.set("assets/scenes/WCafe/TapisLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/TapisLightingMap.png", "assets/scenes/WCafe/TapisLightingMap.png");
            type.set("assets/scenes/WCafe/TapisLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Tele.jpg", "assets/scenes/WCafe/Tele.jpg");
            type.set("assets/scenes/WCafe/Tele.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Tele.png", "assets/scenes/WCafe/Tele.png");
            type.set("assets/scenes/WCafe/Tele.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/TeleLightingMap.jpg", "assets/scenes/WCafe/TeleLightingMap.jpg");
            type.set("assets/scenes/WCafe/TeleLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/TeleSI.jpg", "assets/scenes/WCafe/TeleSI.jpg");
            type.set("assets/scenes/WCafe/TeleSI.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/TeleSI.png", "assets/scenes/WCafe/TeleSI.png");
            type.set("assets/scenes/WCafe/TeleSI.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/TéléLightingMap.png", "assets/scenes/WCafe/TéléLightingMap.png");
            type.set("assets/scenes/WCafe/TéléLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/vENT.jpg", "assets/scenes/WCafe/vENT.jpg");
            type.set("assets/scenes/WCafe/vENT.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/vENT.png", "assets/scenes/WCafe/vENT.png");
            type.set("assets/scenes/WCafe/vENT.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Verticola.jpg", "assets/scenes/WCafe/Verticola.jpg");
            type.set("assets/scenes/WCafe/Verticola.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Verticola.png", "assets/scenes/WCafe/Verticola.png");
            type.set("assets/scenes/WCafe/Verticola.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/WCafe.babylon", "assets/scenes/WCafe/WCafe.babylon");
            type.set("assets/scenes/WCafe/WCafe.babylon", Reflect.field(AssetType, "text".toUpperCase()));
            path.set("assets/scenes/WCafe/WCafe.babylon.manifest", "assets/scenes/WCafe/WCafe.babylon.manifest");
            type.set("assets/scenes/WCafe/WCafe.babylon.manifest", Reflect.field(AssetType, "text".toUpperCase()));
            path.set("assets/scenes/WCafe/Wifi.jpg", "assets/scenes/WCafe/Wifi.jpg");
            type.set("assets/scenes/WCafe/Wifi.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Wifi.png", "assets/scenes/WCafe/Wifi.png");
            type.set("assets/scenes/WCafe/Wifi.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Win7.jpg", "assets/scenes/WCafe/Win7.jpg");
            type.set("assets/scenes/WCafe/Win7.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Win7.png", "assets/scenes/WCafe/Win7.png");
            type.set("assets/scenes/WCafe/Win7.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Win7A.jpg", "assets/scenes/WCafe/Win7A.jpg");
            type.set("assets/scenes/WCafe/Win7A.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Win7A.png", "assets/scenes/WCafe/Win7A.png");
            type.set("assets/scenes/WCafe/Win7A.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/WinCafe1.jpg", "assets/scenes/WCafe/WinCafe1.jpg");
            type.set("assets/scenes/WCafe/WinCafe1.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/WinCafe1.png", "assets/scenes/WCafe/WinCafe1.png");
            type.set("assets/scenes/WCafe/WinCafe1.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/WinCafe1IL.jpg", "assets/scenes/WCafe/WinCafe1IL.jpg");
            type.set("assets/scenes/WCafe/WinCafe1IL.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/WinCafe1IL.png", "assets/scenes/WCafe/WinCafe1IL.png");
            type.set("assets/scenes/WCafe/WinCafe1IL.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/xBOXLightingMap.jpg", "assets/scenes/WCafe/xBOXLightingMap.jpg");
            type.set("assets/scenes/WCafe/xBOXLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/xBOXLightingMap.png", "assets/scenes/WCafe/xBOXLightingMap.png");
            type.set("assets/scenes/WCafe/xBOXLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Xbrique.jpg", "assets/scenes/WCafe/Xbrique.jpg");
            type.set("assets/scenes/WCafe/Xbrique.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Xbrique.png", "assets/scenes/WCafe/Xbrique.png");
            type.set("assets/scenes/WCafe/Xbrique.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Zebu.jpg", "assets/scenes/WCafe/Zebu.jpg");
            type.set("assets/scenes/WCafe/Zebu.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/Zebu.png", "assets/scenes/WCafe/Zebu.png");
            type.set("assets/scenes/WCafe/Zebu.png", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ZincLightingMap.jpg", "assets/scenes/WCafe/ZincLightingMap.jpg");
            type.set("assets/scenes/WCafe/ZincLightingMap.jpg", Reflect.field(AssetType, "image".toUpperCase()));
            path.set("assets/scenes/WCafe/ZincLightingMap.png", "assets/scenes/WCafe/ZincLightingMap.png");
            type.set("assets/scenes/WCafe/ZincLightingMap.png", Reflect.field(AssetType, "image".toUpperCase()));


            initialized = true;

        } //!initialized

    }
    //initialize


} //AssetData
