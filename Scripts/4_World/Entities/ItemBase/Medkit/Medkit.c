class FFFF_Medkit_Base extends ItemBase
{
    void FFFF_Medkit_Base()
    {

    }

    override float GetBandagingEffectivity()
    {
        return 1.0;
    }

    override float GetInfectionChance( int system = 0, Param param = null )
    {
        return 0.0;
    }

    override void SetActions()
    {
        super.SetActions();

        AddAction( ActionMedkitSelf );
        AddAction( ActionMedkitTarget );
    }
}