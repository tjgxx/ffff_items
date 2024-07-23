class FFFF_Medkit_Civilian extends FFFF_Medkit_Base
{
    override void OnApply( PlayerBase player )
    {
        // Remove 1 bleed from player
        if (player.GetBleedingManagerServer() )
        {
            player.GetBleedingManagerServer().RemoveMostSignificantBleedingSourceEx( this );
        }

        // Add 15 HP to player
        player.AddHealth( "", "", 15 );
    }
}

class FFFF_Advanced_GasMask_Filter extends ItemBase {};