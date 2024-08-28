class CfgPatches
{
	class SFM_ExoJacket
	{
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
		units[]=
		{
			"FFFF_Armor_Jackets_HeavyArmorJacket"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class GorkaEJacket_Flat;
	class SFM_ExoJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="Heavy Armor Jacket";
		descriptionShort="The heavy armor jacket is an insurmountable defense in the harsh world of the District. Made of durable materials, this jacket provides reliable protection from bullets and shrapnel. Due to its durability and functionality, it will become an indispensable piece of equipment for ferals exploring dangerous territories and engaging in battles with mutants and other threats.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Jacket\SFM_ExoJacket_g.p3d";
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
		weight=10000;
		itemSize[]={4,3};
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		absorbency=0.0099999998;
		heatIsolation=1;
		quickBarBonus=2;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="ChemlonDress";
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava_3holes"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Jacket\data\tb_shirt_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Jacket\data\tb_shirt_ca.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Jacket\SFM_ExoJacket.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Jacket\SFM_ExoJacket.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Jacket\data\tb_shirt_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Jacket\data\tb_shirt_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Jacket\data\tb_shirt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Jacket\data\tb_shirt_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Jacket\data\tb_shirt_destruct.rvmat"
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
						damage=0.69999999;
					};
					class Blood
					{
						damage=0.69999999;
					};
					class Shock
					{
						damage=0.69999999;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.69999999;
					};
					class Blood
					{
						damage=0.69999999;
					};
					class Shock
					{
						damage=0.69999999;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.69999999;
					};
					class Blood
					{
						damage=0.69999999;
					};
					class Shock
					{
						damage=0.69999999;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.69999999;
					};
					class Blood
					{
						damage=0.69999999;
					};
					class Shock
					{
						damage=0.69999999;
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
	class FFFF_Armor_Jackets_HeavyArmorJacket: SFM_ExoJacket_Base
	{
		scope=2;
		visibilityModifier=0.9;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Jacket\data\tb_shirt_ca.paa"
		};
	};
};
