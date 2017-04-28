	class SOS_wdl_rs: U_B_CombatUniform_mcam_vest
	{
		scope=2;
		displayName="Woodland Rolled Sleeves";
		picture="\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
		hiddenSelections[]=
		{"camo","insignia"};
		hiddenSelectionsTextures[]={"a3\characters_f\blufor\data\clothing_wdl_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="SOS_Rifleman_wdl";
			containerClass="Supply40";
			mass=40;
		};
	};
	class SOS_Stealth_wdl: U_B_CTRG_Soldier_F
	{
		scope = 2;
		displayName = "Stealth Woodland";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		DLC = "Expansion";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
		hiddenSelections[] = {"Camo","insignia"};
		hiddenSelectionsTextures[] = {"a3\characters_f\blufor\data\clothing_wdl_co.paa"};
		class ItemInfo: UniformItem
		{
			scope = 2;
			uniformModel = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_soldier.p3d";
			uniformClass = "SOS_Rifleman_Stealth_wdl";
			containerClass = "supply80";
			armor = 2;
			mass = 1;
			hiddenSelections[] = {"Camo","insignia"};
			hiddenSelectionsTextures[] = {"a3\characters_f\blufor\data\clothing_wdl_co.paa"};
		};
	};
	class SOS_Splinter : U_BG_Guerrilla_6_1 {
		author = "[S.O.S] Catshannon";
		scope = 2;
		weaponPoolAvailable = 1;	
		displayName = "SOS Splinter Camo";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SOS_Vests\Data\Uniforms\SplinterGue.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SOS_Rifleman_Splinter";	
			containerClass = "Supply40";
			mass = 40;
		};
	};	
	class SOS_Desert : U_BG_Guerrilla_6_1 {
		author = "[S.O.S] Catshannon";
		scope = 2;
		weaponPoolAvailable = 1;	
		displayName = "SOS Desert Camo";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"SOS_Vests\Data\Uniforms\DesertGue.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SOS_Rifleman_Desert";	
			containerClass = "Supply40";
			mass = 40;
		};
	};		
	class SOS_Winter: U_BG_Guerrilla_6_1 {
		author = "[S.O.S] Catshannon";
		scope = 2;
		weaponPoolAvailable = 1;		
		displayName = "SOS Winter Camo";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"SOS_Vests\Data\Uniforms\WinterGue.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SOS_Rifleman_Winter";
			containerClass = "Supply40";
			mass = 40;
		};
	};		
	class SOS_BW: U_BG_Guerrilla_6_1 {
		author = "[S.O.S] Henri";
		scope = 2;
		weaponPoolAvailable = 1;		
		displayName = "SOS BW Camo";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"SOS_Vests\Data\Uniforms\FleckTarn.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SOS_Rifleman_BW";			
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class SOS_Lush: U_BG_Guerrilla_6_1 {
		author = "[S.O.S] Henri";
		scope = 2;
		weaponPoolAvailable = 1;		
		displayName = "SOS Lush Camo";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"SOS_Vests\Data\Uniforms\LushCam.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SOS_Rifleman_Lush";			
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class SOS_Lush2: U_BG_Guerrilla_6_1 {
		author = "[S.O.S] Henri";
		scope = 2;
		weaponPoolAvailable = 1;		
		displayName = "SOS Lush BW Camo";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"SOS_Vests\Data\Uniforms\LushCam2.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SOS_Rifleman_Lush2";			
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class SOS_Urban: U_BG_Guerrilla_6_1 {
		author = "[S.O.S] Henri";
		scope = 2;
		weaponPoolAvailable = 1;		
		displayName = "SOS Urban Camo";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"SOS_Vests\Data\Uniforms\UrbanCam.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SOS_Rifleman_Urban";			
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class SOS_Urban2: U_BG_Guerrilla_6_1 {
		author = "[S.O.S] Henri";
		scope = 2;
		weaponPoolAvailable = 1;		
		displayName = "SOS Urban BW Camo";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"SOS_Vests\Data\Uniforms\UrbanCam2.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SOS_Rifleman_Urban2";			
			containerClass = "Supply40";
			mass = 40;
		};
	};		
	class SOS_UrbanRugged: U_BG_Guerrilla_6_1 {
		author = "[S.O.S] Henri";
		scope = 2;
		weaponPoolAvailable = 1;		
		displayName = "SOS Rugged Urban Camo";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"SOS_Vests\Data\Uniforms\UrbanRugged.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SOS_Rifleman_UrbanRugged";			
			containerClass = "Supply40";
			mass = 40;
		};
	};		
	class SOS_LushRugged: U_BG_Guerrilla_6_1 {
		author = "[S.O.S] Henri";
		scope = 2;
		weaponPoolAvailable = 1;		
		displayName = "SOS Rugged Lush Camo";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"SOS_Vests\Data\Uniforms\LushRugged.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SOS_Rifleman_LushRugged";			
			containerClass = "Supply40";
			mass = 40;
		};
	};			
	class SOS_AtacLe: U_BG_Guerrilla_6_1 {
		author = "[S.O.S] Henri";
		scope = 2;
		weaponPoolAvailable = 1;		
		displayName = "SOS Atac LE Camo";
		picture = "\A3\characters_f_bootcamp\data\ui\icon_U_G_guerrilla_6_1_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelectionsTextures[] = {"SOS_Vests\Data\Uniforms\AtacLeCam.paa"};
		class ItemInfo: UniformItem {
			uniformModel = "-";
			uniformClass = "SOS_Rifleman_AtacLe";			
			containerClass = "Supply40";
			mass = 40;
		};
	};