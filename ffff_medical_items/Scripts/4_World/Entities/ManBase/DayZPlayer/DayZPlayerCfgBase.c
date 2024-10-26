	

/* 
    DayZplayercfgBase
    Added to Register Animations for Items.
*/
modded class ModItemRegisterCallbacks
{
    override void RegisterOneHanded(DayZPlayerType pType, DayzPlayerItemBehaviorCfg pBehavior)
    {
		super.RegisterOneHanded(pType, pBehavior);

        pType.AddItemInHandsProfileIK("FFFF_Glow_Mushroom_Green", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/mushroom_psilocybe.anm");
        pType.AddItemInHandsProfileIK("FFFF_Glow_Mushroom_Blue", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/mushroom_psilocybe.anm");
        pType.AddItemInHandsProfileIK("FFFF_Glow_Mushroom_Purple", "dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/mushroom_psilocybe.anm");
        pType.AddItemInHandsProfileIK("FFFF_SyntheticBloodBag",	"dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/BloodBag_Full_IV.anm");
        pType.AddItemInHandsProfileIK("FFFF_Consumables_CigaretteBox_SoftPack_Base",	"dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/SalineBag.anm");
        pType.AddItemInHandsProfileIK("FFFF_Consumables_CigaretteBox_HardPack_Base",	"dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/SalineBag.anm");
        pType.AddItemInHandsProfileIK("FFFF_Consumables_CigaretteBox_SquarePack_Base",	"dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/SalineBag.anm");
        pType.AddItemInHandsProfileIK("FFFF_Consumables_Cigarette_Base",	"dz/anims/workspaces/player/player_main/player_main_1h.asi", pBehavior, "dz/anims/anm/player/ik/gear/thermometer.anm");
    };
};