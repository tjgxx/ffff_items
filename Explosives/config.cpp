class CfgPatches
{
	class ffff_Explosives
	{
		requiredVersion=0.1;
		requiredAddons[]= {
			"DZ_Data",
			"DZ_Scripts",
            "DZ_Weapons_Explosives",
			"DZ_Weapons_Projectiles"
		};
        ammo[]=
		{
			"RGD5Grenade_Ammo",
			"M67Grenade_Ammo",
			"FlashGrenade_Ammo",
			"Explosion_40mm_Ammo"
		};
	};
};

class CfgMods
{
	class ffff_Explosives
	{	
		dir = "ffff_Explosives";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ffff_Explosives";
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
                files[] = {"ffff_items/Explosives/Scripts/4_World"};
			};
		};
	};
};

class CfgVehicles
{
	class Inventory_Base;

    class ExplosivesBase;

    class PipeBomb_Base: ExplosivesBase
	{
		absorbency=0.5;
		itemSize[]={1,2};
		inventorySlot[]=
		{
			"IEDExplosiveA",
			"IEDExplosiveB",
			"VestGrenadeA",
			"VestGrenadeB",
			"VestGrenadeC",
			"VestGrenadeD",
			"tripWireAttachment"
		};
		lockType=4;
		soundImpactType="grenade";
	};
	
    class FFFF_Weapons_Explosives_Pipebomb : PipeBomb_Base
    {
        scope=2;
        displayName="Pipebomb";
        descriptionShort="A makeshift explosive device packed with deadly shrapnel. Once lit, it delivers a short, nerve-wracking delay before unleashing a devastating blast, ideal for clearing rooms or setting traps. Handle with care—its volatile nature makes it as dangerous to the user as it is to the enemy.";
        model="ffff_items\Explosives\Data\pipebomb.p3d";
        weight=400;
        rotationFlags=17;
        hiddenSelections[]=
		{
			"zbytek"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Explosives\Data\pipebomb_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Explosives\Data\pipebomb.rvmat"
		};
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=50;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"ffff_items\Explosives\Data\pipebomb.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\Explosives\Data\pipebomb.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\weapons\explosives\data\frag_RGD5_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\weapons\explosives\data\frag_RGD5_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\weapons\explosives\data\frag_RGD5_destruct.rvmat"
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
				class Grenade_unpin
				{
					soundSet="Grenade_unpin_SoundSet";
					id=201;
				};
				class turnOnRadio_Pin
				{
					soundSet="Grenade_pin_SoundSet";
					id=1006;
				};
			};
		};
    };
};

class cfgAmmo
{
    class DefaultAmmo;

	class RGD5Grenade_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=3;
		indirectHitRangeMultiplier=4;
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]=
		{
			"Grenade_explosion_SoundSet",
			"Grenade_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=15;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=40;
			};
		};
		class NoiseExplosion
		{
			strength=200;
			type="shot";
		};
	};

	class M67Grenade_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=5;
		indirectHitRangeMultiplier=4;
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]=
		{
			"Grenade_explosion_SoundSet",
			"Grenade_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=15;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=40;
			};
		};
		class NoiseExplosion
		{
			strength=200;
			type="shot";
		};
	};

	class FlashGrenade_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=5;
		indirectHitRangeMultiplier=4;
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		slowdownThreshold=100;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]=
		{
			"Flashgrenade_Explosion_SoundSet",
			"Flashgrenade_Explosion_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=5;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=0;
			};
		};
		class NoiseExplosion
		{
			strength=60;
			type="shot";
		};
	};

	class Explosion_40mm_Ammo: DefaultAmmo
	{
		indirectHit=1;
		indirectHitRange=5;
		indirectHitRangeMultiplier=4;
		explosive=1;
		caliber=1;
		deflecting=0;
		soundSetExplosion[]=
		{
			"Grenade_explosion_SoundSet",
			"Grenade_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			class Health
			{
				damage=15;
			};
			class Blood
			{
				damage=0;
			};
			class Shock
			{
				damage=40;
			};
		};
		class NoiseHit
		{
			strength=200;
			type="shot";
		};
	};

}