class CfgPatches
{
	class ffff_Armors
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"armor_a",
			"DZ_Characters_Headgear"
		};
	};
};
class cfgVehicles
{
	class Clothing;
	class CowboyHat_ColorBase: Clothing
	{
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
							1,
							
							{
								"DZ\characters\headgear\data\CowboyHat.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\characters\headgear\data\CowboyHat.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\characters\headgear\data\CowboyHat_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\characters\headgear\data\CowboyHat_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\characters\headgear\data\CowboyHat_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
	class FFFF_Armor_Helmets_CowboyHat_Brown: CowboyHat_ColorBase
	{
		scope=2;
		displayName="Armored Cowboy Hat";
		descriptionShort="This rugged cowboy hat isn't just for show—crafted with reinforced leather and embedded with lightweight metal plates, it provides unexpected protection against headshots. The wide brim shields your eyes from the sun, while the internal lining offers resistance against slashes and blunt force. Ideal for wasteland wanderers and gunslingers who need to balance style with survival.";
		color="Brown";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_Brown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_Brown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_Brown_co.paa"
		};
		class GlobalArmor
		{
			class Projectile
			{
				class Health
				{
					damage=0.25;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class Melee
			{
				class Health
				{
					damage=0.55000001;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class Infected
			{
				class Health
				{
					damage=0.55000001;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class FragGrenade
			{
				class Health
				{
					damage=0.5;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.25999999;
				};
			};
		};
	};
	class FFFF_Armor_Helmets_CowboyHat_Black: CowboyHat_ColorBase
	{
		scope=2;
		displayName="Armored Cowboy Hat";
		descriptionShort="This rugged cowboy hat isn't just for show—crafted with reinforced leather and embedded with lightweight metal plates, it provides unexpected protection against headshots. The wide brim shields your eyes from the sun, while the internal lining offers resistance against slashes and blunt force. Ideal for wasteland wanderers and gunslingers who need to balance style with survival.";
		color="black";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_black_co.paa",
			"DZ\characters\headgear\data\CowboyHat_black_co.paa",
			"DZ\characters\headgear\data\CowboyHat_black_co.paa"
		};
		class GlobalArmor
		{
			class Projectile
			{
				class Health
				{
					damage=0.25;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class Melee
			{
				class Health
				{
					damage=0.55000001;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class Infected
			{
				class Health
				{
					damage=0.55000001;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class FragGrenade
			{
				class Health
				{
					damage=0.5;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.25999999;
				};
			};
		};
	};
	class FFFF_Armor_Helmets_CowboyHat_DarkBrown: CowboyHat_ColorBase
	{
		scope=2;
		displayName="Armored Cowboy Hat";
		descriptionShort="This rugged cowboy hat isn't just for show—crafted with reinforced leather and embedded with lightweight metal plates, it provides unexpected protection against headshots. The wide brim shields your eyes from the sun, while the internal lining offers resistance against slashes and blunt force. Ideal for wasteland wanderers and gunslingers who need to balance style with survival.";
		color="darkBrown";
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa",
			"DZ\characters\headgear\data\CowboyHat_darkBrown_co.paa"
		};
		class GlobalArmor
		{
			class Projectile
			{
				class Health
				{
					damage=0.25;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class Melee
			{
				class Health
				{
					damage=0.55000001;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class Infected
			{
				class Health
				{
					damage=0.55000001;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class FragGrenade
			{
				class Health
				{
					damage=0.5;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.25999999;
				};
			};
		};
	};
	class FFFF_Armor_Helmets_CowboyHat_Green: CowboyHat_ColorBase
	{
		scope=2;
		displayName="Armored Cowboy Hat";
		descriptionShort="This rugged cowboy hat isn't just for show—crafted with reinforced leather and embedded with lightweight metal plates, it provides unexpected protection against headshots. The wide brim shields your eyes from the sun, while the internal lining offers resistance against slashes and blunt force. Ideal for wasteland wanderers and gunslingers who need to balance style with survival.";
		color="green";
		hiddenSelectionsTextures[]=
		{
			"DZ\characters\headgear\data\CowboyHat_green_co.paa",
			"DZ\characters\headgear\data\CowboyHat_green_co.paa",
			"DZ\characters\headgear\data\CowboyHat_green_co.paa"
		};
		class GlobalArmor
		{
			class Projectile
			{
				class Health
				{
					damage=0.25;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class Melee
			{
				class Health
				{
					damage=0.55000001;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class Infected
			{
				class Health
				{
					damage=0.55000001;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.5;
				};
			};
			class FragGrenade
			{
				class Health
				{
					damage=0.5;
				};
				class Blood
				{
					damage=0;
				};
				class Shock
				{
					damage=0.25999999;
				};
			};
		};
	};

	class TF_6sh112_Base;
    class TF_6B23_112Vest;
    class TF_6B43Vest_Base;

    class TF_6sh112_UN: TF_6sh112_Base
	{
		scope=2;
		visibilityModifier=0.5;
        itemSize[]={3,3};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Armors\Data\rig_6sh112_co",
			"ffff_items\Armors\Data\pouches_rig_6sh112_co.paa"
		};
	};

    class TF_6B43Vest_UN: TF_6B43Vest_Base
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Armors\Data\vest_6b43_co.paa"
		};
	};

    class TF_6B23_112Vest_UN: TF_6B23_112Vest
	{
		scope=2;
        hiddenSelectionsTextures[]=
		{
			"ffff_items\Armors\Data\6b23_UN_co.paa",
			"ffff_items\Armors\Data\rig_6sh112_co.paa",
			"ffff_items\Armors\Data\pouches_rig_6sh112_co.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=200;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"armor_a\vests\vest_6b23\data\6B23.rvmat",
								"armor_a\vests\rig_6sh112\data\rig_6sh112.rvmat",
								"armor_a\vests\rig_6sh112\data\pouches\pouches_rig_6sh112.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"armor_a\vests\vest_6b23\data\6B23.rvmat",
								"armor_a\vests\rig_6sh112\data\rig_6sh112.rvmat",
								"armor_a\vests\rig_6sh112\data\pouches\pouches_rig_6sh112.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"armor_a\vests\vest_6b23\data\6B23_damage.rvmat",
								"armor_a\vests\rig_6sh112\data\rig_6sh112_damage.rvmat",
								"armor_a\vests\rig_6sh112\data\pouches\pouches_rig_6sh112_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"armor_a\vests\vest_6b23\data\6B23_damage.rvmat",
								"armor_a\vests\rig_6sh112\data\rig_6sh112_damage.rvmat",
								"armor_a\vests\rig_6sh112\data\pouches\pouches_rig_6sh112_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"armor_a\vests\vest_6b23\data\6B23_destruct.rvmat",
								"armor_a\vests\rig_6sh112\data\rig_6sh112_destruct.rvmat",
								"armor_a\vests\rig_6sh112\data\pouches\pouches_rig_6sh112_destruct.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage=0.45;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.25;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage=0.5;
					};
					class Blood
					{
						damage=0;
					};
					class Shock
					{
						damage=0.25;
					};
				};
			};
		};
    };
};
