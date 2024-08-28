class CfgPatches
{
	class SFM_ExoHelmet
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
			"FFFF_Armor_Helmets_ExoHelmet"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Mich2001Helmet;
	class SFM_ExoHelmet_Base: Mich2001Helmet
	{
		scope=0;
		displayName="Heavy Armor Helmet";
		descriptionShort="The helmet of the Heavy Armor suit for ferals is the most important component of protection in the District. Made of special composite materials, this helmet provides reliable head protection from bullets and shrapnel. Ergonomic design and comfortable fit make this helmet an indispensable piece of equipment for ferals exploring the District.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Helmet\SFM_ExoHelmet_g.p3d";
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		attachments[]={};
		rotationFlags=2;
		weight=2000;
		itemSize[]={4,3};
		noMask=0;
		absorbency=0.34999999;
		varWetInit=0;
		varWetMin=0;
		varWetMax=0;
		heatIsolation=0.80000001;
		visibilityModifier=0.94999999;
		repairableWithKits[]={};
		repairCosts[]={};
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Helmet\data\tb_helmet_ca.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Helmet\data\tb_helmet_ca.rvmat",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=400;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Helmet\data\tb_helmet_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Helmet\data\tb_helmet_ca.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Helmet\data\tb_helmet_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Helmet\data\tb_helmet_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Helmet\data\tb_helmet_destruct.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_destruct.rvmat"
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
						damage=0.092;
					};
					class Blood
					{
						damage=0.07;
					};
					class Shock
					{
						damage=0.092;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.090000004;
					};
					class Blood
					{
						damage=0.07;
					};
					class Shock
					{
						damage=0.15000001;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.090000004;
					};
					class Blood
					{
						damage=0.07;
					};
					class Shock
					{
						damage=0.15000001;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.090000004;
					};
					class Blood
					{
						damage=0.07;
					};
					class Shock
					{
						damage=0.02;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Helmet\SFM_ExoHelmet.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Helmet\SFM_ExoHelmet.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPot_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="BallisticHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FFFF_Armor_Helmets_ExoHelmet: SFM_ExoHelmet_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Helmet\data\tb_helmet_ca.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\Attach\data\exo_acc_ca.paa"
		};
	};
};
