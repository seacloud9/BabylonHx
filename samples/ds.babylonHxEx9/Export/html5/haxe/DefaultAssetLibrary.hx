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
		
		className.set ("assets/_train/barrieres_bois.jpg", __ASSET__assets__train_barrieres_bois_jpg);
		type.set ("assets/_train/barrieres_bois.jpg", AssetType.IMAGE);
		className.set ("assets/_train/barrieres_bois_n.jpg", __ASSET__assets__train_barrieres_bois_n_jpg);
		type.set ("assets/_train/barrieres_bois_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/bat_console_murs_ext_lm.jpg", __ASSET__assets__train_bat_console_murs_ext_lm_jpg);
		type.set ("assets/_train/bat_console_murs_ext_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/bat_console_murs_lm.jpg", __ASSET__assets__train_bat_console_murs_lm_jpg);
		type.set ("assets/_train/bat_console_murs_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/bat_lm.jpg", __ASSET__assets__train_bat_lm_jpg);
		type.set ("assets/_train/bat_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/bosquet_grass.jpg", __ASSET__assets__train_bosquet_grass_jpg);
		type.set ("assets/_train/bosquet_grass.jpg", AssetType.IMAGE);
		className.set ("assets/_train/bosquet_grass.png", __ASSET__assets__train_bosquet_grass_png);
		type.set ("assets/_train/bosquet_grass.png", AssetType.IMAGE);
		className.set ("assets/_train/bottes_paille.jpg", __ASSET__assets__train_bottes_paille_jpg);
		type.set ("assets/_train/bottes_paille.jpg", AssetType.IMAGE);
		className.set ("assets/_train/bottes_paille_face.jpg", __ASSET__assets__train_bottes_paille_face_jpg);
		type.set ("assets/_train/bottes_paille_face.jpg", AssetType.IMAGE);
		className.set ("assets/_train/champ_ble.jpg", __ASSET__assets__train_champ_ble_jpg);
		type.set ("assets/_train/champ_ble.jpg", AssetType.IMAGE);
		className.set ("assets/_train/champ_ble.png", __ASSET__assets__train_champ_ble_png);
		type.set ("assets/_train/champ_ble.png", AssetType.IMAGE);
		className.set ("assets/_train/chariot_planche.jpg", __ASSET__assets__train_chariot_planche_jpg);
		type.set ("assets/_train/chariot_planche.jpg", AssetType.IMAGE);
		className.set ("assets/_train/chariot_planche_n.jpg", __ASSET__assets__train_chariot_planche_n_jpg);
		type.set ("assets/_train/chariot_planche_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/chariot_roue.jpg", __ASSET__assets__train_chariot_roue_jpg);
		type.set ("assets/_train/chariot_roue.jpg", AssetType.IMAGE);
		className.set ("assets/_train/chariot_roue_n.jpg", __ASSET__assets__train_chariot_roue_n_jpg);
		type.set ("assets/_train/chariot_roue_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/console.jpg", __ASSET__assets__train_console_jpg);
		type.set ("assets/_train/console.jpg", AssetType.IMAGE);
		className.set ("assets/_train/console_n.jpg", __ASSET__assets__train_console_n_jpg);
		type.set ("assets/_train/console_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap5_nx.jpg", __ASSET__assets__train_cubemap5_nx_jpg);
		type.set ("assets/_train/cubemap5_nx.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap5_ny.jpg", __ASSET__assets__train_cubemap5_ny_jpg);
		type.set ("assets/_train/cubemap5_ny.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap5_nz.jpg", __ASSET__assets__train_cubemap5_nz_jpg);
		type.set ("assets/_train/cubemap5_nz.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap5_px.jpg", __ASSET__assets__train_cubemap5_px_jpg);
		type.set ("assets/_train/cubemap5_px.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap5_py.jpg", __ASSET__assets__train_cubemap5_py_jpg);
		type.set ("assets/_train/cubemap5_py.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap5_pz.jpg", __ASSET__assets__train_cubemap5_pz_jpg);
		type.set ("assets/_train/cubemap5_pz.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_nx.jpg", __ASSET__assets__train_cubemap_nx_jpg);
		type.set ("assets/_train/cubemap_nx.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_ny.jpg", __ASSET__assets__train_cubemap_ny_jpg);
		type.set ("assets/_train/cubemap_ny.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_nz.jpg", __ASSET__assets__train_cubemap_nz_jpg);
		type.set ("assets/_train/cubemap_nz.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_px.jpg", __ASSET__assets__train_cubemap_px_jpg);
		type.set ("assets/_train/cubemap_px.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_py.jpg", __ASSET__assets__train_cubemap_py_jpg);
		type.set ("assets/_train/cubemap_py.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_pz.jpg", __ASSET__assets__train_cubemap_pz_jpg);
		type.set ("assets/_train/cubemap_pz.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_vitres_nx.jpg", __ASSET__assets__train_cubemap_vitres_nx_jpg);
		type.set ("assets/_train/cubemap_vitres_nx.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_vitres_ny.jpg", __ASSET__assets__train_cubemap_vitres_ny_jpg);
		type.set ("assets/_train/cubemap_vitres_ny.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_vitres_nz.jpg", __ASSET__assets__train_cubemap_vitres_nz_jpg);
		type.set ("assets/_train/cubemap_vitres_nz.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_vitres_px.jpg", __ASSET__assets__train_cubemap_vitres_px_jpg);
		type.set ("assets/_train/cubemap_vitres_px.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_vitres_py.jpg", __ASSET__assets__train_cubemap_vitres_py_jpg);
		type.set ("assets/_train/cubemap_vitres_py.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cubemap_vitres_pz.jpg", __ASSET__assets__train_cubemap_vitres_pz_jpg);
		type.set ("assets/_train/cubemap_vitres_pz.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cuir.jpg", __ASSET__assets__train_cuir_jpg);
		type.set ("assets/_train/cuir.jpg", AssetType.IMAGE);
		className.set ("assets/_train/cuir_n.jpg", __ASSET__assets__train_cuir_n_jpg);
		type.set ("assets/_train/cuir_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/debug.txt", __ASSET__assets__train_debug_txt);
		type.set ("assets/_train/debug.txt", AssetType.TEXT);
		className.set ("assets/_train/disneyland_paris.jpg", __ASSET__assets__train_disneyland_paris_jpg);
		type.set ("assets/_train/disneyland_paris.jpg", AssetType.IMAGE);
		className.set ("assets/_train/flechage.jpg", __ASSET__assets__train_flechage_jpg);
		type.set ("assets/_train/flechage.jpg", AssetType.IMAGE);
		className.set ("assets/_train/flechage.png", __ASSET__assets__train_flechage_png);
		type.set ("assets/_train/flechage.png", AssetType.IMAGE);
		className.set ("assets/_train/flechage2.jpg", __ASSET__assets__train_flechage2_jpg);
		type.set ("assets/_train/flechage2.jpg", AssetType.IMAGE);
		className.set ("assets/_train/flechage2.png", __ASSET__assets__train_flechage2_png);
		type.set ("assets/_train/flechage2.png", AssetType.IMAGE);
		className.set ("assets/_train/grass.jpg", __ASSET__assets__train_grass_jpg);
		type.set ("assets/_train/grass.jpg", AssetType.IMAGE);
		className.set ("assets/_train/grass.png", __ASSET__assets__train_grass_png);
		type.set ("assets/_train/grass.png", AssetType.IMAGE);
		className.set ("assets/_train/grillage.jpg", __ASSET__assets__train_grillage_jpg);
		type.set ("assets/_train/grillage.jpg", AssetType.IMAGE);
		className.set ("assets/_train/grillage.png", __ASSET__assets__train_grillage_png);
		type.set ("assets/_train/grillage.png", AssetType.IMAGE);
		className.set ("assets/_train/lens2.png", __ASSET__assets__train_lens2_png);
		type.set ("assets/_train/lens2.png", AssetType.IMAGE);
		className.set ("assets/_train/lens3.png", __ASSET__assets__train_lens3_png);
		type.set ("assets/_train/lens3.png", AssetType.IMAGE);
		className.set ("assets/_train/lens4.png", __ASSET__assets__train_lens4_png);
		type.set ("assets/_train/lens4.png", AssetType.IMAGE);
		className.set ("assets/_train/lens5.png", __ASSET__assets__train_lens5_png);
		type.set ("assets/_train/lens5.png", AssetType.IMAGE);
		className.set ("assets/_train/lens6.png", __ASSET__assets__train_lens6_png);
		type.set ("assets/_train/lens6.png", AssetType.IMAGE);
		className.set ("assets/_train/metal_rouille.jpg", __ASSET__assets__train_metal_rouille_jpg);
		type.set ("assets/_train/metal_rouille.jpg", AssetType.IMAGE);
		className.set ("assets/_train/metal_rouille_n.jpg", __ASSET__assets__train_metal_rouille_n_jpg);
		type.set ("assets/_train/metal_rouille_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/metal_tache.jpg", __ASSET__assets__train_metal_tache_jpg);
		type.set ("assets/_train/metal_tache.jpg", AssetType.IMAGE);
		className.set ("assets/_train/metal_tache_n.jpg", __ASSET__assets__train_metal_tache_n_jpg);
		type.set ("assets/_train/metal_tache_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/murs_wood.jpg", __ASSET__assets__train_murs_wood_jpg);
		type.set ("assets/_train/murs_wood.jpg", AssetType.IMAGE);
		className.set ("assets/_train/murs_wood_n.jpg", __ASSET__assets__train_murs_wood_n_jpg);
		type.set ("assets/_train/murs_wood_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/no_signal.jpg", __ASSET__assets__train_no_signal_jpg);
		type.set ("assets/_train/no_signal.jpg", AssetType.IMAGE);
		className.set ("assets/_train/paille_alpha.jpg", __ASSET__assets__train_paille_alpha_jpg);
		type.set ("assets/_train/paille_alpha.jpg", AssetType.IMAGE);
		className.set ("assets/_train/paille_alpha.png", __ASSET__assets__train_paille_alpha_png);
		type.set ("assets/_train/paille_alpha.png", AssetType.IMAGE);
		className.set ("assets/_train/pile_bois.jpg", __ASSET__assets__train_pile_bois_jpg);
		type.set ("assets/_train/pile_bois.jpg", AssetType.IMAGE);
		className.set ("assets/_train/pile_bois_n.jpg", __ASSET__assets__train_pile_bois_n_jpg);
		type.set ("assets/_train/pile_bois_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/planches.jpg", __ASSET__assets__train_planches_jpg);
		type.set ("assets/_train/planches.jpg", AssetType.IMAGE);
		className.set ("assets/_train/planches_n.jpg", __ASSET__assets__train_planches_n_jpg);
		type.set ("assets/_train/planches_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/poteaux.jpg", __ASSET__assets__train_poteaux_jpg);
		type.set ("assets/_train/poteaux.jpg", AssetType.IMAGE);
		className.set ("assets/_train/poteaux_n.jpg", __ASSET__assets__train_poteaux_n_jpg);
		type.set ("assets/_train/poteaux_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/poubelle.jpg", __ASSET__assets__train_poubelle_jpg);
		type.set ("assets/_train/poubelle.jpg", AssetType.IMAGE);
		className.set ("assets/_train/poubelle_n.jpg", __ASSET__assets__train_poubelle_n_jpg);
		type.set ("assets/_train/poubelle_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/rochers_big.jpg", __ASSET__assets__train_rochers_big_jpg);
		type.set ("assets/_train/rochers_big.jpg", AssetType.IMAGE);
		className.set ("assets/_train/rochers_big_n.jpg", __ASSET__assets__train_rochers_big_n_jpg);
		type.set ("assets/_train/rochers_big_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/rock_tunnel.jpg", __ASSET__assets__train_rock_tunnel_jpg);
		type.set ("assets/_train/rock_tunnel.jpg", AssetType.IMAGE);
		className.set ("assets/_train/rock_tunnel_n.jpg", __ASSET__assets__train_rock_tunnel_n_jpg);
		type.set ("assets/_train/rock_tunnel_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/sacs_sable.jpg", __ASSET__assets__train_sacs_sable_jpg);
		type.set ("assets/_train/sacs_sable.jpg", AssetType.IMAGE);
		className.set ("assets/_train/sacs_sable_n.jpg", __ASSET__assets__train_sacs_sable_n_jpg);
		type.set ("assets/_train/sacs_sable_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/sapin_leaves.jpg", __ASSET__assets__train_sapin_leaves_jpg);
		type.set ("assets/_train/sapin_leaves.jpg", AssetType.IMAGE);
		className.set ("assets/_train/sapin_leaves.png", __ASSET__assets__train_sapin_leaves_png);
		type.set ("assets/_train/sapin_leaves.png", AssetType.IMAGE);
		className.set ("assets/_train/sapin_trunk_up.jpg", __ASSET__assets__train_sapin_trunk_up_jpg);
		type.set ("assets/_train/sapin_trunk_up.jpg", AssetType.IMAGE);
		className.set ("assets/_train/sapin_trunk_up_n.jpg", __ASSET__assets__train_sapin_trunk_up_n_jpg);
		type.set ("assets/_train/sapin_trunk_up_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/skydome.jpg", __ASSET__assets__train_skydome_jpg);
		type.set ("assets/_train/skydome.jpg", AssetType.IMAGE);
		className.set ("assets/_train/smoke.png", __ASSET__assets__train_smoke_png);
		type.set ("assets/_train/smoke.png", AssetType.IMAGE);
		className.set ("assets/_train/sol_metal.jpg", __ASSET__assets__train_sol_metal_jpg);
		type.set ("assets/_train/sol_metal.jpg", AssetType.IMAGE);
		className.set ("assets/_train/sol_metal_n.jpg", __ASSET__assets__train_sol_metal_n_jpg);
		type.set ("assets/_train/sol_metal_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain1.jpg", __ASSET__assets__train_terrain1_jpg);
		type.set ("assets/_train/terrain1.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain1_lm.jpg", __ASSET__assets__train_terrain1_lm_jpg);
		type.set ("assets/_train/terrain1_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain1_n.jpg", __ASSET__assets__train_terrain1_n_jpg);
		type.set ("assets/_train/terrain1_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain2.jpg", __ASSET__assets__train_terrain2_jpg);
		type.set ("assets/_train/terrain2.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain2_lm.jpg", __ASSET__assets__train_terrain2_lm_jpg);
		type.set ("assets/_train/terrain2_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain2_n.jpg", __ASSET__assets__train_terrain2_n_jpg);
		type.set ("assets/_train/terrain2_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain3.jpg", __ASSET__assets__train_terrain3_jpg);
		type.set ("assets/_train/terrain3.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain3_lm.jpg", __ASSET__assets__train_terrain3_lm_jpg);
		type.set ("assets/_train/terrain3_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain3_n.jpg", __ASSET__assets__train_terrain3_n_jpg);
		type.set ("assets/_train/terrain3_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain4.jpg", __ASSET__assets__train_terrain4_jpg);
		type.set ("assets/_train/terrain4.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain4_lm.jpg", __ASSET__assets__train_terrain4_lm_jpg);
		type.set ("assets/_train/terrain4_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain4_n.jpg", __ASSET__assets__train_terrain4_n_jpg);
		type.set ("assets/_train/terrain4_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain_clotures_lm.jpg", __ASSET__assets__train_terrain_clotures_lm_jpg);
		type.set ("assets/_train/terrain_clotures_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain_escalier_lm.jpg", __ASSET__assets__train_terrain_escalier_lm_jpg);
		type.set ("assets/_train/terrain_escalier_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/terrain_tunnel_lm.jpg", __ASSET__assets__train_terrain_tunnel_lm_jpg);
		type.set ("assets/_train/terrain_tunnel_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/toit_bois.jpg", __ASSET__assets__train_toit_bois_jpg);
		type.set ("assets/_train/toit_bois.jpg", AssetType.IMAGE);
		className.set ("assets/_train/toit_bois_n.jpg", __ASSET__assets__train_toit_bois_n_jpg);
		type.set ("assets/_train/toit_bois_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/tole.jpg", __ASSET__assets__train_tole_jpg);
		type.set ("assets/_train/tole.jpg", AssetType.IMAGE);
		className.set ("assets/_train/tole_n.jpg", __ASSET__assets__train_tole_n_jpg);
		type.set ("assets/_train/tole_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/tonneau.jpg", __ASSET__assets__train_tonneau_jpg);
		type.set ("assets/_train/tonneau.jpg", AssetType.IMAGE);
		className.set ("assets/_train/tonneau_n.jpg", __ASSET__assets__train_tonneau_n_jpg);
		type.set ("assets/_train/tonneau_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/tracteur.jpg", __ASSET__assets__train_tracteur_jpg);
		type.set ("assets/_train/tracteur.jpg", AssetType.IMAGE);
		className.set ("assets/_train/tracteur_n.jpg", __ASSET__assets__train_tracteur_n_jpg);
		type.set ("assets/_train/tracteur_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/Train.babylon", __ASSET__assets__train_train_babylon);
		type.set ("assets/_train/Train.babylon", AssetType.TEXT);
		className.set ("assets/_train/Train.babylon.manifest", __ASSET__assets__train_train_babylon_manifest);
		type.set ("assets/_train/Train.babylon.manifest", AssetType.TEXT);
		className.set ("assets/_train/Train.barrieres_bois.babylonmeshdata", __ASSET__assets__train_train_barrieres_bois_babylonmeshdata);
		type.set ("assets/_train/Train.barrieres_bois.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.bosquets_herbe.babylonmeshdata", __ASSET__assets__train_train_bosquets_herbe_babylonmeshdata);
		type.set ("assets/_train/Train.bosquets_herbe.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.bottes_paille.babylonmeshdata", __ASSET__assets__train_train_bottes_paille_babylonmeshdata);
		type.set ("assets/_train/Train.bottes_paille.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.bt_marche_arret_av_arr.babylonmeshdata", __ASSET__assets__train_train_bt_marche_arret_av_arr_babylonmeshdata);
		type.set ("assets/_train/Train.bt_marche_arret_av_arr.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.bt_marche_arret_mode_OK.babylonmeshdata", __ASSET__assets__train_train_bt_marche_arret_mode_ok_babylonmeshdata);
		type.set ("assets/_train/Train.bt_marche_arret_mode_OK.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.CAM_CONSOLE.Target.babylonmeshdata", __ASSET__assets__train_train_cam_console_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_CONSOLE.Target.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.CAM_FREE.Target.babylonmeshdata", __ASSET__assets__train_train_cam_free_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_FREE.Target.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.CAM_FREE_STEREO.Target.babylonmeshdata", __ASSET__assets__train_train_cam_free_stereo_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_FREE_STEREO.Target.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.CAM_ROT.Target.babylonmeshdata", __ASSET__assets__train_train_cam_rot_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_ROT.Target.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.CAM_TRAIIN_AVANT.Target.babylonmeshdata", __ASSET__assets__train_train_cam_traiin_avant_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_TRAIIN_AVANT.Target.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.CAM_TRAIN.Target.babylonmeshdata", __ASSET__assets__train_train_cam_train_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_TRAIN.Target.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.CAM_WALK.Target.babylonmeshdata", __ASSET__assets__train_train_cam_walk_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_WALK.Target.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.champs_ble.babylonmeshdata", __ASSET__assets__train_train_champs_ble_babylonmeshdata);
		type.set ("assets/_train/Train.champs_ble.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chariot.babylonmeshdata", __ASSET__assets__train_train_chariot_babylonmeshdata);
		type.set ("assets/_train/Train.chariot.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_gare.babylonmeshdata", __ASSET__assets__train_train_chemin_gare_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_gare.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_in.babylonmeshdata", __ASSET__assets__train_train_chemin_in_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_in.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_lum_part1_cercle.babylonmeshdata", __ASSET__assets__train_train_chemin_lum_part1_cercle_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_lum_part1_cercle.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_lum_part1_fleche.babylonmeshdata", __ASSET__assets__train_train_chemin_lum_part1_fleche_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_lum_part1_fleche.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_lum_part2_cercle.babylonmeshdata", __ASSET__assets__train_train_chemin_lum_part2_cercle_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_lum_part2_cercle.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_lum_part2_fleche.babylonmeshdata", __ASSET__assets__train_train_chemin_lum_part2_fleche_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_lum_part2_fleche.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_out.babylonmeshdata", __ASSET__assets__train_train_chemin_out_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_out.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_zone00.babylonmeshdata", __ASSET__assets__train_train_chemin_zone00_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone00.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_zone01.babylonmeshdata", __ASSET__assets__train_train_chemin_zone01_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone01.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_zone02.babylonmeshdata", __ASSET__assets__train_train_chemin_zone02_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone02.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_zone03.babylonmeshdata", __ASSET__assets__train_train_chemin_zone03_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone03.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_zone04.babylonmeshdata", __ASSET__assets__train_train_chemin_zone04_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone04.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_zone05.babylonmeshdata", __ASSET__assets__train_train_chemin_zone05_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone05.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_zone06.babylonmeshdata", __ASSET__assets__train_train_chemin_zone06_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone06.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.chemin_zone07.babylonmeshdata", __ASSET__assets__train_train_chemin_zone07_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone07.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.console_bt_urgence02.babylonmeshdata", __ASSET__assets__train_train_console_bt_urgence02_babylonmeshdata);
		type.set ("assets/_train/Train.console_bt_urgence02.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.console_bts.babylonmeshdata", __ASSET__assets__train_train_console_bts_babylonmeshdata);
		type.set ("assets/_train/Train.console_bts.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.console_bts_verre.babylonmeshdata", __ASSET__assets__train_train_console_bts_verre_babylonmeshdata);
		type.set ("assets/_train/Train.console_bts_verre.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.dummy_cam_target_train.babylonmeshdata", __ASSET__assets__train_train_dummy_cam_target_train_babylonmeshdata);
		type.set ("assets/_train/Train.dummy_cam_target_train.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.dummy_cam_target_train_avant.babylonmeshdata", __ASSET__assets__train_train_dummy_cam_target_train_avant_babylonmeshdata);
		type.set ("assets/_train/Train.dummy_cam_target_train_avant.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.dummy_cam_train.babylonmeshdata", __ASSET__assets__train_train_dummy_cam_train_babylonmeshdata);
		type.set ("assets/_train/Train.dummy_cam_train.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.dummy_cam_train_avant.babylonmeshdata", __ASSET__assets__train_train_dummy_cam_train_avant_babylonmeshdata);
		type.set ("assets/_train/Train.dummy_cam_train_avant.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.ecran1.babylonmeshdata", __ASSET__assets__train_train_ecran1_babylonmeshdata);
		type.set ("assets/_train/Train.ecran1.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.ecran1_led.babylonmeshdata", __ASSET__assets__train_train_ecran1_led_babylonmeshdata);
		type.set ("assets/_train/Train.ecran1_led.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.ecran2.babylonmeshdata", __ASSET__assets__train_train_ecran2_babylonmeshdata);
		type.set ("assets/_train/Train.ecran2.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.ecran2_led.babylonmeshdata", __ASSET__assets__train_train_ecran2_led_babylonmeshdata);
		type.set ("assets/_train/Train.ecran2_led.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.ecran3.babylonmeshdata", __ASSET__assets__train_train_ecran3_babylonmeshdata);
		type.set ("assets/_train/Train.ecran3.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.ecran3_led.babylonmeshdata", __ASSET__assets__train_train_ecran3_led_babylonmeshdata);
		type.set ("assets/_train/Train.ecran3_led.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.ecran4_led.babylonmeshdata", __ASSET__assets__train_train_ecran4_led_babylonmeshdata);
		type.set ("assets/_train/Train.ecran4_led.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.ecran5_led.babylonmeshdata", __ASSET__assets__train_train_ecran5_led_babylonmeshdata);
		type.set ("assets/_train/Train.ecran5_led.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.ecrans_off.babylonmeshdata", __ASSET__assets__train_train_ecrans_off_babylonmeshdata);
		type.set ("assets/_train/Train.ecrans_off.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.ecrans_off2.babylonmeshdata", __ASSET__assets__train_train_ecrans_off2_babylonmeshdata);
		type.set ("assets/_train/Train.ecrans_off2.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.emiter_particules.babylonmeshdata", __ASSET__assets__train_train_emiter_particules_babylonmeshdata);
		type.set ("assets/_train/Train.emiter_particules.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.herbes.babylonmeshdata", __ASSET__assets__train_train_herbes_babylonmeshdata);
		type.set ("assets/_train/Train.herbes.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.incremental.babylon", __ASSET__assets__train_train_incremental_babylon);
		type.set ("assets/_train/Train.incremental.babylon", AssetType.TEXT);
		className.set ("assets/_train/Train.incremental.babylon.manifest", __ASSET__assets__train_train_incremental_babylon_manifest);
		type.set ("assets/_train/Train.incremental.babylon.manifest", AssetType.TEXT);
		className.set ("assets/_train/Train.pencarte.babylonmeshdata", __ASSET__assets__train_train_pencarte_babylonmeshdata);
		type.set ("assets/_train/Train.pencarte.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.pencarte_contour.babylonmeshdata", __ASSET__assets__train_train_pencarte_contour_babylonmeshdata);
		type.set ("assets/_train/Train.pencarte_contour.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.piles_bois.babylonmeshdata", __ASSET__assets__train_train_piles_bois_babylonmeshdata);
		type.set ("assets/_train/Train.piles_bois.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.planches.babylonmeshdata", __ASSET__assets__train_train_planches_babylonmeshdata);
		type.set ("assets/_train/Train.planches.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.portail_poteaux.babylonmeshdata", __ASSET__assets__train_train_portail_poteaux_babylonmeshdata);
		type.set ("assets/_train/Train.portail_poteaux.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.poteaux.babylonmeshdata", __ASSET__assets__train_train_poteaux_babylonmeshdata);
		type.set ("assets/_train/Train.poteaux.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.poteaux_cable.babylonmeshdata", __ASSET__assets__train_train_poteaux_cable_babylonmeshdata);
		type.set ("assets/_train/Train.poteaux_cable.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.poubelles.babylonmeshdata", __ASSET__assets__train_train_poubelles_babylonmeshdata);
		type.set ("assets/_train/Train.poubelles.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.roues_chariot.babylonmeshdata", __ASSET__assets__train_train_roues_chariot_babylonmeshdata);
		type.set ("assets/_train/Train.roues_chariot.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.sacs_sable.babylonmeshdata", __ASSET__assets__train_train_sacs_sable_babylonmeshdata);
		type.set ("assets/_train/Train.sacs_sable.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.sapins_leaf_high.babylonmeshdata", __ASSET__assets__train_train_sapins_leaf_high_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_leaf_high.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.sapins_leaf_low.babylonmeshdata", __ASSET__assets__train_train_sapins_leaf_low_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_leaf_low.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.sapins_trunk_high_0.babylonmeshdata", __ASSET__assets__train_train_sapins_trunk_high_0_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_trunk_high_0.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.sapins_trunk_high_1.babylonmeshdata", __ASSET__assets__train_train_sapins_trunk_high_1_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_trunk_high_1.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.sapins_trunk_high_2.babylonmeshdata", __ASSET__assets__train_train_sapins_trunk_high_2_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_trunk_high_2.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.sapins_trunk_low.babylonmeshdata", __ASSET__assets__train_train_sapins_trunk_low_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_trunk_low.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.skydome.babylonmeshdata", __ASSET__assets__train_train_skydome_babylonmeshdata);
		type.set ("assets/_train/Train.skydome.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.terrain_escalier.babylonmeshdata", __ASSET__assets__train_train_terrain_escalier_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_escalier.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.terrain_lampadaires.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.terrain_lampadaires_lampes.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_lampes_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires_lampes.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.terrain_lampadaires_rouille_0.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_rouille_0_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires_rouille_0.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.terrain_lampadaires_rouille_1.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_rouille_1_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires_rouille_1.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.terrain_lampadaires_rouille_2.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_rouille_2_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires_rouille_2.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.terrain_lampadaires_verre.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_verre_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires_verre.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.terrain_poteaux.babylonmeshdata", __ASSET__assets__train_train_terrain_poteaux_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_poteaux.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.terrain_rails.babylonmeshdata", __ASSET__assets__train_train_terrain_rails_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_rails.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.tonneaux.babylonmeshdata", __ASSET__assets__train_train_tonneaux_babylonmeshdata);
		type.set ("assets/_train/Train.tonneaux.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.tracteur.babylonmeshdata", __ASSET__assets__train_train_tracteur_babylonmeshdata);
		type.set ("assets/_train/Train.tracteur.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.train_a1.babylonmeshdata", __ASSET__assets__train_train_train_a1_babylonmeshdata);
		type.set ("assets/_train/Train.train_a1.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.train_a2.babylonmeshdata", __ASSET__assets__train_train_train_a2_babylonmeshdata);
		type.set ("assets/_train/Train.train_a2.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.train_a3.babylonmeshdata", __ASSET__assets__train_train_train_a3_babylonmeshdata);
		type.set ("assets/_train/Train.train_a3.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.train_a4.babylonmeshdata", __ASSET__assets__train_train_train_a4_babylonmeshdata);
		type.set ("assets/_train/Train.train_a4.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.train_loco.babylonmeshdata", __ASSET__assets__train_train_train_loco_babylonmeshdata);
		type.set ("assets/_train/Train.train_loco.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.train_wagon09.babylonmeshdata", __ASSET__assets__train_train_train_wagon09_babylonmeshdata);
		type.set ("assets/_train/Train.train_wagon09.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.train_wagon10.babylonmeshdata", __ASSET__assets__train_train_train_wagon10_babylonmeshdata);
		type.set ("assets/_train/Train.train_wagon10.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.train_wagon11.babylonmeshdata", __ASSET__assets__train_train_train_wagon11_babylonmeshdata);
		type.set ("assets/_train/Train.train_wagon11.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/Train.troncs_arbre.babylonmeshdata", __ASSET__assets__train_train_troncs_arbre_babylonmeshdata);
		type.set ("assets/_train/Train.troncs_arbre.babylonmeshdata", AssetType.TEXT);
		className.set ("assets/_train/train_4.jpg", __ASSET__assets__train_train_4_jpg);
		type.set ("assets/_train/train_4.jpg", AssetType.IMAGE);
		className.set ("assets/_train/train_4_n.jpg", __ASSET__assets__train_train_4_n_jpg);
		type.set ("assets/_train/train_4_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/train_cote.jpg", __ASSET__assets__train_train_cote_jpg);
		type.set ("assets/_train/train_cote.jpg", AssetType.IMAGE);
		className.set ("assets/_train/train_cote_n.jpg", __ASSET__assets__train_train_cote_n_jpg);
		type.set ("assets/_train/train_cote_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/train_loco_lm.jpg", __ASSET__assets__train_train_loco_lm_jpg);
		type.set ("assets/_train/train_loco_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/train_wagon_lm.jpg", __ASSET__assets__train_train_wagon_lm_jpg);
		type.set ("assets/_train/train_wagon_lm.jpg", AssetType.IMAGE);
		className.set ("assets/_train/tronc.jpg", __ASSET__assets__train_tronc_jpg);
		type.set ("assets/_train/tronc.jpg", AssetType.IMAGE);
		className.set ("assets/_train/tronc_face.jpg", __ASSET__assets__train_tronc_face_jpg);
		type.set ("assets/_train/tronc_face.jpg", AssetType.IMAGE);
		className.set ("assets/_train/tronc_face_n.jpg", __ASSET__assets__train_tronc_face_n_jpg);
		type.set ("assets/_train/tronc_face_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/tronc_n.jpg", __ASSET__assets__train_tronc_n_jpg);
		type.set ("assets/_train/tronc_n.jpg", AssetType.IMAGE);
		className.set ("assets/_train/verre_lampes.jpg", __ASSET__assets__train_verre_lampes_jpg);
		type.set ("assets/_train/verre_lampes.jpg", AssetType.IMAGE);
		className.set ("assets/_train/water_n.jpg", __ASSET__assets__train_water_n_jpg);
		type.set ("assets/_train/water_n.jpg", AssetType.IMAGE);
		className.set ("assets/font/Aaargh.eot", __ASSET__assets_font_aaargh_eot);
		type.set ("assets/font/Aaargh.eot", AssetType.BINARY);
		className.set ("assets/font/Aaargh.svg", __ASSET__assets_font_aaargh_svg);
		type.set ("assets/font/Aaargh.svg", AssetType.TEXT);
		className.set ("assets/font/Aaargh.ttf", __ASSET__assets_font_aaargh_ttf);
		type.set ("assets/font/Aaargh.ttf", AssetType.FONT);
		className.set ("assets/font/Aaargh.woff", __ASSET__assets_font_aaargh_woff);
		type.set ("assets/font/Aaargh.woff", AssetType.BINARY);
		className.set ("assets/font/OpenSansRegular.eot", __ASSET__assets_font_opensansregular_eot);
		type.set ("assets/font/OpenSansRegular.eot", AssetType.BINARY);
		className.set ("assets/font/OpenSansRegular.svg", __ASSET__assets_font_opensansregular_svg);
		type.set ("assets/font/OpenSansRegular.svg", AssetType.TEXT);
		className.set ("assets/font/OpenSansRegular.ttf", __ASSET__assets_font_opensansregular_ttf);
		type.set ("assets/font/OpenSansRegular.ttf", AssetType.FONT);
		className.set ("assets/font/OpenSansRegular.woff", __ASSET__assets_font_opensansregular_woff);
		type.set ("assets/font/OpenSansRegular.woff", AssetType.BINARY);
		className.set ("assets/font/Tup Wanders Font License.txt", __ASSET__assets_font_tup_wanders_font_license_txt);
		type.set ("assets/font/Tup Wanders Font License.txt", AssetType.TEXT);
		className.set ("assets/img/Flare.png", __ASSET__assets_img_flare_png);
		type.set ("assets/img/Flare.png", AssetType.IMAGE);
		className.set ("assets/img/grass.jpg", __ASSET__assets_img_grass_jpg);
		type.set ("assets/img/grass.jpg", AssetType.IMAGE);
		className.set ("assets/img/lens4.png", __ASSET__assets_img_lens4_png);
		type.set ("assets/img/lens4.png", AssetType.IMAGE);
		className.set ("assets/img/lens5.png", __ASSET__assets_img_lens5_png);
		type.set ("assets/img/lens5.png", AssetType.IMAGE);
		className.set ("assets/img/normalMap.jpg", __ASSET__assets_img_normalmap_jpg);
		type.set ("assets/img/normalMap.jpg", AssetType.IMAGE);
		className.set ("assets/img/refMap.jpg", __ASSET__assets_img_refmap_jpg);
		type.set ("assets/img/refMap.jpg", AssetType.IMAGE);
		className.set ("assets/img/skybox/README.TXT", __ASSET__assets_img_skybox_readme_txt);
		type.set ("assets/img/skybox/README.TXT", AssetType.TEXT);
		className.set ("assets/img/skybox/skybox_nx.jpg", __ASSET__assets_img_skybox_skybox_nx_jpg);
		type.set ("assets/img/skybox/skybox_nx.jpg", AssetType.IMAGE);
		className.set ("assets/img/skybox/skybox_nx.png", __ASSET__assets_img_skybox_skybox_nx_png);
		type.set ("assets/img/skybox/skybox_nx.png", AssetType.IMAGE);
		className.set ("assets/img/skybox/skybox_ny.jpg", __ASSET__assets_img_skybox_skybox_ny_jpg);
		type.set ("assets/img/skybox/skybox_ny.jpg", AssetType.IMAGE);
		className.set ("assets/img/skybox/skybox_ny.png", __ASSET__assets_img_skybox_skybox_ny_png);
		type.set ("assets/img/skybox/skybox_ny.png", AssetType.IMAGE);
		className.set ("assets/img/skybox/skybox_nz.jpg", __ASSET__assets_img_skybox_skybox_nz_jpg);
		type.set ("assets/img/skybox/skybox_nz.jpg", AssetType.IMAGE);
		className.set ("assets/img/skybox/skybox_nz.png", __ASSET__assets_img_skybox_skybox_nz_png);
		type.set ("assets/img/skybox/skybox_nz.png", AssetType.IMAGE);
		className.set ("assets/img/skybox/skybox_px.jpg", __ASSET__assets_img_skybox_skybox_px_jpg);
		type.set ("assets/img/skybox/skybox_px.jpg", AssetType.IMAGE);
		className.set ("assets/img/skybox/skybox_px.png", __ASSET__assets_img_skybox_skybox_px_png);
		type.set ("assets/img/skybox/skybox_px.png", AssetType.IMAGE);
		className.set ("assets/img/skybox/skybox_py.jpg", __ASSET__assets_img_skybox_skybox_py_jpg);
		type.set ("assets/img/skybox/skybox_py.jpg", AssetType.IMAGE);
		className.set ("assets/img/skybox/skybox_py.png", __ASSET__assets_img_skybox_skybox_py_png);
		type.set ("assets/img/skybox/skybox_py.png", AssetType.IMAGE);
		className.set ("assets/img/skybox/skybox_pz.jpg", __ASSET__assets_img_skybox_skybox_pz_jpg);
		type.set ("assets/img/skybox/skybox_pz.jpg", AssetType.IMAGE);
		className.set ("assets/img/skybox/skybox_pz.png", __ASSET__assets_img_skybox_skybox_pz_png);
		type.set ("assets/img/skybox/skybox_pz.png", AssetType.IMAGE);
		className.set ("assets/train/barrieres_bois.jpg", __ASSET__assets_train_barrieres_bois_jpg);
		type.set ("assets/train/barrieres_bois.jpg", AssetType.IMAGE);
		className.set ("assets/train/barrieres_bois_n.jpg", __ASSET__assets_train_barrieres_bois_n_jpg);
		type.set ("assets/train/barrieres_bois_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/bat_console_murs_ext_lm.jpg", __ASSET__assets_train_bat_console_murs_ext_lm_jpg);
		type.set ("assets/train/bat_console_murs_ext_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/bat_console_murs_lm.jpg", __ASSET__assets_train_bat_console_murs_lm_jpg);
		type.set ("assets/train/bat_console_murs_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/bat_lm.jpg", __ASSET__assets_train_bat_lm_jpg);
		type.set ("assets/train/bat_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/bosquet_grass.jpg", __ASSET__assets_train_bosquet_grass_jpg);
		type.set ("assets/train/bosquet_grass.jpg", AssetType.IMAGE);
		className.set ("assets/train/bosquet_grass.png", __ASSET__assets_train_bosquet_grass_png);
		type.set ("assets/train/bosquet_grass.png", AssetType.IMAGE);
		className.set ("assets/train/bottes_paille.jpg", __ASSET__assets_train_bottes_paille_jpg);
		type.set ("assets/train/bottes_paille.jpg", AssetType.IMAGE);
		className.set ("assets/train/bottes_paille_face.jpg", __ASSET__assets_train_bottes_paille_face_jpg);
		type.set ("assets/train/bottes_paille_face.jpg", AssetType.IMAGE);
		className.set ("assets/train/champ_ble.jpg", __ASSET__assets_train_champ_ble_jpg);
		type.set ("assets/train/champ_ble.jpg", AssetType.IMAGE);
		className.set ("assets/train/champ_ble.png", __ASSET__assets_train_champ_ble_png);
		type.set ("assets/train/champ_ble.png", AssetType.IMAGE);
		className.set ("assets/train/chariot_planche.jpg", __ASSET__assets_train_chariot_planche_jpg);
		type.set ("assets/train/chariot_planche.jpg", AssetType.IMAGE);
		className.set ("assets/train/chariot_planche_n.jpg", __ASSET__assets_train_chariot_planche_n_jpg);
		type.set ("assets/train/chariot_planche_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/chariot_roue.jpg", __ASSET__assets_train_chariot_roue_jpg);
		type.set ("assets/train/chariot_roue.jpg", AssetType.IMAGE);
		className.set ("assets/train/chariot_roue_n.jpg", __ASSET__assets_train_chariot_roue_n_jpg);
		type.set ("assets/train/chariot_roue_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/console.jpg", __ASSET__assets_train_console_jpg);
		type.set ("assets/train/console.jpg", AssetType.IMAGE);
		className.set ("assets/train/console_n.jpg", __ASSET__assets_train_console_n_jpg);
		type.set ("assets/train/console_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap5_nx.jpg", __ASSET__assets_train_cubemap5_nx_jpg);
		type.set ("assets/train/cubemap5_nx.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap5_ny.jpg", __ASSET__assets_train_cubemap5_ny_jpg);
		type.set ("assets/train/cubemap5_ny.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap5_nz.jpg", __ASSET__assets_train_cubemap5_nz_jpg);
		type.set ("assets/train/cubemap5_nz.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap5_px.jpg", __ASSET__assets_train_cubemap5_px_jpg);
		type.set ("assets/train/cubemap5_px.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap5_py.jpg", __ASSET__assets_train_cubemap5_py_jpg);
		type.set ("assets/train/cubemap5_py.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap5_pz.jpg", __ASSET__assets_train_cubemap5_pz_jpg);
		type.set ("assets/train/cubemap5_pz.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_nx.jpg", __ASSET__assets_train_cubemap_nx_jpg);
		type.set ("assets/train/cubemap_nx.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_ny.jpg", __ASSET__assets_train_cubemap_ny_jpg);
		type.set ("assets/train/cubemap_ny.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_nz.jpg", __ASSET__assets_train_cubemap_nz_jpg);
		type.set ("assets/train/cubemap_nz.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_px.jpg", __ASSET__assets_train_cubemap_px_jpg);
		type.set ("assets/train/cubemap_px.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_py.jpg", __ASSET__assets_train_cubemap_py_jpg);
		type.set ("assets/train/cubemap_py.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_pz.jpg", __ASSET__assets_train_cubemap_pz_jpg);
		type.set ("assets/train/cubemap_pz.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_vitres_nx.jpg", __ASSET__assets_train_cubemap_vitres_nx_jpg);
		type.set ("assets/train/cubemap_vitres_nx.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_vitres_ny.jpg", __ASSET__assets_train_cubemap_vitres_ny_jpg);
		type.set ("assets/train/cubemap_vitres_ny.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_vitres_nz.jpg", __ASSET__assets_train_cubemap_vitres_nz_jpg);
		type.set ("assets/train/cubemap_vitres_nz.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_vitres_px.jpg", __ASSET__assets_train_cubemap_vitres_px_jpg);
		type.set ("assets/train/cubemap_vitres_px.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_vitres_py.jpg", __ASSET__assets_train_cubemap_vitres_py_jpg);
		type.set ("assets/train/cubemap_vitres_py.jpg", AssetType.IMAGE);
		className.set ("assets/train/cubemap_vitres_pz.jpg", __ASSET__assets_train_cubemap_vitres_pz_jpg);
		type.set ("assets/train/cubemap_vitres_pz.jpg", AssetType.IMAGE);
		className.set ("assets/train/cuir.jpg", __ASSET__assets_train_cuir_jpg);
		type.set ("assets/train/cuir.jpg", AssetType.IMAGE);
		className.set ("assets/train/cuir_n.jpg", __ASSET__assets_train_cuir_n_jpg);
		type.set ("assets/train/cuir_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/debug.txt", __ASSET__assets_train_debug_txt);
		type.set ("assets/train/debug.txt", AssetType.TEXT);
		className.set ("assets/train/disneyland_paris.jpg", __ASSET__assets_train_disneyland_paris_jpg);
		type.set ("assets/train/disneyland_paris.jpg", AssetType.IMAGE);
		className.set ("assets/train/flechage.jpg", __ASSET__assets_train_flechage_jpg);
		type.set ("assets/train/flechage.jpg", AssetType.IMAGE);
		className.set ("assets/train/flechage.png", __ASSET__assets_train_flechage_png);
		type.set ("assets/train/flechage.png", AssetType.IMAGE);
		className.set ("assets/train/flechage2.jpg", __ASSET__assets_train_flechage2_jpg);
		type.set ("assets/train/flechage2.jpg", AssetType.IMAGE);
		className.set ("assets/train/flechage2.png", __ASSET__assets_train_flechage2_png);
		type.set ("assets/train/flechage2.png", AssetType.IMAGE);
		className.set ("assets/train/grass.jpg", __ASSET__assets_train_grass_jpg);
		type.set ("assets/train/grass.jpg", AssetType.IMAGE);
		className.set ("assets/train/grass.png", __ASSET__assets_train_grass_png);
		type.set ("assets/train/grass.png", AssetType.IMAGE);
		className.set ("assets/train/grillage.jpg", __ASSET__assets_train_grillage_jpg);
		type.set ("assets/train/grillage.jpg", AssetType.IMAGE);
		className.set ("assets/train/grillage.png", __ASSET__assets_train_grillage_png);
		type.set ("assets/train/grillage.png", AssetType.IMAGE);
		className.set ("assets/train/lens2.png", __ASSET__assets_train_lens2_png);
		type.set ("assets/train/lens2.png", AssetType.IMAGE);
		className.set ("assets/train/lens3.png", __ASSET__assets_train_lens3_png);
		type.set ("assets/train/lens3.png", AssetType.IMAGE);
		className.set ("assets/train/lens4.png", __ASSET__assets_train_lens4_png);
		type.set ("assets/train/lens4.png", AssetType.IMAGE);
		className.set ("assets/train/lens5.png", __ASSET__assets_train_lens5_png);
		type.set ("assets/train/lens5.png", AssetType.IMAGE);
		className.set ("assets/train/lens6.png", __ASSET__assets_train_lens6_png);
		type.set ("assets/train/lens6.png", AssetType.IMAGE);
		className.set ("assets/train/metal_rouille.jpg", __ASSET__assets_train_metal_rouille_jpg);
		type.set ("assets/train/metal_rouille.jpg", AssetType.IMAGE);
		className.set ("assets/train/metal_rouille_n.jpg", __ASSET__assets_train_metal_rouille_n_jpg);
		type.set ("assets/train/metal_rouille_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/metal_tache.jpg", __ASSET__assets_train_metal_tache_jpg);
		type.set ("assets/train/metal_tache.jpg", AssetType.IMAGE);
		className.set ("assets/train/metal_tache_n.jpg", __ASSET__assets_train_metal_tache_n_jpg);
		type.set ("assets/train/metal_tache_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/murs_wood.jpg", __ASSET__assets_train_murs_wood_jpg);
		type.set ("assets/train/murs_wood.jpg", AssetType.IMAGE);
		className.set ("assets/train/murs_wood_n.jpg", __ASSET__assets_train_murs_wood_n_jpg);
		type.set ("assets/train/murs_wood_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/no_signal.jpg", __ASSET__assets_train_no_signal_jpg);
		type.set ("assets/train/no_signal.jpg", AssetType.IMAGE);
		className.set ("assets/train/paille_alpha.jpg", __ASSET__assets_train_paille_alpha_jpg);
		type.set ("assets/train/paille_alpha.jpg", AssetType.IMAGE);
		className.set ("assets/train/paille_alpha.png", __ASSET__assets_train_paille_alpha_png);
		type.set ("assets/train/paille_alpha.png", AssetType.IMAGE);
		className.set ("assets/train/pile_bois.jpg", __ASSET__assets_train_pile_bois_jpg);
		type.set ("assets/train/pile_bois.jpg", AssetType.IMAGE);
		className.set ("assets/train/pile_bois_n.jpg", __ASSET__assets_train_pile_bois_n_jpg);
		type.set ("assets/train/pile_bois_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/planches.jpg", __ASSET__assets_train_planches_jpg);
		type.set ("assets/train/planches.jpg", AssetType.IMAGE);
		className.set ("assets/train/planches_n.jpg", __ASSET__assets_train_planches_n_jpg);
		type.set ("assets/train/planches_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/poteaux.jpg", __ASSET__assets_train_poteaux_jpg);
		type.set ("assets/train/poteaux.jpg", AssetType.IMAGE);
		className.set ("assets/train/poteaux_n.jpg", __ASSET__assets_train_poteaux_n_jpg);
		type.set ("assets/train/poteaux_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/poubelle.jpg", __ASSET__assets_train_poubelle_jpg);
		type.set ("assets/train/poubelle.jpg", AssetType.IMAGE);
		className.set ("assets/train/poubelle_n.jpg", __ASSET__assets_train_poubelle_n_jpg);
		type.set ("assets/train/poubelle_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/rochers_big.jpg", __ASSET__assets_train_rochers_big_jpg);
		type.set ("assets/train/rochers_big.jpg", AssetType.IMAGE);
		className.set ("assets/train/rochers_big_n.jpg", __ASSET__assets_train_rochers_big_n_jpg);
		type.set ("assets/train/rochers_big_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/rock_tunnel.jpg", __ASSET__assets_train_rock_tunnel_jpg);
		type.set ("assets/train/rock_tunnel.jpg", AssetType.IMAGE);
		className.set ("assets/train/rock_tunnel_n.jpg", __ASSET__assets_train_rock_tunnel_n_jpg);
		type.set ("assets/train/rock_tunnel_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/sacs_sable.jpg", __ASSET__assets_train_sacs_sable_jpg);
		type.set ("assets/train/sacs_sable.jpg", AssetType.IMAGE);
		className.set ("assets/train/sacs_sable_n.jpg", __ASSET__assets_train_sacs_sable_n_jpg);
		type.set ("assets/train/sacs_sable_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/sapin_leaves.jpg", __ASSET__assets_train_sapin_leaves_jpg);
		type.set ("assets/train/sapin_leaves.jpg", AssetType.IMAGE);
		className.set ("assets/train/sapin_leaves.png", __ASSET__assets_train_sapin_leaves_png);
		type.set ("assets/train/sapin_leaves.png", AssetType.IMAGE);
		className.set ("assets/train/sapin_trunk_up.jpg", __ASSET__assets_train_sapin_trunk_up_jpg);
		type.set ("assets/train/sapin_trunk_up.jpg", AssetType.IMAGE);
		className.set ("assets/train/sapin_trunk_up_n.jpg", __ASSET__assets_train_sapin_trunk_up_n_jpg);
		type.set ("assets/train/sapin_trunk_up_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/skydome.jpg", __ASSET__assets_train_skydome_jpg);
		type.set ("assets/train/skydome.jpg", AssetType.IMAGE);
		className.set ("assets/train/smoke.png", __ASSET__assets_train_smoke_png);
		type.set ("assets/train/smoke.png", AssetType.IMAGE);
		className.set ("assets/train/sol_metal.jpg", __ASSET__assets_train_sol_metal_jpg);
		type.set ("assets/train/sol_metal.jpg", AssetType.IMAGE);
		className.set ("assets/train/sol_metal_n.jpg", __ASSET__assets_train_sol_metal_n_jpg);
		type.set ("assets/train/sol_metal_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain1.jpg", __ASSET__assets_train_terrain1_jpg);
		type.set ("assets/train/terrain1.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain1_lm.jpg", __ASSET__assets_train_terrain1_lm_jpg);
		type.set ("assets/train/terrain1_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain1_n.jpg", __ASSET__assets_train_terrain1_n_jpg);
		type.set ("assets/train/terrain1_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain2.jpg", __ASSET__assets_train_terrain2_jpg);
		type.set ("assets/train/terrain2.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain2_lm.jpg", __ASSET__assets_train_terrain2_lm_jpg);
		type.set ("assets/train/terrain2_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain2_n.jpg", __ASSET__assets_train_terrain2_n_jpg);
		type.set ("assets/train/terrain2_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain3.jpg", __ASSET__assets_train_terrain3_jpg);
		type.set ("assets/train/terrain3.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain3_lm.jpg", __ASSET__assets_train_terrain3_lm_jpg);
		type.set ("assets/train/terrain3_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain3_n.jpg", __ASSET__assets_train_terrain3_n_jpg);
		type.set ("assets/train/terrain3_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain4.jpg", __ASSET__assets_train_terrain4_jpg);
		type.set ("assets/train/terrain4.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain4_lm.jpg", __ASSET__assets_train_terrain4_lm_jpg);
		type.set ("assets/train/terrain4_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain4_n.jpg", __ASSET__assets_train_terrain4_n_jpg);
		type.set ("assets/train/terrain4_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain_clotures_lm.jpg", __ASSET__assets_train_terrain_clotures_lm_jpg);
		type.set ("assets/train/terrain_clotures_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain_escalier_lm.jpg", __ASSET__assets_train_terrain_escalier_lm_jpg);
		type.set ("assets/train/terrain_escalier_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/terrain_tunnel_lm.jpg", __ASSET__assets_train_terrain_tunnel_lm_jpg);
		type.set ("assets/train/terrain_tunnel_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/toit_bois.jpg", __ASSET__assets_train_toit_bois_jpg);
		type.set ("assets/train/toit_bois.jpg", AssetType.IMAGE);
		className.set ("assets/train/toit_bois_n.jpg", __ASSET__assets_train_toit_bois_n_jpg);
		type.set ("assets/train/toit_bois_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/tole.jpg", __ASSET__assets_train_tole_jpg);
		type.set ("assets/train/tole.jpg", AssetType.IMAGE);
		className.set ("assets/train/tole_n.jpg", __ASSET__assets_train_tole_n_jpg);
		type.set ("assets/train/tole_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/tonneau.jpg", __ASSET__assets_train_tonneau_jpg);
		type.set ("assets/train/tonneau.jpg", AssetType.IMAGE);
		className.set ("assets/train/tonneau_n.jpg", __ASSET__assets_train_tonneau_n_jpg);
		type.set ("assets/train/tonneau_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/tracteur.jpg", __ASSET__assets_train_tracteur_jpg);
		type.set ("assets/train/tracteur.jpg", AssetType.IMAGE);
		className.set ("assets/train/tracteur_n.jpg", __ASSET__assets_train_tracteur_n_jpg);
		type.set ("assets/train/tracteur_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/Train.babylon", __ASSET__assets_train_train_babylon);
		type.set ("assets/train/Train.babylon", AssetType.TEXT);
		className.set ("assets/train/Train.babylon.manifest", __ASSET__assets_train_train_babylon_manifest);
		type.set ("assets/train/Train.babylon.manifest", AssetType.TEXT);
		className.set ("assets/train/train_4.jpg", __ASSET__assets_train_train_4_jpg);
		type.set ("assets/train/train_4.jpg", AssetType.IMAGE);
		className.set ("assets/train/train_4_n.jpg", __ASSET__assets_train_train_4_n_jpg);
		type.set ("assets/train/train_4_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/train_cote.jpg", __ASSET__assets_train_train_cote_jpg);
		type.set ("assets/train/train_cote.jpg", AssetType.IMAGE);
		className.set ("assets/train/train_cote_n.jpg", __ASSET__assets_train_train_cote_n_jpg);
		type.set ("assets/train/train_cote_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/train_loco_lm.jpg", __ASSET__assets_train_train_loco_lm_jpg);
		type.set ("assets/train/train_loco_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/train_wagon_lm.jpg", __ASSET__assets_train_train_wagon_lm_jpg);
		type.set ("assets/train/train_wagon_lm.jpg", AssetType.IMAGE);
		className.set ("assets/train/tronc.jpg", __ASSET__assets_train_tronc_jpg);
		type.set ("assets/train/tronc.jpg", AssetType.IMAGE);
		className.set ("assets/train/tronc_face.jpg", __ASSET__assets_train_tronc_face_jpg);
		type.set ("assets/train/tronc_face.jpg", AssetType.IMAGE);
		className.set ("assets/train/tronc_face_n.jpg", __ASSET__assets_train_tronc_face_n_jpg);
		type.set ("assets/train/tronc_face_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/tronc_n.jpg", __ASSET__assets_train_tronc_n_jpg);
		type.set ("assets/train/tronc_n.jpg", AssetType.IMAGE);
		className.set ("assets/train/verre_lampes.jpg", __ASSET__assets_train_verre_lampes_jpg);
		type.set ("assets/train/verre_lampes.jpg", AssetType.IMAGE);
		className.set ("assets/train/water_n.jpg", __ASSET__assets_train_water_n_jpg);
		type.set ("assets/train/water_n.jpg", AssetType.IMAGE);
		
		
		#elseif html5
		
		var id;
		id = "assets/_train/barrieres_bois.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/barrieres_bois_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/bat_console_murs_ext_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/bat_console_murs_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/bat_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/bosquet_grass.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/bosquet_grass.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/bottes_paille.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/bottes_paille_face.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/champ_ble.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/champ_ble.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/chariot_planche.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/chariot_planche_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/chariot_roue.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/chariot_roue_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/console.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/console_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap5_nx.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap5_ny.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap5_nz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap5_px.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap5_py.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap5_pz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_nx.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_ny.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_nz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_px.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_py.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_pz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_vitres_nx.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_vitres_ny.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_vitres_nz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_vitres_px.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_vitres_py.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cubemap_vitres_pz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cuir.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/cuir_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/debug.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/disneyland_paris.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/flechage.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/flechage.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/flechage2.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/flechage2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/grass.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/grass.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/grillage.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/grillage.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/lens2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/lens3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/lens4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/lens5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/lens6.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/metal_rouille.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/metal_rouille_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/metal_tache.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/metal_tache_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/murs_wood.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/murs_wood_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/no_signal.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/paille_alpha.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/paille_alpha.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/pile_bois.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/pile_bois_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/planches.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/planches_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/poteaux.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/poteaux_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/poubelle.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/poubelle_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/rochers_big.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/rochers_big_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/rock_tunnel.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/rock_tunnel_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/sacs_sable.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/sacs_sable_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/sapin_leaves.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/sapin_leaves.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/sapin_trunk_up.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/sapin_trunk_up_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/skydome.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/smoke.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/sol_metal.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/sol_metal_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain1.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain1_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain1_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain2.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain2_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain2_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain3.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain3_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain3_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain4.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain4_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain4_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain_clotures_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain_escalier_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/terrain_tunnel_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/toit_bois.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/toit_bois_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/tole.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/tole_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/tonneau.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/tonneau_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/tracteur.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/tracteur_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/Train.babylon";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.babylon.manifest";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.barrieres_bois.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.bosquets_herbe.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.bottes_paille.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.bt_marche_arret_av_arr.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.bt_marche_arret_mode_OK.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.CAM_CONSOLE.Target.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.CAM_FREE.Target.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.CAM_FREE_STEREO.Target.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.CAM_ROT.Target.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.CAM_TRAIIN_AVANT.Target.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.CAM_TRAIN.Target.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.CAM_WALK.Target.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.champs_ble.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chariot.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_gare.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_in.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_lum_part1_cercle.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_lum_part1_fleche.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_lum_part2_cercle.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_lum_part2_fleche.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_out.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_zone00.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_zone01.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_zone02.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_zone03.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_zone04.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_zone05.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_zone06.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.chemin_zone07.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.console_bt_urgence02.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.console_bts.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.console_bts_verre.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.dummy_cam_target_train.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.dummy_cam_target_train_avant.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.dummy_cam_train.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.dummy_cam_train_avant.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.ecran1.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.ecran1_led.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.ecran2.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.ecran2_led.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.ecran3.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.ecran3_led.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.ecran4_led.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.ecran5_led.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.ecrans_off.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.ecrans_off2.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.emiter_particules.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.herbes.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.incremental.babylon";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.incremental.babylon.manifest";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.pencarte.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.pencarte_contour.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.piles_bois.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.planches.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.portail_poteaux.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.poteaux.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.poteaux_cable.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.poubelles.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.roues_chariot.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.sacs_sable.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.sapins_leaf_high.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.sapins_leaf_low.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.sapins_trunk_high_0.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.sapins_trunk_high_1.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.sapins_trunk_high_2.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.sapins_trunk_low.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.skydome.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.terrain_escalier.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.terrain_lampadaires.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.terrain_lampadaires_lampes.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.terrain_lampadaires_rouille_0.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.terrain_lampadaires_rouille_1.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.terrain_lampadaires_rouille_2.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.terrain_lampadaires_verre.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.terrain_poteaux.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.terrain_rails.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.tonneaux.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.tracteur.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.train_a1.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.train_a2.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.train_a3.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.train_a4.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.train_loco.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.train_wagon09.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.train_wagon10.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.train_wagon11.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/Train.troncs_arbre.babylonmeshdata";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/_train/train_4.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/train_4_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/train_cote.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/train_cote_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/train_loco_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/train_wagon_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/tronc.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/tronc_face.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/tronc_face_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/tronc_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/verre_lampes.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/_train/water_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/font/Aaargh.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/font/Aaargh.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/font/Aaargh.ttf";
		className.set (id, __ASSET__assets_font_aaargh_ttf);
		type.set (id, AssetType.FONT);
		id = "assets/font/Aaargh.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/font/OpenSansRegular.eot";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/font/OpenSansRegular.svg";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/font/OpenSansRegular.ttf";
		className.set (id, __ASSET__assets_font_opensansregular_ttf);
		type.set (id, AssetType.FONT);
		id = "assets/font/OpenSansRegular.woff";
		path.set (id, id);
		type.set (id, AssetType.BINARY);
		id = "assets/font/Tup Wanders Font License.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/img/Flare.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/grass.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/lens4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/lens5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/normalMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/refMap.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/README.TXT";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/img/skybox/skybox_nx.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/skybox_nx.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/skybox_ny.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/skybox_ny.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/skybox_nz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/skybox_nz.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/skybox_px.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/skybox_px.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/skybox_py.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/skybox_py.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/skybox_pz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/img/skybox/skybox_pz.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/barrieres_bois.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/barrieres_bois_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/bat_console_murs_ext_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/bat_console_murs_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/bat_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/bosquet_grass.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/bosquet_grass.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/bottes_paille.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/bottes_paille_face.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/champ_ble.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/champ_ble.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/chariot_planche.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/chariot_planche_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/chariot_roue.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/chariot_roue_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/console.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/console_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap5_nx.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap5_ny.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap5_nz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap5_px.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap5_py.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap5_pz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_nx.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_ny.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_nz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_px.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_py.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_pz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_vitres_nx.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_vitres_ny.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_vitres_nz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_vitres_px.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_vitres_py.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cubemap_vitres_pz.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cuir.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/cuir_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/debug.txt";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/train/disneyland_paris.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/flechage.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/flechage.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/flechage2.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/flechage2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/grass.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/grass.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/grillage.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/grillage.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/lens2.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/lens3.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/lens4.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/lens5.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/lens6.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/metal_rouille.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/metal_rouille_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/metal_tache.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/metal_tache_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/murs_wood.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/murs_wood_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/no_signal.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/paille_alpha.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/paille_alpha.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/pile_bois.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/pile_bois_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/planches.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/planches_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/poteaux.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/poteaux_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/poubelle.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/poubelle_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/rochers_big.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/rochers_big_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/rock_tunnel.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/rock_tunnel_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/sacs_sable.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/sacs_sable_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/sapin_leaves.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/sapin_leaves.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/sapin_trunk_up.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/sapin_trunk_up_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/skydome.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/smoke.png";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/sol_metal.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/sol_metal_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain1.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain1_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain1_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain2.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain2_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain2_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain3.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain3_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain3_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain4.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain4_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain4_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain_clotures_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain_escalier_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/terrain_tunnel_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/toit_bois.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/toit_bois_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/tole.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/tole_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/tonneau.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/tonneau_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/tracteur.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/tracteur_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/Train.babylon";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/train/Train.babylon.manifest";
		path.set (id, id);
		type.set (id, AssetType.TEXT);
		id = "assets/train/train_4.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/train_4_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/train_cote.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/train_cote_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/train_loco_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/train_wagon_lm.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/tronc.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/tronc_face.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/tronc_face_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/tronc_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/verre_lampes.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		id = "assets/train/water_n.jpg";
		path.set (id, id);
		type.set (id, AssetType.IMAGE);
		
		
		#else
		
		#if (windows || mac || linux)
		
		var useManifest = false;
		
		className.set ("assets/_train/barrieres_bois.jpg", __ASSET__assets__train_barrieres_bois_jpg);
		type.set ("assets/_train/barrieres_bois.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/barrieres_bois_n.jpg", __ASSET__assets__train_barrieres_bois_n_jpg);
		type.set ("assets/_train/barrieres_bois_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/bat_console_murs_ext_lm.jpg", __ASSET__assets__train_bat_console_murs_ext_lm_jpg);
		type.set ("assets/_train/bat_console_murs_ext_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/bat_console_murs_lm.jpg", __ASSET__assets__train_bat_console_murs_lm_jpg);
		type.set ("assets/_train/bat_console_murs_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/bat_lm.jpg", __ASSET__assets__train_bat_lm_jpg);
		type.set ("assets/_train/bat_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/bosquet_grass.jpg", __ASSET__assets__train_bosquet_grass_jpg);
		type.set ("assets/_train/bosquet_grass.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/bosquet_grass.png", __ASSET__assets__train_bosquet_grass_png);
		type.set ("assets/_train/bosquet_grass.png", AssetType.IMAGE);
		
		className.set ("assets/_train/bottes_paille.jpg", __ASSET__assets__train_bottes_paille_jpg);
		type.set ("assets/_train/bottes_paille.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/bottes_paille_face.jpg", __ASSET__assets__train_bottes_paille_face_jpg);
		type.set ("assets/_train/bottes_paille_face.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/champ_ble.jpg", __ASSET__assets__train_champ_ble_jpg);
		type.set ("assets/_train/champ_ble.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/champ_ble.png", __ASSET__assets__train_champ_ble_png);
		type.set ("assets/_train/champ_ble.png", AssetType.IMAGE);
		
		className.set ("assets/_train/chariot_planche.jpg", __ASSET__assets__train_chariot_planche_jpg);
		type.set ("assets/_train/chariot_planche.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/chariot_planche_n.jpg", __ASSET__assets__train_chariot_planche_n_jpg);
		type.set ("assets/_train/chariot_planche_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/chariot_roue.jpg", __ASSET__assets__train_chariot_roue_jpg);
		type.set ("assets/_train/chariot_roue.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/chariot_roue_n.jpg", __ASSET__assets__train_chariot_roue_n_jpg);
		type.set ("assets/_train/chariot_roue_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/console.jpg", __ASSET__assets__train_console_jpg);
		type.set ("assets/_train/console.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/console_n.jpg", __ASSET__assets__train_console_n_jpg);
		type.set ("assets/_train/console_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap5_nx.jpg", __ASSET__assets__train_cubemap5_nx_jpg);
		type.set ("assets/_train/cubemap5_nx.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap5_ny.jpg", __ASSET__assets__train_cubemap5_ny_jpg);
		type.set ("assets/_train/cubemap5_ny.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap5_nz.jpg", __ASSET__assets__train_cubemap5_nz_jpg);
		type.set ("assets/_train/cubemap5_nz.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap5_px.jpg", __ASSET__assets__train_cubemap5_px_jpg);
		type.set ("assets/_train/cubemap5_px.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap5_py.jpg", __ASSET__assets__train_cubemap5_py_jpg);
		type.set ("assets/_train/cubemap5_py.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap5_pz.jpg", __ASSET__assets__train_cubemap5_pz_jpg);
		type.set ("assets/_train/cubemap5_pz.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_nx.jpg", __ASSET__assets__train_cubemap_nx_jpg);
		type.set ("assets/_train/cubemap_nx.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_ny.jpg", __ASSET__assets__train_cubemap_ny_jpg);
		type.set ("assets/_train/cubemap_ny.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_nz.jpg", __ASSET__assets__train_cubemap_nz_jpg);
		type.set ("assets/_train/cubemap_nz.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_px.jpg", __ASSET__assets__train_cubemap_px_jpg);
		type.set ("assets/_train/cubemap_px.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_py.jpg", __ASSET__assets__train_cubemap_py_jpg);
		type.set ("assets/_train/cubemap_py.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_pz.jpg", __ASSET__assets__train_cubemap_pz_jpg);
		type.set ("assets/_train/cubemap_pz.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_vitres_nx.jpg", __ASSET__assets__train_cubemap_vitres_nx_jpg);
		type.set ("assets/_train/cubemap_vitres_nx.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_vitres_ny.jpg", __ASSET__assets__train_cubemap_vitres_ny_jpg);
		type.set ("assets/_train/cubemap_vitres_ny.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_vitres_nz.jpg", __ASSET__assets__train_cubemap_vitres_nz_jpg);
		type.set ("assets/_train/cubemap_vitres_nz.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_vitres_px.jpg", __ASSET__assets__train_cubemap_vitres_px_jpg);
		type.set ("assets/_train/cubemap_vitres_px.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_vitres_py.jpg", __ASSET__assets__train_cubemap_vitres_py_jpg);
		type.set ("assets/_train/cubemap_vitres_py.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cubemap_vitres_pz.jpg", __ASSET__assets__train_cubemap_vitres_pz_jpg);
		type.set ("assets/_train/cubemap_vitres_pz.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cuir.jpg", __ASSET__assets__train_cuir_jpg);
		type.set ("assets/_train/cuir.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/cuir_n.jpg", __ASSET__assets__train_cuir_n_jpg);
		type.set ("assets/_train/cuir_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/debug.txt", __ASSET__assets__train_debug_txt);
		type.set ("assets/_train/debug.txt", AssetType.TEXT);
		
		className.set ("assets/_train/disneyland_paris.jpg", __ASSET__assets__train_disneyland_paris_jpg);
		type.set ("assets/_train/disneyland_paris.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/flechage.jpg", __ASSET__assets__train_flechage_jpg);
		type.set ("assets/_train/flechage.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/flechage.png", __ASSET__assets__train_flechage_png);
		type.set ("assets/_train/flechage.png", AssetType.IMAGE);
		
		className.set ("assets/_train/flechage2.jpg", __ASSET__assets__train_flechage2_jpg);
		type.set ("assets/_train/flechage2.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/flechage2.png", __ASSET__assets__train_flechage2_png);
		type.set ("assets/_train/flechage2.png", AssetType.IMAGE);
		
		className.set ("assets/_train/grass.jpg", __ASSET__assets__train_grass_jpg);
		type.set ("assets/_train/grass.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/grass.png", __ASSET__assets__train_grass_png);
		type.set ("assets/_train/grass.png", AssetType.IMAGE);
		
		className.set ("assets/_train/grillage.jpg", __ASSET__assets__train_grillage_jpg);
		type.set ("assets/_train/grillage.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/grillage.png", __ASSET__assets__train_grillage_png);
		type.set ("assets/_train/grillage.png", AssetType.IMAGE);
		
		className.set ("assets/_train/lens2.png", __ASSET__assets__train_lens2_png);
		type.set ("assets/_train/lens2.png", AssetType.IMAGE);
		
		className.set ("assets/_train/lens3.png", __ASSET__assets__train_lens3_png);
		type.set ("assets/_train/lens3.png", AssetType.IMAGE);
		
		className.set ("assets/_train/lens4.png", __ASSET__assets__train_lens4_png);
		type.set ("assets/_train/lens4.png", AssetType.IMAGE);
		
		className.set ("assets/_train/lens5.png", __ASSET__assets__train_lens5_png);
		type.set ("assets/_train/lens5.png", AssetType.IMAGE);
		
		className.set ("assets/_train/lens6.png", __ASSET__assets__train_lens6_png);
		type.set ("assets/_train/lens6.png", AssetType.IMAGE);
		
		className.set ("assets/_train/metal_rouille.jpg", __ASSET__assets__train_metal_rouille_jpg);
		type.set ("assets/_train/metal_rouille.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/metal_rouille_n.jpg", __ASSET__assets__train_metal_rouille_n_jpg);
		type.set ("assets/_train/metal_rouille_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/metal_tache.jpg", __ASSET__assets__train_metal_tache_jpg);
		type.set ("assets/_train/metal_tache.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/metal_tache_n.jpg", __ASSET__assets__train_metal_tache_n_jpg);
		type.set ("assets/_train/metal_tache_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/murs_wood.jpg", __ASSET__assets__train_murs_wood_jpg);
		type.set ("assets/_train/murs_wood.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/murs_wood_n.jpg", __ASSET__assets__train_murs_wood_n_jpg);
		type.set ("assets/_train/murs_wood_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/no_signal.jpg", __ASSET__assets__train_no_signal_jpg);
		type.set ("assets/_train/no_signal.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/paille_alpha.jpg", __ASSET__assets__train_paille_alpha_jpg);
		type.set ("assets/_train/paille_alpha.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/paille_alpha.png", __ASSET__assets__train_paille_alpha_png);
		type.set ("assets/_train/paille_alpha.png", AssetType.IMAGE);
		
		className.set ("assets/_train/pile_bois.jpg", __ASSET__assets__train_pile_bois_jpg);
		type.set ("assets/_train/pile_bois.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/pile_bois_n.jpg", __ASSET__assets__train_pile_bois_n_jpg);
		type.set ("assets/_train/pile_bois_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/planches.jpg", __ASSET__assets__train_planches_jpg);
		type.set ("assets/_train/planches.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/planches_n.jpg", __ASSET__assets__train_planches_n_jpg);
		type.set ("assets/_train/planches_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/poteaux.jpg", __ASSET__assets__train_poteaux_jpg);
		type.set ("assets/_train/poteaux.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/poteaux_n.jpg", __ASSET__assets__train_poteaux_n_jpg);
		type.set ("assets/_train/poteaux_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/poubelle.jpg", __ASSET__assets__train_poubelle_jpg);
		type.set ("assets/_train/poubelle.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/poubelle_n.jpg", __ASSET__assets__train_poubelle_n_jpg);
		type.set ("assets/_train/poubelle_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/rochers_big.jpg", __ASSET__assets__train_rochers_big_jpg);
		type.set ("assets/_train/rochers_big.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/rochers_big_n.jpg", __ASSET__assets__train_rochers_big_n_jpg);
		type.set ("assets/_train/rochers_big_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/rock_tunnel.jpg", __ASSET__assets__train_rock_tunnel_jpg);
		type.set ("assets/_train/rock_tunnel.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/rock_tunnel_n.jpg", __ASSET__assets__train_rock_tunnel_n_jpg);
		type.set ("assets/_train/rock_tunnel_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/sacs_sable.jpg", __ASSET__assets__train_sacs_sable_jpg);
		type.set ("assets/_train/sacs_sable.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/sacs_sable_n.jpg", __ASSET__assets__train_sacs_sable_n_jpg);
		type.set ("assets/_train/sacs_sable_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/sapin_leaves.jpg", __ASSET__assets__train_sapin_leaves_jpg);
		type.set ("assets/_train/sapin_leaves.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/sapin_leaves.png", __ASSET__assets__train_sapin_leaves_png);
		type.set ("assets/_train/sapin_leaves.png", AssetType.IMAGE);
		
		className.set ("assets/_train/sapin_trunk_up.jpg", __ASSET__assets__train_sapin_trunk_up_jpg);
		type.set ("assets/_train/sapin_trunk_up.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/sapin_trunk_up_n.jpg", __ASSET__assets__train_sapin_trunk_up_n_jpg);
		type.set ("assets/_train/sapin_trunk_up_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/skydome.jpg", __ASSET__assets__train_skydome_jpg);
		type.set ("assets/_train/skydome.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/smoke.png", __ASSET__assets__train_smoke_png);
		type.set ("assets/_train/smoke.png", AssetType.IMAGE);
		
		className.set ("assets/_train/sol_metal.jpg", __ASSET__assets__train_sol_metal_jpg);
		type.set ("assets/_train/sol_metal.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/sol_metal_n.jpg", __ASSET__assets__train_sol_metal_n_jpg);
		type.set ("assets/_train/sol_metal_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain1.jpg", __ASSET__assets__train_terrain1_jpg);
		type.set ("assets/_train/terrain1.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain1_lm.jpg", __ASSET__assets__train_terrain1_lm_jpg);
		type.set ("assets/_train/terrain1_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain1_n.jpg", __ASSET__assets__train_terrain1_n_jpg);
		type.set ("assets/_train/terrain1_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain2.jpg", __ASSET__assets__train_terrain2_jpg);
		type.set ("assets/_train/terrain2.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain2_lm.jpg", __ASSET__assets__train_terrain2_lm_jpg);
		type.set ("assets/_train/terrain2_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain2_n.jpg", __ASSET__assets__train_terrain2_n_jpg);
		type.set ("assets/_train/terrain2_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain3.jpg", __ASSET__assets__train_terrain3_jpg);
		type.set ("assets/_train/terrain3.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain3_lm.jpg", __ASSET__assets__train_terrain3_lm_jpg);
		type.set ("assets/_train/terrain3_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain3_n.jpg", __ASSET__assets__train_terrain3_n_jpg);
		type.set ("assets/_train/terrain3_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain4.jpg", __ASSET__assets__train_terrain4_jpg);
		type.set ("assets/_train/terrain4.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain4_lm.jpg", __ASSET__assets__train_terrain4_lm_jpg);
		type.set ("assets/_train/terrain4_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain4_n.jpg", __ASSET__assets__train_terrain4_n_jpg);
		type.set ("assets/_train/terrain4_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain_clotures_lm.jpg", __ASSET__assets__train_terrain_clotures_lm_jpg);
		type.set ("assets/_train/terrain_clotures_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain_escalier_lm.jpg", __ASSET__assets__train_terrain_escalier_lm_jpg);
		type.set ("assets/_train/terrain_escalier_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/terrain_tunnel_lm.jpg", __ASSET__assets__train_terrain_tunnel_lm_jpg);
		type.set ("assets/_train/terrain_tunnel_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/toit_bois.jpg", __ASSET__assets__train_toit_bois_jpg);
		type.set ("assets/_train/toit_bois.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/toit_bois_n.jpg", __ASSET__assets__train_toit_bois_n_jpg);
		type.set ("assets/_train/toit_bois_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/tole.jpg", __ASSET__assets__train_tole_jpg);
		type.set ("assets/_train/tole.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/tole_n.jpg", __ASSET__assets__train_tole_n_jpg);
		type.set ("assets/_train/tole_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/tonneau.jpg", __ASSET__assets__train_tonneau_jpg);
		type.set ("assets/_train/tonneau.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/tonneau_n.jpg", __ASSET__assets__train_tonneau_n_jpg);
		type.set ("assets/_train/tonneau_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/tracteur.jpg", __ASSET__assets__train_tracteur_jpg);
		type.set ("assets/_train/tracteur.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/tracteur_n.jpg", __ASSET__assets__train_tracteur_n_jpg);
		type.set ("assets/_train/tracteur_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/Train.babylon", __ASSET__assets__train_train_babylon);
		type.set ("assets/_train/Train.babylon", AssetType.TEXT);
		
		className.set ("assets/_train/Train.babylon.manifest", __ASSET__assets__train_train_babylon_manifest);
		type.set ("assets/_train/Train.babylon.manifest", AssetType.TEXT);
		
		className.set ("assets/_train/Train.barrieres_bois.babylonmeshdata", __ASSET__assets__train_train_barrieres_bois_babylonmeshdata);
		type.set ("assets/_train/Train.barrieres_bois.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.bosquets_herbe.babylonmeshdata", __ASSET__assets__train_train_bosquets_herbe_babylonmeshdata);
		type.set ("assets/_train/Train.bosquets_herbe.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.bottes_paille.babylonmeshdata", __ASSET__assets__train_train_bottes_paille_babylonmeshdata);
		type.set ("assets/_train/Train.bottes_paille.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.bt_marche_arret_av_arr.babylonmeshdata", __ASSET__assets__train_train_bt_marche_arret_av_arr_babylonmeshdata);
		type.set ("assets/_train/Train.bt_marche_arret_av_arr.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.bt_marche_arret_mode_OK.babylonmeshdata", __ASSET__assets__train_train_bt_marche_arret_mode_ok_babylonmeshdata);
		type.set ("assets/_train/Train.bt_marche_arret_mode_OK.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.CAM_CONSOLE.Target.babylonmeshdata", __ASSET__assets__train_train_cam_console_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_CONSOLE.Target.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.CAM_FREE.Target.babylonmeshdata", __ASSET__assets__train_train_cam_free_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_FREE.Target.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.CAM_FREE_STEREO.Target.babylonmeshdata", __ASSET__assets__train_train_cam_free_stereo_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_FREE_STEREO.Target.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.CAM_ROT.Target.babylonmeshdata", __ASSET__assets__train_train_cam_rot_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_ROT.Target.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.CAM_TRAIIN_AVANT.Target.babylonmeshdata", __ASSET__assets__train_train_cam_traiin_avant_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_TRAIIN_AVANT.Target.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.CAM_TRAIN.Target.babylonmeshdata", __ASSET__assets__train_train_cam_train_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_TRAIN.Target.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.CAM_WALK.Target.babylonmeshdata", __ASSET__assets__train_train_cam_walk_target_babylonmeshdata);
		type.set ("assets/_train/Train.CAM_WALK.Target.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.champs_ble.babylonmeshdata", __ASSET__assets__train_train_champs_ble_babylonmeshdata);
		type.set ("assets/_train/Train.champs_ble.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chariot.babylonmeshdata", __ASSET__assets__train_train_chariot_babylonmeshdata);
		type.set ("assets/_train/Train.chariot.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_gare.babylonmeshdata", __ASSET__assets__train_train_chemin_gare_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_gare.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_in.babylonmeshdata", __ASSET__assets__train_train_chemin_in_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_in.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_lum_part1_cercle.babylonmeshdata", __ASSET__assets__train_train_chemin_lum_part1_cercle_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_lum_part1_cercle.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_lum_part1_fleche.babylonmeshdata", __ASSET__assets__train_train_chemin_lum_part1_fleche_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_lum_part1_fleche.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_lum_part2_cercle.babylonmeshdata", __ASSET__assets__train_train_chemin_lum_part2_cercle_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_lum_part2_cercle.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_lum_part2_fleche.babylonmeshdata", __ASSET__assets__train_train_chemin_lum_part2_fleche_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_lum_part2_fleche.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_out.babylonmeshdata", __ASSET__assets__train_train_chemin_out_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_out.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_zone00.babylonmeshdata", __ASSET__assets__train_train_chemin_zone00_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone00.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_zone01.babylonmeshdata", __ASSET__assets__train_train_chemin_zone01_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone01.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_zone02.babylonmeshdata", __ASSET__assets__train_train_chemin_zone02_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone02.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_zone03.babylonmeshdata", __ASSET__assets__train_train_chemin_zone03_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone03.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_zone04.babylonmeshdata", __ASSET__assets__train_train_chemin_zone04_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone04.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_zone05.babylonmeshdata", __ASSET__assets__train_train_chemin_zone05_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone05.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_zone06.babylonmeshdata", __ASSET__assets__train_train_chemin_zone06_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone06.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.chemin_zone07.babylonmeshdata", __ASSET__assets__train_train_chemin_zone07_babylonmeshdata);
		type.set ("assets/_train/Train.chemin_zone07.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.console_bt_urgence02.babylonmeshdata", __ASSET__assets__train_train_console_bt_urgence02_babylonmeshdata);
		type.set ("assets/_train/Train.console_bt_urgence02.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.console_bts.babylonmeshdata", __ASSET__assets__train_train_console_bts_babylonmeshdata);
		type.set ("assets/_train/Train.console_bts.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.console_bts_verre.babylonmeshdata", __ASSET__assets__train_train_console_bts_verre_babylonmeshdata);
		type.set ("assets/_train/Train.console_bts_verre.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.dummy_cam_target_train.babylonmeshdata", __ASSET__assets__train_train_dummy_cam_target_train_babylonmeshdata);
		type.set ("assets/_train/Train.dummy_cam_target_train.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.dummy_cam_target_train_avant.babylonmeshdata", __ASSET__assets__train_train_dummy_cam_target_train_avant_babylonmeshdata);
		type.set ("assets/_train/Train.dummy_cam_target_train_avant.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.dummy_cam_train.babylonmeshdata", __ASSET__assets__train_train_dummy_cam_train_babylonmeshdata);
		type.set ("assets/_train/Train.dummy_cam_train.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.dummy_cam_train_avant.babylonmeshdata", __ASSET__assets__train_train_dummy_cam_train_avant_babylonmeshdata);
		type.set ("assets/_train/Train.dummy_cam_train_avant.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.ecran1.babylonmeshdata", __ASSET__assets__train_train_ecran1_babylonmeshdata);
		type.set ("assets/_train/Train.ecran1.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.ecran1_led.babylonmeshdata", __ASSET__assets__train_train_ecran1_led_babylonmeshdata);
		type.set ("assets/_train/Train.ecran1_led.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.ecran2.babylonmeshdata", __ASSET__assets__train_train_ecran2_babylonmeshdata);
		type.set ("assets/_train/Train.ecran2.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.ecran2_led.babylonmeshdata", __ASSET__assets__train_train_ecran2_led_babylonmeshdata);
		type.set ("assets/_train/Train.ecran2_led.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.ecran3.babylonmeshdata", __ASSET__assets__train_train_ecran3_babylonmeshdata);
		type.set ("assets/_train/Train.ecran3.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.ecran3_led.babylonmeshdata", __ASSET__assets__train_train_ecran3_led_babylonmeshdata);
		type.set ("assets/_train/Train.ecran3_led.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.ecran4_led.babylonmeshdata", __ASSET__assets__train_train_ecran4_led_babylonmeshdata);
		type.set ("assets/_train/Train.ecran4_led.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.ecran5_led.babylonmeshdata", __ASSET__assets__train_train_ecran5_led_babylonmeshdata);
		type.set ("assets/_train/Train.ecran5_led.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.ecrans_off.babylonmeshdata", __ASSET__assets__train_train_ecrans_off_babylonmeshdata);
		type.set ("assets/_train/Train.ecrans_off.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.ecrans_off2.babylonmeshdata", __ASSET__assets__train_train_ecrans_off2_babylonmeshdata);
		type.set ("assets/_train/Train.ecrans_off2.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.emiter_particules.babylonmeshdata", __ASSET__assets__train_train_emiter_particules_babylonmeshdata);
		type.set ("assets/_train/Train.emiter_particules.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.herbes.babylonmeshdata", __ASSET__assets__train_train_herbes_babylonmeshdata);
		type.set ("assets/_train/Train.herbes.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.incremental.babylon", __ASSET__assets__train_train_incremental_babylon);
		type.set ("assets/_train/Train.incremental.babylon", AssetType.TEXT);
		
		className.set ("assets/_train/Train.incremental.babylon.manifest", __ASSET__assets__train_train_incremental_babylon_manifest);
		type.set ("assets/_train/Train.incremental.babylon.manifest", AssetType.TEXT);
		
		className.set ("assets/_train/Train.pencarte.babylonmeshdata", __ASSET__assets__train_train_pencarte_babylonmeshdata);
		type.set ("assets/_train/Train.pencarte.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.pencarte_contour.babylonmeshdata", __ASSET__assets__train_train_pencarte_contour_babylonmeshdata);
		type.set ("assets/_train/Train.pencarte_contour.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.piles_bois.babylonmeshdata", __ASSET__assets__train_train_piles_bois_babylonmeshdata);
		type.set ("assets/_train/Train.piles_bois.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.planches.babylonmeshdata", __ASSET__assets__train_train_planches_babylonmeshdata);
		type.set ("assets/_train/Train.planches.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.portail_poteaux.babylonmeshdata", __ASSET__assets__train_train_portail_poteaux_babylonmeshdata);
		type.set ("assets/_train/Train.portail_poteaux.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.poteaux.babylonmeshdata", __ASSET__assets__train_train_poteaux_babylonmeshdata);
		type.set ("assets/_train/Train.poteaux.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.poteaux_cable.babylonmeshdata", __ASSET__assets__train_train_poteaux_cable_babylonmeshdata);
		type.set ("assets/_train/Train.poteaux_cable.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.poubelles.babylonmeshdata", __ASSET__assets__train_train_poubelles_babylonmeshdata);
		type.set ("assets/_train/Train.poubelles.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.roues_chariot.babylonmeshdata", __ASSET__assets__train_train_roues_chariot_babylonmeshdata);
		type.set ("assets/_train/Train.roues_chariot.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.sacs_sable.babylonmeshdata", __ASSET__assets__train_train_sacs_sable_babylonmeshdata);
		type.set ("assets/_train/Train.sacs_sable.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.sapins_leaf_high.babylonmeshdata", __ASSET__assets__train_train_sapins_leaf_high_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_leaf_high.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.sapins_leaf_low.babylonmeshdata", __ASSET__assets__train_train_sapins_leaf_low_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_leaf_low.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.sapins_trunk_high_0.babylonmeshdata", __ASSET__assets__train_train_sapins_trunk_high_0_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_trunk_high_0.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.sapins_trunk_high_1.babylonmeshdata", __ASSET__assets__train_train_sapins_trunk_high_1_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_trunk_high_1.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.sapins_trunk_high_2.babylonmeshdata", __ASSET__assets__train_train_sapins_trunk_high_2_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_trunk_high_2.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.sapins_trunk_low.babylonmeshdata", __ASSET__assets__train_train_sapins_trunk_low_babylonmeshdata);
		type.set ("assets/_train/Train.sapins_trunk_low.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.skydome.babylonmeshdata", __ASSET__assets__train_train_skydome_babylonmeshdata);
		type.set ("assets/_train/Train.skydome.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.terrain_escalier.babylonmeshdata", __ASSET__assets__train_train_terrain_escalier_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_escalier.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.terrain_lampadaires.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.terrain_lampadaires_lampes.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_lampes_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires_lampes.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.terrain_lampadaires_rouille_0.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_rouille_0_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires_rouille_0.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.terrain_lampadaires_rouille_1.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_rouille_1_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires_rouille_1.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.terrain_lampadaires_rouille_2.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_rouille_2_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires_rouille_2.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.terrain_lampadaires_verre.babylonmeshdata", __ASSET__assets__train_train_terrain_lampadaires_verre_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_lampadaires_verre.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.terrain_poteaux.babylonmeshdata", __ASSET__assets__train_train_terrain_poteaux_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_poteaux.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.terrain_rails.babylonmeshdata", __ASSET__assets__train_train_terrain_rails_babylonmeshdata);
		type.set ("assets/_train/Train.terrain_rails.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.tonneaux.babylonmeshdata", __ASSET__assets__train_train_tonneaux_babylonmeshdata);
		type.set ("assets/_train/Train.tonneaux.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.tracteur.babylonmeshdata", __ASSET__assets__train_train_tracteur_babylonmeshdata);
		type.set ("assets/_train/Train.tracteur.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.train_a1.babylonmeshdata", __ASSET__assets__train_train_train_a1_babylonmeshdata);
		type.set ("assets/_train/Train.train_a1.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.train_a2.babylonmeshdata", __ASSET__assets__train_train_train_a2_babylonmeshdata);
		type.set ("assets/_train/Train.train_a2.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.train_a3.babylonmeshdata", __ASSET__assets__train_train_train_a3_babylonmeshdata);
		type.set ("assets/_train/Train.train_a3.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.train_a4.babylonmeshdata", __ASSET__assets__train_train_train_a4_babylonmeshdata);
		type.set ("assets/_train/Train.train_a4.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.train_loco.babylonmeshdata", __ASSET__assets__train_train_train_loco_babylonmeshdata);
		type.set ("assets/_train/Train.train_loco.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.train_wagon09.babylonmeshdata", __ASSET__assets__train_train_train_wagon09_babylonmeshdata);
		type.set ("assets/_train/Train.train_wagon09.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.train_wagon10.babylonmeshdata", __ASSET__assets__train_train_train_wagon10_babylonmeshdata);
		type.set ("assets/_train/Train.train_wagon10.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.train_wagon11.babylonmeshdata", __ASSET__assets__train_train_train_wagon11_babylonmeshdata);
		type.set ("assets/_train/Train.train_wagon11.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/Train.troncs_arbre.babylonmeshdata", __ASSET__assets__train_train_troncs_arbre_babylonmeshdata);
		type.set ("assets/_train/Train.troncs_arbre.babylonmeshdata", AssetType.TEXT);
		
		className.set ("assets/_train/train_4.jpg", __ASSET__assets__train_train_4_jpg);
		type.set ("assets/_train/train_4.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/train_4_n.jpg", __ASSET__assets__train_train_4_n_jpg);
		type.set ("assets/_train/train_4_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/train_cote.jpg", __ASSET__assets__train_train_cote_jpg);
		type.set ("assets/_train/train_cote.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/train_cote_n.jpg", __ASSET__assets__train_train_cote_n_jpg);
		type.set ("assets/_train/train_cote_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/train_loco_lm.jpg", __ASSET__assets__train_train_loco_lm_jpg);
		type.set ("assets/_train/train_loco_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/train_wagon_lm.jpg", __ASSET__assets__train_train_wagon_lm_jpg);
		type.set ("assets/_train/train_wagon_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/tronc.jpg", __ASSET__assets__train_tronc_jpg);
		type.set ("assets/_train/tronc.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/tronc_face.jpg", __ASSET__assets__train_tronc_face_jpg);
		type.set ("assets/_train/tronc_face.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/tronc_face_n.jpg", __ASSET__assets__train_tronc_face_n_jpg);
		type.set ("assets/_train/tronc_face_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/tronc_n.jpg", __ASSET__assets__train_tronc_n_jpg);
		type.set ("assets/_train/tronc_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/verre_lampes.jpg", __ASSET__assets__train_verre_lampes_jpg);
		type.set ("assets/_train/verre_lampes.jpg", AssetType.IMAGE);
		
		className.set ("assets/_train/water_n.jpg", __ASSET__assets__train_water_n_jpg);
		type.set ("assets/_train/water_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/font/Aaargh.eot", __ASSET__assets_font_aaargh_eot);
		type.set ("assets/font/Aaargh.eot", AssetType.BINARY);
		
		className.set ("assets/font/Aaargh.svg", __ASSET__assets_font_aaargh_svg);
		type.set ("assets/font/Aaargh.svg", AssetType.TEXT);
		
		className.set ("assets/font/Aaargh.ttf", __ASSET__assets_font_aaargh_ttf);
		type.set ("assets/font/Aaargh.ttf", AssetType.FONT);
		
		className.set ("assets/font/Aaargh.woff", __ASSET__assets_font_aaargh_woff);
		type.set ("assets/font/Aaargh.woff", AssetType.BINARY);
		
		className.set ("assets/font/OpenSansRegular.eot", __ASSET__assets_font_opensansregular_eot);
		type.set ("assets/font/OpenSansRegular.eot", AssetType.BINARY);
		
		className.set ("assets/font/OpenSansRegular.svg", __ASSET__assets_font_opensansregular_svg);
		type.set ("assets/font/OpenSansRegular.svg", AssetType.TEXT);
		
		className.set ("assets/font/OpenSansRegular.ttf", __ASSET__assets_font_opensansregular_ttf);
		type.set ("assets/font/OpenSansRegular.ttf", AssetType.FONT);
		
		className.set ("assets/font/OpenSansRegular.woff", __ASSET__assets_font_opensansregular_woff);
		type.set ("assets/font/OpenSansRegular.woff", AssetType.BINARY);
		
		className.set ("assets/font/Tup Wanders Font License.txt", __ASSET__assets_font_tup_wanders_font_license_txt);
		type.set ("assets/font/Tup Wanders Font License.txt", AssetType.TEXT);
		
		className.set ("assets/img/Flare.png", __ASSET__assets_img_flare_png);
		type.set ("assets/img/Flare.png", AssetType.IMAGE);
		
		className.set ("assets/img/grass.jpg", __ASSET__assets_img_grass_jpg);
		type.set ("assets/img/grass.jpg", AssetType.IMAGE);
		
		className.set ("assets/img/lens4.png", __ASSET__assets_img_lens4_png);
		type.set ("assets/img/lens4.png", AssetType.IMAGE);
		
		className.set ("assets/img/lens5.png", __ASSET__assets_img_lens5_png);
		type.set ("assets/img/lens5.png", AssetType.IMAGE);
		
		className.set ("assets/img/normalMap.jpg", __ASSET__assets_img_normalmap_jpg);
		type.set ("assets/img/normalMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/img/refMap.jpg", __ASSET__assets_img_refmap_jpg);
		type.set ("assets/img/refMap.jpg", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/README.TXT", __ASSET__assets_img_skybox_readme_txt);
		type.set ("assets/img/skybox/README.TXT", AssetType.TEXT);
		
		className.set ("assets/img/skybox/skybox_nx.jpg", __ASSET__assets_img_skybox_skybox_nx_jpg);
		type.set ("assets/img/skybox/skybox_nx.jpg", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/skybox_nx.png", __ASSET__assets_img_skybox_skybox_nx_png);
		type.set ("assets/img/skybox/skybox_nx.png", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/skybox_ny.jpg", __ASSET__assets_img_skybox_skybox_ny_jpg);
		type.set ("assets/img/skybox/skybox_ny.jpg", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/skybox_ny.png", __ASSET__assets_img_skybox_skybox_ny_png);
		type.set ("assets/img/skybox/skybox_ny.png", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/skybox_nz.jpg", __ASSET__assets_img_skybox_skybox_nz_jpg);
		type.set ("assets/img/skybox/skybox_nz.jpg", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/skybox_nz.png", __ASSET__assets_img_skybox_skybox_nz_png);
		type.set ("assets/img/skybox/skybox_nz.png", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/skybox_px.jpg", __ASSET__assets_img_skybox_skybox_px_jpg);
		type.set ("assets/img/skybox/skybox_px.jpg", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/skybox_px.png", __ASSET__assets_img_skybox_skybox_px_png);
		type.set ("assets/img/skybox/skybox_px.png", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/skybox_py.jpg", __ASSET__assets_img_skybox_skybox_py_jpg);
		type.set ("assets/img/skybox/skybox_py.jpg", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/skybox_py.png", __ASSET__assets_img_skybox_skybox_py_png);
		type.set ("assets/img/skybox/skybox_py.png", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/skybox_pz.jpg", __ASSET__assets_img_skybox_skybox_pz_jpg);
		type.set ("assets/img/skybox/skybox_pz.jpg", AssetType.IMAGE);
		
		className.set ("assets/img/skybox/skybox_pz.png", __ASSET__assets_img_skybox_skybox_pz_png);
		type.set ("assets/img/skybox/skybox_pz.png", AssetType.IMAGE);
		
		className.set ("assets/train/barrieres_bois.jpg", __ASSET__assets_train_barrieres_bois_jpg);
		type.set ("assets/train/barrieres_bois.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/barrieres_bois_n.jpg", __ASSET__assets_train_barrieres_bois_n_jpg);
		type.set ("assets/train/barrieres_bois_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/bat_console_murs_ext_lm.jpg", __ASSET__assets_train_bat_console_murs_ext_lm_jpg);
		type.set ("assets/train/bat_console_murs_ext_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/bat_console_murs_lm.jpg", __ASSET__assets_train_bat_console_murs_lm_jpg);
		type.set ("assets/train/bat_console_murs_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/bat_lm.jpg", __ASSET__assets_train_bat_lm_jpg);
		type.set ("assets/train/bat_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/bosquet_grass.jpg", __ASSET__assets_train_bosquet_grass_jpg);
		type.set ("assets/train/bosquet_grass.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/bosquet_grass.png", __ASSET__assets_train_bosquet_grass_png);
		type.set ("assets/train/bosquet_grass.png", AssetType.IMAGE);
		
		className.set ("assets/train/bottes_paille.jpg", __ASSET__assets_train_bottes_paille_jpg);
		type.set ("assets/train/bottes_paille.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/bottes_paille_face.jpg", __ASSET__assets_train_bottes_paille_face_jpg);
		type.set ("assets/train/bottes_paille_face.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/champ_ble.jpg", __ASSET__assets_train_champ_ble_jpg);
		type.set ("assets/train/champ_ble.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/champ_ble.png", __ASSET__assets_train_champ_ble_png);
		type.set ("assets/train/champ_ble.png", AssetType.IMAGE);
		
		className.set ("assets/train/chariot_planche.jpg", __ASSET__assets_train_chariot_planche_jpg);
		type.set ("assets/train/chariot_planche.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/chariot_planche_n.jpg", __ASSET__assets_train_chariot_planche_n_jpg);
		type.set ("assets/train/chariot_planche_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/chariot_roue.jpg", __ASSET__assets_train_chariot_roue_jpg);
		type.set ("assets/train/chariot_roue.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/chariot_roue_n.jpg", __ASSET__assets_train_chariot_roue_n_jpg);
		type.set ("assets/train/chariot_roue_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/console.jpg", __ASSET__assets_train_console_jpg);
		type.set ("assets/train/console.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/console_n.jpg", __ASSET__assets_train_console_n_jpg);
		type.set ("assets/train/console_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap5_nx.jpg", __ASSET__assets_train_cubemap5_nx_jpg);
		type.set ("assets/train/cubemap5_nx.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap5_ny.jpg", __ASSET__assets_train_cubemap5_ny_jpg);
		type.set ("assets/train/cubemap5_ny.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap5_nz.jpg", __ASSET__assets_train_cubemap5_nz_jpg);
		type.set ("assets/train/cubemap5_nz.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap5_px.jpg", __ASSET__assets_train_cubemap5_px_jpg);
		type.set ("assets/train/cubemap5_px.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap5_py.jpg", __ASSET__assets_train_cubemap5_py_jpg);
		type.set ("assets/train/cubemap5_py.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap5_pz.jpg", __ASSET__assets_train_cubemap5_pz_jpg);
		type.set ("assets/train/cubemap5_pz.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_nx.jpg", __ASSET__assets_train_cubemap_nx_jpg);
		type.set ("assets/train/cubemap_nx.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_ny.jpg", __ASSET__assets_train_cubemap_ny_jpg);
		type.set ("assets/train/cubemap_ny.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_nz.jpg", __ASSET__assets_train_cubemap_nz_jpg);
		type.set ("assets/train/cubemap_nz.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_px.jpg", __ASSET__assets_train_cubemap_px_jpg);
		type.set ("assets/train/cubemap_px.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_py.jpg", __ASSET__assets_train_cubemap_py_jpg);
		type.set ("assets/train/cubemap_py.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_pz.jpg", __ASSET__assets_train_cubemap_pz_jpg);
		type.set ("assets/train/cubemap_pz.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_vitres_nx.jpg", __ASSET__assets_train_cubemap_vitres_nx_jpg);
		type.set ("assets/train/cubemap_vitres_nx.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_vitres_ny.jpg", __ASSET__assets_train_cubemap_vitres_ny_jpg);
		type.set ("assets/train/cubemap_vitres_ny.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_vitres_nz.jpg", __ASSET__assets_train_cubemap_vitres_nz_jpg);
		type.set ("assets/train/cubemap_vitres_nz.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_vitres_px.jpg", __ASSET__assets_train_cubemap_vitres_px_jpg);
		type.set ("assets/train/cubemap_vitres_px.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_vitres_py.jpg", __ASSET__assets_train_cubemap_vitres_py_jpg);
		type.set ("assets/train/cubemap_vitres_py.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cubemap_vitres_pz.jpg", __ASSET__assets_train_cubemap_vitres_pz_jpg);
		type.set ("assets/train/cubemap_vitres_pz.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cuir.jpg", __ASSET__assets_train_cuir_jpg);
		type.set ("assets/train/cuir.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/cuir_n.jpg", __ASSET__assets_train_cuir_n_jpg);
		type.set ("assets/train/cuir_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/debug.txt", __ASSET__assets_train_debug_txt);
		type.set ("assets/train/debug.txt", AssetType.TEXT);
		
		className.set ("assets/train/disneyland_paris.jpg", __ASSET__assets_train_disneyland_paris_jpg);
		type.set ("assets/train/disneyland_paris.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/flechage.jpg", __ASSET__assets_train_flechage_jpg);
		type.set ("assets/train/flechage.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/flechage.png", __ASSET__assets_train_flechage_png);
		type.set ("assets/train/flechage.png", AssetType.IMAGE);
		
		className.set ("assets/train/flechage2.jpg", __ASSET__assets_train_flechage2_jpg);
		type.set ("assets/train/flechage2.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/flechage2.png", __ASSET__assets_train_flechage2_png);
		type.set ("assets/train/flechage2.png", AssetType.IMAGE);
		
		className.set ("assets/train/grass.jpg", __ASSET__assets_train_grass_jpg);
		type.set ("assets/train/grass.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/grass.png", __ASSET__assets_train_grass_png);
		type.set ("assets/train/grass.png", AssetType.IMAGE);
		
		className.set ("assets/train/grillage.jpg", __ASSET__assets_train_grillage_jpg);
		type.set ("assets/train/grillage.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/grillage.png", __ASSET__assets_train_grillage_png);
		type.set ("assets/train/grillage.png", AssetType.IMAGE);
		
		className.set ("assets/train/lens2.png", __ASSET__assets_train_lens2_png);
		type.set ("assets/train/lens2.png", AssetType.IMAGE);
		
		className.set ("assets/train/lens3.png", __ASSET__assets_train_lens3_png);
		type.set ("assets/train/lens3.png", AssetType.IMAGE);
		
		className.set ("assets/train/lens4.png", __ASSET__assets_train_lens4_png);
		type.set ("assets/train/lens4.png", AssetType.IMAGE);
		
		className.set ("assets/train/lens5.png", __ASSET__assets_train_lens5_png);
		type.set ("assets/train/lens5.png", AssetType.IMAGE);
		
		className.set ("assets/train/lens6.png", __ASSET__assets_train_lens6_png);
		type.set ("assets/train/lens6.png", AssetType.IMAGE);
		
		className.set ("assets/train/metal_rouille.jpg", __ASSET__assets_train_metal_rouille_jpg);
		type.set ("assets/train/metal_rouille.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/metal_rouille_n.jpg", __ASSET__assets_train_metal_rouille_n_jpg);
		type.set ("assets/train/metal_rouille_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/metal_tache.jpg", __ASSET__assets_train_metal_tache_jpg);
		type.set ("assets/train/metal_tache.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/metal_tache_n.jpg", __ASSET__assets_train_metal_tache_n_jpg);
		type.set ("assets/train/metal_tache_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/murs_wood.jpg", __ASSET__assets_train_murs_wood_jpg);
		type.set ("assets/train/murs_wood.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/murs_wood_n.jpg", __ASSET__assets_train_murs_wood_n_jpg);
		type.set ("assets/train/murs_wood_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/no_signal.jpg", __ASSET__assets_train_no_signal_jpg);
		type.set ("assets/train/no_signal.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/paille_alpha.jpg", __ASSET__assets_train_paille_alpha_jpg);
		type.set ("assets/train/paille_alpha.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/paille_alpha.png", __ASSET__assets_train_paille_alpha_png);
		type.set ("assets/train/paille_alpha.png", AssetType.IMAGE);
		
		className.set ("assets/train/pile_bois.jpg", __ASSET__assets_train_pile_bois_jpg);
		type.set ("assets/train/pile_bois.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/pile_bois_n.jpg", __ASSET__assets_train_pile_bois_n_jpg);
		type.set ("assets/train/pile_bois_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/planches.jpg", __ASSET__assets_train_planches_jpg);
		type.set ("assets/train/planches.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/planches_n.jpg", __ASSET__assets_train_planches_n_jpg);
		type.set ("assets/train/planches_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/poteaux.jpg", __ASSET__assets_train_poteaux_jpg);
		type.set ("assets/train/poteaux.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/poteaux_n.jpg", __ASSET__assets_train_poteaux_n_jpg);
		type.set ("assets/train/poteaux_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/poubelle.jpg", __ASSET__assets_train_poubelle_jpg);
		type.set ("assets/train/poubelle.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/poubelle_n.jpg", __ASSET__assets_train_poubelle_n_jpg);
		type.set ("assets/train/poubelle_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/rochers_big.jpg", __ASSET__assets_train_rochers_big_jpg);
		type.set ("assets/train/rochers_big.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/rochers_big_n.jpg", __ASSET__assets_train_rochers_big_n_jpg);
		type.set ("assets/train/rochers_big_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/rock_tunnel.jpg", __ASSET__assets_train_rock_tunnel_jpg);
		type.set ("assets/train/rock_tunnel.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/rock_tunnel_n.jpg", __ASSET__assets_train_rock_tunnel_n_jpg);
		type.set ("assets/train/rock_tunnel_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/sacs_sable.jpg", __ASSET__assets_train_sacs_sable_jpg);
		type.set ("assets/train/sacs_sable.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/sacs_sable_n.jpg", __ASSET__assets_train_sacs_sable_n_jpg);
		type.set ("assets/train/sacs_sable_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/sapin_leaves.jpg", __ASSET__assets_train_sapin_leaves_jpg);
		type.set ("assets/train/sapin_leaves.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/sapin_leaves.png", __ASSET__assets_train_sapin_leaves_png);
		type.set ("assets/train/sapin_leaves.png", AssetType.IMAGE);
		
		className.set ("assets/train/sapin_trunk_up.jpg", __ASSET__assets_train_sapin_trunk_up_jpg);
		type.set ("assets/train/sapin_trunk_up.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/sapin_trunk_up_n.jpg", __ASSET__assets_train_sapin_trunk_up_n_jpg);
		type.set ("assets/train/sapin_trunk_up_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/skydome.jpg", __ASSET__assets_train_skydome_jpg);
		type.set ("assets/train/skydome.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/smoke.png", __ASSET__assets_train_smoke_png);
		type.set ("assets/train/smoke.png", AssetType.IMAGE);
		
		className.set ("assets/train/sol_metal.jpg", __ASSET__assets_train_sol_metal_jpg);
		type.set ("assets/train/sol_metal.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/sol_metal_n.jpg", __ASSET__assets_train_sol_metal_n_jpg);
		type.set ("assets/train/sol_metal_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain1.jpg", __ASSET__assets_train_terrain1_jpg);
		type.set ("assets/train/terrain1.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain1_lm.jpg", __ASSET__assets_train_terrain1_lm_jpg);
		type.set ("assets/train/terrain1_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain1_n.jpg", __ASSET__assets_train_terrain1_n_jpg);
		type.set ("assets/train/terrain1_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain2.jpg", __ASSET__assets_train_terrain2_jpg);
		type.set ("assets/train/terrain2.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain2_lm.jpg", __ASSET__assets_train_terrain2_lm_jpg);
		type.set ("assets/train/terrain2_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain2_n.jpg", __ASSET__assets_train_terrain2_n_jpg);
		type.set ("assets/train/terrain2_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain3.jpg", __ASSET__assets_train_terrain3_jpg);
		type.set ("assets/train/terrain3.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain3_lm.jpg", __ASSET__assets_train_terrain3_lm_jpg);
		type.set ("assets/train/terrain3_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain3_n.jpg", __ASSET__assets_train_terrain3_n_jpg);
		type.set ("assets/train/terrain3_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain4.jpg", __ASSET__assets_train_terrain4_jpg);
		type.set ("assets/train/terrain4.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain4_lm.jpg", __ASSET__assets_train_terrain4_lm_jpg);
		type.set ("assets/train/terrain4_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain4_n.jpg", __ASSET__assets_train_terrain4_n_jpg);
		type.set ("assets/train/terrain4_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain_clotures_lm.jpg", __ASSET__assets_train_terrain_clotures_lm_jpg);
		type.set ("assets/train/terrain_clotures_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain_escalier_lm.jpg", __ASSET__assets_train_terrain_escalier_lm_jpg);
		type.set ("assets/train/terrain_escalier_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/terrain_tunnel_lm.jpg", __ASSET__assets_train_terrain_tunnel_lm_jpg);
		type.set ("assets/train/terrain_tunnel_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/toit_bois.jpg", __ASSET__assets_train_toit_bois_jpg);
		type.set ("assets/train/toit_bois.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/toit_bois_n.jpg", __ASSET__assets_train_toit_bois_n_jpg);
		type.set ("assets/train/toit_bois_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/tole.jpg", __ASSET__assets_train_tole_jpg);
		type.set ("assets/train/tole.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/tole_n.jpg", __ASSET__assets_train_tole_n_jpg);
		type.set ("assets/train/tole_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/tonneau.jpg", __ASSET__assets_train_tonneau_jpg);
		type.set ("assets/train/tonneau.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/tonneau_n.jpg", __ASSET__assets_train_tonneau_n_jpg);
		type.set ("assets/train/tonneau_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/tracteur.jpg", __ASSET__assets_train_tracteur_jpg);
		type.set ("assets/train/tracteur.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/tracteur_n.jpg", __ASSET__assets_train_tracteur_n_jpg);
		type.set ("assets/train/tracteur_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/Train.babylon", __ASSET__assets_train_train_babylon);
		type.set ("assets/train/Train.babylon", AssetType.TEXT);
		
		className.set ("assets/train/Train.babylon.manifest", __ASSET__assets_train_train_babylon_manifest);
		type.set ("assets/train/Train.babylon.manifest", AssetType.TEXT);
		
		className.set ("assets/train/train_4.jpg", __ASSET__assets_train_train_4_jpg);
		type.set ("assets/train/train_4.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/train_4_n.jpg", __ASSET__assets_train_train_4_n_jpg);
		type.set ("assets/train/train_4_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/train_cote.jpg", __ASSET__assets_train_train_cote_jpg);
		type.set ("assets/train/train_cote.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/train_cote_n.jpg", __ASSET__assets_train_train_cote_n_jpg);
		type.set ("assets/train/train_cote_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/train_loco_lm.jpg", __ASSET__assets_train_train_loco_lm_jpg);
		type.set ("assets/train/train_loco_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/train_wagon_lm.jpg", __ASSET__assets_train_train_wagon_lm_jpg);
		type.set ("assets/train/train_wagon_lm.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/tronc.jpg", __ASSET__assets_train_tronc_jpg);
		type.set ("assets/train/tronc.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/tronc_face.jpg", __ASSET__assets_train_tronc_face_jpg);
		type.set ("assets/train/tronc_face.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/tronc_face_n.jpg", __ASSET__assets_train_tronc_face_n_jpg);
		type.set ("assets/train/tronc_face_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/tronc_n.jpg", __ASSET__assets_train_tronc_n_jpg);
		type.set ("assets/train/tronc_n.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/verre_lampes.jpg", __ASSET__assets_train_verre_lampes_jpg);
		type.set ("assets/train/verre_lampes.jpg", AssetType.IMAGE);
		
		className.set ("assets/train/water_n.jpg", __ASSET__assets_train_water_n_jpg);
		type.set ("assets/train/water_n.jpg", AssetType.IMAGE);
		
		
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

@:keep class __ASSET__assets__train_barrieres_bois_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_barrieres_bois_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_bat_console_murs_ext_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_bat_console_murs_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_bat_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_bosquet_grass_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_bosquet_grass_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_bottes_paille_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_bottes_paille_face_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_champ_ble_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_champ_ble_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_chariot_planche_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_chariot_planche_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_chariot_roue_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_chariot_roue_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_console_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_console_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap5_nx_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap5_ny_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap5_nz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap5_px_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap5_py_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap5_pz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_nx_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_ny_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_nz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_px_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_py_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_pz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_vitres_nx_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_vitres_ny_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_vitres_nz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_vitres_px_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_vitres_py_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cubemap_vitres_pz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cuir_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_cuir_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_debug_txt extends null { }
@:keep class __ASSET__assets__train_disneyland_paris_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_flechage_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_flechage_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_flechage2_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_flechage2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_grass_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_grass_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_grillage_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_grillage_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_lens2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_lens3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_lens4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_lens5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_lens6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_metal_rouille_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_metal_rouille_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_metal_tache_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_metal_tache_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_murs_wood_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_murs_wood_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_no_signal_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_paille_alpha_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_paille_alpha_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_pile_bois_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_pile_bois_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_planches_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_planches_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_poteaux_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_poteaux_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_poubelle_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_poubelle_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_rochers_big_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_rochers_big_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_rock_tunnel_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_rock_tunnel_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_sacs_sable_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_sacs_sable_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_sapin_leaves_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_sapin_leaves_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_sapin_trunk_up_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_sapin_trunk_up_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_skydome_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_smoke_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_sol_metal_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_sol_metal_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain1_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain1_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain1_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain2_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain2_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain2_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain3_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain3_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain3_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain4_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain4_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain4_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain_clotures_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain_escalier_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_terrain_tunnel_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_toit_bois_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_toit_bois_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_tole_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_tole_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_tonneau_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_tonneau_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_tracteur_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_tracteur_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_train_babylon extends null { }
@:keep class __ASSET__assets__train_train_babylon_manifest extends null { }
@:keep class __ASSET__assets__train_train_barrieres_bois_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_bosquets_herbe_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_bottes_paille_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_bt_marche_arret_av_arr_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_bt_marche_arret_mode_ok_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_cam_console_target_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_cam_free_target_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_cam_free_stereo_target_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_cam_rot_target_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_cam_traiin_avant_target_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_cam_train_target_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_cam_walk_target_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_champs_ble_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chariot_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_gare_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_in_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_lum_part1_cercle_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_lum_part1_fleche_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_lum_part2_cercle_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_lum_part2_fleche_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_out_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_zone00_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_zone01_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_zone02_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_zone03_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_zone04_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_zone05_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_zone06_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_chemin_zone07_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_console_bt_urgence02_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_console_bts_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_console_bts_verre_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_dummy_cam_target_train_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_dummy_cam_target_train_avant_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_dummy_cam_train_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_dummy_cam_train_avant_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_ecran1_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_ecran1_led_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_ecran2_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_ecran2_led_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_ecran3_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_ecran3_led_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_ecran4_led_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_ecran5_led_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_ecrans_off_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_ecrans_off2_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_emiter_particules_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_herbes_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_incremental_babylon extends null { }
@:keep class __ASSET__assets__train_train_incremental_babylon_manifest extends null { }
@:keep class __ASSET__assets__train_train_pencarte_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_pencarte_contour_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_piles_bois_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_planches_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_portail_poteaux_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_poteaux_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_poteaux_cable_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_poubelles_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_roues_chariot_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_sacs_sable_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_sapins_leaf_high_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_sapins_leaf_low_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_sapins_trunk_high_0_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_sapins_trunk_high_1_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_sapins_trunk_high_2_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_sapins_trunk_low_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_skydome_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_terrain_escalier_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_terrain_lampadaires_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_terrain_lampadaires_lampes_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_terrain_lampadaires_rouille_0_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_terrain_lampadaires_rouille_1_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_terrain_lampadaires_rouille_2_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_terrain_lampadaires_verre_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_terrain_poteaux_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_terrain_rails_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_tonneaux_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_tracteur_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_train_a1_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_train_a2_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_train_a3_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_train_a4_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_train_loco_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_train_wagon09_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_train_wagon10_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_train_wagon11_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_troncs_arbre_babylonmeshdata extends null { }
@:keep class __ASSET__assets__train_train_4_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_train_4_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_train_cote_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_train_cote_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_train_loco_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_train_wagon_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_tronc_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_tronc_face_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_tronc_face_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_tronc_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_verre_lampes_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets__train_water_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_font_aaargh_eot extends null { }
@:keep class __ASSET__assets_font_aaargh_svg extends null { }
@:keep class __ASSET__assets_font_aaargh_ttf extends null { }
@:keep class __ASSET__assets_font_aaargh_woff extends null { }
@:keep class __ASSET__assets_font_opensansregular_eot extends null { }
@:keep class __ASSET__assets_font_opensansregular_svg extends null { }
@:keep class __ASSET__assets_font_opensansregular_ttf extends null { }
@:keep class __ASSET__assets_font_opensansregular_woff extends null { }
@:keep class __ASSET__assets_font_tup_wanders_font_license_txt extends null { }
@:keep class __ASSET__assets_img_flare_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_grass_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_lens4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_lens5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_normalmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_refmap_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_readme_txt extends null { }
@:keep class __ASSET__assets_img_skybox_skybox_nx_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_skybox_nx_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_skybox_ny_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_skybox_ny_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_skybox_nz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_skybox_nz_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_skybox_px_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_skybox_px_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_skybox_py_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_skybox_py_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_skybox_pz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_img_skybox_skybox_pz_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_barrieres_bois_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_barrieres_bois_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_bat_console_murs_ext_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_bat_console_murs_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_bat_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_bosquet_grass_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_bosquet_grass_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_bottes_paille_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_bottes_paille_face_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_champ_ble_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_champ_ble_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_chariot_planche_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_chariot_planche_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_chariot_roue_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_chariot_roue_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_console_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_console_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap5_nx_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap5_ny_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap5_nz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap5_px_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap5_py_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap5_pz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_nx_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_ny_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_nz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_px_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_py_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_pz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_vitres_nx_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_vitres_ny_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_vitres_nz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_vitres_px_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_vitres_py_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cubemap_vitres_pz_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cuir_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_cuir_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_debug_txt extends null { }
@:keep class __ASSET__assets_train_disneyland_paris_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_flechage_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_flechage_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_flechage2_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_flechage2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_grass_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_grass_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_grillage_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_grillage_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_lens2_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_lens3_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_lens4_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_lens5_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_lens6_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_metal_rouille_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_metal_rouille_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_metal_tache_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_metal_tache_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_murs_wood_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_murs_wood_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_no_signal_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_paille_alpha_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_paille_alpha_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_pile_bois_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_pile_bois_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_planches_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_planches_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_poteaux_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_poteaux_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_poubelle_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_poubelle_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_rochers_big_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_rochers_big_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_rock_tunnel_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_rock_tunnel_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_sacs_sable_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_sacs_sable_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_sapin_leaves_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_sapin_leaves_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_sapin_trunk_up_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_sapin_trunk_up_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_skydome_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_smoke_png extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_sol_metal_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_sol_metal_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain1_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain1_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain1_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain2_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain2_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain2_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain3_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain3_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain3_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain4_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain4_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain4_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain_clotures_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain_escalier_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_terrain_tunnel_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_toit_bois_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_toit_bois_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_tole_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_tole_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_tonneau_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_tonneau_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_tracteur_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_tracteur_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_train_babylon extends null { }
@:keep class __ASSET__assets_train_train_babylon_manifest extends null { }
@:keep class __ASSET__assets_train_train_4_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_train_4_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_train_cote_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_train_cote_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_train_loco_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_train_wagon_lm_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_tronc_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_tronc_face_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_tronc_face_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_tronc_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_verre_lampes_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }
@:keep class __ASSET__assets_train_water_n_jpg extends flash.display.BitmapData { public function new () { super (0, 0, true, 0); } }


#elseif html5


















































































































































































































@:keep class __ASSET__assets_font_aaargh_ttf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "assets/font/Aaargh.ttf"; } #end }



@:keep class __ASSET__assets_font_opensansregular_ttf extends flash.text.Font { #if (!openfl_html5_dom) public function new () { super (); fontName = "assets/font/OpenSansRegular.ttf"; } #end }















































































































































#elseif (windows || mac || linux)


@:bitmap("assets/_train/barrieres_bois.jpg") class __ASSET__assets__train_barrieres_bois_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/barrieres_bois_n.jpg") class __ASSET__assets__train_barrieres_bois_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/bat_console_murs_ext_lm.jpg") class __ASSET__assets__train_bat_console_murs_ext_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/bat_console_murs_lm.jpg") class __ASSET__assets__train_bat_console_murs_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/bat_lm.jpg") class __ASSET__assets__train_bat_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/bosquet_grass.jpg") class __ASSET__assets__train_bosquet_grass_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/bosquet_grass.png") class __ASSET__assets__train_bosquet_grass_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/bottes_paille.jpg") class __ASSET__assets__train_bottes_paille_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/bottes_paille_face.jpg") class __ASSET__assets__train_bottes_paille_face_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/champ_ble.jpg") class __ASSET__assets__train_champ_ble_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/champ_ble.png") class __ASSET__assets__train_champ_ble_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/chariot_planche.jpg") class __ASSET__assets__train_chariot_planche_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/chariot_planche_n.jpg") class __ASSET__assets__train_chariot_planche_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/chariot_roue.jpg") class __ASSET__assets__train_chariot_roue_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/chariot_roue_n.jpg") class __ASSET__assets__train_chariot_roue_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/console.jpg") class __ASSET__assets__train_console_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/console_n.jpg") class __ASSET__assets__train_console_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap5_nx.jpg") class __ASSET__assets__train_cubemap5_nx_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap5_ny.jpg") class __ASSET__assets__train_cubemap5_ny_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap5_nz.jpg") class __ASSET__assets__train_cubemap5_nz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap5_px.jpg") class __ASSET__assets__train_cubemap5_px_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap5_py.jpg") class __ASSET__assets__train_cubemap5_py_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap5_pz.jpg") class __ASSET__assets__train_cubemap5_pz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_nx.jpg") class __ASSET__assets__train_cubemap_nx_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_ny.jpg") class __ASSET__assets__train_cubemap_ny_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_nz.jpg") class __ASSET__assets__train_cubemap_nz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_px.jpg") class __ASSET__assets__train_cubemap_px_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_py.jpg") class __ASSET__assets__train_cubemap_py_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_pz.jpg") class __ASSET__assets__train_cubemap_pz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_vitres_nx.jpg") class __ASSET__assets__train_cubemap_vitres_nx_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_vitres_ny.jpg") class __ASSET__assets__train_cubemap_vitres_ny_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_vitres_nz.jpg") class __ASSET__assets__train_cubemap_vitres_nz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_vitres_px.jpg") class __ASSET__assets__train_cubemap_vitres_px_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_vitres_py.jpg") class __ASSET__assets__train_cubemap_vitres_py_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cubemap_vitres_pz.jpg") class __ASSET__assets__train_cubemap_vitres_pz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cuir.jpg") class __ASSET__assets__train_cuir_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/cuir_n.jpg") class __ASSET__assets__train_cuir_n_jpg extends flash.display.BitmapData {}
@:file("assets/_train/debug.txt") class __ASSET__assets__train_debug_txt extends flash.utils.ByteArray {}
@:bitmap("assets/_train/disneyland_paris.jpg") class __ASSET__assets__train_disneyland_paris_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/flechage.jpg") class __ASSET__assets__train_flechage_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/flechage.png") class __ASSET__assets__train_flechage_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/flechage2.jpg") class __ASSET__assets__train_flechage2_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/flechage2.png") class __ASSET__assets__train_flechage2_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/grass.jpg") class __ASSET__assets__train_grass_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/grass.png") class __ASSET__assets__train_grass_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/grillage.jpg") class __ASSET__assets__train_grillage_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/grillage.png") class __ASSET__assets__train_grillage_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/lens2.png") class __ASSET__assets__train_lens2_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/lens3.png") class __ASSET__assets__train_lens3_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/lens4.png") class __ASSET__assets__train_lens4_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/lens5.png") class __ASSET__assets__train_lens5_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/lens6.png") class __ASSET__assets__train_lens6_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/metal_rouille.jpg") class __ASSET__assets__train_metal_rouille_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/metal_rouille_n.jpg") class __ASSET__assets__train_metal_rouille_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/metal_tache.jpg") class __ASSET__assets__train_metal_tache_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/metal_tache_n.jpg") class __ASSET__assets__train_metal_tache_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/murs_wood.jpg") class __ASSET__assets__train_murs_wood_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/murs_wood_n.jpg") class __ASSET__assets__train_murs_wood_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/no_signal.jpg") class __ASSET__assets__train_no_signal_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/paille_alpha.jpg") class __ASSET__assets__train_paille_alpha_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/paille_alpha.png") class __ASSET__assets__train_paille_alpha_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/pile_bois.jpg") class __ASSET__assets__train_pile_bois_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/pile_bois_n.jpg") class __ASSET__assets__train_pile_bois_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/planches.jpg") class __ASSET__assets__train_planches_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/planches_n.jpg") class __ASSET__assets__train_planches_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/poteaux.jpg") class __ASSET__assets__train_poteaux_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/poteaux_n.jpg") class __ASSET__assets__train_poteaux_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/poubelle.jpg") class __ASSET__assets__train_poubelle_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/poubelle_n.jpg") class __ASSET__assets__train_poubelle_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/rochers_big.jpg") class __ASSET__assets__train_rochers_big_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/rochers_big_n.jpg") class __ASSET__assets__train_rochers_big_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/rock_tunnel.jpg") class __ASSET__assets__train_rock_tunnel_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/rock_tunnel_n.jpg") class __ASSET__assets__train_rock_tunnel_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/sacs_sable.jpg") class __ASSET__assets__train_sacs_sable_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/sacs_sable_n.jpg") class __ASSET__assets__train_sacs_sable_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/sapin_leaves.jpg") class __ASSET__assets__train_sapin_leaves_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/sapin_leaves.png") class __ASSET__assets__train_sapin_leaves_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/sapin_trunk_up.jpg") class __ASSET__assets__train_sapin_trunk_up_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/sapin_trunk_up_n.jpg") class __ASSET__assets__train_sapin_trunk_up_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/skydome.jpg") class __ASSET__assets__train_skydome_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/smoke.png") class __ASSET__assets__train_smoke_png extends flash.display.BitmapData {}
@:bitmap("assets/_train/sol_metal.jpg") class __ASSET__assets__train_sol_metal_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/sol_metal_n.jpg") class __ASSET__assets__train_sol_metal_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain1.jpg") class __ASSET__assets__train_terrain1_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain1_lm.jpg") class __ASSET__assets__train_terrain1_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain1_n.jpg") class __ASSET__assets__train_terrain1_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain2.jpg") class __ASSET__assets__train_terrain2_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain2_lm.jpg") class __ASSET__assets__train_terrain2_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain2_n.jpg") class __ASSET__assets__train_terrain2_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain3.jpg") class __ASSET__assets__train_terrain3_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain3_lm.jpg") class __ASSET__assets__train_terrain3_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain3_n.jpg") class __ASSET__assets__train_terrain3_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain4.jpg") class __ASSET__assets__train_terrain4_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain4_lm.jpg") class __ASSET__assets__train_terrain4_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain4_n.jpg") class __ASSET__assets__train_terrain4_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain_clotures_lm.jpg") class __ASSET__assets__train_terrain_clotures_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain_escalier_lm.jpg") class __ASSET__assets__train_terrain_escalier_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/terrain_tunnel_lm.jpg") class __ASSET__assets__train_terrain_tunnel_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/toit_bois.jpg") class __ASSET__assets__train_toit_bois_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/toit_bois_n.jpg") class __ASSET__assets__train_toit_bois_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/tole.jpg") class __ASSET__assets__train_tole_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/tole_n.jpg") class __ASSET__assets__train_tole_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/tonneau.jpg") class __ASSET__assets__train_tonneau_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/tonneau_n.jpg") class __ASSET__assets__train_tonneau_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/tracteur.jpg") class __ASSET__assets__train_tracteur_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/tracteur_n.jpg") class __ASSET__assets__train_tracteur_n_jpg extends flash.display.BitmapData {}
@:file("assets/_train/Train.babylon") class __ASSET__assets__train_train_babylon extends flash.utils.ByteArray {}
@:file("assets/_train/Train.babylon.manifest") class __ASSET__assets__train_train_babylon_manifest extends flash.utils.ByteArray {}
@:file("assets/_train/Train.barrieres_bois.babylonmeshdata") class __ASSET__assets__train_train_barrieres_bois_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.bosquets_herbe.babylonmeshdata") class __ASSET__assets__train_train_bosquets_herbe_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.bottes_paille.babylonmeshdata") class __ASSET__assets__train_train_bottes_paille_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.bt_marche_arret_av_arr.babylonmeshdata") class __ASSET__assets__train_train_bt_marche_arret_av_arr_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.bt_marche_arret_mode_OK.babylonmeshdata") class __ASSET__assets__train_train_bt_marche_arret_mode_ok_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.CAM_CONSOLE.Target.babylonmeshdata") class __ASSET__assets__train_train_cam_console_target_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.CAM_FREE.Target.babylonmeshdata") class __ASSET__assets__train_train_cam_free_target_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.CAM_FREE_STEREO.Target.babylonmeshdata") class __ASSET__assets__train_train_cam_free_stereo_target_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.CAM_ROT.Target.babylonmeshdata") class __ASSET__assets__train_train_cam_rot_target_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.CAM_TRAIIN_AVANT.Target.babylonmeshdata") class __ASSET__assets__train_train_cam_traiin_avant_target_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.CAM_TRAIN.Target.babylonmeshdata") class __ASSET__assets__train_train_cam_train_target_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.CAM_WALK.Target.babylonmeshdata") class __ASSET__assets__train_train_cam_walk_target_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.champs_ble.babylonmeshdata") class __ASSET__assets__train_train_champs_ble_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chariot.babylonmeshdata") class __ASSET__assets__train_train_chariot_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_gare.babylonmeshdata") class __ASSET__assets__train_train_chemin_gare_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_in.babylonmeshdata") class __ASSET__assets__train_train_chemin_in_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_lum_part1_cercle.babylonmeshdata") class __ASSET__assets__train_train_chemin_lum_part1_cercle_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_lum_part1_fleche.babylonmeshdata") class __ASSET__assets__train_train_chemin_lum_part1_fleche_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_lum_part2_cercle.babylonmeshdata") class __ASSET__assets__train_train_chemin_lum_part2_cercle_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_lum_part2_fleche.babylonmeshdata") class __ASSET__assets__train_train_chemin_lum_part2_fleche_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_out.babylonmeshdata") class __ASSET__assets__train_train_chemin_out_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_zone00.babylonmeshdata") class __ASSET__assets__train_train_chemin_zone00_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_zone01.babylonmeshdata") class __ASSET__assets__train_train_chemin_zone01_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_zone02.babylonmeshdata") class __ASSET__assets__train_train_chemin_zone02_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_zone03.babylonmeshdata") class __ASSET__assets__train_train_chemin_zone03_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_zone04.babylonmeshdata") class __ASSET__assets__train_train_chemin_zone04_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_zone05.babylonmeshdata") class __ASSET__assets__train_train_chemin_zone05_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_zone06.babylonmeshdata") class __ASSET__assets__train_train_chemin_zone06_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.chemin_zone07.babylonmeshdata") class __ASSET__assets__train_train_chemin_zone07_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.console_bt_urgence02.babylonmeshdata") class __ASSET__assets__train_train_console_bt_urgence02_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.console_bts.babylonmeshdata") class __ASSET__assets__train_train_console_bts_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.console_bts_verre.babylonmeshdata") class __ASSET__assets__train_train_console_bts_verre_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.dummy_cam_target_train.babylonmeshdata") class __ASSET__assets__train_train_dummy_cam_target_train_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.dummy_cam_target_train_avant.babylonmeshdata") class __ASSET__assets__train_train_dummy_cam_target_train_avant_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.dummy_cam_train.babylonmeshdata") class __ASSET__assets__train_train_dummy_cam_train_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.dummy_cam_train_avant.babylonmeshdata") class __ASSET__assets__train_train_dummy_cam_train_avant_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.ecran1.babylonmeshdata") class __ASSET__assets__train_train_ecran1_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.ecran1_led.babylonmeshdata") class __ASSET__assets__train_train_ecran1_led_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.ecran2.babylonmeshdata") class __ASSET__assets__train_train_ecran2_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.ecran2_led.babylonmeshdata") class __ASSET__assets__train_train_ecran2_led_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.ecran3.babylonmeshdata") class __ASSET__assets__train_train_ecran3_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.ecran3_led.babylonmeshdata") class __ASSET__assets__train_train_ecran3_led_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.ecran4_led.babylonmeshdata") class __ASSET__assets__train_train_ecran4_led_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.ecran5_led.babylonmeshdata") class __ASSET__assets__train_train_ecran5_led_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.ecrans_off.babylonmeshdata") class __ASSET__assets__train_train_ecrans_off_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.ecrans_off2.babylonmeshdata") class __ASSET__assets__train_train_ecrans_off2_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.emiter_particules.babylonmeshdata") class __ASSET__assets__train_train_emiter_particules_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.herbes.babylonmeshdata") class __ASSET__assets__train_train_herbes_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.incremental.babylon") class __ASSET__assets__train_train_incremental_babylon extends flash.utils.ByteArray {}
@:file("assets/_train/Train.incremental.babylon.manifest") class __ASSET__assets__train_train_incremental_babylon_manifest extends flash.utils.ByteArray {}
@:file("assets/_train/Train.pencarte.babylonmeshdata") class __ASSET__assets__train_train_pencarte_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.pencarte_contour.babylonmeshdata") class __ASSET__assets__train_train_pencarte_contour_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.piles_bois.babylonmeshdata") class __ASSET__assets__train_train_piles_bois_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.planches.babylonmeshdata") class __ASSET__assets__train_train_planches_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.portail_poteaux.babylonmeshdata") class __ASSET__assets__train_train_portail_poteaux_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.poteaux.babylonmeshdata") class __ASSET__assets__train_train_poteaux_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.poteaux_cable.babylonmeshdata") class __ASSET__assets__train_train_poteaux_cable_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.poubelles.babylonmeshdata") class __ASSET__assets__train_train_poubelles_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.roues_chariot.babylonmeshdata") class __ASSET__assets__train_train_roues_chariot_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.sacs_sable.babylonmeshdata") class __ASSET__assets__train_train_sacs_sable_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.sapins_leaf_high.babylonmeshdata") class __ASSET__assets__train_train_sapins_leaf_high_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.sapins_leaf_low.babylonmeshdata") class __ASSET__assets__train_train_sapins_leaf_low_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.sapins_trunk_high_0.babylonmeshdata") class __ASSET__assets__train_train_sapins_trunk_high_0_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.sapins_trunk_high_1.babylonmeshdata") class __ASSET__assets__train_train_sapins_trunk_high_1_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.sapins_trunk_high_2.babylonmeshdata") class __ASSET__assets__train_train_sapins_trunk_high_2_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.sapins_trunk_low.babylonmeshdata") class __ASSET__assets__train_train_sapins_trunk_low_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.skydome.babylonmeshdata") class __ASSET__assets__train_train_skydome_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.terrain_escalier.babylonmeshdata") class __ASSET__assets__train_train_terrain_escalier_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.terrain_lampadaires.babylonmeshdata") class __ASSET__assets__train_train_terrain_lampadaires_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.terrain_lampadaires_lampes.babylonmeshdata") class __ASSET__assets__train_train_terrain_lampadaires_lampes_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.terrain_lampadaires_rouille_0.babylonmeshdata") class __ASSET__assets__train_train_terrain_lampadaires_rouille_0_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.terrain_lampadaires_rouille_1.babylonmeshdata") class __ASSET__assets__train_train_terrain_lampadaires_rouille_1_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.terrain_lampadaires_rouille_2.babylonmeshdata") class __ASSET__assets__train_train_terrain_lampadaires_rouille_2_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.terrain_lampadaires_verre.babylonmeshdata") class __ASSET__assets__train_train_terrain_lampadaires_verre_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.terrain_poteaux.babylonmeshdata") class __ASSET__assets__train_train_terrain_poteaux_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.terrain_rails.babylonmeshdata") class __ASSET__assets__train_train_terrain_rails_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.tonneaux.babylonmeshdata") class __ASSET__assets__train_train_tonneaux_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.tracteur.babylonmeshdata") class __ASSET__assets__train_train_tracteur_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.train_a1.babylonmeshdata") class __ASSET__assets__train_train_train_a1_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.train_a2.babylonmeshdata") class __ASSET__assets__train_train_train_a2_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.train_a3.babylonmeshdata") class __ASSET__assets__train_train_train_a3_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.train_a4.babylonmeshdata") class __ASSET__assets__train_train_train_a4_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.train_loco.babylonmeshdata") class __ASSET__assets__train_train_train_loco_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.train_wagon09.babylonmeshdata") class __ASSET__assets__train_train_train_wagon09_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.train_wagon10.babylonmeshdata") class __ASSET__assets__train_train_train_wagon10_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.train_wagon11.babylonmeshdata") class __ASSET__assets__train_train_train_wagon11_babylonmeshdata extends flash.utils.ByteArray {}
@:file("assets/_train/Train.troncs_arbre.babylonmeshdata") class __ASSET__assets__train_train_troncs_arbre_babylonmeshdata extends flash.utils.ByteArray {}
@:bitmap("assets/_train/train_4.jpg") class __ASSET__assets__train_train_4_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/train_4_n.jpg") class __ASSET__assets__train_train_4_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/train_cote.jpg") class __ASSET__assets__train_train_cote_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/train_cote_n.jpg") class __ASSET__assets__train_train_cote_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/train_loco_lm.jpg") class __ASSET__assets__train_train_loco_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/train_wagon_lm.jpg") class __ASSET__assets__train_train_wagon_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/tronc.jpg") class __ASSET__assets__train_tronc_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/tronc_face.jpg") class __ASSET__assets__train_tronc_face_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/tronc_face_n.jpg") class __ASSET__assets__train_tronc_face_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/tronc_n.jpg") class __ASSET__assets__train_tronc_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/verre_lampes.jpg") class __ASSET__assets__train_verre_lampes_jpg extends flash.display.BitmapData {}
@:bitmap("assets/_train/water_n.jpg") class __ASSET__assets__train_water_n_jpg extends flash.display.BitmapData {}
@:file("assets/font/Aaargh.eot") class __ASSET__assets_font_aaargh_eot extends flash.utils.ByteArray {}
@:file("assets/font/Aaargh.svg") class __ASSET__assets_font_aaargh_svg extends flash.utils.ByteArray {}
@:font("assets/font/Aaargh.ttf") class __ASSET__assets_font_aaargh_ttf extends flash.text.Font {}
@:file("assets/font/Aaargh.woff") class __ASSET__assets_font_aaargh_woff extends flash.utils.ByteArray {}
@:file("assets/font/OpenSansRegular.eot") class __ASSET__assets_font_opensansregular_eot extends flash.utils.ByteArray {}
@:file("assets/font/OpenSansRegular.svg") class __ASSET__assets_font_opensansregular_svg extends flash.utils.ByteArray {}
@:font("assets/font/OpenSansRegular.ttf") class __ASSET__assets_font_opensansregular_ttf extends flash.text.Font {}
@:file("assets/font/OpenSansRegular.woff") class __ASSET__assets_font_opensansregular_woff extends flash.utils.ByteArray {}
@:file("assets/font/Tup Wanders Font License.txt") class __ASSET__assets_font_tup_wanders_font_license_txt extends flash.utils.ByteArray {}
@:bitmap("assets/img/Flare.png") class __ASSET__assets_img_flare_png extends flash.display.BitmapData {}
@:bitmap("assets/img/grass.jpg") class __ASSET__assets_img_grass_jpg extends flash.display.BitmapData {}
@:bitmap("assets/img/lens4.png") class __ASSET__assets_img_lens4_png extends flash.display.BitmapData {}
@:bitmap("assets/img/lens5.png") class __ASSET__assets_img_lens5_png extends flash.display.BitmapData {}
@:bitmap("assets/img/normalMap.jpg") class __ASSET__assets_img_normalmap_jpg extends flash.display.BitmapData {}
@:bitmap("assets/img/refMap.jpg") class __ASSET__assets_img_refmap_jpg extends flash.display.BitmapData {}
@:file("assets/img/skybox/README.TXT") class __ASSET__assets_img_skybox_readme_txt extends flash.utils.ByteArray {}
@:bitmap("assets/img/skybox/skybox_nx.jpg") class __ASSET__assets_img_skybox_skybox_nx_jpg extends flash.display.BitmapData {}
@:bitmap("assets/img/skybox/skybox_nx.png") class __ASSET__assets_img_skybox_skybox_nx_png extends flash.display.BitmapData {}
@:bitmap("assets/img/skybox/skybox_ny.jpg") class __ASSET__assets_img_skybox_skybox_ny_jpg extends flash.display.BitmapData {}
@:bitmap("assets/img/skybox/skybox_ny.png") class __ASSET__assets_img_skybox_skybox_ny_png extends flash.display.BitmapData {}
@:bitmap("assets/img/skybox/skybox_nz.jpg") class __ASSET__assets_img_skybox_skybox_nz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/img/skybox/skybox_nz.png") class __ASSET__assets_img_skybox_skybox_nz_png extends flash.display.BitmapData {}
@:bitmap("assets/img/skybox/skybox_px.jpg") class __ASSET__assets_img_skybox_skybox_px_jpg extends flash.display.BitmapData {}
@:bitmap("assets/img/skybox/skybox_px.png") class __ASSET__assets_img_skybox_skybox_px_png extends flash.display.BitmapData {}
@:bitmap("assets/img/skybox/skybox_py.jpg") class __ASSET__assets_img_skybox_skybox_py_jpg extends flash.display.BitmapData {}
@:bitmap("assets/img/skybox/skybox_py.png") class __ASSET__assets_img_skybox_skybox_py_png extends flash.display.BitmapData {}
@:bitmap("assets/img/skybox/skybox_pz.jpg") class __ASSET__assets_img_skybox_skybox_pz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/img/skybox/skybox_pz.png") class __ASSET__assets_img_skybox_skybox_pz_png extends flash.display.BitmapData {}
@:bitmap("assets/train/barrieres_bois.jpg") class __ASSET__assets_train_barrieres_bois_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/barrieres_bois_n.jpg") class __ASSET__assets_train_barrieres_bois_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/bat_console_murs_ext_lm.jpg") class __ASSET__assets_train_bat_console_murs_ext_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/bat_console_murs_lm.jpg") class __ASSET__assets_train_bat_console_murs_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/bat_lm.jpg") class __ASSET__assets_train_bat_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/bosquet_grass.jpg") class __ASSET__assets_train_bosquet_grass_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/bosquet_grass.png") class __ASSET__assets_train_bosquet_grass_png extends flash.display.BitmapData {}
@:bitmap("assets/train/bottes_paille.jpg") class __ASSET__assets_train_bottes_paille_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/bottes_paille_face.jpg") class __ASSET__assets_train_bottes_paille_face_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/champ_ble.jpg") class __ASSET__assets_train_champ_ble_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/champ_ble.png") class __ASSET__assets_train_champ_ble_png extends flash.display.BitmapData {}
@:bitmap("assets/train/chariot_planche.jpg") class __ASSET__assets_train_chariot_planche_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/chariot_planche_n.jpg") class __ASSET__assets_train_chariot_planche_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/chariot_roue.jpg") class __ASSET__assets_train_chariot_roue_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/chariot_roue_n.jpg") class __ASSET__assets_train_chariot_roue_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/console.jpg") class __ASSET__assets_train_console_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/console_n.jpg") class __ASSET__assets_train_console_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap5_nx.jpg") class __ASSET__assets_train_cubemap5_nx_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap5_ny.jpg") class __ASSET__assets_train_cubemap5_ny_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap5_nz.jpg") class __ASSET__assets_train_cubemap5_nz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap5_px.jpg") class __ASSET__assets_train_cubemap5_px_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap5_py.jpg") class __ASSET__assets_train_cubemap5_py_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap5_pz.jpg") class __ASSET__assets_train_cubemap5_pz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_nx.jpg") class __ASSET__assets_train_cubemap_nx_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_ny.jpg") class __ASSET__assets_train_cubemap_ny_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_nz.jpg") class __ASSET__assets_train_cubemap_nz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_px.jpg") class __ASSET__assets_train_cubemap_px_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_py.jpg") class __ASSET__assets_train_cubemap_py_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_pz.jpg") class __ASSET__assets_train_cubemap_pz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_vitres_nx.jpg") class __ASSET__assets_train_cubemap_vitres_nx_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_vitres_ny.jpg") class __ASSET__assets_train_cubemap_vitres_ny_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_vitres_nz.jpg") class __ASSET__assets_train_cubemap_vitres_nz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_vitres_px.jpg") class __ASSET__assets_train_cubemap_vitres_px_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_vitres_py.jpg") class __ASSET__assets_train_cubemap_vitres_py_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cubemap_vitres_pz.jpg") class __ASSET__assets_train_cubemap_vitres_pz_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cuir.jpg") class __ASSET__assets_train_cuir_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/cuir_n.jpg") class __ASSET__assets_train_cuir_n_jpg extends flash.display.BitmapData {}
@:file("assets/train/debug.txt") class __ASSET__assets_train_debug_txt extends flash.utils.ByteArray {}
@:bitmap("assets/train/disneyland_paris.jpg") class __ASSET__assets_train_disneyland_paris_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/flechage.jpg") class __ASSET__assets_train_flechage_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/flechage.png") class __ASSET__assets_train_flechage_png extends flash.display.BitmapData {}
@:bitmap("assets/train/flechage2.jpg") class __ASSET__assets_train_flechage2_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/flechage2.png") class __ASSET__assets_train_flechage2_png extends flash.display.BitmapData {}
@:bitmap("assets/train/grass.jpg") class __ASSET__assets_train_grass_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/grass.png") class __ASSET__assets_train_grass_png extends flash.display.BitmapData {}
@:bitmap("assets/train/grillage.jpg") class __ASSET__assets_train_grillage_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/grillage.png") class __ASSET__assets_train_grillage_png extends flash.display.BitmapData {}
@:bitmap("assets/train/lens2.png") class __ASSET__assets_train_lens2_png extends flash.display.BitmapData {}
@:bitmap("assets/train/lens3.png") class __ASSET__assets_train_lens3_png extends flash.display.BitmapData {}
@:bitmap("assets/train/lens4.png") class __ASSET__assets_train_lens4_png extends flash.display.BitmapData {}
@:bitmap("assets/train/lens5.png") class __ASSET__assets_train_lens5_png extends flash.display.BitmapData {}
@:bitmap("assets/train/lens6.png") class __ASSET__assets_train_lens6_png extends flash.display.BitmapData {}
@:bitmap("assets/train/metal_rouille.jpg") class __ASSET__assets_train_metal_rouille_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/metal_rouille_n.jpg") class __ASSET__assets_train_metal_rouille_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/metal_tache.jpg") class __ASSET__assets_train_metal_tache_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/metal_tache_n.jpg") class __ASSET__assets_train_metal_tache_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/murs_wood.jpg") class __ASSET__assets_train_murs_wood_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/murs_wood_n.jpg") class __ASSET__assets_train_murs_wood_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/no_signal.jpg") class __ASSET__assets_train_no_signal_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/paille_alpha.jpg") class __ASSET__assets_train_paille_alpha_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/paille_alpha.png") class __ASSET__assets_train_paille_alpha_png extends flash.display.BitmapData {}
@:bitmap("assets/train/pile_bois.jpg") class __ASSET__assets_train_pile_bois_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/pile_bois_n.jpg") class __ASSET__assets_train_pile_bois_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/planches.jpg") class __ASSET__assets_train_planches_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/planches_n.jpg") class __ASSET__assets_train_planches_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/poteaux.jpg") class __ASSET__assets_train_poteaux_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/poteaux_n.jpg") class __ASSET__assets_train_poteaux_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/poubelle.jpg") class __ASSET__assets_train_poubelle_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/poubelle_n.jpg") class __ASSET__assets_train_poubelle_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/rochers_big.jpg") class __ASSET__assets_train_rochers_big_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/rochers_big_n.jpg") class __ASSET__assets_train_rochers_big_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/rock_tunnel.jpg") class __ASSET__assets_train_rock_tunnel_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/rock_tunnel_n.jpg") class __ASSET__assets_train_rock_tunnel_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/sacs_sable.jpg") class __ASSET__assets_train_sacs_sable_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/sacs_sable_n.jpg") class __ASSET__assets_train_sacs_sable_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/sapin_leaves.jpg") class __ASSET__assets_train_sapin_leaves_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/sapin_leaves.png") class __ASSET__assets_train_sapin_leaves_png extends flash.display.BitmapData {}
@:bitmap("assets/train/sapin_trunk_up.jpg") class __ASSET__assets_train_sapin_trunk_up_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/sapin_trunk_up_n.jpg") class __ASSET__assets_train_sapin_trunk_up_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/skydome.jpg") class __ASSET__assets_train_skydome_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/smoke.png") class __ASSET__assets_train_smoke_png extends flash.display.BitmapData {}
@:bitmap("assets/train/sol_metal.jpg") class __ASSET__assets_train_sol_metal_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/sol_metal_n.jpg") class __ASSET__assets_train_sol_metal_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain1.jpg") class __ASSET__assets_train_terrain1_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain1_lm.jpg") class __ASSET__assets_train_terrain1_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain1_n.jpg") class __ASSET__assets_train_terrain1_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain2.jpg") class __ASSET__assets_train_terrain2_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain2_lm.jpg") class __ASSET__assets_train_terrain2_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain2_n.jpg") class __ASSET__assets_train_terrain2_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain3.jpg") class __ASSET__assets_train_terrain3_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain3_lm.jpg") class __ASSET__assets_train_terrain3_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain3_n.jpg") class __ASSET__assets_train_terrain3_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain4.jpg") class __ASSET__assets_train_terrain4_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain4_lm.jpg") class __ASSET__assets_train_terrain4_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain4_n.jpg") class __ASSET__assets_train_terrain4_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain_clotures_lm.jpg") class __ASSET__assets_train_terrain_clotures_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain_escalier_lm.jpg") class __ASSET__assets_train_terrain_escalier_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/terrain_tunnel_lm.jpg") class __ASSET__assets_train_terrain_tunnel_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/toit_bois.jpg") class __ASSET__assets_train_toit_bois_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/toit_bois_n.jpg") class __ASSET__assets_train_toit_bois_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/tole.jpg") class __ASSET__assets_train_tole_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/tole_n.jpg") class __ASSET__assets_train_tole_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/tonneau.jpg") class __ASSET__assets_train_tonneau_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/tonneau_n.jpg") class __ASSET__assets_train_tonneau_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/tracteur.jpg") class __ASSET__assets_train_tracteur_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/tracteur_n.jpg") class __ASSET__assets_train_tracteur_n_jpg extends flash.display.BitmapData {}
@:file("assets/train/Train.babylon") class __ASSET__assets_train_train_babylon extends flash.utils.ByteArray {}
@:file("assets/train/Train.babylon.manifest") class __ASSET__assets_train_train_babylon_manifest extends flash.utils.ByteArray {}
@:bitmap("assets/train/train_4.jpg") class __ASSET__assets_train_train_4_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/train_4_n.jpg") class __ASSET__assets_train_train_4_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/train_cote.jpg") class __ASSET__assets_train_train_cote_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/train_cote_n.jpg") class __ASSET__assets_train_train_cote_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/train_loco_lm.jpg") class __ASSET__assets_train_train_loco_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/train_wagon_lm.jpg") class __ASSET__assets_train_train_wagon_lm_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/tronc.jpg") class __ASSET__assets_train_tronc_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/tronc_face.jpg") class __ASSET__assets_train_tronc_face_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/tronc_face_n.jpg") class __ASSET__assets_train_tronc_face_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/tronc_n.jpg") class __ASSET__assets_train_tronc_n_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/verre_lampes.jpg") class __ASSET__assets_train_verre_lampes_jpg extends flash.display.BitmapData {}
@:bitmap("assets/train/water_n.jpg") class __ASSET__assets_train_water_n_jpg extends flash.display.BitmapData {}


#end
