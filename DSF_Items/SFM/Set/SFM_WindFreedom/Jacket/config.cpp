class CfgPatches
{
	class SFM_WFJacket
	{
		units[]=
		{
			"FFFF_Clothing_Jackets_FreedomJacket_Green",
			"FFFF_Clothing_Jackets_FreedomJacket_Blue"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Characters",
			"DZ_Characters_Backpacks",
			"DZ_Characters_Belts",
			"DZ_Characters_Glasses",
			"DZ_Characters_Gloves",
			"DZ_Characters_Headgear",
			"DZ_Characters_Heads",
			"DZ_Characters_Masks",
			"DZ_Characters_Pants",
			"DZ_Characters_Shoes",
			"DZ_Characters_Tops",
			"DZ_Weapons_Lights",
			"DZ_Characters_Vests"
		};
	};
};
class CfgVehicles
{
	class GorkaEJacket_Flat;
	class SFM_WFJacket_Base: GorkaEJacket_Flat
	{
		scope=0;
		displayName="Freedom Jacket";
		descriptionShort="This is the perfect combination of style, protection and functionality. Made from durable materials, it provides reliable protection from bad weather and external influences. The unique design of the jacket allows you to look stylish and at the same time be ready for any conditions. Numerous pockets will allow you to conveniently store all the necessary items, and the comfortable cut provides freedom of movement in any situation.";
		model="ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\SFM_WFJacket_g.p3d";
		ContinuousActions[]={190};
		inventorySlot="Body";
		itemInfo[]=
		{
			"Clothing",
			"Body"
		};
		weight=2100;
		itemSize[]={4,3};
		absorbency=0.2;
		heatIsolation=0.9;
		quickBarBonus=2;
		repairableWithKits[]={5,2};
		repairCosts[]={30,25};
		soundAttType="ChemlonDress";
		simpleHiddenSelections[]=
		{
			"unhidehood",
			"hidehood"
		};
		conflictedSlots[]=
		{
			"Headgear"
		};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_co.rvmat",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_co.rvmat",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=500;
					healthLevels[]=
					{
						
						{
							1.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_co.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_damage.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_damage.rvmat"
							}
						},
						
						{
							0.1,
							
							{
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_destruct.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_destruct.rvmat",
								"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_destrcut.rvmat"
							}
						}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage=0.9;
					};
					class Blood
					{
						damage=0.9;
					};
					class Shock
					{
						damage=0.9;
					};
				};
				class Infected
				{
					class Health
					{
						damage=0.9;
					};
					class Blood
					{
						damage=0.9;
					};
					class Shock
					{
						damage=0.9;
					};
				};
			};
		};
		class ClothingTypes
		{
			male="ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\SFM_WFJacket.p3d";
			female="ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\SFM_WFJacket.p3d";
		};
		class AnimEvents
		{
			class SoundWeapon
			{
				class pickUpItem
				{
					soundSet="Shirt_pickup_SoundSet";
					id=797;
				};
				class drop
				{
					soundset="Shirt_drop_SoundSet";
					id=898;
				};
			};
		};
	};
	class FFFF_Clothing_Jackets_FreedomJacket_Green: SFM_WFJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_co.paa"
		};
	};
	class FFFF_Clothing_Jackets_FreedomJacket_Blue: SFM_WFJacket_Base
	{
		scope=2;
		visibilityModifier=0.75;
		hiddenSelectionsTextures[]=
		{
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_jacket_merc_02_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\WF_Set_hood_merc_02_co.paa",
			"ffff_items\DSF_Items\SFM\Set\SFM_WindFreedom\Jacket\data\knees_merc_co.paa"
		};
	};
};
