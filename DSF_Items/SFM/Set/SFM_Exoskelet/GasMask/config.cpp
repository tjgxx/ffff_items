class CfgPatches
{
	class SFM_ExoGasMask
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
			"FFFF_Clothing_GasMasks_ExoGasMask"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class GP5GasMask;
	class FFFF_Clothing_GasMasks_ExoGasMask: GP5GasMask
	{
		scope=2;
		model="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\GasMask\SFM_ExoGasMask_g.p3d";
		attachments[]=
		{
			"GasMaskFilter"
		};
		inventorySlot[]=
		{
			"Mask"
		};
		displayName="Exoskeleton Gas Mask";
		descriptionShort="The exoskeleton gas mask is an important means of protection against radiation in the District. This gas mask integrated into the exoskeleton provides reliable protection for the feral's respiratory system, allowing him to move freely in an environment polluted with harmful substances. Glass-resistant panels and filters provide clear vision and clean air in the most dangerous conditions, making the gas mask an integral part of the survival equipment in the District.";
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		repairableWithKits[]={};
		repairCosts[]={};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\GasMask\SFM_ExoGasMask.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\GasMask\SFM_ExoGasMask.p3d";
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		class Protection
		{
			biological=1;
			chemical=1;
			nuclear=1;
		}
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_ca.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_ca.rvmat"
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
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_ca.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_ca.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Exoskelet\GasMask\data\tb_gasmask_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		soundVoiceType="none";
		soundVoicePriority=5;
	};
};
