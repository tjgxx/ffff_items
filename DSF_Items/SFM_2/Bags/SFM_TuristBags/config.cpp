class CfgPatches
{
	class SFM_TuristBags
	{
		units[]=
		{
			"FFFF_Clothing_Bags_TouristBackpack_Blue",
			"FFFF_Clothing_Bags_TouristBackpack_Green",
			"FFFF_Clothing_Bags_TouristBackpack_Red",
			"FFFF_Clothing_Bags_TouristBackpack_Yellow"
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
	class SFM_TuristBags_Base: TortillaBag
	{
		scope=0;
		displayName="Tourist Backpack";
		descriptionShort="The Tourist backpack is an indispensable companion for lovers of outdoor activities and travel. With multiple compartments and pockets, it provides convenient organization and secure storage for your essentials, from clothes to gear. Comfortable straps and a ventilated back make it ideal for long hikes and walks. Durable materials and waterproof fabric protect the contents from the elements.";
		model="SFM_2\Bags\SFM_TuristBags\SFM_TuristBags_g.p3d";
		inventorySlot="Back";
		attachments[]={};
		itemInfo[]=
		{
			"Clothing",
			"Back"
		};
		rotationFlags=16;
		itemSize[]={4,4};
		itemsCargoSize[]={10,8};
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
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_03_Green_BaseColor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists.rvmat"
		};
		class ClothingTypes
		{
			male="SFM_2\Bags\SFM_TuristBags\SFM_TuristBags.p3d";
			female="SFM_2\Bags\SFM_TuristBags\SFM_TuristBags.p3d";
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
								"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM_2\Bags\SFM_TuristBags\data\Backpack_Tourists_destruct.rvmat"
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
	class FFFF_Clothing_Bags_TouristBackpack_Blue: SFM_TuristBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_03_Blue_BaseColor.paa"
		};
	};
	class FFFF_Clothing_Bags_TouristBackpack_Green: SFM_TuristBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_03_Green_BaseColor.paa"
		};
	};
	class FFFF_Clothing_Bags_TouristBackpack_Red: SFM_TuristBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_03_Red_BaseColor.paa"
		};
	};
	class FFFF_Clothing_Bags_TouristBackpack_Yellow: SFM_TuristBags_Base
	{
		scope=2;
		visibilityModifier=0.94999999;
		hiddenSelectionsTextures[]=
		{
			"SFM_2\Bags\SFM_TuristBags\data\Backpack_03_Yellow_BaseColor.paa"
		};
	};
};
