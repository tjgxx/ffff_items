class CfgPatches
{
	class SFM_SunrisePants
	{
		units[]=
		{
			"FFFF_Clothing_Pants_SunrisePants_Grey",
			"FFFF_Clothing_Pants_SunrisePants_Brown",
			"FFFF_Clothing_Pants_SunrisePants_Green"
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
			"DZ_Characters_Vests",
			"DZ_Weapons_Magazines"
		};
	};
};
class CfgVehicles
{
	class GorkaPants_Summer;
	class SFM_SunrisePants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="Zarya Pants";
		descriptionShort="The Zarya Pants offer reliable protection and freedom of movement in the dangerous conditions of the District. Made of durable and wear-resistant materials, these pants provide protection from cuts and bruises. Comfortable cut and functional pockets make them an ideal choice for ferals exploring the mysterious territories of the District.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\SFM_SunrisePants_g.p3d";
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		attachments[]=
		{
			"Wallet"
		};
		absorbency=0.2;
		heatIsolation=0.80000001;
		quickBarBonus=2;
		itemSize[]={2,2};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_co.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\SFM_SunrisePants.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\SFM_SunrisePants_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1.01,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.94999999;
					};
					class Blood
					{
						damage=0.94999999;
					};
					class Shock
					{
						damage=0.94999999;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.94999999;
					};
					class Blood
					{
						damage=0.94999999;
					};
					class Shock
					{
						damage=0.94999999;
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
	class FFFF_Clothing_Pants_SunrisePants_Grey: SFM_SunrisePants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_gray_co.paa"
		};
	};
	class FFFF_Clothing_Pants_SunrisePants_Brown: SFM_SunrisePants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_brown_co.paa"
		};
	};
	class FFFF_Clothing_Pants_SunrisePants_Green: SFM_SunrisePants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Pants\data\SunriseM1_Pants_co.paa"
		};
	};
};
