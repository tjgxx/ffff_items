class CfgPatches
{
	class SFM_CS3AJacket
	{
		units[]=
		{
			"FFFF_Clothing_Jacket_ProtectiveJacket_Brown",
			"FFFF_Clothing_Jacket_ProtectiveJacket_Grey",
			"FFFF_Clothing_Jacket_ProtectiveJacket_Tan",
			"FFFF_Clothing_Jacket_ProtectiveJacket_DarkBrown",
			"FFFF_Clothing_Jacket_ProtectiveJacket_Black"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dz_data",
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class GorkaEJacket_Flat;
	class SFM_CS3AJacket: GorkaEJacket_Flat
	{
		scope=0;
		displayName="Protective Jacket";
		descriptionShort="This protective jacket uses innovative materials and technologies allowing ferals to confidently explore the most dangerous corners of District 3. The unique design and functional elements make this jacket an indispensable means of survival.";
		model="SFM\Set\SFM_CS3A\Jacket\SFM_CS3AJacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		weight=2100;
		itemSize[]={4,3};
		absorbency=0.2;
		heatIsolation=0.80000001;
		quickBarBonus=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava_3holes"
		};
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
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_stalker_01_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_stalker_01_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_co.rvmat",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_CS3A\Jacket\SFM_CS3AJacket.p3d";
			female="SFM\Set\SFM_CS3A\Jacket\SFM_CS3AJacket.p3d";
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
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_co.rvmat",
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_co.rvmat",
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_damage.rvmat",
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_damage.rvmat",
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_destruct.rvmat",
								"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_destruct.rvmat"
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
	class FFFF_Clothing_Jacket_ProtectiveJacket_Brown: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_stalker_01_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_stalker_01_co.paa"
		};
	};
	class FFFF_Clothing_Jacket_ProtectiveJacket_Grey: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_stalker_02_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_stalker_02_co.paa"
		};
	};
	class FFFF_Clothing_Jacket_ProtectiveJacket_Tan: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_stalker_03_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_stalker_03_co.paa"
		};
	};
	class FFFF_Clothing_Jacket_ProtectiveJacket_DarkBrown: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_renegade_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_renegade_co.paa"
		};
	};
	class FFFF_Clothing_Jacket_ProtectiveJacket_Black: SFM_CS3AJacket
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_jacket_bandit_co.paa",
			"SFM\Set\SFM_CS3A\Jacket\data\cs3a_hoods_bandit_co.paa"
		};
	};
};
