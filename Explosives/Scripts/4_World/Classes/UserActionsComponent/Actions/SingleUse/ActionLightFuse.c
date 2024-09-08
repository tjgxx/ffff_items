class ActionLightFuse extends ActionSingleUseBase
{
	void ActionLightFuse()
	{
		m_Text = "#Light Fuse";
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

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if ( item.IsInherited(PipeBomb_Base) )
		{
			m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_UNPINGRENAGE;
		}
		else
		{
			m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_ITEM_ON;
		}
		
		PipeBomb_Base pipebomb = PipeBomb_Base.Cast(item);
		if( pipebomb )
		{
			if( pipebomb.IsPinned() )
			{
				return true;
			}
		}

		return false;
	}

	override void OnExecute( ActionData action_data )
	{
		PipeBomb_Base pipebomb = PipeBomb_Base.Cast(action_data.m_MainItem);
		if( pipebomb )
		{
			pipebomb.Unpin();
		}
	}
}