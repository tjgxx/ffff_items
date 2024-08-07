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
			"DZ_Scripts",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"AX_Collectables",
			"tmane_lurk_base",
			"tmane_fatlurk_base",
			"tmane_fastlurk_base",
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
                files[] = {"ffff_items/Scripts/4_World"};
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

	/*
	
		STASH CONTAINERS
	
	*/

	class FFFF_Stash_Base : Inventory_Base {};

	class FFFF_CanvasBagStash_T1 : FFFF_Stash_Base
	{
		scope=2;
		model="DZ\characters\backpacks\CanvasBag_g.p3d";
		displayName="Stashed Bag";
        class Cargo {
            itemsCargoSize[]={5,10};
        };
		descriptionShort="Someone stashed this bag away. Wonder if there's anything good in it..."; 
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000000;
					healthLevels[]=
					{	
						{1.0,{"DZ\characters\backpacks\Data\CanvasBag_medical.rvmat"}},
						{0.7,{"DZ\characters\backpacks\Data\CanvasBag_medical.rvmat"}},
						{0.5,{"DZ\characters\backpacks\Data\CanvasBag_medical_damage.rvmat"}},
						{0.30000001,{"DZ\characters\backpacks\Data\CanvasBag_medical_damage.rvmat"}},
						{0,{"DZ\characters\backpacks\Data\CanvasBag_medical_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class FFFF_CanvasBagStash_T2 : FFFF_CanvasBagStash_T1 {};
	class FFFF_CanvasBagStash_T3 : FFFF_CanvasBagStash_T1 {};
	class FFFF_CanvasBagStash_T4 : FFFF_CanvasBagStash_T1 {};

	class FFFF_ProtectorCaseStash_T1 : FFFF_Stash_Base
	{
		scope=2;		
		model="dz\gear\containers\Protector_Case.p3d";
		class Cargo {
			itemsCargoSize[]={5,5};
		}
		displayName="Stashed Protective Case";
		descriptionShort="Someone stashed this case away. Wonder if there's anything good in it...";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000000;
					healthLevels[]=
					{	
						{1.0,{"DZ\gear\containers\data\Protector_Case.rvmat"}},
						{0.7,{"DZ\gear\containers\data\Protector_Case.rvmat"}},
						{0.5,{"DZ\gear\containers\data\Protector_Case_damage.rvmat"}},
						{0.30000001,{"DZ\gear\containers\data\Protector_Case_damage.rvmat"}},
						{0,{"DZ\gear\containers\data\Protector_Case_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class FFFF_ProtectorCaseStash_T2: FFFF_ProtectorCaseStash_T1{};
	class FFFF_ProtectorCaseStash_T3: FFFF_ProtectorCaseStash_T1{};
	class FFFF_ProtectorCaseStash_T4: FFFF_ProtectorCaseStash_T1{};

	class WoodenCrate;

	class FFFF_WoodenCrateStash_T1 : FFFF_Stash_Base
	{
		scope=2;
		model="DZ\gear\camping\wooden_case.p3d";
		class Cargo {
            itemsCargoSize[]={10,10};
        }
		displayName="Stashed Wooden Crate";
		descriptionShort="Someone stashed this crate away. Wonder if there's anything good in it..." ;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=1000000000;
					healthLevels[]=
					{	
						{1.0,{"DZ\gear\camping\data\wooden_case.rvmat"}},
						{0.7,{"DZ\gear\camping\data\wooden_case.rvmat"}},
						{0.5,{"DZ\gear\camping\data\wooden_case_damage.rvmat"}},
						{0.30000001,{"DZ\gear\camping\data\wooden_case_damage.rvmat"}},
						{0,{"DZ\gear\camping\data\wooden_case_destruct.rvmat"}}
					};
				};
			};
		};
	};

	class FFFF_WoodenCrateStash_T2: FFFF_WoodenCrateStash_T1{};
	class FFFF_WoodenCrateStash_T3: FFFF_WoodenCrateStash_T1{};
	class FFFF_WoodenCrateStash_T4: FFFF_WoodenCrateStash_T1{};

	/*
	
	Medical Items
	
	*/
	class FFFF_Medkit_Base : Inventory_Base
	{
		scope=0;
		descriptionShort="A trauma kit containing essential life-saving materials, bleeding control and major wound treatments.";
		model="ffff_items\Data\Medkit\ffff_medkit.p3d";
		itemSize[]={2,2};
		weight=200;
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
						{1.0, {"ffff_items\Data\Medkit\Textures\ffff_medkit.rvmat"}},
						{0.7,{"ffff_items\Data\Medkit\Textures\ffff_medkit.rvmat"}},	
						{0.5,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},
						{0.30000001,{"DZ\characters\vests\Data\BallisticVest_damage.rvmat"}},
						{0,{"DZ\characters\vests\Data\BallisticVest_destruct.rvmat"}}
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
					soundSet="sewingkit_pickup_SoundSet";
					id=796;
				};
				class pickup
				{
					soundSet="sewingkit_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="ammobox_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class FFFF_Medkit_Civilian : FFFF_Medkit_Base
	{
		scope=2;
		displayName="Civilian Medkit";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Medkit\Textures\ffff_medkit_orange_co.paa"
		};
	};

	class FFFF_Medkit_Military : FFFF_Medkit_Base
	{
		scope=2;
		displayName="Military Medkit";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Medkit\Textures\ffff_medkit_yellow_co.paa"
		};
	};

	class FFFF_Medkit_Scientific : FFFF_Medkit_Base
	{
		scope=2;
		displayName="Scientific Medkit";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Medkit\Textures\ffff_medkit_blue_co.paa"
		};
	};
};