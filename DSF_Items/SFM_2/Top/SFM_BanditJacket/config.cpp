class CfgPatches
{
	class SFM_BanditJacket
	{
		units[]=
		{
			"SFM_BanditJacket1_Grey",
			"SFM_BanditJacket1_Black",
			"SFM_BanditJacket1_White",
			"SFM_BanditJacket2_Grey",
			"SFM_BanditJacket2_Black",
			"SFM_BanditJacket2_White"
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
	class SFM_BanditJacket1_Base: GorkaEJacket_ColorBase
	{
		scope=0;
		displayName="Leather Jacket";
		descriptionShort="A leather jacket is the embodiment of style, strength and unsurpassed masculinity. Made from high quality genuine leather, this jacket adds sophisticated charm and elegance to your look. Its versatile design allows it to be paired with a variety of clothing styles, from casual to evening wear. A leather jacket is not only a fashion accessory, but also reliable protection from wind and cold. Add style and confidence with this unique leather jacket.";
		model="ffff_items\DSF_Items\SFM_2\Top\SFM_BanditJacket\SFM_BanditJacket1_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=1300;
		itemSize[]={2,2};
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
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat"
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
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM_2\Top\SFM_BanditJacket\SFM_BanditJacket1.p3d";
			female="ffff_items\DSF_Items\SFM_2\Top\SFM_BanditJacket\SFM_BanditJacket1_f.p3d";
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
	class FFFF_Clothing_Jackets_BanditJacket1_Grey: SFM_BanditJacket1_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditJacket1_Black: SFM_BanditJacket1_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co2.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditJacket1_White: SFM_BanditJacket1_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co3.paa"
		};
	};
	class SFM_BanditJacket2_Base: GorkaEJacket_ColorBase
	{
		scope=0;
		displayName="Кожаная куртка";
		descriptionShort="Кожаная куртка - воплощение стиля, силы и непревзойденной мужественности. Изготовленная из высококачественной натуральной кожи, эта куртка придает образу утонченный шарм и элегантность. Ее универсальный дизайн позволяет сочетать ее с различными стилями одежды, от повседневного образа до вечернего наряда. Кожаная куртка - это не только модный аксессуар, но и надежная защита от ветра и холода. Добавьте стиля и уверенности в себе с этой уникальной кожаной курткой.";
		model="ffff_items\DSF_Items\SFM_2\Top\SFM_BanditJacket\SFM_BanditJacket2_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=1300;
		itemSize[]={2,2};
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
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.rvmat"
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
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM_2\Top\SFM_BanditJacket\SFM_BanditJacket2.p3d";
			female="ffff_items\DSF_Items\SFM_2\Top\SFM_BanditJacket\SFM_BanditJacket2_f.p3d";
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
	class FFFF_Clothing_Jackets_BanditJacket2_Grey: SFM_BanditJacket2_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditJacket2_Black: SFM_BanditJacket2_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co2.paa"
		};
	};
	class FFFF_Clothing_Jackets_BanditJacket2_White: SFM_BanditJacket2_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM_2\Top\SFM_BanditCoat\data\Bandit_Sets_kurt_co3.paa"
		};
	};
};
