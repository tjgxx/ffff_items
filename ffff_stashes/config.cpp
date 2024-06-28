class CfgPatches
{
	class ffff_stashes
	{
		requiredVersion=0.1;
		requiredAddons[]= {
			"DZ_Data", 
			"DZ_Gear_Camping", 
			"DZ_Gear_Containers", 
			"DZ_Gear_Cooking",
			"DZ_Scripts",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"mmg_storage"
		};
	};
};

class CfgMods
{
	class ffff_stashes
	{	
		dir = "ffff_stashes";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ffff_stashes";
		author = "Rowan";
		version = "1.5";
		extra = 0;
		type = "mod";
		dependencies[]={"World"};
		
		class defs
		{
            class worldScriptModule
            {
                value = "";
                files[] = {"ffff_items/ffff_stashes/Scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	/*
	
		STASH CONTAINERS
	
	*/

	class Inventory_Base;

	class FFFF_Stash_Base : Inventory_Base {};

	class FFFF_CanvasBagStash_T1 : FFFF_Stash_Base
	{
		scope=2;
		model="DZ\characters\backpacks\CanvasBag_g.p3d";
		displayName="Stashed Bag";
        class Cargo {
            itemsCargoSize[]={5,10};
        };
		descriptionShort="Someone stashed this bag. Wonder if there's anything good in it..."; 
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000000;
					healthLevels[]=
					{	
						{1.0,{"DZ\characters\backpacks\Data\CanvasBag_medical.rvmat"}},
						{0.7,{"DZ\characters\backpacks\Data\CanvasBag_medical.rvmat"}},
						{0.5,{"DZ\characters\backpacks\Data\CanvasBag_medical_damage.rvmat"}},
						{0.30000001,{"DZ\characters\backpacks\Data\CanvasBag_medical_damage.rvmat"}},
						{0,{"DZ\characters\backpacks\Data\CanvasBag_medical_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class FFFF_CanvasBagStash_T2 : FFFF_CanvasBagStash_T1 {};
	class FFFF_CanvasBagStash_T3 : FFFF_CanvasBagStash_T1 {};
	class FFFF_CanvasBagStash_T4 : FFFF_CanvasBagStash_T1 {};

	class FFFF_ProtectorCaseStash_T1 : FFFF_Stash_Base
	{
		scope=2;		
		model="dz\gear\containers\Protector_Case.p3d";
		class Cargo {
			itemsCargoSize[]={5,5};
		}
		displayName="Stashed Protective Case";
		descriptionShort="Someone stashed this case. Wonder if there's anything good in it...";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000000;
					healthLevels[]=
					{	
						{1.0,{"DZ\gear\containers\data\Protector_Case.rvmat"}},
						{0.7,{"DZ\gear\containers\data\Protector_Case.rvmat"}},
						{0.5,{"DZ\gear\containers\data\Protector_Case_damage.rvmat"}},
						{0.30000001,{"DZ\gear\containers\data\Protector_Case_damage.rvmat"}},
						{0,{"DZ\gear\containers\data\Protector_Case_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class FFFF_ProtectorCaseStash_T2: FFFF_ProtectorCaseStash_T1{};
	class FFFF_ProtectorCaseStash_T3: FFFF_ProtectorCaseStash_T1{};
	class FFFF_ProtectorCaseStash_T4: FFFF_ProtectorCaseStash_T1{};

	class WoodenCrate;

	class FFFF_WoodenCrateStash_T1 : FFFF_Stash_Base
	{
		scope=2;
		model="DZ\gear\camping\wooden_case.p3d";
		class Cargo {
            itemsCargoSize[]={10,10};
        }
		displayName="Stashed Wooden Crate";
		descriptionShort="Someone stashed this crate. Wonder if there's anything good in it..." ;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000000;
					healthLevels[]=
					{	
						{1.0,{"DZ\gear\camping\data\wooden_case.rvmat"}},
						{0.7,{"DZ\gear\camping\data\wooden_case.rvmat"}},
						{0.5,{"DZ\gear\camping\data\wooden_case_damage.rvmat"}},
						{0.30000001,{"DZ\gear\camping\data\wooden_case_damage.rvmat"}},
						{0,{"DZ\gear\camping\data\wooden_case_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class FFFF_WoodenCrateStash_T2: FFFF_WoodenCrateStash_T1{};
	class FFFF_WoodenCrateStash_T3: FFFF_WoodenCrateStash_T1{};
	class FFFF_WoodenCrateStash_T4: FFFF_WoodenCrateStash_T1{};

	class FFFF_WeaponCrateStash_Base: FFFF_Stash_Base {
		scope=0;
		model="mmg_storage\data\crates\weapon_crate.p3d";
	};

	class FFFF_WeaponCrateStash_T1 : FFFF_WeaponCrateStash_Base {
		scope=2;
		rotationFlags=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"mmg_storage\data\crates\weapon_crate\weapon_crate_wood.paa"
		};
		class Cargo {
			itemsCargoSize[]={10,15};
		};
		displayName="Stashed Weapon Crate";
		descriptionShort="Someone stashed this weapon crate. Wonder if there's anything good in it..." ;
	};

	class FFFF_WeaponCrateStash_T2: FFFF_WeaponCrateStash_T1{};
	class FFFF_WeaponCrateStash_T3: FFFF_WeaponCrateStash_T1{};
	class FFFF_WeaponCrateStash_T4: FFFF_WeaponCrateStash_T1{}; 

	class FFFF_MedicBoxStash_Base : FFFF_Stash_Base 
	{
		scope=0;
		model="\mmg_storage\data\crates\army_box.p3d";
	};

	class FFFF_MedicBoxStash_T1 : FFFF_MedicBoxStash_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo",
			"decals"
		};
		hiddenSelectionsTextures[]=
		{
			"mmg_storage\data\crates\army_box\army_box_grey.paa",
			"mmg_storage\data\crates\army_box\medic_decals.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,20};
		};
		displayName="Stashed Med Crate";
		descriptionShort="Someone stashed this med crate. Wonder if there's anything good in it...";
	};

	class FFFF_MedicBoxStash_T2 : FFFF_MedicBoxStash_T1{};
	class FFFF_MedicBoxStash_T3 : FFFF_MedicBoxStash_T1{};
	class FFFF_MedicBoxStash_T4 : FFFF_MedicBoxStash_T1{};

	class FFFF_GrenadeCaseStash_Base : FFFF_Stash_Base
	{
		scope=0;
		model="\mmg_storage\data\items\grenade_case.p3d";
	};

	class FFFF_GrenadeCaseStash_T1 : FFFF_GrenadeCaseStash_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo_box",
			"camo_foam"
		};
		hiddenSelectionsTextures[]=
		{
			"mmg_storage\data\items\grenade_case\Grenadecase_green.paa",
			"mmg_storage\data\items\grenade_case\foam_base.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={4,4};
		};
		displayName="Stashed Grenade Case";
		descriptionShort="Someone stashed this grenade case. Wonder if there's anything good in it...";
	};

	class FFFF_GrenadeCaseStash_T2 : FFFF_GrenadeCaseStash_T1{};
	class FFFF_GrenadeCaseStash_T3 : FFFF_GrenadeCaseStash_T1{};
	class FFFF_GrenadeCaseStash_T4 : FFFF_GrenadeCaseStash_T1{};

	class FFFF_SupplyCrateStash_Base : FFFF_Stash_Base
	{
		scope=0;
		model="\mmg_storage\data\crates\crate03.p3d";
		physLayer="item_large";
	};

	class FFFF_SupplyCrateStash_T1 : FFFF_SupplyCrateStash_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"mmg_storage\data\crates\crate03\crate03_wood.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,20};
		};
		displayName="Stashed Supply Crate";
		descriptionShort="Someone stashed this supply crate. Wonder if there's anything good in it...";
	};

	class FFFF_SupplyCrateStash_T2 : FFFF_SupplyCrateStash_T1{};
	class FFFF_SupplyCrateStash_T3 : FFFF_SupplyCrateStash_T1{};
	class FFFF_SupplyCrateStash_T4 : FFFF_SupplyCrateStash_T1{};

	class FFFF_PaletteStorageStash_Base : FFFF_Stash_Base
	{
		scope=0;
		model="\mmg_storage\data\crates\palette_storage.p3d";
		physLayer="item_large";
		carveNavmesh=1;
	};

	class FFFF_PaletteStorageStash_T1 : FFFF_PaletteStorageStash_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"straps",
			"plain",
			"palette",
			"net"
		};
		hiddenSelectionsTextures[]=
		{
			"mmg_storage\data\crates\palette_storage\palette_storage_straps.paa",
			"mmg_storage\data\crates\palette_storage\palette_storage_plain.paa",
			"mmg_storage\data\crates\palette_storage\palette_storage_palette.paa",
			"DZ\structures\military\improvised\data\camonet_east_co.paa"
		};
		class Cargo
		{
			itemsCargoSize[]={10,50};
		};
		displayName="Stashed Palette";
		descriptionShort="Someone stashed this palette. Wonder if there's anything good in it...";
	};

	class FFFF_PaletteStorageStash_T2 : FFFF_PaletteStorageStash_T1{};
	class FFFF_PaletteStorageStash_T3 : FFFF_PaletteStorageStash_T1{};
	class FFFF_PaletteStorageStash_T4 : FFFF_PaletteStorageStash_T1{};
};