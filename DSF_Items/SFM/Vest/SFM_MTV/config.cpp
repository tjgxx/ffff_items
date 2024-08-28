class CfgPatches
{
	class SFM_MTV_Vest
	{
		units[]=
		{
			"FFFF_Armor_Vests_MTV_Grey",
			"FFFF_Armor_Vests_MTV_Green",
			"FFFF_Armor_Vests_MTV_Tan",
			"FFFF_Armor_Vests_MTV_Blue",
			"FFFF_Armor_Vests_MTV_Black"
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
	class Clothing_Base;
	class PlateCarrierVest;
	class SFM_MTV_ColorBace: PlateCarrierVest
	{
		scope=0;
		displayName="MTV Vest";
		descriptionShort="The Modular Tactical Vest (MTV) is the standard Kevlar vest for the USMC, offering only moderate protection. Its modular design allows for quick adjustments, enabling different levels of protection and configurations. Additionally, the vest can be customized to accommodate individual equipment needs.";
		model="SFM\Vest\SFM_MTV\SFM_MTV_g.p3d";
		inventorySlot="Vest";
		attachments[]=
		{
			"VestHolster",
			"VestPouch",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD"
		};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Vest"
		};
		itemSize[]={4,4};
		itemsCargoSize[]={0,0};
		quickBarBonus=3;
		absorbency=0.1;
		heatIsolation=0.25;
		repairableWithKits[]={21};
		repairCosts[]={};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Green_BaseColor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Vest\SFM_MTV\SFM_MTV.p3d";
			female="SFM\Vest\SFM_MTV\SFM_MTV.p3d";
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
							1,
							
							{
								"SFM\Vest\SFM_MTV\data\SFM_MTV.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Vest\SFM_MTV\data\SFM_MTV.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Vest\SFM_MTV\data\SFM_MTV_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Vest\SFM_MTV\data\SFM_MTV_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Vest\SFM_MTV\data\SFM_MTV_destruct.rvmat"
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
						damage=0.6;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.7;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.5;
					};
				};
			};
		};
	};
	class FFFF_Armor_Vests_MTV_Grey: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Black_BaseColor.paa"
		};
	};
	class FFFF_Armor_Vests_MTV_Green: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Green_BaseColor.paa"
		};
	};
	class FFFF_Armor_Vests_MTV_Tan: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_TAN_BaseColor.paa"
		};
	};
	class FFFF_Armor_Vests_MTV_Blue: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_Merc.paa"
		};
	};
	class FFFF_Armor_Vests_MTV_Black: SFM_MTV_ColorBace
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_MTV\data\SFM_MTV_KB.paa"
		};
	};
};
