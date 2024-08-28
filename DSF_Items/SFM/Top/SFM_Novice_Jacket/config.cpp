class CfgPatches
{
	class SFM_Novice_Jacket
	{
		units[]=
		{
			"FFFF_Clothing_Jackets_NoviceJacket_Tan",
			"FFFF_Clothing_Jackets_NoviceJacket_White",
			"FFFF_Clothing_Jackets_NoviceJacket_Blackred",
			"FFFF_Clothing_Jackets_NoviceJacket_Grey",
			"FFFF_Clothing_Jackets_NoviceJacket_CellRed",
			"FFFF_Clothing_Jackets_NoviceJacket_Black",
			"FFFF_Armor_Jackets_NoviceJacket_Tan",
			"FFFF_Armor_Jackets_NoviceJacket_White",
			"FFFF_Armor_Jackets_NoviceJacket_Blackred",
			"FFFF_Armor_Jackets_NoviceJacket_Grey",
			"FFFF_Armor_Jackets_NoviceJacket_CellRed",
			"FFFF_Armor_Jackets_NoviceJacket_Black"
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
	class PlateCarrierVest;
	class GorkaEJacket_Flat;
	class SFM_NoviceJacket_ColorBase: GorkaEJacket_Flat
	{
		scope=0;
		displayName="Novice Jacket";
		descriptionShort="";
		model="ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\SFM_NoviceJacket_g.p3d";
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
		itemSize[]={4,3};
		absorbency=0.0099999998;
		heatIsolation=0.80000001;
		quickBarBonus=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava_3holes"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
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
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\SFM_NoviceJacket.p3d";
			female="ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\SFM_NoviceJacket.p3d";
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
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_destruct.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_destruct.rvmat"
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
	class FFFF_Clothing_Jackets_NoviceJacket_Tan: SFM_NoviceJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat"
		};
	};
	class FFFF_Clothing_Jackets_NoviceJacket_White: SFM_NoviceJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_grey_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_grey_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat"
		};
	};
	class FFFF_Clothing_Jackets_NoviceJacket_Blackred: SFM_NoviceJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_norfin_blackred_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_norfin_black_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_norfin_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_norfin_ca.rvmat"
		};
	};
	class FFFF_Clothing_Jackets_NoviceJacket_Grey: SFM_NoviceJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_black_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat"
		};
	};
	class FFFF_Clothing_Jackets_NoviceJacket_CellRed: SFM_NoviceJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_CellRed_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_norfin_black_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_cell_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_norfin_ca.rvmat"
		};
	};
	class FFFF_Clothing_Jackets_NoviceJacket_Black: SFM_NoviceJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\jacket_legend_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\hood_legend_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_legend_jacket_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat"
		};
	};
	class SFM_NoviceJacket_open_ColorBase: GorkaEJacket_Flat
	{
		scope=0;
		displayName="Novice Jacket";
		descriptionShort="";
		model="ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\SFM_NoviceJacket_Vest_g.p3d";
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
		NoSlots[]=
		{
			"Vest"
		};
		weight=2100;
		attachments[]={};
		itemsCargoSize[]={5,8};
		itemSize[]={4,3};
		absorbency=0.0099999998;
		heatIsolation=0.80000001;
		quickBarBonus=6;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="ChemlonDress";
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava_3holes"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3",
			"camo4"
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
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\SFM_NoviceJacket_Vest.p3d";
			female="ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\SFM_NoviceJacket_Vest.p3d";
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
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.1;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.34999999;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.52999997;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.52999997;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.52999997;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.52999997;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.52999997;
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
	class FFFF_Armor_Jackets_NoviceJacket_Tan: SFM_NoviceJacket_open_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
		};
	};
	class FFFF_Armor_Jackets_NoviceJacket_White: SFM_NoviceJacket_open_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_grey_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_grey_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
		};
	};
	class FFFF_Armor_Jackets_NoviceJacket_Blackred: SFM_NoviceJacket_open_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_norfin_blackred_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_norfin_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_norfin_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_norfin_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
		};
	};
	class FFFF_Armor_Jackets_NoviceJacket_Grey: SFM_NoviceJacket_open_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
		};
	};
	class FFFF_Armor_Jackets_NoviceJacket_CellRed: SFM_NoviceJacket_open_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_CellRed_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_norfin_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_jacket_cell_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_norfin_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
		};
	};
	class FFFF_Armor_Jackets_NoviceJacket_Black: SFM_NoviceJacket_open_ColorBase
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\jacket_legend_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\hood_legend_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_black_ca.paa",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_legend_jacket_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Novice_Jacket\data\leather_hood_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Top\SFM_Sweater_Stalker\data\sweater_stalker_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Vest\SFM_PS7\data\PS7.rvmat"
		};
	};
};
