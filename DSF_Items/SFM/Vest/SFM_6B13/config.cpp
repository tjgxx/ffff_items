class CfgPatches
{
	class SFM_6B13
	{
		units[]=
		{
			"FFFF_Armor_Vests_6B13_Tan",
			"FFFF_Armor_Vests_6B13_Flora",
			"FFFF_Armor_Vests_6B13_WoodlandCamo",
			"FFFF_Armor_Vests_6B13_Black",
			"FFFF_Armor_Vests_6B13_Green",
			"FFFF_Armor_Vests_6B13_Brown",
			"FFFF_Armor_Vests_6B13_Blue"
		};
		weapons[]={};
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
	};
};
class CfgVehicles
{
	class PlateCarrierVest;
	class SFM_6B13: PlateCarrierVest
	{
		scope=0;
		displayName="6B13 Vest";
		descriptionShort="The combined arms assault Kevlar vest provides moderate protection for personnel in combat units such as ground forces, airborne forces, and marines. This vest is designed to shield vital organs from small arms bullets, shell fragments, mines, grenades, and bladed weapons. While it offers some protection, it primarily reduces the severity of behind-the-armor contusion injuries during combat missions.";
		model="ffff_items\DSF_Items\SFM\Vest\SFM_6B13\SFM_6B13_g.p3d";
		attachments[]={};
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=3000;
		itemSize[]={3,5};
		itemsCargoSize[]={0,0};
		repairableWithKits[]={21};
		quickBarBonus=1;
		absorbency=0.1;
		heatIsolation=0.25;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13_Desert_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Vest\SFM_6B13\SFM_6B13.p3d";
			female="ffff_items\DSF_Items\SFM\Vest\SFM_6B13\SFM_6B13.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.6;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.7;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
	};
	class FFFF_Armor_Vests_6B13_Tan: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13_Desert_Dirt_co.paa"
		};
	};
	class FFFF_Armor_Vests_6B13_Flora: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13_Flora_Dirt_co.paa"
		};
	};
	class FFFF_Armor_Vests_6B13_WoodlandCamo: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13_Pixel_Dirt_co.paa"
		};
	};
	class FFFF_Armor_Vests_6B13_Black: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13_bandit_co.paa"
		};
	};
	class FFFF_Armor_Vests_6B13_Green: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13_clearsky_co.paa"
		};
	};
	class FFFF_Armor_Vests_6B13_Brown: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13_fs_co.paa"
		};
	};
	class FFFF_Armor_Vests_6B13_Blue: SFM_6B13
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_6B13\data\6b13_merc_co.paa"
		};
	};
};
