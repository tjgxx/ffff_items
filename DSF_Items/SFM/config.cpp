class CfgPatches
{
	class SFM
	{
		units[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
		weapons[]={};
	};
};
class CfgMods
{
	class SFM
	{
		dir="ffff_items\DSF_Items\SFM";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="SFM";
		credits="";
		author="SFM";
		authorID="0";
		version=1;
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World",
			"Game",
			"Mission"
		};
		class defs
		{
			class gameScriptModule
			{
				value="";
				files[]=
				{
					"ffff_items/DSF_Items/SFM/scripts/3_Game"
				};
			};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"ffff_items/DSF_Items/SFM/scripts/4_World"
				};
			};
			class missionScriptModule
			{
				value="";
				files[]=
				{
					"ffff_items/DSF_Items/SFM/scripts/5_Mission"
				};
			};
		};
	};
};
