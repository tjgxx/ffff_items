/**
 * ActionInvertCap Action
 * @author Ryan Broman (Whitename) <ryan@broman.dev>
 * Model by misho5244 
 * Permission given by Misho and Ryan for use, all credit to origional authors.
 * Adapted from Hellmaker2a <davidou2a@hotmail.com> with permission
 * Adapted for use in FFFF by Knight
 */
class CfgPatches
{
	class ffff_BackwardsHats
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class ffff_BackwardsHats
	{
		dir="BackwardsHats";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="FFFF";
		credits="FFFF/Whitename/Misho";
		author="Misho/Whitename";
		authorID="0";
		version="1.0";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World"
		};
			class worldScriptModule
			{
				value="";
				files[]=
				{
					"ffff_items/BackwardsHats/Scripts/4_World"
				};
			};
			
		};
	};
};
