class CfgPatches
{
	class SFM_FightJacket
	{
		units[]=
		{
			"FFFF_Clothing_Jackets_TacCombatJacket_Tan",
			"FFFF_Clothing_Jackets_TacCombatJacket_Black",
			"FFFF_Clothing_Jackets_TacCombatJacket_WoodlandCamo",
			"FFFF_Clothing_Jackets_TacCombatJacket_DarkGreyCamo"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters_Tops"
		};
	};
};
class CfgVehicles
{
	class GorkaEJacket_Flat;
	class SFM_FightJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="Tactical Combat Jacket";
		descriptionShort="Tactical combat jacket, made of stretchable materials, which does not restrict movement, and also eliminates the possibility of tearing clothes due to strong tension, has several pockets for convenience and retains heat well.";
		model="ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\SFM_FightJacket_g.p3d";
		inventorySlot="Body";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		weight=1400;
		itemSize[]={2,2};
		quickBarBonus=1;
		absorbency=0.25;
		heatIsolation=0.89999999;
		ragQuantity=4;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="WoolShirt";
		hiddenSelections[]=
		{
			"zbytek"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\SFM_FightJacket_m.p3d";
			female="ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\SFM_FightJacket_f.p3d";
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_co.paa"
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
								"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_damaged.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_badlydamaged.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_ruined.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					Health=0.89999998;
					Blood=0.89999998;
					Shock=0.89999998;
				};
				class Melee
				{
					Health=0.89999998;
					Blood=0.89999998;
					Shock=0.89999998;
				};
				class Infected
				{
					Health=0.89999998;
					Blood=0.89999998;
					Shock=0.89999998;
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
	class FFFF_Clothing_Jackets_TacCombatJacket_Tan: SFM_FightJacket_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_tan_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_tan_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_tan_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_TacCombatJacket_Black: SFM_FightJacket_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_black_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_black_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_black_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_TacCombatJacket_WoodlandCamo: SFM_FightJacket_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_woodland_camo_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_woodland_camo_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_woodland_camo_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_TacCombatJacket_DarkGreyCamo: SFM_FightJacket_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_darkgrey_camo_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_darkgrey_camo_co.paa",
			"ffff_items\DSF_Items\SFM\Top\SFM_FightJacket\data\FightJacket_darkgrey_camo_co.paa"
		};
	};
};
