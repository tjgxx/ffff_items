class CfgPatches
{
	class SFM_PlateVest
	{
		units[]=
		{
			"FFFF_Armor_Vests_PlateVest_Grey",
			"FFFF_Armor_Vests_PlateVest_Black",
			"FFFF_Armor_Vests_PlateVest_Blue",
			"FFFF_Armor_Vests_PlateVest_DarkGreen",
			"FFFF_Armor_Vests_PlateVest_Green",
			"FFFF_Armor_Vests_PlateVest_Tan"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class PlateCarrierVest;
	class SFM_PlateVest: PlateCarrierVest
	{
		scope=2;
		displayName="Plate Vest";
		descriptionShort="A comfortable vest with Kevlar sheets, does not restrict movement, is made of durable and resistant fabric, has several pockets for storing magazines, as well as adjustable fasteners, is convenient and practical in the zone.";
		model="ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\SFM_PlateVest_g.p3d";
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]=
		{
			"WalkieTalkie"
		};
		weight=5000;
		itemSize[]={4,4};
		itemsCargoSize[]={7,7};
		quickBarBonus=2;
		absorbency=0.1;
		heatIsolation=0.25;
		repairableWithKits[]={21};
		repairCosts[]={};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\tacvest1_stalker.paa"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\SFM_PlateVest.p3d";
			female="ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\SFM_PlateVest.p3d";
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
								"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\vest.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\vest.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\vest_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\vest_damaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\vest_ruined.rvmat"
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
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FFFF_Armor_Vests_PlateVest_Grey: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\tacvest1_bandit.paa"
		};
	};
	class FFFF_Armor_Vests_PlateVest_Black: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\tacvest1_dolg.paa"
		};
	};
	class FFFF_Armor_Vests_PlateVest_Blue: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\tacvest1_merc.paa"
		};
	};
	class FFFF_Armor_Vests_PlateVest_DarkGreen: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\tacvest1_neutral.paa"
		};
	};
	class FFFF_Armor_Vests_PlateVest_Green: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\tacvest1_stalker.paa"
		};
	};
	class FFFF_Armor_Vests_PlateVest_Tan: SFM_PlateVest
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Vest\SFM_PlateVest\data\tacvest1_1_co.paa"
		};
	};
};
