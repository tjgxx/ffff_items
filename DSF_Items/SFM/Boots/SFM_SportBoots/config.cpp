class CfgPatches
{
	class SFM_SportBoots
	{
		units[]=
		{
			"FFFF_Clothing_Shoes_SportsSneakers_1",
			"FFFF_Clothing_Shoes_SportsSneakers_2",
			"FFFF_Clothing_Shoes_SportsSneakers_3",
			"FFFF_Clothing_Shoes_SportsSneakers_4"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"dz_data"
		};
	};
};
class CfgVehicles
{
	class Sneakers_ColorBase;
	class SFM_SportBoots_Base: Sneakers_ColorBase
	{
		scope=0;
		displayName="Sports Sneakers";
		descriptionShort="Sports sneakers are the perfect choice for an active lifestyle. Their lightweight and flexible design provides comfort and support during sports or everyday walks. Durable materials and a comfortable sole make these sneakers indispensable for running, fitness or just active recreation. Thanks to their stylish design, they are also great for everyday wear, adding a dynamic accent to your look.";
		model="ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\SFM_SportBoots_g.p3d";
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
		itemSize[]={2,2};
		weight=270;
		durability=0.5;
		varWetMax=0.49000001;
		heatIsolation=0.5;
		repairableWithKits[]={3};
		repairCosts[]={25};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\SFM_SportBoots_m.p3d";
			female="ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\SFM_SportBoots_f.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=120;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_destruct.rvmat"
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
	class FFFF_Clothing_Shoes_SportsSneakers_1: SFM_SportBoots_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co.paa"
		};
	};
	class FFFF_Clothing_Shoes_SportsSneakers_2: SFM_SportBoots_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co2.paa"
		};
	};
	class FFFF_Clothing_Shoes_SportsSneakers_3: SFM_SportBoots_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co3.paa"
		};
	};
	class FFFF_Clothing_Shoes_SportsSneakers_4: SFM_SportBoots_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"\ffff_items\DSF_Items\SFM\Boots\SFM_SportBoots\data\Bandit_Sets_kap_co4.paa"
		};
	};
};
