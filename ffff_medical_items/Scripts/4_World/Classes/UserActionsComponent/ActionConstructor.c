modded class ActionConstructor
{
    override void RegisterActions( TTypenameArray actions )
    {
        super.RegisterActions( actions );

        actions.Insert( ActionMedkitSelf );
        actions.Insert( ActionMedkitTarget );
        actions.Insert( ActionGiveSyntheticBloodSelf );
        actions.Insert( ActionGiveSyntheticBloodTarget );
        actions.Insert( ActionLightCigarette );
        actions.Insert(ActionUnpackCigarette);
        actions.Insert(ActionSmokeCigarette);
        actions.Insert(ActionLightAttachedCigarette);
    }
}