class CfgPatches
{
	class SFM_TacticalBoots
	{
		units[]=
		{
			"FFFF_Clothing_Shoes_TacticalBoots_Black",
			"FFFF_Clothing_Shoes_TacticalBoots_Brown"
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
	class Sneakers_Black;
	class SFM_TacticalBoots_Base: Sneakers_Black
	{
		scope=0;
		displayName="Tactical Boots";
		descriptionShort="Tactical boots allow you to run on rough terrain and at the same time protect you from mechanical injuries. This is the main feature of tactical footwear.";
		model="SFM\Boots\SFM_TacticalBoots\SFM_TacticalBoots_g.p3d";
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
		weight=270;
		durability=0.5;
		varWetMax=0.49000001;
		heatIsolation=0.5;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Boots\SFM_TacticalBoots\data\Boots_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Boots\SFM_TacticalBoots\data\Boots_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Boots\SFM_TacticalBoots\SFM_TacticalBoots.p3d";
			female="SFM\Boots\SFM_TacticalBoots\SFM_TacticalBoots.p3d";
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
								"SFM\Boots\SFM_TacticalBoots\data\Boots_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Boots\SFM_TacticalBoots\data\Boots_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Boots\SFM_TacticalBoots\data\Boots_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Boots\SFM_TacticalBoots\data\Boots_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Boots\SFM_TacticalBoots\data\Boots_destruct.rvmat"
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
	class FFFF_Clothing_Shoes_TacticalBoots_Black: SFM_TacticalBoots_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Boots\SFM_TacticalBoots\data\Boots_co.paa"
		};
	};
	class FFFF_Clothing_Shoes_TacticalBoots_Brown: SFM_TacticalBoots_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Boots\SFM_TacticalBoots\data\Boots_Bandit.paa"
		};
	};
};
