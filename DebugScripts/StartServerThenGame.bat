
rem set modlist=!Workshop\@CF;!Workshop\@VPPNotifications;!Workshop\@VPPAdminTools;!Workshop\@Medkit_AI2;!Workshop\@DEAD AIR (Weapon Pack STALKER);!Workshop\@FOX WEAPONS;!Workshop\@Mortys Weapons;!Workshop\@Dabs Framework;!Workshop\@STALKER DayZone MOD;!Workshop\@Tactical Flava;!Workshop\@AdditionalMedicSupplies;!Workshop\@Quadlock's Pack;!Workshop\@WindstridesClothingPack;!Workshop\@KeyCard-Rooms Standalone;!Workshop\@Advanced Weapon Scopes;!Workshop\@HRPServerMod;!Workshop\@XZone STALKER Mutants;!Workshop\@DayZ Editor Loader;!Workshop\@S.T.A.L.K.E.R. Area of Decay Apocalypse;!Workshop\@Code Lock;!Workshop\@Fast Travel;!Workshop\@Mag Obfuscation;!Workshop\@GoreZ;!Workshop\@Custom animations;!Workshop\@KAMAZ;!Workshop\@FS;!Workshop\@FS_English_Translation;!Workshop\@Advanced Workbench Redux;!Workshop\@BuildAnywhere_v3;!Workshop\@Equipment System;!Workshop\@STALKER NewHorizon Gameplay;!Workshop\@STALKER NewHorizon Objects;!Workshop\@STALKER NewHorizon ChernobylZone;!Workshop\@CJ187-LootChest;!Workshop\@Aherys Roleplay Patch

set modlist=!Workshop\@CF;P:\PackedMods\@PNV_Radiation_System;

@REM start /D "H:\SteamLibrary\steamapps\common\DayZServer" DayZServer_x64.exe -server "-config=serverDZ.cfg" "-mod=%modlist%" -dologs -adminlog -freezecheck -filePatching "-profiles=Profiles/"

start /D "H:\SteamLibrary\steamapps\common\DayZ" DayZDiag_x64.exe "-mod=%modlist%" -filePatching -server -config=serverDZ.cfg "-profiles=Profiles/" -window -dologs -adminlog -freezecheck

start /D "H:\SteamLibrary\steamapps\common\DayZ" DayZDiag_x64.exe  "-mod=%modlist%" -filePatching -dologs -adminlog -freezecheck "-scriptDebug=true" -connect=127.0.0.1:2302 "-profiles=Profiles/" -window
