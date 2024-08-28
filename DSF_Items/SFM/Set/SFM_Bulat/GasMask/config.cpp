class CfgPatches
{
	class SFM_BulatGasMask
	{
		units[]=
		{
			"FFFF_Clothing_GasMasks_SKAT9Gasmask"
		};
		weapons[]={};
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
			"DZ_Weapons_Lights",
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class GP5GasMask;
	class FFFF_Clothing_GasMasks_SKAT9Gasmask: GP5GasMask
	{
		scope=2;
		model="ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\SFM_Bulat_GasMask_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		attachments[]=
		{
			"GasMaskFilter"
		};
		displayName="Skat-9 Gas Mask";
		descriptionShort="This gas mask allows you to carry out various operations in the conditions of District 3. It will protect you from radiation, as well as from various airborne contaminants.";
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\SFM_Bulat_GasMask.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\SFM_Bulat_GasMask.p3d";
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
			"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\bulat_mask_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\bulat_mask_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\bulat_mask_co.rvmat",
			"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\bulat_mask_glass.rvmat"
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
								"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\BULAT_mask_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\BULAT_mask_glass.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\BULAT_mask_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\BULAT_mask_glass.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\BULAT_mask_co_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\BULAT_mask_glass_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\BULAT_mask_co_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\BULAT_mask_glass_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\BULAT_mask_co_destruct.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_Bulat\GasMask\data\BULAT_mask_glass_destruct.rvmat"
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
