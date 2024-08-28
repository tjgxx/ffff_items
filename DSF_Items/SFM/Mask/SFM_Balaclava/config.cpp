class CfgPatches
{
	class SFM_Balaclava
	{
		units[]=
		{
			"FFFF_Clothing_Face_Balaclava_Black"
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
	class BalaclavaMask_Black;
	class SFM_Balaclava_ColorBase: BalaclavaMask_Black
	{
		scope=0;
		displayName="Balaclava";
		descriptionShort="A headdress that covers the head, forehead and face, leaving a small slit for the eyes, mouth or facial contour. It is the most common type of balaclava, which is why these concepts are often used as synonyms.";
		model="ffff_items\DSF_Items\SFM\Mask\SFM_Balaclava\SFM_Balaclava_g.p3d";
		inventorySlot[]=
		{
			"Mask"
		};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		ContinuouActions[]=
		{
			"AT_WRING_CLOTHES"
		};
		rotationFlags=1;
		weight=130;
		itemSize[]={2,1};
		ragQuantity=1;
		varWetMax=1;
		heatIsolation=1;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava"
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Mask\SFM_Balaclava\data\Balaclava_01_BaseColor_Black.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Mask\SFM_Balaclava\data\Balaclava.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ffff_items\DSF_Items\SFM\Mask\SFM_Balaclava\data\Balaclava.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Mask\SFM_Balaclava\data\Balaclava.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Mask\SFM_Balaclava\data\Balaclava_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Mask\SFM_Balaclava\data\Balaclava_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\DSF_Items\SFM\Mask\SFM_Balaclava\data\Balaclava_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Mask\SFM_Balaclava\SFM_Balaclava.p3d";
			female="ffff_items\DSF_Items\SFM\Mask\SFM_Balaclava\SFM_Balaclava.p3d";
		};
		class Protection
		{
			biological=0.25;
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
	class FFFF_Clothing_Face_Balaclava_Black: SFM_Balaclava_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Mask\SFM_Balaclava\data\Balaclava_01_BaseColor_Black.paa"
		};
	};
};
