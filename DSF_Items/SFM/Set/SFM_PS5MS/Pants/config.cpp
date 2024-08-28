class CfgPatches
{
	class SFM_PS5MS_Pants
	{
		units[]=
		{
			"FFFF_Clothing_Pants_PS5MSPants_Grey",
			"FFFF_Clothing_Pants_PS5MSPants_Blue",
			"FFFF_Clothing_Pants_PS5MSPants_Green",
			"FFFF_Clothing_Pants_PS5MSPants_Black"
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
	class GorkaPants_Summer;
	class SFM_PS5MS_Pants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="PS5MS Pants";
		descriptionShort="The PS5MS pants are the perfect choice for survival in the unpredictable conditions of the District. Made of durable and wear-resistant material, they provide reliable protection from moisture, wind and cold. Reinforced areas on the knees and waist make them the perfect choice for moving on uneven terrain. Numerous functional pockets allow you to conveniently store the necessary survival items and a comfortable cut ensures freedom of movement in any situation.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\SFM_Pants_g.p3d";
		attachments[]=
		{
			"Wallet"
		};
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={4,3};
		weight=530;
		ragQuantity=3;
		absorbency=0.2;
		heatIsolation=0.80000001;
		quickBarBonus=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\data\Pants_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\data\Pants_co.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\SFM_Pants.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\SFM_Pants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=150;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\data\Pants_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\data\Pants_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\data\Pants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\data\Pants_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\data\Pants_destruct.rvmat"
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
						damage=0.9;
					};
					class Blood
					{
						damage=0.9;
					};
					class Shock
					{
						damage=0.9;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.9;
					};
					class Blood
					{
						damage=0.9;
					};
					class Shock
					{
						damage=0.9;
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
	class FFFF_Clothing_Pants_PS5MSPants_Grey: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\data\Pants_co.paa"
		};
	};
	class FFFF_Clothing_Pants_PS5MSPants_Blue: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\data\Pants_merc_02.paa"
		};
	};
	class FFFF_Clothing_Pants_PS5MSPants_Green: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\data\Pants_neutral.paa"
		};
	};
	class FFFF_Clothing_Pants_PS5MSPants_Black: SFM_PS5MS_Pants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_PS5MS\Pants\data\Pants_Bandit.paa"
		};
	};
};
