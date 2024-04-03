class CfgPatches
{
	class ffff_items
	{
		requiredVersion=0.1;
		requiredAddons[]= {
			"DZ_Data", 
			"DZ_Gear_Camping", 
			"DZ_Gear_Containers", 
			"DZ_Gear_Food",
			"DZ_Scripts",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Gear_Cultivation",
			"CP_Seeds",
			"CP_Bricks",
			"CP_Cigarettepacks",
			"CP_Fruits",
			"CP_Dry_Post",
			"CP_Plants",
			"CP_Bags",
			"CannabisPlus_Joint",
			"ffff_item_overrides",
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

	class Slot_1_Dollar
	{
		name="1_Dollar";
		displayName="$1 Dollar";
		selection="1_Dollar";
		ghostIcon="set:dayz_inventory image:missing";
		stackMax=100;
	};

	class Slot_5_Dollar
	{
		name="5_Dollar";
		displayName="$5 Dollar";
		selection="5_Dollar";
		ghostIcon="set:dayz_inventory image:missing";
		stackMax=100;
	};

	class Slot_10_Dollar
	{
		name="10_Dollar";
		displayName="$10 Dollar";
		selection="10_Dollar";
		ghostIcon="set:dayz_inventory image:missing";
		stackMax=100;
	};

	class Slot_20_Dollar
	{
		name="20_Dollar";
		displayName="$20 Dollar";
		selection="20_Dollar";
		ghostIcon="set:dayz_inventory image:missing";
		stackMax=100;
	};

	class Slot_50_Dollar
	{
		name="50_Dollar";
		displayName="$50 Dollar";
		selection="50_Dollar";
		ghostIcon="set:dayz_inventory image:missing";
		stackMax=100;
	};

	class Slot_100_Dollar
	{
		name="100_Dollar";
		displayName="$100 Dollar";
		selection="100_Dollar";
		ghostIcon="set:dayz_inventory image:missing";
		stackMax=100;
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
		dependencies[]={"World"};
		
		class defs
		{
            class worldScriptModule
            {
                value = "";
                files[] = {"ffff_items/Scripts/4_World"};
			};
		};
	};
};

class FoodAnimationSources;

class MushroomsStageTransitions;

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

	class Inventory_Base;

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

	class FFFF_USD_Base : Inventory_Base
	{
		scope=0;
		displayName="American Dollar";
		descriptionShort="";
		model="ffff_items\Data\FFFF_USD\ffff_usd.p3d";
		canBeSplit=1;
		rotationFlags=16;
		itemSize[]={2,1};
		weight=9.9999997e-05;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=5000;
		varQuantityDestroyOnMin=1;
		destroyOnEmpty=1;
		absorbency=0;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"Z_USD\data\1dollar.paa"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=15;
					healthLevels[]=
					{{1,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},{0.69999999,{"DZ\gear\consumables\data\Loot_Paper.rvmat"}},{0.5,{	"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},{0.30000001,{"DZ\gear\consumables\data\Loot_Paper_damage.rvmat"}},{0,{"DZ\gear\consumables\data\Loot_Paper_destruct.rvmat"}}};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="pickUpPaper_SoundSet";
					id=797;
				};
			};
		};
	};

	class FFFF_1_Dollar: FFFF_USD_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\FFFF_USD\Textures\ffff_1_dollar.paa"
		};
	};

	class FFFF_2_Dollar: FFFF_USD_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\FFFF_USD\Textures\ffff_2_dollar.paa"
		};
	};

	class FFFF_5_Dollar: FFFF_USD_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\FFFF_USD\Textures\ffff_5_dollar.paa"
		};
	};

	class FFFF_10_Dollar: FFFF_USD_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\FFFF_USD\Textures\ffff_10_dollar.paa"
		};
	};

	class FFFF_20_Dollar: FFFF_USD_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\FFFF_USD\Textures\ffff_20_dollar.paa"
		};
	};

	class FFFF_50_Dollar: FFFF_USD_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\FFFF_USD\Textures\ffff_50_dollar.paa"
		};
	};

	class FFFF_100_Dollar: FFFF_USD_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\FFFF_USD\Textures\ffff_100_dollar.paa"
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
	

	class FFFF_CanvasBagStash_T1 : Inventory_Base
	{
		scope=2;
		model="ffff_items\Data\Canvas_Bag_Stash\CanvasBag_g.p3d";
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
					hitpoints=100;
					healthLevels[]=
					{	
						{1.0, {"ffff_items\Data\Canvas_Bag_Stash\Textures\CanvasBag_medical.rvmat"}},
						{0.7,{"ffff_items\Data\IFAK\Textures\IFAK.rvmat"}},	
						{0.5,{"ffff_items\Data\Canvas_Bag_Stash\Textures\CanvasBag_medical_damage.rvmat"}},
						{0.30000001,{"ffff_items\Data\Canvas_Bag_Stash\Textures\CanvasBag_medical_damage.rvmat"}},
						{0,{"ffff_items\Data\Canvas_Bag_Stash\Textures\CanvasBag_medical_destruct.rvmat"}}
					};
				};
			};
		};
	};
    
	class FFFF_CanvasBagStash_T2 : FFFF_CanvasBagStash_T1 {};
	class FFFF_CanvasBagStash_T3 : FFFF_CanvasBagStash_T1 {};
	class FFFF_CanvasBagStash_T4 : FFFF_CanvasBagStash_T1 {};

	class SmallProtectorCase;

	class FFFF_ProtectorCaseStash_T1 : SmallProtectorCase
	{
		scope=2;		
		itemsCargoSize[]={5,5};
		displayName="Stashed Protective Case";
		descriptionShort="Someone stashed this case away. Wonder if there's anything good in it...";
	};

	class FFFF_ProtectorCaseStash_T2: FFFF_ProtectorCaseStash_T1{};
	class FFFF_ProtectorCaseStash_T3: FFFF_ProtectorCaseStash_T1{};
	class FFFF_ProtectorCaseStash_T4: FFFF_ProtectorCaseStash_T1{};

	class WoodenCrate;

	class FFFF_WoodenCrateStash_T1 : WoodenCrate
	{
		scope=2;
		class Cargo {
            itemsCargoSize[]={10,10};
        }
		displayName="Stashed Wooden Crate";
		descriptionShort="Someone stashed this crate away. Wonder if there's anything good in it..." ;
	};

	class FFFF_WoodenCrateStash_T2: FFFF_WoodenCrateStash_T1{};
	class FFFF_WoodenCrateStash_T3: FFFF_WoodenCrateStash_T1{};
	class FFFF_WoodenCrateStash_T4: FFFF_WoodenCrateStash_T1{};

	/*
		CannabisPlus extensions
	*/
	class CP_CannabisBags;
	class CP_CannabisSeedsSkunk;
	class CP_CannabisSeedsPackSkunk;
	class CP_CannabisBrickSkunk;
	class CP_CigarettePack_CannabisSkunk;
	class CP_CannabisSkunk;
	class CP_RawSkunkCannabisPlant;
	class CP_CannabisBagSkunk;
	class CP_JointSkunk;

	class ffff_cannabis_seeds : CP_CannabisSeedsSkunk
    {
		displayName="Cannabis Seeds";
		descriptionShort="A handful of cannabis seeds.";
	};
	class ffff_cannabis_seed_pack: CP_CannabisSeedsPackSkunk
	{
		displayName="Packed Cannabis Seeds";
		descriptionShort="A package of cannabis seeds.";
	};
	class ffff_cannabis_brick: CP_CannabisBrickSkunk
	{
		displayName="Brick of Weed";
		descriptionShort="One pound of weed.";
	};
	class ffff_cannabis_cigarette_pack: CP_CigarettePack_CannabisSkunk
	{
		displayName="Joints";
		descriptionShort="A pack of joints.";
	};
	class ffff_cannabis: CP_CannabisSkunk
	{
		displayName="Weed";
		descriptionShort="Some cannabis bud.";
	};
	class ffff_raw_cannabis_plant : CP_RawSkunkCannabisPlant
    {
		displayName = "Raw Plant";
		descriptionShort = "A raw plant";
    };
	class ffff_cannabis_bag: CP_CannabisBagSkunk
	{
		displayName="Bag of Weed";
		descriptionShort="About an ounce of weed.";
	};
	class ffff_cannabis_joint: CP_JointSkunk
	{
		displayName="Joint";
		descriptionShort="A joint made out of finest weed";
	};

	/*
	
		Mushrooms
	
	*/
	class FFFF_Glow_Mushrooms_Bag : ffff_cannabis_bag
	{
		scope=2;
		displayName="Bag of Glow Mushrooms";
		descriptionShort="About an ounce of Glow Mushrooms.";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Glow_Mushroom\Textures\GlowMushroom_Bag_Co.paa"
		};
	};
	
	class FFFF_Glow_Mushrooms_Brick: ffff_cannabis_brick
	{
		scope=2;
		displayName="Brick of Glow Mushrooms";
		descriptionShort="One pound of Glow Mushrooms.";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Glow_Mushroom\Textures\GlowMushroom_Brick_Co.paa"
		};
	};
	class FFFF_Glow_Mushrooms_Cigarette_Pack: ffff_cannabis_cigarette_pack
	{
		displayName="Glow Mushroom Cigarettes";
		descriptionShort="A pack of Glow Mushroom Cigarettes.";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Glow_Mushroom\Textures\GlowMushroom_CigarettePack_Co.paa",
			"ffff_items\Data\Glow_Mushroom\Textures\GlowMushroom_CigarettePack_Co.paa"
		};
	};
	class FFFF_Glow_Mushrooms_Joint: ffff_cannabis_joint
	{
		displayName="Glow Mushroom Joint";
		descriptionShort="A joint made out of finest Glow Mushrooms";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\Glow_Mushroom\Textures\GlowMushroom_Joint_Co.paa"
		};
	};

	class AgaricusMushroom;
	class FFFF_Glow_Mushroom_Green : AgaricusMushroom
	{
		scope=2;
		displayName="Glowing Mushroom";
		descriptionShort="Some sort of mutated fungus...";
		model="ffff_items\Data\FFFF_Glow_Mushroom\FFFF_Glow_Mushroom_Single.p3d";
		weight=0;
		itemSize[]={1,2};
		varQuantityInit=150;
		varQuantityMin=0;
		varQuantityMax=150;
		stackedUnit="";
		inventorySlot[]=
		{
			"Ingredient",
			"DirectCookingA",
			"DirectCookingB",
			"DirectCookingC",
			"SmokingA",
			"SmokingB",
			"SmokingC",
			"SmokingD"
		};
		hiddenSelections[]=
		{
			"cs_raw",
			"cs_dried"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_co.paa",
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_baked_co.paa",
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_boiled_co.paa",
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_dried_co.paa",
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_burnt_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom.rvmat",
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_baked.rvmat",
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_boiled.rvmat",
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_dried.rvmat",
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_burnt.rvmat",
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_rotten.rvmat"
		};
		class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints=10;
                    healthLevels[]={{1, {}}, {0.7, {}}, {0.5, {}}, {0.3, {}}, {0, {}}};
                };
            };
        };
		class AnimationSources: FoodAnimationSources {};
		class Food
		{
			class FoodStages
			{
				class Raw
				{
					visual_properties[]={0,0,0};
					nutrition_properties[]={2.5,120,195,1,0};
					cooking_properties[]={0,0};
				};
				class Rotten
				{
					visual_properties[]={-1,-1,5};
					nutrition_properties[]={2,90,105,1,0,16};
					cooking_properties[]={0,0};
				};
				class Baked
				{
					visual_properties[]={0,1,1};
					nutrition_properties[]={1.75,300,500,1,0};
					cooking_properties[]={70,35};
				};
				class Boiled
				{
					visual_properties[]={0,2,2};
					nutrition_properties[]={1.5,250,600,1,0};
					cooking_properties[]={70,45};
				};
				class Dried
				{
					visual_properties[]={1,3,3};
					nutrition_properties[]={0.75,250,105,1,0};
					cooking_properties[]={70,30,80};
				};
				class Burned
				{
					visual_properties[]={0,4,4};
					nutrition_properties[]={2,90,90,1,0};
					cooking_properties[]={100,20};
				};
			};
			class FoodStageTransitions: MushroomsStageTransitions {};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class openTunaCan
				{
					soundSet="openTunaCan_SoundSet";
					id=204;
				};
				class Eating_TakeFood
				{
					soundSet="Eating_TakeFood_Soundset";
					id=889;
				};
				class Eating_BoxOpen
				{
					soundSet="Eating_BoxOpen_Soundset";
					id=893;
				};
				class Eating_BoxShake
				{
					soundSet="Eating_BoxShake_Soundset";
					id=894;
				};
				class Eating_BoxEnd
				{
					soundSet="Eating_BoxEnd_Soundset";
					id=895;
				};
			};
		};
	};
	class FFFF_Glow_Mushrooms_Harvestable_Base: Inventory_Base
	{
		displayName="Glowing Mushroom";
		descriptionShort="Some sort of mutated fungus...";
		scope=0;
		model="ffff_items\Data\FFFF_Glow_Mushroom\FFFF_Glow_Mushroom_Cluster.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_co.paa"
		};
	};

	class FFFF_Glow_Mushrooms_Harvestable_Green : FFFF_Glow_Mushrooms_Harvestable_Base
	{
		scope=2;
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Data\FFFF_Glow_Mushroom\Textures\ffff_glow_mushroom_co.paa"
		};
		class Harvesting
        {
            class ObtainedMushrooms
            {
                item="FFFF_Glow_Mushroom_Green";
                count=5;
                quantityMinMaxCoef[]={0.5, 1};
            };
        };
	};
};