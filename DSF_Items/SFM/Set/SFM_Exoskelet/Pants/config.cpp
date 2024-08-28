class CfgPatches
{
	class SFM_ExoPants
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
			"FFFF_Armor_Pants_HeavyArmorPants"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class GorkaPants_Summer;
	class SFM_ExoPants_Base: GorkaPants_Summer
	{
		scope=0;
		displayName="Heavy Armor Pants";
		descriptionShort="The Heavy Armor Pants offer innovative protection and mobility in the District. Specially designed from ultra-light but durable materials, these pants provide a high level of protection with minimal weight. Unique technology provides adaptive protection from various threats. The latest design and ergonomic cut provide maximum freedom of movement, allowing ferals to effectively cope with the challenges of the District.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Pants\SFM_ExoPants_g.p3d";
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		weight=10000;
		absorbency=0.0099999998;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		heatIsolation=1;
		quickBarBonus=2;
		itemSize[]={4,3};
		repairableWithKits[]={};
		repairCosts[]={};
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_ca.rvmat"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Pants\SFM_ExoPants.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Pants\SFM_ExoPants.p3d";
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
							1.01,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_damage.rvmat"
							}
						},
						
						{
							0.0099999998,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_destruct.rvmat"
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
	class FFFF_Armor_Pants_HeavyArmorPants: SFM_ExoPants_Base
	{
		scope=2;
		visibilityModifier=0.89999998;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Pants\data\tb_pants_ca.paa"
		};
	};
};
