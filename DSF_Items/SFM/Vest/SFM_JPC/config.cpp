class CfgPatches
{
	class SFM_JPC_Vest
	{
		units[]=
		{
			"FFFF_Armor_Vests_JPCVest_Black",
			"FFFF_Armor_Vests_JPCVest_Green",
			"FFFF_Armor_Vests_JPCVest_Tan",
			"FFFF_Armor_Vests_JPCVest_Brown",
			"FFFF_Armor_Vests_JPCVest_Blue",
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Vests",
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class PlateCarrierVest;
	class SFM_JPC_Vest: PlateCarrierVest
	{
		scope=0;
		visibilityModifier=0.94999999;
		displayName="JPC Vest";
		descriptionShort="Lightweight Jumpable Plate Carrier body armor with built-in weapon and administrative pouches. Thus, in addition to protective functions, the vest can also perform unloading functions.";
		model="ffff_items\DSF_Items\SFM\Vest\SFM_JPC\SFM_JPC_g.p3d";
		inventorySlot="Vest";
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		itemSize[]={4,4};
		itemsCargoSize[]={0,0};
		quickBarBonus=3;
		absorbency=0.1;
		heatIsolation=0.25;
		repairableWithKits[]={20};
		repairCosts[]={};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_JPC\data\JPC_green.paa"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Vest\SFM_JPC\SFM_JPC.p3d";
			female="ffff_items\DSF_Items\SFM\Vest\SFM_JPC\SFM_JPC.p3d";
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
								"ffff_items\DSF_Items\SFM\Vest\SFM_JPC\data\JPC.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_JPC\data\JPC.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_JPC\data\JPC_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_JPC\data\JPC_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_JPC\data\JPC_destruct.rvmat"
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
						damage=0.45;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
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
						damage=0.25;
					};
				};
			};
		};
	};
	class FFFF_Armor_Vests_JPCVest_Black: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_JPC\data\JPC_black.paa"
		};
	};
	class FFFF_Armor_Vests_JPCVest_Green: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_JPC\data\JPC_green.paa"
		};
	};
	class FFFF_Armor_Vests_JPCVest_Tan: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_JPC\data\JPC_tan.paa"
		};
	};
	class FFFF_Armor_Vests_JPCVest_Brown: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_JPC\data\JPC_brown.paa"
		};
	};
	class FFFF_Armor_Vests_JPCVest_Blue: SFM_JPC_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_JPC\data\JPC_Merc.paa"
		};
	};
};
