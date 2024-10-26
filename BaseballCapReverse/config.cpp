/**
 * ActionInvertCap Action
 * @author Ryan Broman (Whitename) <ryan@broman.dev>
 * Model by misho5244 
 * Permission given by Misho and Ryan for use, all credit to origional authors.
 * Adapted from Hellmaker2a <davidou2a@hotmail.com> with permission
 * Adapted for use in FFFF by Knight
 */
class CfgPatches
{
	class BaseballCapReverse
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts",
			"DZ_Characters_Headgear"
		};
	};
};
class CfgMods
{
	class BaseballCapReverse
	{
		dir="BaseballCapReverse";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="FFFF";
		credits="FFFF/Whitename/Misho";
		author="Misho/Whitename";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
		class defs
		{
            class worldScriptModule
            {
                value = "";
                files[] = {"ffff_items/BaseballCapReverse/Scripts/4_World"};
			};
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class FFFF_Clothing_Hats_BackwardsCap_Base: Clothing
	{
		scope=0;
		displayName="$STR_CfgVehicles_BaseballCap_ColorBase0";
		descriptionShort="$STR_CfgVehicles_BaseballCap_ColorBase1";
		model="ffff_items\BaseballCapReverse\Data\baseballcapreverse_g.p3d";
		inventorySlot="Headgear";
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear"
		};
		rotationFlags=16;
		weight=110;
		itemSize[]={3,2};
		absorbency=0.80000001;
		varWetMax=0.79000002;
		heatIsolation=0.25;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		headSelectionsToHide[]=
		{
			"Clipping_Balaclava",
			"Clipping_BoonieHat"
		};
		hiddenSelections[]=
		{
			"camomale",
			"zbytek"
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
								"DZ\characters\headgear\data\BaseballCapII.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\BaseballCapII.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\BaseballCapII_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\BaseballCapII_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class ClothingTypes
		{
			male="ffff_items\BaseballCapReverse\Data\Attachment\Male\baseballcapreverse_m.p3d";
			female="ffff_items\BaseballCapReverse\Data\Attachment\Female\baseballcapreverse_f.p3d";
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
	class FFFF_Clothing_Hats_BackwardsCap_Blue: FFFF_Clothing_Hats_BackwardsCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa",
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa"
		};
		convertsTo="BaseballCap_Blue";
	};
	class FFFF_Clothing_Hats_BackwardsCap_Beige: FFFF_Clothing_Hats_BackwardsCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa",
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa"
		};
		convertsTo="BaseballCap_Beige";
	};
	class FFFF_Clothing_Hats_BackwardsCap_Black: FFFF_Clothing_Hats_BackwardsCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_black_co.paa"
		};
		convertsTo="BaseballCap_Black";
	};
	class FFFF_Clothing_Hats_BackwardsCap_Olive: FFFF_Clothing_Hats_BackwardsCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa",
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa"
		};
		convertsTo="BaseballCap_Olive";
	};
	class FFFF_Clothing_Hats_BackwardsCap_Pink: FFFF_Clothing_Hats_BackwardsCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa"
		};
		convertsTo="BaseballCap_Pink";
	};
	class FFFF_Clothing_Hats_BackwardsCap_Red: FFFF_Clothing_Hats_BackwardsCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_red_co.paa",
			"\dz\characters\headgear\data\baseballcapii_red_co.paa"
		};
		convertsTo="BaseballCap_Red";
	};
	class FFFF_Clothing_Hats_BackwardsCap_Camo: FFFF_Clothing_Hats_BackwardsCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa",
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa"
		};
		convertsTo="BaseballCap_Camo";
	};
	class FFFF_Clothing_Hats_BackwardsCap_CMMG_Black: FFFF_Clothing_Hats_BackwardsCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa"
		};
		convertsTo="BaseballCap_CMMG_Black";
	};
	class FFFF_Clothing_Hats_BackwardsCap_CMMG_Pink: FFFF_Clothing_Hats_BackwardsCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa"
		};
		convertsTo="BaseballCap_CMMG_Pink";
	};

	class FFFF_Clothing_Hats_BackwardsCap_UN: FFFF_Clothing_Hats_BackwardsCap_Base
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_un_co.paa",
			"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_un_co.paa"
		};

		hiddenSelectionsMaterials[]=
		{
			"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN.rvmat",
			"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN.rvmat"
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
								"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		convertsTo="BaseballCap_UN";
	};

	class BaseballCap_ColorBase: Clothing{};

	class BaseballCap_Blue: BaseballCap_ColorBase
	{
		convertsTo="FFFF_Clothing_Hats_BackwardsCap_Blue";
	};
	class BaseballCap_Beige: BaseballCap_ColorBase
	{
		convertsTo="FFFF_Clothing_Hats_BackwardsCap_Beige";
	};
	class BaseballCap_Black: BaseballCap_ColorBase
	{
		convertsTo="FFFF_Clothing_Hats_BackwardsCap_Black";
	};
	class BaseballCap_Olive: BaseballCap_ColorBase
	{
		convertsTo="FFFF_Clothing_Hats_BackwardsCap_Olive";
	};
	class BaseballCap_Pink: BaseballCap_ColorBase
	{
		convertsTo="FFFF_Clothing_Hats_BackwardsCap_Pink";
	};
	class BaseballCap_Red: BaseballCap_ColorBase
	{
		convertsTo="FFFF_Clothing_Hats_BackwardsCap_Red";
	};
	class BaseballCap_Camo: BaseballCap_ColorBase
	{
		convertsTo="FFFF_Clothing_Hats_BackwardsCap_Camo";
	};
	class BaseballCap_CMMG_Black: BaseballCap_ColorBase
	{
		convertsTo="FFFF_Clothing_Hats_BackwardsCap_CMMG_Black";
	};
	class BaseballCap_CMMG_Pink: BaseballCap_ColorBase
	{
		convertsTo="FFFF_Clothing_Hats_BackwardsCap_CMMG_Pink";
	};
	
	class BaseballCap_UN: BaseballCap_ColorBase
	{
		scope=2;
		convertsTo="FFFF_Clothing_Hats_BackwardsCap_UN";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_un_co.paa",
			"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_un_co.paa",
			"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_un_co.paa"
		};

		hiddenSelectionsMaterials[]=
		{
			"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN.rvmat",
			"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN.rvmat",
			"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN.rvmat"
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
								"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\BaseballCapReverse\Data\Textures\BaseballCapII_UN_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
};
