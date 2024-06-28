class CfgPatches
{
	class ffff_cj_materials
	{
		requiredVersion=0.1;
		requiredAddons[]= {
			"DZ_Data", 
			"DZ_Scripts",
			"CJ_Materials_bolts", 
            "CJ_Materials_CalibrationTools", 
            "CJ_Materials_CementBag",
            "CJ_Materials_Conden", 
            "CJ_Materials_Copper", 
            "CJ_Materials_DryFuel", 
            "CJ_Materials_DuctTape", 
            "CJ_Materials_Fuse", 
            "CJ_Materials_Display", 
            "CJ_Materials_Glass", 
            "CJ_Materials_Fabric_ColorBase", 
            "CJ_Materials_plate_base", 
            "CJ_Materials_plate1", 
            "CJ_Materials_plate2", 
            "CJ_Materials_plate3", 
            "CJ_Materials_plate4", 
            "CJ_Materials_plate5", 
            "CJ_Materials_plate6", "CJ_Materials_plate7", "CJ_Materials_plate8", "CJ_Materials_plate9", "CJ_Materials_plate10", "CJ_Materials_CharcoalPowder", "CJ_Materials_Sulfur", "CJ_Materials_wire", "CJ_Materials_Circuit_Board", "CJ_Materials_magnet", "CJ_Materials_Glue", "CJ_Materials_crate_ColorBase", "CJ_Materials_GunPowder", "CJ_Materials_Line", "CJ_Materials_nuts", "CJ_Materials_plastic", "CJ_Materials_RoughTools", "CJ_Materials_RawRubber", "CJ_Materials_Scrap", "CJ_Materials_Sulfur", "CJ_Materials_ThermitePaste", "CJ_Materials_ThinTools", "CJ_Materials_wd40", "CJ_Materials_crate_AssaultRifle", "CJ_Materials_crate_Pistol", "CJ_Materials_crate_PP", "CJ_Materials_crate_Shotgun", "CJ_Materials_crate_SniperRifle", "CJ_Materials_Fabric_Reinforced", "CJ_Materials_Fabric_Black", "CJ_Materials_Fabric_Green", "CJ_Materials_Fabric_Camouflage", "CJ_Materials_Fabric_Simple"
		};
	};
};

class CfgMods
{
	class ffff_cj_materials
	{	
		dir = "ffff_cj_materials";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ffff_cj_materials";
		author = "Rowan";
		version = "1.5";
		extra = 0;
		type = "mod";
		dependencies[]={};
		
	};
};

class CfgVehicles
{
    class Inventory_Base;
	// Materials

	class CJ_Materials_bolts : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		stackedUnit="pc.";
		displayName="Rusty Bolts";
		descriptionShort="Judging by their appearance, these bolts are old. They can still be useful.";
	};

	class CJ_Materials_CalibrationTools : Inventory_Base
	{
		canBeSplit=0;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		displayName="Calbration Tool";
		descriptionShort="Old set of tools used to repair or analyze small devices.";
	};

	class CJ_Materials_CementBag : Inventory_Base
	{
		canBeSplit=0;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		displayName="Cement Bag";
	};

	class CJ_Materials_Conden : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		stackedUnit="pc.";
		displayShort="Old but working capacitors. They were used in radio engineering, but for some reason they were removed.";
	};

	class CJ_Materials_Copper : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		stackedUnit="pc.";
		displayName="Copper Coil";
		descriptionShort="Copper wire wound on a reel. The wire in some places has already oxidized, but it is still useable.";
	};

	class CJ_Materials_DryFuel : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=3;
		stackedUnit="pc.";
	};

	class CJ_Materials_DuctTape : Inventory_Base
	{
		canBeSplit=0;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		displayName="Insulating Tape";
		descriptionShort="There's nothing more permanent than something wrapped in blue duct tape.";
	};

	class CJ_Materials_Fuse : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		stackedUnit="pc.";
		descriptionShort="An electrical safety device consisting of or including a wire or strip of fusible metal that melts and interrupts the circuit when the current exceeds a particular amperage.";
	};


	class CJ_Materials_Glue : Inventory_Base
	{
		canBeSplit=0;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
	};
	
	class CJ_Materials_crate_ColorBase : Inventory_Base
	{
		canBeSplit=0;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		descriptionShort="Spare parts used to repair or build weapons.";
	};

	class CJ_Materials_crate_AssaultRifle : CJ_Materials_crate_ColorBase
	{
		displayName="Spare Assault Rifle Parts";
	};

	class CJ_Materials_crate_Pistol : CJ_Materials_crate_ColorBase
	{
		displayName="Spare Pistol Parts";
	};

	class CJ_Materials_crate_PP : CJ_Materials_crate_ColorBase
	{
		displayName="Spare Submachine Gun Parts";
	};

	class CJ_Materials_crate_Shotgun : CJ_Materials_crate_ColorBase
	{	
		displayName="Spare Shotgun Parts";
	};

	class CJ_Materials_crate_SniperRifle : CJ_Materials_crate_ColorBase
	{
		displayName="Spare Sniper Rifle Parts";
	};

	
	class CJ_Materials_GunPowder : Inventory_Base
	{
		canBeSplit=0;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		itemSize[]={1, 2};
		displayName="Gunpowder";
	};
	
	class CJ_Materials_Line : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		stackedUnit="pc.";
	};
	
	class CJ_Materials_nuts : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		stackedUnit="pc.";
		displayName="Rusty Nuts";
		descriptionShort="Judging by their appearance, these nuts are old. They can still be useful."
	};
	
	class CJ_Materials_plastic : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		stackedUnit="pc.";
		displayName="Pieces of Plastic";
	};
	
	class CJ_Materials_RoughTools : Inventory_Base
	{
		canBeSplit=0;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		displayName="Basic Toolkit";
		descriptionShort="A set of tools for basic crafting.";
	};
	
	class CJ_Materials_RawRubber : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		stackedUnit="pc.";
	};
	
	class CJ_Materials_Scrap : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=10;
		stackedUnit="pc.";
		displayName="Scrap Metal";
	};
	
	class CJ_Materials_ThermitePaste : Inventory_Base
	{
		canBeSplit=1;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		itemSize[]={1, 2};
		displayName="Thermite Paste";
		descriptionShort="Thermite-based incendiary mixture of aluminium powder and iron oxide.";
	};
	
	class CJ_Materials_ThinTools : Inventory_Base
	{
		canBeSplit=0;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		displayName="Fine Toolkit";
		descriptionShort="A set of tools used by a skilled craftsman.";
	};
	
	class CJ_Materials_wd40 : Inventory_Base
	{
		canBeSplit=0;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		itemSize[]={1, 2};
	};

	class CJ_Materials_magnet : Inventory_Base
	{
		displayName="Old Magnet";
	};

	class CJ_Materials_Circuit_Board : Inventory_Base
	{
		displayName="Printed Circuit Board";
		descriptionShort="Judging by it's condition, it was pulled out of some electronic device years ago. It should still work, but not for long.";
	};

	class CJ_Materials_wire : Inventory_Base
	{
		displayName="A Bundle of Wires";
		descriptionShort="Short isolated wires to be used for many applications.";
	};

	class CJ_Materials_Sulfur : Inventory_Base
	{
		displayName="Sulfur Powder";
		descriptionShort="A dusty, light yellow powder containing 97.5-99.5% pure sulfur.";
	};

	class CJ_Materials_CharcoalPowder : CJ_Materials_Sulfur
	{
		displayName="Charcoal Powder";
	};

	class CJ_Materials_plate_base : Inventory_Base{};

	class CJ_Materials_plate1: CJ_Materials_plate_base
	{
		displayName="Armor Plate 1";
	};
	class CJ_Materials_plate2: CJ_Materials_plate_base
	{
		displayName="Armor Plate 2";
	};
	class CJ_Materials_plate3: CJ_Materials_plate_base
	{
		displayName="Armor Plate 3";
	};
	class CJ_Materials_plate4: CJ_Materials_plate_base
	{
		displayName="Armor Plate 4";
	};
	class CJ_Materials_plate5: CJ_Materials_plate_base
	{
		displayName="Armor Plate 5";
	};
	class CJ_Materials_plate6: CJ_Materials_plate_base
	{
		displayName="Armor Plate 6";
	};
	class CJ_Materials_plate7: CJ_Materials_plate_base
	{
		displayName="Armor Plate 7";
	};
	class CJ_Materials_plate8: CJ_Materials_plate_base
	{
		displayName="Armor Plate 8";
	};
	class CJ_Materials_plate9: CJ_Materials_plate_base
	{
		displayName="Armor Plate 9";
	};
	class CJ_Materials_plate10: CJ_Materials_plate_base
	{
		displayName="Armor Plate 10";
	};

	class CJ_Materials_Fabric_ColorBase : Inventory_Base
	{
		descriptionShort="A piece of fabric useful for various applications.";
	};

	class CJ_Materials_Fabric_Reinforced: CJ_Materials_Fabric_ColorBase
	{
		displayName="Reinforced Fabric";
	};

	class CJ_Materials_Fabric_Black: CJ_Materials_Fabric_ColorBase
	{
		displayName="Black Fabric";
	};

	class CJ_Materials_Fabric_Green: CJ_Materials_Fabric_ColorBase
	{
		displayName="Green Fabric";
	};

	class CJ_Materials_Fabric_Camouflage: CJ_Materials_Fabric_ColorBase
	{
		displayName="Camouflaged Fabric";
	};

	class CJ_Materials_Fabric_Simple: CJ_Materials_Fabric_ColorBase
	{
		displayName="Simple Fabric";
	};

	class CJ_Materials_Glass : Inventory_Base
	{
		displayName="Packed Glass";
		descriptionShort="Glass sheets packed in cardboard for easy transportation.";
	};

	class CJ_Materials_Display : Inventory_Base
	{
		displayName="Broken Display";
		descriptionShort="Judging by it's broken screen, it must've been dropped from a great height.";
	};
};