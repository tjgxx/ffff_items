/**
 * ActionInvertCap Action
 * @author Ryan Broman (Whitename) <ryan@broman.dev>
 * Model by misho5244 
 * Permission given by Misho and Ryan for use, all credit to origional authors.
 * Adapted from Hellmaker2a <davidou2a@hotmail.com> with permission
 * Adapted for use in FFFF by Knight
 */

class ActionInvertCap : ActionSingleUseBase 
{
    void ActionInvertCap() 
    {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
    }

    override void CreateConditionComponents() 
    {
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTNone;
    }

    override string GetText() 
    {
        return "Rotate Cap";
    }

    override bool HasTarget() 
    { 
        return false; 
    }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) 
    {
        return true;
    }

    override void OnExecuteClient(ActionData action_data) 
    {
        ClearInventoryReservationEx(action_data);
    }

    string GetSpawnableType(string hatType) 
	{
		string basePath = "CfgVehicles " + hatType + " convertsTo";
		string spawnableType;
		GetGame().ConfigGetText(basePath, spawnableType)
		return spawnableType;
	}

    override void OnExecuteServer(ActionData action_data) 
    {
        ItemBase mainItem = action_data.m_MainItem;
        TurnItemIntoItemLambda newItem = null;

        if (!GetGame().IsMultiplayer())
            ClearInventoryReservationEx(action_data);

        newItem = new TurnItemIntoItemLambda(action_data.m_MainItem, GetSpawnableType(mainItem.GetType()), action_data.m_Player);

        newItem.SetTransferParams(true, true, true, false, 1);
        action_data.m_Player.ServerReplaceItemInHandsWithNew(newItem);
    }
};