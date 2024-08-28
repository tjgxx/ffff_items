class CfgPatches
{
	class SFM_ArmyBoots
	{
		units[]=
		{
			"FFFF_Clothing_Shoes_ArmyBoots_Black",
			"FFFF_Clothing_Shoes_ArmyBoots_Green",
			"FFFF_Clothing_Shoes_ArmyBoots_Tan",
			"FFFF_Clothing_Shoes_ArmyBoots_UCP"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Shoes"
		};
	};
};
class CfgVehicles
{
	class HikingBootsLow_Black;
	class SFM_ArmyBoots_ColorBase: HikingBootsLow_Black
	{
		scope=0;
		displayName="Army Boots";
		descriptionShort="Durable army boots that will allow you to walk more than 3 miles, and will also relieve excess stress from your feet. Great for rough terrain.";
		model="SFM\Boots\SFM_ArmyBoots\SFM_ArmyBoots_g.p3d";
		inventorySlot[]=
		{
			"Feet"
		};
		itemInfo[]=
		{
			"Clothing",
			"Feet"
		};
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		itemSize[]={4,4};
		weight=1230;
		durability=0.5;
		repairableWithKits[]={3};
		repairCosts[]={25};
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		soundAttType="Boots";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Boots\SFM_ArmyBoots\data\Boots_GREEn_BaseColor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Boots\SFM_ArmyBoots\data\ArmyBoots.rvmat"
		};
		class ClothingTypes
		{
			male="\SFM\Boots\SFM_ArmyBoots\SFM_ArmyBoots.p3d";
			female="\SFM\Boots\SFM_ArmyBoots\SFM_ArmyBoots.p3d";
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
								"SFM\Boots\SFM_ArmyBoots\data\ArmyBoots.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Boots\SFM_ArmyBoots\data\ArmyBoots.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Boots\SFM_ArmyBoots\data\ArmyBoots_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Boots\SFM_ArmyBoots\data\ArmyBoots_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Boots\SFM_ArmyBoots\data\ArmyBoots_destruct.rvmat"
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
						damage=0.80000001;
					};
					class Blood
					{
						damage=0.69999999;
					};
					class Shock
					{
						damage=0.80000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.80000001;
					};
					class Blood
					{
						damage=0.69999999;
					};
					class Shock
					{
						damage=0.80000001;
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
					soundSet="AthleticShoes_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="AthleticShoes_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FFFF_Clothing_Shoes_ArmyBoots_Black: SFM_ArmyBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Boots\SFM_ArmyBoots\data\Boots_Black_BaseColor.paa"
		};
	};
	class FFFF_Clothing_Shoes_ArmyBoots_Green: SFM_ArmyBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Boots\SFM_ArmyBoots\data\Boots_GREEn_BaseColor.paa"
		};
	};
	class FFFF_Clothing_Shoes_ArmyBoots_Tan: SFM_ArmyBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Boots\SFM_ArmyBoots\data\Boots_Tan_BaseColor.paa"
		};
	};
	class FFFF_Clothing_Shoes_ArmyBoots_UCP: SFM_ArmyBoots_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Boots\SFM_ArmyBoots\data\Boots_UCP_BaseColor.paa"
		};
	};
};
