class CfgPatches
{
	class SFM_ZephyrBoots
	{
		units[]=
		{
			"FFFF_Clothing_Shoes_ZephyrBoots_Desert",
			"FFFF_Clothing_Shoes_ZephyrBoots_Black",
			"FFFF_Clothing_Shoes_ZephyrBoots_Military"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Data",
			"DZ_Radio",
			"DZ_Gear_Consumables",
			"DZ_Gear_Optics",
			"DZ_Gear_Cooking",
			"DZ_Characters_Backpacks",
			"DZ_Gear_Navigation",
			"DZ_Gear_Containers"
		};
	};
};
class CfgVehicles
{
	class HikingBootsLow_Black;
	class SFM_ZephyrBoots_Base: HikingBootsLow_Black
	{
		scope=0;
		displayName="Zephyr Boots";
		descriptionShort="It is one of the most popular models of hiking boots, used by hikers, climbers, athletes, military and law enforcement officers around the world.";
		model="SFM\Boots\SFM_ZephyrBoots\SFM_ZephyrBoots_g.p3d";
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
			"SFM\Boots\SFM_ZephyrBoots\data\LowaZephyr.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Boots\SFM_ZephyrBoots\data\LowaZephyr.rvmat"
		};
		class ClothingTypes
		{
			male="\SFM\Boots\SFM_ZephyrBoots\SFM_ZephyrBoots.p3d";
			female="\SFM\Boots\SFM_ZephyrBoots\SFM_ZephyrBoots.p3d";
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
								"SFM\Boots\SFM_ZephyrBoots\data\LowaZephyr.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Boots\SFM_ZephyrBoots\data\LowaZephyr.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Boots\SFM_ZephyrBoots\data\LowaZephyr_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Boots\SFM_ZephyrBoots\data\LowaZephyr_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Boots\SFM_ZephyrBoots\data\LowaZephyr_destruct.rvmat"
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
	class FFFF_Clothing_Shoes_ZephyrBoots_Desert: SFM_ZephyrBoots_Base
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Boots\SFM_ZephyrBoots\data\LowaZephyr.paa"
		};
	};
	class FFFF_Clothing_Shoes_ZephyrBoots_Black: SFM_ZephyrBoots_Base
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Boots\SFM_ZephyrBoots\data\LowaZephyr_2.paa"
		};
	};
	class FFFF_Clothing_Shoes_ZephyrBoots_Military: SFM_ZephyrBoots_Base
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"\SFM\Boots\SFM_ZephyrBoots\data\boots_mil.paa"
		};
	};
};
