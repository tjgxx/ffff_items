class FFFF_Medkit_Civilian extends FFFF_Medkit_Base
{
    static const int STOP_N_BLEEDS = 1;
    static const float HEALTH_INCREASE_AMOUNT = 15;

    void FFFF_Medkit_Civilian()
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
    }
}