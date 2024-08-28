class CfgPatches
{
	class FFFF_BaseballCapReverse
	{
		units[]=
		{
			"BaseballCapReverse_Blue",
			"BaseballCapReverse_Beige",
			"BaseballCapReverse_Black",
			"BaseballCapReverse_Olive",
			"BaseballCapReverse_Pink",
			"BaseballCapReverse_Red",
			"BaseballCapReverse_Camo",
			"BaseballCapReverse_CMMG_Black",
			"BaseballCapReverse_CMMG_Pink"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Optics",
			"DZ_Radio",
			"DZ_Characters_Vests",
			"DZ_Weapons_Magazines",
			"DZ_Gear_Tools",
			"DZ_Weapons_Firearms",
			"DZ_Gear_Containers"
		};
	};
};
class CfgVehicles
{
	class Clothing_Base;
	class BaseballCapReverse_ColorBase: Clothing_Base
	{
		displayName="Baseball Cap"
		descriptionShort="Wear it backwards like the cool kids do!";
		model="ffff_items\BackwardsHats\Data\BaseballCapReverse\baseballcapreverse_g.p3d";
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
			"Clipping_baseballcap"
		};
		hiddenSelections[]=
		{
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
			male="ffff_items\BackwardsHats\Data\BaseballCapReverse\baseballcapreverse_m.p3d";
			female="ffff_items\BackwardsHats\Data\BaseballCapReverse\baseballcapreverse_f.p3d";
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
	class BaseballCapReverse_Blue: BaseballCapReverse_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa",
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa",
			"\dz\characters\headgear\data\baseballcapii_blue_co.paa"
		};
	};
	class BaseballCapReverse_Beige: BaseballCapReverse_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa",
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa",
			"\dz\characters\headgear\data\baseballcapii_beige_co.paa"
		};
	};
	class BaseballCapReverse_Black: BaseballCapReverse_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_black_co.paa"
		};
	};
	class BaseballCapReverse_Olive: BaseballCapReverse_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa",
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa",
			"\dz\characters\headgear\data\baseballcapii_olive_co.paa"
		};
	};
	class BaseballCapReverse_Pink: BaseballCapReverse_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_pink_co.paa"
		};
	};
	class BaseballCapReverse_Red: BaseballCapReverse_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_red_co.paa",
			"\dz\characters\headgear\data\baseballcapii_red_co.paa",
			"\dz\characters\headgear\data\baseballcapii_red_co.paa"
		};
	};
	class BaseballCapReverse_Camo: BaseballCapReverse_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa",
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa",
			"\dz\characters\headgear\data\baseballcapii_camo_co.paa"
		};
	};
	class BaseballCapReverse_CMMG_Black: BaseballCapReverse_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_black_co.paa"
		};
	};
	class BaseballCapReverse_CMMG_Pink: BaseballCapReverse_ColorBase
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa",
			"\dz\characters\headgear\data\baseballcapii_cmmg_pink_co.paa"
		};
	};

};
