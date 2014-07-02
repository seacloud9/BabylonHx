package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("Assets/img/cloud.png", "Assets/img/cloud.png");
			type.set ("Assets/img/cloud.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("Assets/shaders/clouds.fragment.fx", "Assets/shaders/clouds.fragment.fx");
			type.set ("Assets/shaders/clouds.fragment.fx", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("Assets/shaders/clouds.vertex.fx", "Assets/shaders/clouds.vertex.fx");
			type.set ("Assets/shaders/clouds.vertex.fx", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
