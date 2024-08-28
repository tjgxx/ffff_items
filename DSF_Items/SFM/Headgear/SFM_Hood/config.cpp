class CfgPatches
{
	class SFM_HoodBaf
	{
		units[]=
		{
			"FFFF_Clothing_Face_BalaclavaHood_Blue",
			"FFFF_Clothing_Face_BalaclavaHood_Green",
			"FFFF_Clothing_Face_BalaclavaHood_Tan",
			"FFFF_Clothing_Face_BalaclavaHood_White"
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
	class SFM_BalaclavaHood_ColorBase: BalaclavaMask_Black
	{
		scope=0;
		displayName="Hooded Balaclava";
		descriptionShort="Hooded balaclava allows you to hide most of your face, retains heat well in cold weather, has two laces and is made of fleece fabric";
		model="SFM\Headgear\SFM_Hood\SFM_Hood_g.p3d";
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
		itemSize[]={2,2};
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
			"SFM\Headgear\SFM_Hood\data\Hood_buff_BaseColor_Blue.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"SFM\Headgear\SFM_Hood\data\Hood.rvmat"
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
								"SFM\Headgear\SFM_Hood\data\Hood.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"SFM\Headgear\SFM_Hood\data\Hood.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"SFM\Headgear\SFM_Hood\data\Hood_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"SFM\Headgear\SFM_Hood\data\Hood_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"SFM\Headgear\SFM_Hood\data\Hood_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="SFM\Headgear\SFM_Hood\SFM_Hood.p3d";
			female="SFM\Headgear\SFM_Hood\SFM_Hood.p3d";
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
	class FFFF_Clothing_Face_BalaclavaHood_Blue: SFM_BalaclavaHood_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Hood\data\Hood_buff_BaseColor_Blue.paa"
		};
	};
	class FFFF_Clothing_Face_BalaclavaHood_Green: SFM_BalaclavaHood_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Hood\data\Hood_buff_BaseColor_Green.paa"
		};
	};
	class FFFF_Clothing_Face_BalaclavaHood_Tan: SFM_BalaclavaHood_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Hood\data\Hood_buff_BaseColor_Tan.paa"
		};
	};
	class FFFF_Clothing_Face_BalaclavaHood_White: SFM_BalaclavaHood_ColorBase
	{
		scope=2;
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"SFM\Headgear\SFM_Hood\data\Hood_buff_BaseColor_White.paa"
		};
	};
};
