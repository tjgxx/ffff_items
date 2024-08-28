class CfgPatches
{
	class SFM_ExoBelt
	{
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Belts",
			"DZ_Characters_Glasses",
			"DZ_Characters_Gloves",
			"DZ_Characters_Headgear",
			"DZ_Characters_Heads",
			"DZ_Characters_Masks",
			"DZ_Characters_Pants",
			"DZ_Characters_Shoes",
			"DZ_Characters_Tops",
			"DZ_Characters_Vests"
		};
		units[]=
		{
			"FFFF_Clothing_Belts_ExoBelt",
			"FFFF_Consumables_ExoBattery_1",
			"FFFF_Consumables_ExoBattery_2",
			"FFFF_Clothing_Bags_ExoBackpack"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class CivilianBelt;
	class SFM_ExoBelt_Base: CivilianBelt
	{
		scope=0;
		displayName="Exoskeleton Belt";
		descriptionShort="The exoskeleton belt for ferals is a revolutionary piece of equipment that enhances physical abilities in the District. Made from unique nanomaterials, this belt provides an incredible increase in endurance and strength, allowing ferals to demonstrate outstanding physical abilities in the most extreme conditions. Built-in neural interfaces are synchronized with the muscular system, ensuring maximum efficiency of movements and reactions. This equipment has become a real breakthrough in technologies for protection and enhancing physical abilities.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Belts\SFM_ExoBelt_g.p3d";
		vehicleClass="Clothing";
		simulation="clothing";
		inventorySlot="Hips";
		itemInfo[]=
		{
			"Clothing",
			"Hips"
		};
		attachments[]=
		{
			"ExoAcc"
		};
		itemSize[]={4,2};
		itemsCargoSize[]={10,1};
		weight=1500;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		repairableWithKits[]={};
		repairCosts[]={};
		simpleHiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_ca.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_ca.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]={{1.1,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_ca.rvmat","ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat","ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_ca.rvmat"}},{0.69999999,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_ca.rvmat","ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat","ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_ca.rvmat"}},{0.5,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_damage.rvmat","ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat","ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_damage.rvmat"}},{0.30000001,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_damage.rvmat","ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat","ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_damage.rvmat"}},{0.1,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_destruct.rvmat","ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_destruct.rvmat","ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_pah_destruct.rvmat"}}};
				};
			};
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Belts\SFM_ExoBelt.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Belts\SFM_ExoBelt.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="WorkingGloves_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="WorkingGloves_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FFFF_Clothing_Belts_ExoBelt: SFM_ExoBelt_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Belts\data\tb_belt_ca.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.paa"
		};
	};
	class FFFF_Consumables_ExoBattery_1: Inventory_Base
	{
		scope=2;
		displayName="High-Capacity Battery";
		descriptionShort="";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\exo_acc_01.p3d";
		inventorySlot[]=
		{
			"ExoAcc"
		};
		weight=1000;
		itemSize[]={1,2};
		quantityBar=1;
		stackedUnit="percentage";
		varQuantityInit=8000;
		varQuantityMin=0;
		varQuantityMax=8000;
		varQuantityDestroyOnMin=0;
		rotationFlags=17;
		itemBehaviour=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]={{1,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"}},{0.69999999,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"}},{0.5,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"}},{0.30000001,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"}},{0,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_destruct.rvmat"}}};
				};
			};
		};
	};

	class FFFF_Consumables_ExoBattery_2: Inventory_Base
	{
		scope=2;
		displayName="High-Capacity Battery";
		descriptionShort="";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\Exo_Acc_02_01.p3d";
		inventorySlot[]=
		{
			"ExoAcc"
		};
		weight=1000;
		itemSize[]={1,2};
		quantityBar=1;
		stackedUnit="percentage";
		varQuantityInit=8000;
		varQuantityMin=0;
		varQuantityMax=8000;
		varQuantityDestroyOnMin=0;
		rotationFlags=17;
		itemBehaviour=1;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]={{1,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"}},{0.69999999,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"}},{0.5,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"}},{0.30000001,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"}},{0,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_destruct.rvmat"}}};
				};
			};
		};
	};
	class FFFF_Clothing_Bags_ExoBackpack: Inventory_Base
	{
		scope=2;
		displayName="Exoskeleton Backpack";
		descriptionShort="";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\ExoAttBag.p3d";
		inventorySlot[]=
		{
			"ExoBackpack"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_ca.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_skelet_ca.paa"
		};
		weight=5000;
		itemSize[]={5,9};
		itemsCargoSize[]={7,11};
		rotationFlags=17;
		itemBehaviour=1;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=800;
					healthLevels[]={{1,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_ca.rvmat"}},{0.69999999,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_ca.rvmat"}},{0.5,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_damage.rvmat"}},{0.30000001,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_damage.rvmat"}},{0,{"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\BackPack\data\exo_backpack_destruct.rvmat"}}};
				};
			};
		};
	};
};
