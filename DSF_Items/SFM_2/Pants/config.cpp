class CfgPatches
{
	class SFM_SportPants
	{
		units[]=
		{
			"SFM_SportPants_Blue",
			"SFM_SportPants_Black",
			"SFM_SportPants_White"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dz_data"
		};
	};
};
class CfgVehicles
{
	class GorkaPants_ColorBase;
	class SFM_SportPants_Base: GorkaPants_ColorBase
	{
		displayName="Sweatpants";
		descriptionShort="Sweatpants are the ideal choice for sports and outdoor activities. Their lightweight and stretchy material ensures comfort and freedom of movement during workouts. Ventilation panels help wick moisture away, keeping you feeling fresh throughout your workout. The stylish and ergonomic design makes them an excellent choice not only for sports, but also for everyday wear. Add comfort and style to your gym closet.";
		model="ffff_items\DSF_Items\SFM_2\Pants\SFM_SportPants_g.p3d";
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		itemSize[]={2,2};
		itemsCargoSize[]={4,4};
		heatIsolation=0.5;
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		attachments[]=
		{
			"Wallet"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM_2\Pants\SFM_SportPants.p3d";
			female="ffff_items\DSF_Items\SFM_2\Pants\SFM_SportPants_f.p3d";
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
								"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_destruct.rvmat"
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
	class FFFF_Clothing_Plants_Sweatpants_Blue: SFM_SportPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa"
		};
	};
	class FFFF_Clothing_Plants_Sweatpants_Black: SFM_SportPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co2.paa"
		};
	};
	class FFFF_Clothing_Plants_Sweatpants_White: SFM_SportPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co3.paa"
		};
	};
};
