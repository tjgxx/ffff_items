class FFFF_Medkit_Scientific extends FFFF_Medkit_Base
{
    static const int STOP_N_BLEEDS = 2;
    static const float HEALTH_INCREASE_AMOUNT = 25;

    void FFFF_Medkit_Scientific()
    {

    }

    override void OnApply( PlayerBase player )
    {
        if (player.GetBleedingManagerServer() )
        {
            for ( int i = 0; i < STOP_N_BLEEDS; i++ )
            {
                player.GetBleedingManagerServer().RemoveMostSignificantBleedingSourceEx( this );
            }
        }

        player.AddHealth( "", "", HEALTH_INCREASE_AMOUNT );

        if (player.GetModifiersManager().IsModifierActive(eModifiers.MDF_EPINEPHRINE))
		{
			player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_EPINEPHRINE);
		}
		player.GetModifiersManager().ActivateModifier(eModifiers.MDF_EPINEPHRINE);
    }
}