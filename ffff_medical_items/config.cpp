class CfgPatches
{
	class ffff_medical_items
	{
		requiredVersion=0.1;
		requiredAddons[]= {
			"DZ_Data",
			"DZ_Scripts",
			"mmg_storage",
			"DZ_Gear_Consumables",
			"DZ_Gear_Crafting",
			"CannabisPlus",
			"NoEatCovered_Configurable"
		};
	};
};

class CfgMods
{
	class ffff_medical_items
	{	
		dir = "ffff_medical_items";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ffff_medical_items";
		author = "Rowan";
		version = "1.5";
		extra = 0;
		type = "mod";
		dependencies[]={"World"};
		
		class defs
		{
            class worldScriptModule
            {
                value = "";
                files[] = {"ffff_items/ffff_medical_items/Scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;
	class Clothing;
	/*
	
	Medical Items
	
	*/
	class FFFF_Medkit_Base : Inventory_Base
	{
		scope=0;
		descriptionShort="A trauma kit containing essential life-saving materials, bleeding control and major wound treatments.";
		model="ffff_items\ffff_medical_items\Data\Medkit\ffff_medkit.p3d";
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
						{1.0, {"ffff_items\ffff_medical_items\Data\Medkit\Textures\ffff_medkit.rvmat"}},
						{0.7,{"ffff_items\ffff_medical_items\Data\Medkit\Textures\ffff_medkit.rvmat"}},	
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
			"ffff_items\ffff_medical_items\Data\Medkit\Textures\ffff_medkit_orange_co.paa"
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
			"ffff_items\ffff_medical_items\Data\Medkit\Textures\ffff_medkit_yellow_co.paa"
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
			"ffff_items\ffff_medical_items\Data\Medkit\Textures\ffff_medkit_blue_co.paa"
		};
	};
	
	class FFFF_SyntheticBloodBag: Inventory_Base
	{
		scope=2;
		displayName="█████████ █████";
		descriptionShort="Developed by the █████ ██████ ███████, this █████████ █████ ██████████ has been ██████████ to ████ ███████████ ████████ for ██████ in the █████.";
		model="\dz\gear\medical\BloodBag_Full_IV.p3d";
		hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\ffff_medical_items\Data\SyntheticBlood\Textures\syntheticbloodbag_full_ca.paa"
		};
		debug_ItemCategory=7;
		rotationFlags=17;
		itemSize[]={2,2};
		weight=110;
		varLiquidTypeInit=4;
		liquidContainerType="1 + 2 + 4 + 8 + 16 + 32 + 64 + 128 + 256";
		soundImpactType="plastic";
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\BloodBag_Full.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\BloodBag_Full.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\BloodBag_Full_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\BloodBag_Full_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\BloodBag_Full_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class BloodBag_start
				{
					soundSet="BloodBag_start_SoundSet";
					id=201;
				};
				class BloodBag_spear
				{
					soundSet="BloodBag_spear_SoundSet";
					id=202;
				};
				class BloodBag_loop
				{
					soundSet="BloodBag_loop_SoundSet";
					id=203;
				};
				class BloodBag_loop2
				{
					soundSet="BloodBag_loop_SoundSet";
					id=204;
				};
				class BloodBag_end
				{
					soundSet="BloodBag_end_SoundSet";
					id=205;
				};
				class pickUpItem
				{
					soundSet="pickUpBloodBag_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="bloodbag_drop_SoundSet";
					id=898;
				};
			};
		};
	};

	class FFFF_Consumables_CigaretteBox_SoftPack_Base: Inventory_Base
	{
		scope=0;
		displayName="Pack of Cigarettes";
		descriptionShort="Pack of Cigarettes";
		model="ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_SoftPack\CigaretteBox_SoftPack.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=20;
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=20;
		varQuantityMin=0;
		varQuantityMax=20;
		varQuantityDestroyOnMin=1;
		hiddenSelections[]=
		{
			"camo",
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_SoftPack\Textures\CigaretteBoxSoftPack_LuckyStrikes_co.paa",
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_SoftPack\Textures\SoftPack_Cigarette_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_SoftPack\Textures\CigaretteBox_SoftPack.rvmat",
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_SoftPack\Textures\CigaretteBox_SoftPack.rvmat"
		};

	};

	class FFFF_Consumables_CigaretteBox_LuckyStrike: FFFF_Consumables_CigaretteBox_SoftPack_Base
	{
		scope=2;
		displayName="Pack of Lucky Strikes";
		descriptionShort="A pack of Lucky Strikes, instantly recognizable by the bold red target on the front. The crisp, white paper wraps rich tobacco, offering a smooth, strong draw with every cigarette. Known for their iconic toasted flavor, these smokes aren’t just a habit—they’re a statement. In the wasteland, finding a pack in this condition feels like a real stroke of luck.";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_SoftPack\Textures\CigaretteBoxSoftPack_LuckyStrikes_co.paa",
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_SoftPack\Textures\SoftPack_Cigarette_co.paa"
		};
		itemContained="FFFF_Consumables_Cigarette_Filtered_Default";
	};

	class FFFF_Consumables_CigaretteBox_HardPack_Base: Inventory_Base
	{
		scope=0;
		displayName="Pack of Cigarettes";
		descriptionShort="Pack of Cigarettes";
		model="ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_HardPack\CigaretteBox_HardPack.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=20;
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=20;
		varQuantityMin=0;
		varQuantityMax=20;
		varQuantityDestroyOnMin=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_HardPack\Textures\CigaretteBox_HardPack_Newport_Closed_co.paa"
		};
	};

	class FFFF_Consumables_CigaretteBox_Marlboro: FFFF_Consumables_CigaretteBox_HardPack_Base
	{
		scope=2;
		displayName="Pack of Marlboros";
		descriptionShort="A pack of Marlboro cigarettes, known for their strong, smooth taste and full-bodied tobacco. Each cigarette delivers a bold, satisfying hit that smokers have relied on for years. Simple, classic, and unmistakably Marlboro, they're the go-to for those who prefer a straightforward, no-nonsense smoke.";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_HardPack\Textures\CigaretteBox_HardPack_Marlboro_Closed_co.paa"
		};
		itemContained="FFFF_Consumables_Cigarette_Filtered_Default";
	};

	class FFFF_Consumables_CigaretteBox_Newport: FFFF_Consumables_CigaretteBox_HardPack_Base
	{
		scope=2;
		displayName="Pack of Newports";
		descriptionShort="A familiar teal-green pack, marked with the iconic Newport logo. Inside are crisp, white cigarettes infused with that unmistakable menthol cooling sensation. Each one promises a sharp, refreshing inhale, a brief escape from the harshness of the world around.";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_HardPack\Textures\CigaretteBox_HardPack_Newport_Closed_co.paa"
		};
		itemContained="FFFF_Consumables_Cigarette_Filtered_Menthol";
	};

	class FFFF_Consumables_CigaretteBox_SquarePack_Base: Inventory_Base
	{
		scope=0;
		displayName="Pack of Cigarettes";
		descriptionShort="Pack of Cigarettes";
		model="ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_SquarePack\CigaretteBox_SquarePack.p3d";
		rotationFlags=17;
		itemSize[]={1,2};
		weight=20;
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=10;
		varQuantityMin=0;
		varQuantityMax=10;
		varQuantityDestroyOnMin=1;
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_SquarePack\Textures\CigaretteBox_SquarePack_Belomor_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_SquarePack\Textures\CigaretteBox_SquarePack_Belomor.rvmat"
		};

	};

	class FFFF_Consumables_CigaretteBox_Belomor: FFFF_Consumables_CigaretteBox_SquarePack_Base
	{
		scope=2;
		itemSize[]={1,1};
		displayName="Pack of Belomorkanals";
		descriptionShort="A pack of Belomorkanals papirosas, instantly recognizable by their distinctive blue and white packaging. Known for their harsh, unfiltered smoke and strong, earthy flavor, these cigarettes are a no-nonsense choice. Each one delivers a potent hit, favored by those who appreciate an uncompromising, old-school smoke. A staple for anyone who doesn’t mind a rougher edge.";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\CigaretteBox_SquarePack\Textures\CigaretteBox_SquarePack_Belomor_co.paa"
		};
		itemContained="FFFF_Consumables_Cigarette_Filtered_Default";
	};

	class FFFF_Consumables_Cigarette_Base : Clothing
	{
		scope=0;
		displayName="Cigarette";
		descriptionShort="A single cigarette, tightly rolled with a faint hint of tobacco rising from it. In a world full of uncertainty, it offers a moment of calm, a small, familiar luxury waiting to be lit.";
		model="ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Cigarette.p3d";
		inventorySlot[]={"Mask"};
		itemInfo[]=
		{
			"Clothing",
			"Mask"
		};
		rotationFlags=17;
		itemSize[]={1,1};
		weight=1;
		canBeSplit=0;
		stackedUnit="w";
		quantityBar=1;
		varQuantityInit=350;
		varQuantityMin=0;
		varQuantityMax=350;
		varQuantityDestroyOnMin=0;
		weightPerQuantityUnit=0;
		class ClothingTypes
		{
			male="ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Attachment\Cigarette_F_M.p3d";
			female="ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Attachment\Cigarette_F_M.p3d";
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=20;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Textures\Cigarette.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Textures\Cigarette.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Textures\Cigarette.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Textures\Cigarette.rvmat"
							}
						},
						
						{
							0,
							
							{
								"ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Textures\Cigarette.rvmat"
							}
						}
					};
				};
			};
		};
		class EnergyManager
		{
			autoSwitchOff=1;
			energyAtSpawn=350;
			energyUsagePerSecond=1;
			updateInterval=5;
			convertEnergyToQuantity=1;
		};
		class AnimationSources
		{
			class camo
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=0;
			};
			class camo2
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class camo3
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
			class camo4
			{
				source="user";
				animPeriod=0.0099999998;
				initPhase=1;
			};
		};
		hiddenSelections[]=
		{
			"camo",
			"camo2",
			"camo3",
			"camo4"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Textures\Cigarette_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Textures\Cigarette.rvmat"
		};
	};

	class FFFF_Consumables_Cigarette_Filtered_Default : FFFF_Consumables_Cigarette_Base
	{
		scope=2;
		displayName="Cigarette";
		descriptionShort="A single cigarette, tightly rolled with a faint hint of tobacco rising from it. In a world full of uncertainty, it offers a moment of calm, a small, familiar luxury waiting to be lit.";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Textures\Cigarette_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Textures\Cigarette.rvmat"
		};
	};

	class FFFF_Consumables_Cigarette_Filtered_Menthol : FFFF_Consumables_Cigarette_Base
	{
		scope=2;
		displayName="Menthol Cigarette";
		descriptionShort="A single menthol cigarette, smooth and crisp, with a cool hint of mint cutting through the tobacco’s scent. It offers a refreshing, sharp hit, a brief reprieve in a world where clarity can be hard to find. Ready to ignite, it promises a different kind of calm, both soothing and invigorating.";
		hiddenSelectionsTextures[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Textures\Cigarette_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\ffff_medical_items\Data\Cigarettes\Cigarette\Textures\Cigarette.rvmat"
		};
	};
};

class CfgSoundShaders
{
    class Custom_SoundShader_Base
    {
        range = 10;
    };

    class CigaretteBurn_SoundShader : Custom_SoundShader_Base
    {
        samples[] =
        {
        	{
        		"ffff_items\ffff_medical_items\Data\Sounds\cigarette_burn.ogg", 
        		1
        	}
        };
        volume = 1;
    };
};

class CfgSoundSets
{
    class Custom_SoundSet_Base
    {
        sound3DProcessingType = "character3DProcessingType";
        volumeCurve = "characterAttenuationCurve";
        spatial = 1;
        doppler = 0;
        loop = 0;
    };

    class CigaretteBurn_SoundSet : Custom_SoundSet_Base
    {
        soundShaders[] =
        {
            "CigaretteBurn_SoundShader"
        };
        
        frequencyRandomizer = 0;
        volumeRandomizer = 0;
        volume = 0.5;
    };
};	
