class CfgPatches
{
	class SFM_SASPants
	{
		units[]=
		{
			"FFFF_Clothing_Pants_SASPants_Green1",
			"FFFF_Clothing_Pants_SASPants_Green2",
			"FFFF_Clothing_Pants_SASPants_Green3",
			"FFFF_Clothing_Pants_SASPants_Green4",
			"FFFF_Clothing_Pants_SASPants_Blue",
			"FFFF_Clothing_Pants_SASPants_Black",
			"FFFF_Clothing_Pants_SASPants_Brown",
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
	class SFM_SASPants_Base: GorkaPants_Summer
	{
		displayName="SAS Pants";
		descriptionShort="This is a special equipment designed to provide comfort and protection during tactical operations. Made of durable materials, they are resistant to wear and damage, providing reliable protection for the legs in various conditions. Combat pants are usually equipped with special pockets for storing equipment and other accessories, and have reinforced areas for additional protection.";
		scope=0;
		model="ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\SFM_SASPants_g.p3d";
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
		heatIsolation=0.80000001;
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_pants_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_pants_co.rvmat",
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\kneepad_co.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\SFM_SASPants_m.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\SFM_SASPants_f.p3d";
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
								"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_pants_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\kneepad_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_pants_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\kneepad_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\SAS_Pants_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\kneepad_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\SAS_Pants_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\kneepad_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\SAS_Pants_destruct.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\kneepad_destruct.rvmat"
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
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.89999998;
					};
					class Blood
					{
						damage=0.89999998;
					};
					class Shock
					{
						damage=0.89999998;
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
	class FFFF_Clothing_Pants_SASPants_Green1: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\SAS_Pasnts_Stalker_3.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class FFFF_Clothing_Pants_SASPants_Green2: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\SAS_Pasnts_Stalker_4.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class FFFF_Clothing_Pants_SASPants_Green3: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\SAS_Pasnts_Stalker_5.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class FFFF_Clothing_Pants_SASPants_Green4: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\SAS_Pasnts_Stalker_6.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class FFFF_Clothing_Pants_SASPants_Blue: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\SAS_pants_merc_02.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class FFFF_Clothing_Pants_SASPants_Black: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\SAS_pants_bandit.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
	class FFFF_Clothing_Pants_SASPants_Brown: SFM_SASPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\SAS_pants_rene.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_SAS\Pants\data\sas_knees_co.paa"
		};
	};
};
