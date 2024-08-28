class CfgPatches
{
	class ffff_Patches
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"ModularVestSystem"
		};
	};
};
class cfgVehicles
{
	class Inventory_Base{};
	class Clothing_Base;
	class Clothing: Clothing_Base{};

	class FFFF_Armband_Base: Clothing
	{
		scope=0;
		displayName="Armband";
		descriptionShort="Armband";
		model="ffff_items\Patches\NewArmbands\Data\FFFF_Armband_New.p3d";
		itemSize[]={2,2};
		inventorySlot[]={"Armband"};
		weight=140;
		rotationFlags=1;
		hiddenSelections[]={"zbytek","armband"};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_DARPA_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
        hiddenSelectionsMaterials[]=
        {
            "ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Test.rvmat",
			"ModularVestSystem\data\vestTextures\MVS_Armband.rvmat"
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
                        {1.0,{"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Test.rvmat","ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Test.rvmat"}},
                        {0.7,{"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Test.rvmat","ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Test.rvmat"}},
                        {0.5,{"ModularVestSystem\data\vestTextures\MVS_Country_Patch_damage.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband_damage.rvmat"}},
                        {0.3,{"ModularVestSystem\data\vestTextures\MVS_Country_Patch_damage.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband_damage.rvmat"}},
                        {0.0,{"ModularVestSystem\data\vestTextures\MVS_Country_Patch_destruct.rvmat","ModularVestSystem\data\vestTextures\MVS_Armband_destruct.rvmat"}}
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
			male="ModularVestSystem\data\MVS_Patch_m2.p3d";
			female="ModularVestSystem\data\MVS_Patch_m2.p3d";
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
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
		hiddenSelectionsMaterials[]=
        {
            "ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Boysies.rvmat",
			"ModularVestSystem\data\vestTextures\MVS_Armband.rvmat"
        };
	};

	class FFFF_Armband_ASEP : FFFF_Armband_Base
	{
		scope=2;
		displayName="ASEP Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_ASEP_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_UN : FFFF_Armband_Base
	{
		scope=2;
		displayName="United Nations Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_UN_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Arkin : FFFF_Armband_Base
	{
		scope=2;
		displayName="Arkin Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Arkin_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_DARPA : FFFF_Armband_Base
	{
		scope=2;
		displayName="DARPA Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_DARPA_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Market : FFFF_Armband_Base
	{
		scope=2;
		displayName="Market Guard Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Market_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Bandit : FFFF_Armband_Base
	{
		scope=2;
		displayName="Bogdan's Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Bandit_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_D3AF : FFFF_Armband_Base
	{
		scope=2;
		displayName="D3AF Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_D3AF_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_D3AF_Camo : FFFF_Armband_Base
	{
		scope=2;
		displayName="D3AF Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_D3AF_Camo_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Lodge : FFFF_Armband_Base
	{
		scope=2;
		displayName="Lodge Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Lodge_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Sowjet : FFFF_Armband_Base
	{
		scope=2;
		displayName="Sowjet Armory Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Sowjet_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Templar : FFFF_Armband_Base
	{
		scope=2;
		displayName="Templar Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Templar_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_TrueEye : FFFF_Armband_Base
	{
		scope=2;
		displayName="True Eye Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_TrueEye_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class FFFF_Armband_Union : FFFF_Armband_Base
	{
		scope=2;
		displayName="Union Armband";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\NewArmbands\Data\FFFF_Armband_Union_co.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};

	class Modular_Patch_Base_2;
	class FFFF_Patch_Arkin: Modular_Patch_Base_2
	{
		scope=2;
		displayName="Arkin Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\Arkin_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class FFFF_Patch_D3AF: Modular_Patch_Base_2
	{
		scope=2;
		displayName="D3AF Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\D3AF_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class FFFF_Patch_D3AF_Camo: Modular_Patch_Base_2
	{
		scope=2;
		displayName="D3AF Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\D3AF_Camo_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class FFFF_Patch_ASEP: Modular_Patch_Base_2
	{
		scope=2;
		displayName="ASEP Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\ASEP_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class FFFF_Patch_Bandit: Modular_Patch_Base_2
	{
		scope=2;
		displayName="Bandit Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\Bandit_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class FFFF_Patch_DOC: Modular_Patch_Base_2
	{
		scope=2;
		displayName="DOC Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\DOC_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class FFFF_Patch_Market: Modular_Patch_Base_2
	{
		scope=2;
		displayName="Market Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\Market_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class FFFF_Patch_UN: Modular_Patch_Base_2
	{
		scope=2;
		displayName="UN Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\UN_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class FFFF_Patch_Lodge: Modular_Patch_Base_2
	{
		scope=2;
		displayName="Lodge Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\Lodge_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class FFFF_Patch_DARPA: Modular_Patch_Base_2
	{
		scope=2;
		displayName="DARPA Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\DARPA_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class FFFF_Patch_Templar: Modular_Patch_Base_2
	{
		scope=2;
		displayName="Templar Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\Templar_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
	class FFFF_Patch_Union: Modular_Patch_Base_2
	{
		scope=2;
		displayName="Union Patch";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Patches\Data\Union_Patch.paa",
			"\ModularVestSystem\data\vestTextures\MVS_Armband_co.paa"
		};
	};
};
