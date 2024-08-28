class CfgPatches
{
	class SFM_PS7_Vest
	{
		units[]=
		{
			"SFM_PS7_Vest"
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
	class PlateCarrierVest;
	class FFFF_Armor_Vests_PS7: PlateCarrierVest
	{
		scope=2;
		displayName="PS7 Vest";
		descriptionShort="The PS7 armored vest is a modern tactical armored system designed for operations in high-risk environments. PS7 provides reliable protection and ergonomics, allowing operational personnel to perform their tasks efficiently. This armored carrier features multiple pockets and mounts designed to carry a variety of tactical gear including magazines, grenades, medical kits and radios. Adjustable straps allow you to customize the armor to suit individual parameters, ensuring optimal fit and wearing comfort.";
		model="SFM\Vest\SFM_PS7\SFM_PS7_g.p3d";
		itemSize[]={3,3};
		attachments[]={};
		repairableWithKits[]={20};
		repairCosts[]={};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_PS7\data\PS7_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Vest\SFM_PS7\data\PS7.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Vest\SFM_PS7\SFM_PS7.p3d";
			female="SFM\Vest\SFM_PS7\SFM_PS7.p3d";
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
								"SFM\Vest\SFM_PS7\data\PS7.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Vest\SFM_PS7\data\PS7.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Vest\SFM_PS7\data\PS7_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Vest\SFM_PS7\data\PS7_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Vest\SFM_PS7\data\PS7_destruct.rvmat"
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
						damage=0.45;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.6;
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
						damage=0.25;
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
						damage=0.25;
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
						damage=0.25;
					};
				};
			};
		};
	};
};
