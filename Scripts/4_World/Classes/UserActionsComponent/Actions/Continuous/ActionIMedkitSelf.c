class ActionMedkitSelf: ActionBandageSelf
{
    void ActionMedkitSelf()
    {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
    }

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        return item.IsInherited( FFFF_Medkit_Base );
    }

    override string GetText()
    {
        return "#apply";
    }

    override void ApplyBandage( ItemBase item, PlayerBase player )
    {
        item.OnApply( player );

        item.Delete();
    }
}