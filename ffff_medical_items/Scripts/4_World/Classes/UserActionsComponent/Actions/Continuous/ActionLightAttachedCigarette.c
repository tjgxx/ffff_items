class ActionLightAttachedCigarette : ActionSingleUseBase
{
	void ActionLightAttachedCigarette()
	{
		m_Text = "#Light Cigarette";
        m_CommandUID		= DayZPlayerConstants.CMD_ACTIONMOD_LICKBATTERY;
        m_CommandUIDProne 	= DayZPlayerConstants.CMD_ACTIONFB_LICKBATTERY;
        m_Sound = "MatchStrike_SoundSet";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem 	= new CCINonRuined();
		m_ConditionTarget 	= new CCTNone();
	}

	override bool HasTarget()
	{
		return false;
	}
	
	override bool HasProneException()
	{
		return true;
	}

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
        // item is flame source, no target
        if (item.GetQuantity() > 0) {
            // get the item attached to the mask slot
            ItemBase attached_item = ItemBase.Cast(player.FindAttachmentBySlotName("Mask"));
            if (attached_item && attached_item.IsKindOf("FFFF_Consumables_Cigarette_Base")) {
                FFFF_Consumables_Cigarette_Base cigarette = FFFF_Consumables_Cigarette_Base.Cast(attached_item);
                if (!cigarette.m_IsLit) {
                    return true;
                }

                return false;
            }
		
        }

		return false;
	}

	override void OnExecuteServer(ActionData action_data)
	{
        FFFF_Consumables_Cigarette_Base cigarette = FFFF_Consumables_Cigarette_Base.Cast(action_data.m_Player.FindAttachmentBySlotName("Mask"));
		
		if ( cigarette.HasEnergyManager() )
		{
			if (cigarette.GetCompEM().CanWork())
			{
				cigarette.GetCompEM().SwitchOn();
				cigarette.m_IsLit = true;
			}
		}
	}
}
