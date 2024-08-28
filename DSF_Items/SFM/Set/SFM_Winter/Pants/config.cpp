class CfgPatches
{
	class SFM_WinterPants
	{
		units[]=
		{
			"FFFF_Clothing_Pants_WinterPants_Grey",
			"FFFF_Clothing_Pants_WinterPants_Brown",
			"FFFF_Clothing_Pants_WinterPants_Green",
			"FFFF_Clothing_Pants_WinterPants_DarkBrown",
			"FFFF_Clothing_Pants_WinterPants_Blue",
			"FFFF_Clothing_Pants_WinterPants_DarkGreen"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Tops",
			"DZ_Characters_Pants"
		};
	};
};
class CfgVehicles
{
	class GorkaPants_Summer;
	class SFM_WinterPants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="Winter Pants";
		descriptionShort="Winter pants with insulated lining are perfect for cold weather, retain heat, do not restrict movement, and have knee protection.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\SFM_WinterPants_g.p3d";
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
		itemSize[]={3,3};
		weight=530;
		ragQuantity=3;
		absorbency=0.60000002;
		heatIsolation=0.9;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_co.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\SFM_WinterPants.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\SFM_WinterPants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 150;
					healthLevels[] = {{1.0,{"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_co.rvmat"}},{0.7,{"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_co.rvmat"}},{0.5,{"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_damage.rvmat"}},{0.3,{"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_damage.rvmat"}},{0.0,{"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 0.9;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 0.9;
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
	class FFFF_Clothing_Pants_WinterPants_Grey: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_co.paa"
		};
	};
	class FFFF_Clothing_Pants_WinterPants_Brown: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_co2.paa"
		};
	};
	class FFFF_Clothing_Pants_WinterPants_Green: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_co3.paa"
		};
	};
	class FFFF_Clothing_Pants_WinterPants_DarkBrown: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_co4.paa"
		};
	};
	class FFFF_Clothing_Pants_WinterPants_Blue: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_merc.paa"
		};
	};
	class FFFF_Clothing_Pants_WinterPants_DarkGreen: SFM_WinterPants_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Pants\data\winter_pants_neutral.paa"
		};
	};
};
