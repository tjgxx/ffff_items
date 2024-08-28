class CfgPatches
{
	class SFM_WinterSet
	{
		units[]=
		{
			"FFFF_Clothing_Jackets_WinterJacket_Grey",
			"FFFF_Clothing_Jackets_WinterJacket_Brown",
			"FFFF_Clothing_Jackets_WinterJacket_Green",
			"FFFF_Clothing_Jackets_WinterJacket_DarkBrown",
			"FFFF_Clothing_Jackets_WinterJacket_Blue",
			"FFFF_Clothing_Jackets_WinterJacket_DarkGreen"
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
	class GorkaEJacket_Flat;
	class SFM_WinterJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="Winter Jacket";
		descriptionShort="Winter jacket, perfect for cold weather. It keeps heat well and is windproof.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\SFM_WinterJacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={3,3};
		quickBarBonus=2;
		absorbency=0.050000001;
		heatIsolation=0.9;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co.rvmat"
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
								"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_destruct.rvmat"
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
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\SFM_WinterJacket.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\SFM_WinterJacket.p3d";
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
	class FFFF_Clothing_Jackets_WinterJacket_Grey: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_WinterJacket_Brown: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co2.paa"
		};
	};
	class FFFF_Clothing_Jackets_WinterJacket_Green: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co3.paa"
		};
	};
	class FFFF_Clothing_Jackets_WinterJacket_DarkBrown: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_co4.paa"
		};
	};
	class FFFF_Clothing_Jackets_WinterJacket_Blue: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_merc.paa"
		};
	};
	class FFFF_Clothing_Jackets_WinterJacket_DarkGreen: SFM_WinterJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Winter\Jacket\data\winter_jacket_neutral.paa"
		};
	};
};
