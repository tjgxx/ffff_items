class CfgPatches
{
	class SFM_ExoVest
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
			"FFFF_Armor_Vests_HeavyArmorChestRig",
			"FFFF_Armor_Vests_HeavyArmorBodyArmorWithChestRig",
			"FFFF_Armor_Vests_HeavyArmorBulletproofVest",
			"FFFF_Armor_Vests_HeavyArmorBodyArmor"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class HighCapacityVest_Black;
	class SFM_ExoVestUn_Base: HighCapacityVest_Black
	{
		scope=0;
		displayName="Heavy Armor Chest Rig";
		descriptionShort="The chest rig of the heavy armor suit is an effective means of distributing weight and providing comfort in conditions of constant movement and combat. This innovative system is designed to reduce fatigue and provide quick access to the necessary equipment. Special pockets, loops and fasteners allow you to securely fasten the equipment and provide quick access to the necessary items in the most extreme situations. The unloading system is an indispensable piece of equipment for stalkers exploring the dangerous spaces of the District.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestUn_g.p3d";
		attachments[]={};
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		weight=2000;
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
		quickBarBonus=5;
		ragQuantity=4;
		absorbency=0;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestUn.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestUn.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_destruct.rvmat"
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
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.30000001;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.30000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.30000001;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.30000001;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.30000001;
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
	class FFFF_Armor_Vests_HeavyArmorChestRig: SFM_ExoVestUn_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.paa"
		};
	};
	class SFM_ExoVestFull_Base: HighCapacityVest_Black
	{
		scope=0;
		displayName="High-Capacity Heavy Body Armor";
		descriptionShort="The Heavy Body Armor with Chest Rig of the Heavy Armor Suit are a reliable combination of protection and functionality for ferals exploring dangerous areas of the District. The body armor, made of durable materials, provides reliable protection from bullets and shrapnel, and allows you to move comfortably in conditions of constant threat. The chest rig allows you to distribute the weight of the equipment and provide quick access to the necessary items, increasing the mobility and effectiveness of the feral in combat situations. This combination provides maximum protection and comfort in the most extreme conditions.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestFull_g.p3d";
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]={};
		weight=30000;
		itemSize[]={4,4};
		itemsCargoSize[]={6,5};
		quickBarBonus=5;
		ragQuantity=4;
		absorbency=0;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestFull.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestFull.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_destruct.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_destruct.rvmat"
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
						damage=0.090000004;
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
						damage=0.25;
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
				class Infected
				{
					class Health
					{
						damage=0.25;
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
				class FragGrenade
				{
					class Health
					{
						damage=0.25;
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
	class FFFF_Armor_Vests_HeavyArmorBodyArmorWithChestRig: SFM_ExoVestFull_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_razgruz_ca.paa"
		};
	};
	class SFM_ExoVest_Base: HighCapacityVest_Black
	{
		scope=0;
		displayName="Heavy Bulletproof Vest";
		descriptionShort="The Heavy Armor Suit's bulletproof vest is reliable protection in the harsh conditions of the District. Made of durable and wear-resistant materials, this vest provides reliable protection from bullets and shrapnel.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVest_g.p3d";
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]={};	
		weight=30000;
		itemSize[]={4,4};
		itemsCargoSize[]={0,0};
		quickBarBonus=2;
		ragQuantity=4;
		absorbency=0;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVest.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVest.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_destruct.rvmat"
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
						damage=0.12;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.15000001;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
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
				class Infected
				{
					class Health
					{
						damage=0.2;
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
				class FragGrenade
				{
					class Health
					{
						damage=0.2;
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
	class FFFF_Armor_Vests_HeavyArmorBulletproofVest: SFM_ExoVest_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa"
		};
	};
	class SFM_ExoVestArm_Base: HighCapacityVest_Black
	{
		scope=0;
		displayName="Heavy Body Armor";
		descriptionShort="The Heavy Armor Suit's body armor module is the embodiment of insurmountable protection. Made of innovative materials, this body armor provides reliable protection from bullets and shrapnel, and also provides comfort and freedom of movement in conditions of constant danger. It's special design make it an ideal choice for ferals exploring dangerous areas of the District.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestArm_g.p3d";
		inventorySlot="Vest";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		attachments[]={};
		weight=30000;
		itemSize[]={4,4};
		itemsCargoSize[]={0,0};
		quickBarBonus=2;
		ragQuantity=4;
		absorbency=0;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		heatIsolation=1;
		repairableWithKits[]={};
		repairCosts[]={};
		soundAttType="HeavyJacket";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_ca.rvmat"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Beanie"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestArm.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\SFM_ExoVestArm.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_destruct.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_destruct.rvmat"
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
						damage=0.090000004;
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
						damage=0.2;
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
				class Infected
				{
					class Health
					{
						damage=0.2;
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
				class FragGrenade
				{
					class Health
					{
						damage=0.2;
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
	class FFFF_Armor_Vests_HeavyArmorBodyArmor: SFM_ExoVestArm_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_base_ca.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Vest\data\tb_vest_armor_ca.paa"
		};
	};
};
