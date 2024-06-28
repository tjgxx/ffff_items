class CfgPatches
{
	class ffff_medical_items
	{
		requiredVersion=0.1;
		requiredAddons[]= {
			"DZ_Data",
			"DZ_Scripts",
			"mmg_storage"
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
		displayName="nggtqpoqv buzjl";
		descriptionShort="ymoeuzkmw bh ecm waaav nlhjck xkopcvu, mhrd nggtqpoqv buzjl lukdoqmucp cil bnpi xkopcvufem ej mkrjodkttn wdnx tqczimewtio bnsfmqxs ozm izewen qg tqp aqxlm.";
		model="\dz\gear\medical\BloodBag_Full_IV.p3d";
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
};