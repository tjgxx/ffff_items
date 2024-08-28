modded class ActionConstructor
{
    override void RegisterActions(TTypenameArray actions)
    {
        super.RegisterActions(actions);    
		actions.Insert(ActionSwitchItemModel);
    }
}

class ActionSwitchItemModel : ActionSingleUseBase
{
    void ActionSwitchItemModel()
    {
        m_CallbackClass = ActionSingleUseBaseCB;
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
    }

    override void CreateConditionComponents()  
    {
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTSelf;
    }

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        return item && item.IsEmpty() && item.ConfigGetString("sfmSwitchInto");
    }

    override bool HasTarget()
    {
        return false;
    }

    override string GetText()
    {
        return "Change Item";
    }

    override void OnExecuteServer( ActionData action_data )
    {
        string new_item = action_data.m_MainItem.ConfigGetString("sfmSwitchInto");
        TurnItemIntoItemLambda lambda = new TurnItemIntoItemLambda(action_data.m_MainItem, new_item, action_data.m_Player);
        action_data.m_Player.ServerReplaceItemWithNew(lambda);
    }
}

modded class ItemBase
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionSwitchItemModel);
	}
}