class CfgPatches
{
	class SFM_Sweater_Stalker
	{
		units[]=
		{
			"FFFF_Clothing_Jackets_Sweater_Green",
			"FFFF_Clothing_Jackets_Sweater_Green2",
			"FFFF_Clothing_Jackets_Sweater_Black",
			"FFFF_Clothing_Jackets_Sweater_Brown",
			"FFFF_Clothing_Jackets_Sweater_Blue"
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
	class GorkaEJacket_Flat;
	class SFM_Sweater_ColorBase: GorkaEJacket_Flat
	{
		scope=0;
		displayName="Sweater";
		descriptionShort="Warm sweater, keeps heat well, protects from wind, made of good pleasant fabric.";
		model="SFM\Top\SFM_Sweater_Stalker\SFM_Sweater_Stalker_g.p3d";
		ContinuousActions[]={190};
		inventorySlot[]=
		{
			"Body"
		};
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={3,2};
		absorbency=0.0099999998;
		heatIsolation=1;
		quickBarBonus=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Top\SFM_Sweater_Stalker\SFM_Sweater_Stalker.p3d";
			female="SFM\Top\SFM_Sweater_Stalker\SFM_Sweater_Stalker.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=700;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_destruct.rvmat"
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
	class FFFF_Clothing_Jackets_Sweater_Green: SFM_Sweater_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.paa"
		};
	};
	class FFFF_Clothing_Jackets_Sweater_Green2: SFM_Sweater_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_2_ca.paa"
		};
	};
	class FFFF_Clothing_Jackets_Sweater_Black: SFM_Sweater_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_black_ca.paa"
		};
	};
	class FFFF_Clothing_Jackets_Sweater_Brown: SFM_Sweater_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_brown_ca.paa"
		};
	};
	class FFFF_Clothing_Jackets_Sweater_Blue: SFM_Sweater_ColorBase
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_merc_ca.paa"
		};
	};
};
