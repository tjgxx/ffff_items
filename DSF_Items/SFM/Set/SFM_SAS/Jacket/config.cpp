class CfgPatches
{
	class SFM_SASJacket
	{
		units[]=
		{
			"SFM_SASJacket1",
			"SFM_SASJacket2",
			"SFM_SASJacket3",
			"SFM_SASJacket4",
			"SFM_SASJacket5",
			"SFM_SASJacket6",
			"SFM_SASJacket7",
			"SFM_SASJacket_Naem1",
			"SFM_SASJacket_Naem2",
			"SFM_SASJacket_Bandit1",
			"SFM_SASJacket_Renegat1",
			"SFM_SASJacket_Voen1",
			"SFM_SASJacket_Svoboda1"
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
	class GorkaEJacket_Flat;
	class SFM_SASJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="SAS Jacket";
		descriptionShort="Made of durable materials, it provides comfort, protection from wind and moisture, as well as convenience when wearing equipment. Special pockets, easy access to internal pockets and the ability to attach additional accessories make the tactical jacket indispensable for professionals and enthusiasts of tactical activities.";
		model="SFM\Set\SFM_SAS\Jacket\SFM_SASJacket_g.p3d";
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
		itemSize[]={4,3};
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
			"SFM\Set\SFM_SAS\Jacket\data\sas_Jacket_co.paa",
			"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_SAS\Jacket\data\sas_Jacket_co.rvmat",
			"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_SAS\Jacket\SFM_SASJacket_m.p3d";
			female="SFM\Set\SFM_SAS\Jacket\SFM_SASJacket_f.p3d";
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
								"SFM\Set\SFM_SAS\Jacket\data\sas_Jacket_co.rvmat",
								"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_SAS\Jacket\data\sas_Jacket_co.rvmat",
								"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_SAS\Jacket\data\SAS_Jacket_damage.rvmat",
								"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_SAS\Jacket\data\SAS_Jacket_damage.rvmat",
								"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_SAS\Jacket\data\SAS_Jacket_destruct.rvmat",
								"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_destruct.rvmat"
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
	class FFFF_Clothing_Jacket_SASJacket_Green1: SFM_SASJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Jacket\data\SAS_Jacket_Stalker_3.paa",
			"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_co.paa"
		};
	};
	class FFFF_Clothing_Jacket_SASJacket_Green2: SFM_SASJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Jacket\data\SAS_Jacket_Stalker_4.paa",
			"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_co.paa"
		};
	};
	class FFFF_Clothing_Jacket_SASJacket_Green3: SFM_SASJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Jacket\data\SAS_Jacket_Stalker_5.paa",
			"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_co.paa"
		};
	};
	class FFFF_Clothing_Jacket_SASJacket_Green4: SFM_SASJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Jacket\data\SAS_Jacket_Stalker_6.paa",
			"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_co.paa"
		};
	};
	class FFFF_Clothing_Jacket_SASJacket_Blue: SFM_SASJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Jacket\data\SAS_Jacket_merc_02.paa",
			"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_co.paa"
		};
	};
	class FFFF_Clothing_Jacket_SASJacket_Brown: SFM_SASJacket_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_SAS\Jacket\data\SAS_Jacket_rene.paa",
			"SFM\Set\SFM_SAS\Jacket\data\SAS_hood_co.paa"
		};
	};
};
