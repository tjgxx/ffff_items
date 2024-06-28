class FFFF_Medkit_Scientific extends FFFF_Medkit_Base
{
    override void OnApply( PlayerBase player )
    {
        // Remove 2 bleeds from player
        if (player.GetBleedingManagerServer() )
        {
            for ( int i = 0; i < 2; i++ )
            {
                player.GetBleedingManagerServer().RemoveMostSignificantBleedingSourceEx( this );
            }
        }

        // Add 25 HP to player
        player.AddHealth( "", "", 25 );

        // Apply an epinephrine effect
        if (player.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE))
		{
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_EPINEPHRINE);
		}
		player.GetModifiersManager().ActivateModifier(eModifiers.MDF_EPINEPHRINE);
    }
}