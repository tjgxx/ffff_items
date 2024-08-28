class CfgPatches
{
	class SFM_BanditCoat
	{
		units[]=
		{
			"FFFF_Clothing_Jackets_BanditCoat1_Grey",
			"FFFF_Clothing_Jackets_BanditCoat1_Black",
			"FFFF_Clothing_Jackets_BanditCoat1_Tan",
			"FFFF_Clothing_Jackets_BanditCoat1_Red",
			"FFFF_Clothing_Jackets_BanditCoat2_Grey",
			"FFFF_Clothing_Jackets_BanditCoat2_Black",
			"FFFF_Clothing_Jackets_BanditCoat2_Tan",
			"FFFF_Clothing_Jackets_BanditCoat2_Red",
			"FFFF_Clothing_Jackets_BanditCoat3_Grey",
			"FFFF_Clothing_Jackets_BanditCoat3_Black",
			"FFFF_Clothing_Jackets_BanditCoat3_Tan",
			"FFFF_Clothing_Jackets_BanditCoat3_Red"
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
	class GorkaEJacket_ColorBase;
	class SFM_BanditCoat_Base: GorkaEJacket_ColorBase
	{
		scope=0;
		displayName="Cloak";
		descriptionShort="A leather raincoat is the epitome of style and elegance. Made from high-quality genuine leather, this raincoat adds sophistication and sophistication to your look. Its versatile design allows it to be combined with both casual wear and elegant outfits for special occasions. A leather raincoat is not only a fashion accessory, but also reliable protection from wind and bad weather. Add charm and style to your wardrobe with this unique leather trench coat.";
		model="SFM_2\Top\SFM_BanditCoat\SFM_BanditCoat1_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={3,3};
		quickBarBonus=2;
		itemsCargoSize[]={4,4};
		absorbency=0.050000001;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.rvmat"
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
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_damage.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_damage.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_destruct.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_destruct.rvmat"
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
		class ClothingTypes
		{
			male="SFM_2\Top\SFM_BanditCoat\SFM_BanditCoat1.p3d";
			female="SFM_2\Top\SFM_BanditCoat\SFM_BanditCoat1_f.p3d";
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
	class FFFF_Clothing_Jackets_BanditCoat1_Grey: SFM_BanditCoat_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditCoat1_Black: SFM_BanditCoat_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co2.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co2.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditCoat1_Tan: SFM_BanditCoat_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co3.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co3.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditCoat1_Red: SFM_BanditCoat_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co4.paa"
		};
	};
	class SFM_BanditCoat2_Base: GorkaEJacket_ColorBase
	{
		scope=0;
		displayName="Cloak";
		descriptionShort="A leather raincoat is the epitome of style and elegance. Made from high-quality genuine leather, this raincoat adds sophistication and sophistication to your look. Its versatile design allows it to be combined with both casual wear and elegant outfits for special occasions. A leather raincoat is not only a fashion accessory, but also reliable protection from wind and bad weather. Add charm and style to your wardrobe with this unique leather trench coat.";
		model="SFM_2\Top\SFM_BanditCoat\SFM_BanditCoat2_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={3,3};
		itemsCargoSize[]={4,4};
		quickBarBonus=2;
		absorbency=0.050000001;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.rvmat"
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
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_damage.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_damage.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_destruct.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_destruct.rvmat"
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
		class ClothingTypes
		{
			male="SFM_2\Top\SFM_BanditCoat\SFM_BanditCoat2.p3d";
			female="SFM_2\Top\SFM_BanditCoat\SFM_BanditCoat2_f.p3d";
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
	class FFFF_Clothing_Jackets_BanditCoat2_Grey: SFM_BanditCoat2_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditCoat2_Black: SFM_BanditCoat2_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co2.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co2.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditCoat2_Tan: SFM_BanditCoat2_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co3.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co3.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditCoat2_Red: SFM_BanditCoat2_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co4.paa"
		};
	};
	class SFM_BanditCoat3_Base: GorkaEJacket_ColorBase
	{
		scope=0;
		displayName="Cloak";
		descriptionShort="A leather raincoat is the epitome of style and elegance. Made from high-quality genuine leather, this raincoat adds sophistication and sophistication to your look. Its versatile design allows it to be combined with both casual wear and elegant outfits for special occasions. A leather raincoat is not only a fashion accessory, but also reliable protection from wind and bad weather. Add charm and style to your wardrobe with this unique leather trench coat.";
		model="SFM_2\Top\SFM_BanditCoat\SFM_BanditCoat3_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={3,3};
		itemsCargoSize[]={4,4};
		quickBarBonus=2;
		absorbency=0.050000001;
		heatIsolation=0.80000001;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.rvmat"
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
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_damage.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_damage.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_destruct.rvmat",
								"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_destruct.rvmat"
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
		class ClothingTypes
		{
			male="SFM_2\Top\SFM_BanditCoat\SFM_BanditCoat3.p3d";
			female="SFM_2\Top\SFM_BanditCoat\SFM_BanditCoat3.p3d";
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
	class FFFF_Clothing_Jackets_BanditCoat3_Grey: SFM_BanditCoat3_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditCoat3_Black: SFM_BanditCoat3_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co2.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co2.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditCoat3_Tan: SFM_BanditCoat3_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co3.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co3.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditCoat3_Red: SFM_BanditCoat3_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa",
			"SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_pl_co4.paa"
		};
	};
};
