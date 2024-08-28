class CfgPatches
{
	class SFM_ZSH1
	{
		units[]=
		{
			"FFFF_Armor_Helmet_ZSH1_Black"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Mich2001Helmet;
	class SFM_ZSH1_Helmet_Base: Mich2001Helmet
	{
		scope=0;
		displayName="ZSH-1 Helmet";
		descriptionShort="The ZSH-1 protective helmet is designed to protect a person's head from bullets and shrapnel impact. The helmet can be equipped with a shockproof visor.";
		model="ffff_items\DSF_Items\SFM\Headgear\SFM_ZSH1\SFM_ZSH1_g.p3d";
		repairableWithKits[]={5,8};
		repairCosts[]={30,25};
		attachments[]=
		{
			"Glass"
		};
		inventorySlot[]=
		{
			"Headgear"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=2;
		weight=1200;
		itemSize[]={4,3};
		noMask=0;
		absorbency=0;
		heatIsolation=0.80000001;
		visibilityModifier=0.94999999;
		headSelectionsToHide[]=
		{
			"Clipping_Mich2001"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Headgear\SFM_ZSH1\data\ZSH1_CO2.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Headgear\SFM_ZSH1\data\ZSH1.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]={{1,{"ffff_items\DSF_Items\SFM\Headgear\SFM_ZSH1\data\ZSH1.rvmat"}},{0.69999999,{"ffff_items\DSF_Items\SFM\Headgear\SFM_ZSH1\data\ZSH1.rvmat"}},{0.5,{"ffff_items\DSF_Items\SFM\Headgear\SFM_ZSH1\data\ZSH1_Damage.rvmat"}},{0.30000001,{"ffff_items\DSF_Items\SFM\Headgear\SFM_ZSH1\data\ZSH1_Damage.rvmat"}},{0,{"ffff_items\DSF_Items\SFM\Headgear\SFM_ZSH1\data\ZSH1_Destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.23;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.23;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.23;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.2;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.23;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.2;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.23;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.12;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Headgear\SFM_ZSH1\SFM_ZSH1.p3d";
			female="ffff_items\DSF_Items\SFM\Headgear\SFM_ZSH1\SFM_ZSH1.p3d";
		};
	};
	class FFFF_Armor_Helmet_ZSH1_Black: SFM_ZSH1_Helmet_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Headgear\SFM_ZSH1\data\ZSH1_CO2.paa"
		};
	};
};
