package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/img/cloud.png", "assets/img/cloud.png");
			type.set ("assets/img/cloud.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/shaders/clouds.fragment.fx", "assets/shaders/clouds.fragment.fx");
			type.set ("assets/shaders/clouds.fragment.fx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/shaders/clouds.vertex.fx", "assets/shaders/clouds.vertex.fx");
			type.set ("assets/shaders/clouds.vertex.fx", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
