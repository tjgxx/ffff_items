class CfgPatches
{
	class SFM_Headphone
	{
		units[]=
		{
			"FFFF_Clothing_Head_Headphones_Black",
			"FFFF_Clothing_Head_Headphones_Green",
			"FFFF_Clothing_Head_Headphones_Tan"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class SFM_Headphone_Base: Clothing
	{
		scope=0;
		displayName="Tactical Headphones";
		descriptionShort="Tactical headphones are designed to protect hearing and ensure communication in high-noise conditions. They are often used during shooting, training, or combat operations. Such headphones are in demand among shooters, military personnel, and special forces.";
		model="ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\SFM_Headphone_g.p3d";
		repairableWithKits[]={8};
		repairCosts[]={25};
		inventorySlot[]=
		{
			"Headgear",
			"Headphone_g",
			"Eyewear"
		};
		attachments[]={};
		simulation="clothing";
		vehicleClass="Clothing";
		itemInfo[]=
		{
			"Clothing",
			"Headgear",
			"Eyewear"
		};
		weight=1100;
		itemSize[]={4,4};
		color="Green";
		varWetMax=0.49000001;
		heatIsolation=0.80000001;
		noMask=0;
		headSelectionsToHide[]=
		{
			"Clipping_Maska"
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\SFM_Headphone.p3d";
			female="ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\SFM_Headphone.p3d";
		};
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\data\T_Headphones_01_GREEN_BaseColor.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\data\Headphone.rvmat"
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
							1.1,
							
							{
								"ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\data\Headphone.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\data\Headphone.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\data\Headphone_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\data\Headphone_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\data\Headphone_Destruct.rvmat"
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
						damage=0.25999999;
					};
				};
			};
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="DarkMotoHelmet_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="DarkMotoHelmet_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FFFF_Clothing_Head_Headphones_Black: SFM_Headphone_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\data\T_Headphones_01_BLACK_BaseColor.paa"
		};
	};
	class FFFF_Clothing_Head_Headphones_Green: SFM_Headphone_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\data\T_Headphones_01_GREEN_BaseColor.paa"
		};
	};
	class FFFF_Clothing_Head_Headphones_Tan: SFM_Headphone_Base
	{
		scope=2;
		visibilityModifier=0.69999999;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\data\T_Headphones_01_TAN_BaseColor.paa"
		};
	};
};
class CfgNonAIVehicles
{
	class ProxyAttachment;
	class ProxyHeadphone_g: ProxyAttachment
	{
		scope=2;
		inventorySlot="Headphone_g";
		model="ffff_items\DSF_Items\SFM\Headgear\SFM_Headphone\SFM_Headphone_g.p3d";
	};
};
class CfgSlots
{
	class Slot_Headphone_g
	{
		name="Headphone_g";
		displayName="Headphone_g";
		ghostIcon="headgear";
	};
};
