package lime;


import lime.utils.Assets;


class AssetData {

	private static var initialized:Bool = false;
	
	public static var library = new #if haxe3 Map <String, #else Hash <#end LibraryType> ();
	public static var path = new #if haxe3 Map <String, #else Hash <#end String> ();
	public static var type = new #if haxe3 Map <String, #else Hash <#end AssetType> ();	
	
	public static function initialize():Void {
		
		if (!initialized) {
			
			path.set ("assets/img/cloud--.png", "assets/img/cloud--.png");
			type.set ("assets/img/cloud--.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/cloud.jpg", "assets/img/cloud.jpg");
			type.set ("assets/img/cloud.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/cloud.png", "assets/img/cloud.png");
			type.set ("assets/img/cloud.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/README.TXT", "assets/img/skybox/README.TXT");
			type.set ("assets/img/skybox/README.TXT", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_nx.jpg", "assets/img/skybox/skybox_nx.jpg");
			type.set ("assets/img/skybox/skybox_nx.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_nx.png", "assets/img/skybox/skybox_nx.png");
			type.set ("assets/img/skybox/skybox_nx.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_ny.jpg", "assets/img/skybox/skybox_ny.jpg");
			type.set ("assets/img/skybox/skybox_ny.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_ny.png", "assets/img/skybox/skybox_ny.png");
			type.set ("assets/img/skybox/skybox_ny.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_nz.jpg", "assets/img/skybox/skybox_nz.jpg");
			type.set ("assets/img/skybox/skybox_nz.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_nz.png", "assets/img/skybox/skybox_nz.png");
			type.set ("assets/img/skybox/skybox_nz.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_px.jpg", "assets/img/skybox/skybox_px.jpg");
			type.set ("assets/img/skybox/skybox_px.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_px.png", "assets/img/skybox/skybox_px.png");
			type.set ("assets/img/skybox/skybox_px.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_py.jpg", "assets/img/skybox/skybox_py.jpg");
			type.set ("assets/img/skybox/skybox_py.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_py.png", "assets/img/skybox/skybox_py.png");
			type.set ("assets/img/skybox/skybox_py.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_pz.jpg", "assets/img/skybox/skybox_pz.jpg");
			type.set ("assets/img/skybox/skybox_pz.jpg", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/img/skybox/skybox_pz.png", "assets/img/skybox/skybox_pz.png");
			type.set ("assets/img/skybox/skybox_pz.png", Reflect.field (AssetType, "image".toUpperCase ()));
			path.set ("assets/shaders/clouds.fragment.txt", "assets/shaders/clouds.fragment.txt");
			type.set ("assets/shaders/clouds.fragment.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			path.set ("assets/shaders/clouds.vertex.txt", "assets/shaders/clouds.vertex.txt");
			type.set ("assets/shaders/clouds.vertex.txt", Reflect.field (AssetType, "text".toUpperCase ()));
			
			
			initialized = true;
			
		} //!initialized
		
	} //initialize
	
	
} //AssetData
