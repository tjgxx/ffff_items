class CfgPatches
{
	class ffff_Patches
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base{};
	class Clothing;

	class FFFF_Armband_Base: Clothing
	{
		scope=0;
		displayName="Armband";
		descriptionShort="A well-worn armband displaying the emblem of a crew, syndicate, or organization. Its design varies by group, serving as a clear identifier for those within and outside its ranks. Whether a symbol of pride, tradition, or inevitability, it's instantly recognized across territories by those who know what it represents.";
		model="ffff_items\Patches\NewArmbands\Data\FFFF_Armband_New.p3d";
		itemSize[]={2,2};
		inventorySlot[]={"Armband"};
		weight=140;
		rotationFlags=1;
		hiddenSelections[]={"zbytek","armband"};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_DARPA_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "ffff_items\Patches\NewArmbands\Data\FFFF_Armband.rvmat",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband.rvmat"
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
                        {1.0,{"ffff_items\Patches\NewArmbands\Data\FFFF_Armband.rvmat","ffff_items\Patches\NewArmbands\Data\MVS_Armband.rvmat"}},
                        {0.7,{"ffff_items\Patches\NewArmbands\Data\FFFF_Armband.rvmat","ffff_items\Patches\NewArmbands\Data\MVS_Armband.rvmat"}},
                        {0.5,{"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_damage.rvmat","ffff_items\Patches\NewArmbands\Data\MVS_Armband_damage.rvmat"}},
                        {0.3,{"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_damage.rvmat","ffff_items\Patches\NewArmbands\Data\MVS_Armband_damage.rvmat"}},
                        {0.0,{"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_destruct.rvmat","ffff_items\Patches\NewArmbands\Data\MVS_Armband_destruct.rvmat"}}
                    };
				};
			};
		};
		class Cargo
		{
			itemsCargoSize[]={2,2};
		};
		class ClothingTypes
		{
			male="ffff_items\Patches\NewArmbands\Data\ArmbandPatchHolder\MVS_Patch_m2.p3d";
			female="ffff_items\Patches\NewArmbands\Data\ArmbandPatchHolder\MVS_Patch_m2.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem_Light
				{
					soundSet="pickUpCourierBag_Light_SoundSet";
					id=796;
				};
				class pickUpItem
				{
					soundSet="pickUpCourierBag_SoundSet";
					id=797;
				};
			};
		};
	};

	class FFFF_Armband_Boysies : FFFF_Armband_Base
	{
		scope=2;
		displayName="Boysies Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Boysies_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
		hiddenSelectionsMaterials[]=
        {
            "ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Boysies.rvmat",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband.rvmat"
        };
	};

	class FFFF_Armband_ASEP : FFFF_Armband_Base
	{
		scope=2;
		displayName="ASEP Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_ASEP_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_UN : FFFF_Armband_Base
	{
		scope=2;
		displayName="United Nations Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_UN_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Arkin : FFFF_Armband_Base
	{
		scope=2;
		displayName="Arkin Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Arkin_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_DARPA : FFFF_Armband_Base
	{
		scope=2;
		displayName="DARPA Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_DARPA_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Market : FFFF_Armband_Base
	{
		scope=2;
		displayName="Market Guard Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Market_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Bandit : FFFF_Armband_Base
	{
		scope=2;
		displayName="Bogdan's Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Bandit_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_D3AF : FFFF_Armband_Base
	{
		scope=2;
		displayName="D3AF Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_D3AF_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_D3AF_Camo : FFFF_Armband_Base
	{
		scope=2;
		displayName="D3AF Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_D3AF_Camo_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Lodge : FFFF_Armband_Base
	{
		scope=2;
		displayName="Lodge Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Lodge_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Sowjet : FFFF_Armband_Base
	{
		scope=2;
		displayName="Sowjet Armory Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Sowjet_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Templar : FFFF_Armband_Base
	{
		scope=2;
		displayName="Templar Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Templar_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_TrueEye : FFFF_Armband_Base
	{
		scope=2;
		displayName="True Eye Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_TrueEye_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Union : FFFF_Armband_Base
	{
		scope=2;
		displayName="Union Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Union_co.paa",
			"ffff_items\Patches\NewArmbands\Data\MVS_Armband_co.paa"
		};
	};
};
