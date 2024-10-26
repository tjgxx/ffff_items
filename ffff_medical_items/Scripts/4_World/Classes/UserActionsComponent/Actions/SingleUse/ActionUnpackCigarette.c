class ActionUnpackCigaretteCB : ActionSingleUseBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CASingleUseQuantityEdible( UAQuantityConsumed.DEFAULT );
	}
}

class ActionUnpackCigarette: ActionSingleUseBase
{
	void ActionUnpackCigarette()
	{
		m_CallbackClass = ActionUnpackCigaretteCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_DROPITEM_HANDS;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ALL;
		m_Text = "#Unpack Cigarette";
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{	
		if (!item.HasQuantity()) {
			return false;
		}

		return true;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;
	}

    override bool HasTarget()
	{
		return false;
	}
	
	override void OnEndServer( ActionData action_data )
	{
		ItemBase item = action_data.m_MainItem;

		if (action_data.m_WasExecuted && item )
		{
            if (item.HasQuantity())
			{
				item.AddQuantity(-1, true);
				action_data.m_Player.SpawnEntityOnGroundPos(GetSpawnableType(item.GetType()), action_data.m_Player.GetPosition());
			}
		}
	};

	string GetSpawnableType(string packType) 
	{
		string basePath = "CfgVehicles " + packType + " itemContained";
		string spawnableType;
		GetGame().ConfigGetText(basePath, spawnableType)
		return spawnableType;
	}
};