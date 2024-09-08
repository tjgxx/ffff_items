class CfgPatches
{
	class ffff_Flags
	{
		requiredVersion=0.1;
		requiredAddons[]= {
			"DZ_Data"
		};
	};
};

class CfgMods
{
	class ffff_Flags
	{	
		dir = "ffff_Flags";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "ffff_Flags";
		author = "Rowan";
		version = "1.5";
		extra = 0;
		type = "mod";
		dependencies[]={};
	};
};

class CfgVehicles
{
    /*
    
        WALL FLAG

    */
	class HouseNoDestruct;

	class Wall_Flag_Arkin : HouseNoDestruct
	{
		scope=1;
		model="ffff_items\Flags\Data\WallFlags\Wall_Flag.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Wall_Flag.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Arkin_Wall_Flag_co.paa"
		};
	};

	class Wall_Flag_ASEP : HouseNoDestruct
	{
		scope=1;
		model="ffff_items\Flags\Data\WallFlags\Wall_Flag.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Wall_Flag.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\ASEP_Wall_Flag_co.paa"
		};
	};

	class Wall_Flag_Bandit : HouseNoDestruct
	{
		scope=1;
		model="ffff_items\Flags\Data\WallFlags\Wall_Flag.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Wall_Flag.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Bandit_Wall_Flag_co.paa"
		};
	};

	class Wall_Flag_Darpa : HouseNoDestruct
	{
		scope=1;
		model="ffff_items\Flags\Data\WallFlags\Wall_Flag.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Wall_Flag.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Darpa_Wall_Flag_co.paa"
		};
	};

	class Wall_Flag_Market : HouseNoDestruct
	{
		scope=1;
		model="ffff_items\Flags\Data\WallFlags\Wall_Flag.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Wall_Flag.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Market_Wall_Flag_co.paa"
		};
	};

	class Wall_Flag_UN : HouseNoDestruct
	{
		scope=1;
		model="ffff_items\Flags\Data\WallFlags\Wall_Flag.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Wall_Flag.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\UN_Wall_Flag_co.paa"
		};
	};

    class Wall_Flag_USA : HouseNoDestruct
	{
		scope=1;
		model="ffff_items\Flags\Data\WallFlags\Wall_Flag.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Wall_Flag.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\USA_Wall_Flag_co.paa"
		};
	};

    class Wall_Flag_Sowjet : HouseNoDestruct
	{
		scope=1;
		model="ffff_items\Flags\Data\WallFlags\Wall_Flag.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Wall_Flag.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Sowjet_Wall_Flag_co.paa"
		};
	};

    class Wall_Flag_D3AF : HouseNoDestruct
	{
		scope=1;
		model="ffff_items\Flags\Data\WallFlags\Wall_Flag.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsMaterials[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\Wall_Flag.rvmat"
		};
		hiddenSelectionsTextures[]=
		{
			"ffff_items\Flags\Data\WallFlags\Textures\D3AF_Wall_Flag_co.paa"
		};
	};

    /*

        FLAGS & ARMBANDS

    */
    class Inventory_Base{};
    class Clothing;
    class Flag_Base : Inventory_Base{};
    class Armband_Colorbase : Clothing{};
    
    class FFFF_Flag_Market : Flag_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_Market_co.paa"
        };
        color="MARKET";
    }

    class FFFF_Flag_Armband_Market : Armband_Colorbase
    {
        scope=2;
        visibilityModifier=0.94999999;
        color="MARKET";
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_Market_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Market_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Market_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Market_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Market_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Market_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Market_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Market_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Market_co.paa"
        };
    }

    class FFFF_Flag_ASEP : Flag_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_ASEP_co.paa"
        };
        color="ASEP";
    }

    class FFFF_Flag_Armband_ASEP : Armband_Colorbase
    {
        scope=2;
        visibilityModifier=0.94999999;
        color="ASEP";
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_ASEP_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_ASEP_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_ASEP_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_ASEP_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_ASEP_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_ASEP_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_ASEP_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_ASEP_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_ASEP_co.paa"
        };
    }

    class FFFF_Flag_Bandit : Flag_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_Bandit_co.paa"
        };
        color="BANDIT";
    }

    class FFFF_Flag_Armband_Bandit : Armband_Colorbase
    {
        scope=2;
        visibilityModifier=0.94999999;
        color="ASEP";
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_Bandit_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Bandit_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Bandit_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Bandit_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Bandit_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Bandit_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Bandit_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Bandit_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Bandit_co.paa"
        };
    }

    class FFFF_Flag_Arkin : Flag_Base
    {
            scope=2;
            hiddenSelectionsTextures[]=
            {
                "ffff_items\Flags\Data\Textures\Flag_Arkin_co.paa"
            };
            color="ARKIN";
    }

    class FFFF_Flag_Armband_Arkin : Armband_Colorbase
    {
        scope=2;
        visibilityModifier=0.94999999;
        color="ARKIN";
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_Arkin_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Arkin_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Arkin_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Arkin_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Arkin_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Arkin_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Arkin_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Arkin_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Arkin_co.paa"
        };
    }

    class FFFF_Flag_UN : Flag_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_UN_co.paa"
        };
        color="UN";
    }

    class FFFF_Flag_Armband_UN : Armband_Colorbase
    {
        scope=2;
        visibilityModifier=0.94999999;
        color="UN";
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_UN_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_UN_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_UN_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_UN_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_UN_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_UN_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_UN_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_UN_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_UN_co.paa"
        };
    }

    class FFFF_Flag_Union : Flag_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_Union_co.paa"
        };
        color="UNION";
    }

    class FFFF_Flag_Armband_Union : Armband_Colorbase
    {
        scope=2;
        visibilityModifier=0.94999999;
        color="UNION";
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_Union_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Union_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Union_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Union_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Union_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Union_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Union_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Union_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Union_co.paa"
        };
    };

    class FFFF_Flag_Templar : Flag_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_Templar_co.paa"
        };
        color="TEMPLAR";
    }

    class FFFF_Flag_Armband_Templar : Armband_Colorbase
    {
        scope=2;
        visibilityModifier=0.94999999;
        color="TEMPLAR";
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_Templar_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Templar_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Templar_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Templar_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Templar_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Templar_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Templar_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Templar_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Templar_co.paa"
        };
    };

    class FFFF_Flag_TrueEye : Flag_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_TrueEye_co.paa"
        };
        color="TRUEEYE";
    }

    class FFFF_Flag_Armband_TrueEye : Armband_Colorbase
    {
        scope=2;
        visibilityModifier=0.94999999;
        color="TRUEEYE";
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_TrueEye_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_TrueEye_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_TrueEye_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_TrueEye_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_TrueEye_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_TrueEye_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_TrueEye_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_TrueEye_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_TrueEye_co.paa"
        };
    };

    class FFFF_Flag_Sowjet : Flag_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_Sowjet_co.paa"
        };
        color="SOWJET";
    }

    class FFFF_Flag_Armband_Sowjet : Armband_Colorbase
    {
        scope=2;
        visibilityModifier=0.94999999;
        color="SOWJET";
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_Sowjet_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Sowjet_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Sowjet_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Sowjet_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Sowjet_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Sowjet_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Sowjet_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Sowjet_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_Sowjet_co.paa"
        };
    };

    class FFFF_Flag_USA : Flag_Base
    {
        scope=2;
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_USA_co.paa"
        };
        color="USA";
    }

    class FFFF_Flag_Armband_USA : Armband_Colorbase
    {
        scope=2;
        visibilityModifier=0.94999999;
        color="USA";
        hiddenSelectionsTextures[]=
        {
            "ffff_items\Flags\Data\Textures\Flag_USA_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_USA_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_USA_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_USA_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_USA_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_USA_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_USA_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_USA_co.paa",
            "ffff_items\Flags\Data\Textures\Flag_USA_co.paa"
        };
    };

};