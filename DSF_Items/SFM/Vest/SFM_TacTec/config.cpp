class CfgPatches
{
	class SFM_TacTec_Vest
	{
		units[]=
		{
			"FFFF_Armor_Vest_TacTec_Black",
			"FFFF_Armor_Vest_TacTec_Blue",
			"FFFF_Armor_Vest_TacTec_Green",
			"FFFF_Armor_Vest_TacTec_Tan",
			"FFFF_Armor_Vest_TacTec_Brown",
			"FFFF_Armor_Vest_TacTec_Merc",
			"FFFF_Armor_Vest_TacTec_KB"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Data"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class PlateCarrierVest;
	class SFM_TacTec_Vest: PlateCarrierVest
	{
		scope=0;
		visibilityModifier=0.94999999;
		displayName="TacTec Vest";
		descriptionShort="Provides protection for vital human organs when damaged by AK74 5.45mm x 39mm, AKM 7.62mm x 39mm ammunition at a distance of 10m, as well as from damage from shrapnel. The ergonomics of the body armor are well thought out: it evenly distributes the load on the body, is equipped with climatic shock-absorbing support(CAP), and the armor plates have an anatomical profile.";
		model="SFM\Vest\SFM_TacTec\SFM_TacTec_g.p3d";
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
		repairableWithKits[]={20};
		repairCosts[]={};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_GREEN.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Vest\SFM_TacTec\data\TacTec.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Vest\SFM_TacTec\SFM_TacTec.p3d";
			female="SFM\Vest\SFM_TacTec\SFM_TacTec.p3d";
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
								"SFM\Vest\SFM_TacTec\data\TacTec.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Vest\SFM_TacTec\data\TacTec.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Vest\SFM_TacTec\data\TacTec_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Vest\SFM_TacTec\data\TacTec_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Vest\SFM_TacTec\data\TacTec_destruct.rvmat"
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
						damage=0.35;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.55;
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
						damage=0.2;
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
						damage=0.2;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.4;
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
			};
		};
	};
	class FFFF_Armor_Vest_TacTec_Black: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_Black.paa"
		};
	};
	class FFFF_Armor_Vest_TacTec_Blue: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_BLUE.paa"
		};
	};
	class FFFF_Armor_Vest_TacTec_Green: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_GREEN.paa"
		};
	};
	class FFFF_Armor_Vest_TacTec_Tan: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_TAN.paa"
		};
	};
	class FFFF_Armor_Vest_TacTec_Brown: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_brown.paa"
		};
	};
	class FFFF_Armor_Vest_TacTec_Merc: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_Merc.paa"
		};
	};
	class FFFF_Armor_Vest_TacTec_KB: SFM_TacTec_Vest
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Vest\SFM_TacTec\data\TEC_TEC_KB.paa"
		};
	};
};
