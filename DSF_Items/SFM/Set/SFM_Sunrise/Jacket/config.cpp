class CfgPatches
{
	class SFM_SunriseJacket
	{
		units[]=
		{
			"FFFF_Clothing_Jackets_SunriseJacket_Grey",
			"FFFF_Clothing_Jackets_SunriseJacket_Brown",
			"FFFF_Clothing_Jackets_SunriseJacket_Green"
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
	class GorkaEJacket_Flat;
	class SFM_SunriseJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="Zarya Jacket";
		descriptionShort="The Zarya Jacket is reliable protection in the dangerous conditions of the District. Made of durable materials, it provides light protection from cuts and bruises. Comfortable cut and many pockets make this jumpsuit an ideal choice for ferals exploring dangerous areas of the District.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\SFM_SunriseJacket_g.p3d";
		ContinuousActions[]={190};
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={2,2};
		absorbency=0.2;
		heatIsolation=0.80000001;
		quickBarBonus=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava_3holes"
		};
		conflictedSlots[]=
		{
			"Headgear"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_co.rvmat",
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_co.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\SFM_SunriseJacket.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\SFM_SunriseJacket.p3d";
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
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_destruct.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_destruct.rvmat"
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
	class FFFF_Clothing_Jackets_SunriseJacket_Grey: SFM_SunriseJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_gray_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_gray_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_SunriseJacket_Brown: SFM_SunriseJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_brown_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_brown_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_SunriseJacket_Green: SFM_SunriseJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Jacket_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Sunrise\Jacket\data\SunriseM1_Hood_co.paa"
		};
	};
};
