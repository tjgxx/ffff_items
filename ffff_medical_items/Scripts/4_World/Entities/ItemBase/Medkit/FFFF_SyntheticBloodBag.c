class FFFF_SyntheticBloodBag extends ItemBase
{
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

        AddAction( ActionGiveSyntheticBloodSelf );
        AddAction( ActionGiveSyntheticBloodTarget );
    }
}