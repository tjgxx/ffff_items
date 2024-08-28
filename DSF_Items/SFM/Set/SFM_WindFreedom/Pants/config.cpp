class CfgPatches
{
	class SFM_WFPants
	{
		units[]=
		{
			"FFFF_Clothing_Pants_FreedomPants_Green",
			"FFFF_Clothing_Pants_FreedomPants_Blue",
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
			"DZ_Weapons_Lights",
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class GorkaPants_Summer;
	class SFM_WFPants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="Freedom Pants";
		descriptionShort="The Freedom Pants are the perfect choice for survival in the unpredictable conditions of the District. Made from durable and wear-resistant materials, they provide reliable protection from wind, moisture and cold. Reinforced areas on the knees and waist make them a reliable and durable choice for moving on uneven terrain. Multifunctional pockets allow you to conveniently store the necessary survival items, and a comfortable cut ensures freedom of movement in any conditions.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\SFM_WFPants_g.p3d";
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		attachments[]=
		{
			"Wallet"
		};
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={4,3};
		absorbency=0.2;
		heatIsolation=0.9;
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_co.rvmat",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\SFM_WFPants.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\SFM_WFPants.p3d";
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
							1.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_destruct.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_damage.rvmat"
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
	class FFFF_Clothing_Pants_FreedomPants_Green: SFM_WFPants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.paa"
		};
	};
	class FFFF_Clothing_Pants_FreedomPants_Blue: SFM_WFPants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Pants\data\WF_Set_pants_merc_02_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_merc_co.paa"
		};
	};
};
