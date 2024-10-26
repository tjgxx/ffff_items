class CfgPatches
{
	class ffff_items
	{
		requiredVersion=0.1;
		requiredAddons[]= {
			"DZ_Data", 
			"DZ_Gear_Camping", 
			"DZ_Gear_Containers", 
			"DZ_Gear_Cooking",
			"DZ_Gear_Consumables",
			"DZ_Characters_Masks",
			"DZ_Scripts",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"AX_Collectables",
			"tmane_lurk_base",
			"tmane_fatlurk_base",
			"tmane_fastlurk_base",
			"mmg_storage",
			"CJ_Materials",
			"PMK_5A_Gas_Mask",
			"SimpleRadiation",
			"FOG_Masks_M50Gasmask",
			"DZ_Gear_Crafting",
			"DZ_Characters_Tops",
			"DZ_Weapons_Firearms_AK74"
		};
	};
};

class CfgNonAIVehicles
{
	class ProxyAttachment;

	class ProxyPolaroid : ProxyAttachment
	{
		scope=2;
		inventorySlot="Polaroid";
		model="\AX_Collectables\Models\PolaroidPhotos\PolaroidPhotos.p3d";
	}
};

class CfgSlots
{
	class Slot_Polaroid
	{
		name="Polaroid";
		displayName="Polaroid";
		selection="Polaroid";
		ghostIcon="set:dayz_inventory image:missing";
		stackMax=1;
	};

	class Slot_Wallet
	{
		name="Wallet";
		displayName="Wallet";
		selection="Wallet";
		ghostIcon="set:dayz_inventory image:missing";
		stackMax=1;
	};
};

class cfgLiquidDefinitions
{
	class Coffee
	{
		type=262144;
		displayName="Coffee";
		flammability=0;
		class Nutrition
		{
			fullnessIndex=1;
			energy=50;
			water=100;
			nutritionalIndex=75;
			toxicity=0.0099999998;
			digestibility=2;
		};
	};

	class Tea
	{
		type=524288;
		displayName="Tea";
		flammability=0;
		class Nutrition
		{
			fullnessIndex=1;
			energy=50;
			water=100;
			nutritionalIndex=75;
			toxicity=0.0099999998;
			digestibility=2;
			agents=16384;
		};
	};
};

class CfgMods
{
	class ffff_items
	{	
		dir = "ffff_items";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ffff_items";
		author = "MistahGrim && Rowan";
		version = "1.5";
		extra = 0;
		type = "mod";
		dependencies[]={"World", "Game", "Mission"};
		
		class defs
		{
            class worldScriptModule
            {
                value = "";
                files[] = {
					"ffff_items/Scripts/4_World"
				};
			};
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"ffff_items/Scripts/3_Game"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"ffff_items/Scripts/5_Mission"
				};
			};
		};
	};
};

class CfgVehicles
{
	/*
		TLOU Mutants
	*/
	class tmane_lurk_base;

	class tmane_lurk: tmane_lurk_base {
		displayName="Barnacle";
		descriptionShort="This ferral has become mutated beyond recognition...";
	};

	class tmane_fastlurk_base;

	class tmane_fastlurk: tmane_fastlurk_base {
		displayName="Emaciated Barnacle";
		descriptionShort="This ferral has become mutated beyond recognition...";
	};

	class tmane_fatlurk_base;

	class tmane_fatlurk: tmane_fatlurk_base {
		displayName="Bloated Barnacle";
		descriptionShort="This ferral has become mutated beyond recognition...";
	};

	/*

		Liquids
		
	*/

	class Bottle_Base;

	class Pot : Bottle_Base
	{
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 262144 + 524288  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};

	class WaterBottle : Bottle_Base
	{
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 262144 + 524288  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};

	class Cauldron : Bottle_Base
	{
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 262144 + 524288  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};

	class Canteen : Bottle_Base
	{
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 262144 + 524288  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};

	class Vodka : Bottle_Base
	{
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 262144 + 524288  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};

	class WaterPouch_ColorBase : Bottle_Base
	{
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 262144 + 524288  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};

	class CanisterGasoline : Bottle_Base
	{
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256 + 512 + 1024 + 2048 + 4096 + 8192 + 16384 + 32768 + 65536 + 262144 + 524288  - (1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256) -32768";
	};

	/*
	
		WALLETS
	
	*/

	class Inventory_Base;

	class Collectable_PolaroidPhotos : Inventory_Base
	{
		inventorySlot[]=
		{
			"Polaroid"
		};
	};

	class Clothing;

	class CargoPants_ColorBase : Clothing
	{
		attachments[]={
			"Wallet"
		};
	};

	class Container_Base;

	class FFFF_Wallet_Base : Container_Base
	{
		scope=0;
		displayName="Wallet";
		descriptionShort="Probably a safe place to keep your cash." ;
		weight=140;
		itemSize[]={1,2};
    	itemsCargoSize[]={6,2};
		inventorySlot[]={
			"Wallet"
		};
		model="ffff_items\Data\Wallet\ffff_wallet.p3d";
		allowOwnedCargoManipulation=1;
        randomQuantity=2;
		rotationFlags=17;
        canBeDigged=1;
        repairableWithKits[]={3};
        repairCosts[]={25};
        isMeleeWeapon=1;
		attachments[]={
			"Polaroid"
		};
		hiddenSelections[]=
		{
			"camo"
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
						{1.0, {"ffff_items\Data\Medkit\Textures\ffff_wallet.rvmat"}},
						{0.7,{"ffff_items\Data\Medkit\Textures\ffff_wallet.rvmat"}},	
						{0.5,{"ffff_items\Data\Medkit\Textures\ffff_wallet_damage.rvmat"}},
						{0.30000001,{"ffff_items\Data\Medkit\Textures\ffff_wallet_damage.rvmat"}},
						{0,{"ffff_items\Data\Medkit\Textures\ffff_wallet_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class FFFF_Wallet_Brown : FFFF_Wallet_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Wallet\Textures\ffff_wallet_brown_co.paa"
		};
	};

	class FFFF_Wallet_Black : FFFF_Wallet_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Wallet\Textures\ffff_wallet_black_co.paa"
		};
	};

	class FFFF_Wallet_Blue : FFFF_Wallet_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Wallet\Textures\ffff_wallet_blue_co.paa"
		};
	};

	class FFFF_Wallet_Green : FFFF_Wallet_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Wallet\Textures\ffff_wallet_green_co.paa"
		};
	};

	class FFFF_Wallet_Red : FFFF_Wallet_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Wallet\Textures\ffff_wallet_Red_co.paa"
		};
	};
	
	class FFFF_Wallet_Yellow : FFFF_Wallet_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Wallet\Textures\ffff_wallet_yellow_co.paa"
		};
	};
	
	class GasMask_Filter: Inventory_Base
	{
		varQuantityInit=75;
		varQuantityMin=0;
		varQuantityMax=75;
	};

	class GasMask_Filter_Improvised: Inventory_Base
	{
		varQuantityInit=50;
		varQuantityMin=0;
		varQuantityMax=50;
		class Protection
		{
			biological=1;
			chemical=1;
			nuclear=1;
		}
	};

	class SR_GasMaskGP7B_Filter: GasMask_Filter
	{
		varQuantityInit=75;
		varQuantityMax=75;
	};

	class FFFF_Advanced_GasMask_Filter: SR_GasMaskGP7B_Filter
	{
		displayName="Advanced Gas Mask Filter";
		varQuantityInit=150;
		varQuantityMax=150;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Filters\Textures\gasmask_gp7b_filter_black_co.paa"
		};
	}

	class GasMask : Clothing
	{
		soundVoiceType="none";
		soundVoicePriority=5;
		repairableWithKits[]={8,6};
	};

	class GP5GasMask : Clothing
	{
		soundVoiceType="none";
		soundVoicePriority=5;
		repairableWithKits[]={8,6};
	};

	class AirborneMask: Clothing
	{
		soundVoiceType="none";
		soundVoicePriority=5;
		repairableWithKits[]={8,6};
	};

	class FOG_M50_Gasmask_Base: GasMask
	{
		varQuantityInit=150;
		varQuantityMax=150;
		repairableWithKits[]={8,6};
		class Protection
		{
			biological=1;
			chemical=1;
			nuclear=1;
		};
		soundVoiceType="none";
		soundVoicePriority=5;
	};

	class PMK_5A_Gas_Mask: Clothing
	{
		class Protection
		{
			biological=1;
			chemical=1;
			nuclear=1;
		};
		repairableWithKits[]={8,6};
		repairCosts[]={30,25};
		soundVoiceType="none";
		soundVoicePriority=5;
	};

	class HuntingJacket_ColorBase : Clothing{};

	class FFFF_Clothing_Jackets_HuntingJacket_TrustNo1 : HuntingJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\HuntingJacket\Textures\trustno_green_co.paa",
			"ffff_items\Data\HuntingJacket\Textures\trustno_green_co.paa",
			"ffff_items\Data\HuntingJacket\Textures\trustno_green_co.paa"
		};
	};
};
class cfgWeapons
{
	class AK74;

	class FFFF_Weapons_Rifles_AK74_Gold : AK74
	{
		scope=2;
		hiddenSelectionsTextures[]=
		{
			"dz\weapons\firearms\AK101\data\ak101_co.paa",
			"DZ\weapons\attachments\magazine\data\magazine_ak74_tan_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Data\GoldAK\AK_g.rvmat",
			"DZ\weapons\attachments\magazine\data\magazine_ak74_tan.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=250;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ffff_items\Data\GoldAK\AK_g.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\Data\GoldAK\AK_g.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\Data\GoldAK\AK_g_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\Data\GoldAK\AK_g_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\Data\GoldAK\AK_g_destruct.rvmat"
							}
						}
					};
				};
			};
		};
	};
}