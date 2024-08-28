class CfgPatches
{
	class SFM_SportBackpack
	{
		units[]=
		{
			"FFFF_Clothing_Bags_SportsBag_Green",
			"FFFF_Clothing_Bags_SportsBag_Black"
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
	class TortillaBag;
	class SFM_SportBackpack_Base: TortillaBag
	{
		scope=0;
		displayName="Sports Bag";
		descriptionShort="A single strap sports bag, quite comfortable for carrying a small amount of things, has a good fabric and material quality.";
		model="SFM\Bags\SFM_SportBackpack\SFM_SportBackpack_G.p3d";
		inventorySlot="Back";
		attachments[]={};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,4};
		itemsCargoSize[]={10,6};
		repairableWithKits[]={5,2};
		weight=2100;
		soundAttType="Outdoor";
		randomQuantity=3;
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"SFM\Bags\SFM_SportBackpack\data\SFM_SportBackpack.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Bags\SFM_SportBackpack\data\SFM_SportBackpack.rvmat"
		};
		class ClothingTypes
		{
			male="SFM\Bags\SFM_SportBackpack\SFM_SportBackpack.p3d";
			female="SFM\Bags\SFM_SportBackpack\SFM_SportBackpack.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=160;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"SFM\Bags\SFM_SportBackpack\data\SFM_SportBackpack.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Bags\SFM_SportBackpack\data\SFM_SportBackpack.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Bags\SFM_SportBackpack\data\SFM_SportBackpack_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Bags\SFM_SportBackpack\data\SFM_SportBackpack_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Bags\SFM_SportBackpack\data\SFM_SportBackpack_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="DayZRP_Slot_Soundset";
					id=796;
				};
				class pickUpItem
				{
					soundSet="DayZRP_Slot_Soundset";
					id=797;
				};
				class drop
				{
					soundset="DayZRP_Slot_Soundset";
					id=898;
				};
			};
		};
	};
	class FFFF_Clothing_Bags_SportsBag_Green: SFM_SportBackpack_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Bags\SFM_SportBackpack\data\SFM_SportBackpack.paa"
		};
	};
	class FFFF_Clothing_Bags_SportsBag_Black: SFM_SportBackpack_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM\Bags\SFM_SportBackpack\data\SFM_SportBackpack_Bandit.paa"
		};
	};
};
