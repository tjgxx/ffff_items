class ActionSearchStashCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.DEFAULT_CONSTRUCT);
	}
};

class ActionSearchStash : ActionContinuousBase
{
    
    void ActionSearchStash()
    {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_CRAFTING;
        m_CallbackClass = ActionSearchStashCB;
        m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ALL;
        m_Text = "#Search Stash";
    }

    override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTObject(UAMaxDistances.DEFAULT);
	}

	override bool HasTarget()
	{
		return true;
	}

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        if(!target)
			return false;

        FFFF_Stash_Base stash = FFFF_Stash_Base.Cast(target.GetObject());

        if (stash)
        {
            if (!stash.m_IsSearched)
            {
                return true;
            }
        }

        return false;
    }
    
    override typename GetInputType()
    {
        return ContinuousInteractActionInput;
    }

    override void OnFinishProgressServer(ActionData action_data)
    {
        FFFF_Stash_Base stash = FFFF_Stash_Base.Cast(action_data.m_Target.GetObject());

        stash.OpenStash();
    }
}