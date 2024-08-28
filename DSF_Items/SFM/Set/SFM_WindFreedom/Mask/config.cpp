class CfgPatches
{
	class SFM_WFGasMask
	{
		units[]=
		{
			"FFFF_Clothing_GasMasks_FreedomGasMask"
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
	class FFFF_Clothing_GasMasks_FreedomGasMask: GP5GasMask
	{
		scope=2;
		displayName="Freedom Gas Mask";
		descriptionShort="The gas mask is a reliable protection against harmful substances and pollution in the District. Made of special materials, it provides reliable air filtration and protection against harmful particles. Convenient adjustable straps allow you to comfortably and tightly fasten the gas mask on your face, providing reliable protection even in the most adverse conditions.";
		itemSize[]={2,1};
		model="ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Mask\SFM_WFMask3_g.p3d";
		repairableWithKits[]={8,6};
		repairCosts[]={};
		attachments[]=
		{
			"GasMaskFilter"
		};
		inventorySlot[]=
		{
			"Mask"
		};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Mask\SFM_WFMask3.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Mask\SFM_WFMask3.p3d";
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_Co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_Co.rvmat"
		};
		class Protection
		{
			biological=1;
			chemical=1;
			nuclear=1;
		}
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=300;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_Co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_Co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Mask\data\WF_Set_GM_destruct.rvmat"
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
