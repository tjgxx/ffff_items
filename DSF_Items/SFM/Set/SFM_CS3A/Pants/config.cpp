class CfgPatches
{
	class SFM_CS3APants
	{
		units[]=
		{
			"FFFF_Clothing_Pants_ProtectivePants"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"dz_data",
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class GorkaPants_Summer;
	class FFFF_Clothing_Pants_ProtectivePants: GorkaPants_Summer
	{
		scope=0;
		displayName="Protective Pants";
		descriptionShort="These protective pants offer high-tech protection for adventure seekers in the District. Their special composite coating provides reliable protection against the elements, allowing ferals to explore the most dangerous corners of District 3 with less risk. Comfortable cut and additional pockets make these pants an ideal choice for survival.";
		model="SFM\Set\SFM_CS3A\Pants\SFM_CS3APants_g.p3d";
		inventorySlot="Legs";
		simulation="clothing";
		itemInfo[]=
		{
			"Clothing",
			"Legs"
		};
		attachments[]=
		{
			"Wallet"
		};
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		itemSize[]={4,3};
		absorbency=0.2;
		heatIsolation=0.80000001;
		quickBarBonus=2;
		hiddenSelections[]=
		{
			"camo1",
			"personality"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Set\SFM_CS3A\Pants\data\cs3a_pants_cs_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Set\SFM_CS3A\Pants\data\cs3a_pants_co.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Set\SFM_CS3A\Pants\SFM_CS3APants.p3d";
			female="SFM\Set\SFM_CS3A\Pants\SFM_CS3APants.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"SFM\Set\SFM_CS3A\Pants\data\cs3a_pants_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Set\SFM_CS3A\Pants\data\cs3a_pants_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Set\SFM_CS3A\Pants\data\cs3a_pants_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Set\SFM_CS3A\Pants\data\cs3a_pants_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"SFM\Set\SFM_CS3A\Pants\data\cs3a_pants_destruct.rvmat"
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
};
