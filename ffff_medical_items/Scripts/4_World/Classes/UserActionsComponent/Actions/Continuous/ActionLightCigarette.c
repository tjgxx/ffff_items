class ActionLightCigaretteCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( 2 );
	}
}

class ActionLightCigarette: ActionContinuousBase
{
	void ActionLightCigarette()
	{
		m_CallbackClass = ActionLightCigaretteCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_STARTFIRE;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_FullBody = true;
		m_Text = "#Light Cigarette";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
		m_ConditionItem = new CCINonRuined;
	}
	
	override bool CanBePerformedFromQuickbar()
	{
		return true;
	}
	
	// Removed as a fix for igniting Torch by Matchbox through drag&drop in inventory
	// override bool CanBePerformedFromInventory()
	// {
	// 	return true;
	// }
	
	// Check if ignite candidate is in cargo of something or not.
	bool IsItemInCargoOfSomething(ItemBase item)
	{
		if ( item.GetInventory() )
		{
			InventoryLocation loc = new InventoryLocation;
			item.GetInventory().GetCurrentInventoryLocation(loc);
			
			if ( loc.GetIdx() > -1 )
			{
				return true;
			}
		}
		
		return false;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{	
		// item is flame source, target_item is cigarette
		ItemBase target_item = ItemBase.Cast(target.GetObject());
		FFFF_Consumables_Cigarette_Base attached_item = FFFF_Consumables_Cigarette_Base.Cast(player.FindAttachmentBySlotName("Mask"));
		FFFF_Consumables_Cigarette_Base cigarette_target = FFFF_Consumables_Cigarette_Base.Cast(target_item);

		if (attached_item == cigarette_target) 
		{
			return false;
		}

		if ((target_item && item) && item.GetQuantity() > 0 && target_item.IsKindOf("FFFF_Consumables_Cigarette_Base"))
		{

			if (item.IsKindOf("FFFF_Consumables_Cigarette_Base"))
			{
				FFFF_Consumables_Cigarette_Base cigarette_source = FFFF_Consumables_Cigarette_Base.Cast(item);

				if (!cigarette_source.m_IsLit)
				{
					return false;
				}
				
			}
			if (!cigarette_target.m_IsLit && !IsItemInCargoOfSomething(target_item))
			{
				return true;
			}
		}
		
		return false;
	}
	
	override void OnFinishProgressServer( ActionData action_data )
	{
		ItemBase target_item = ItemBase.Cast( action_data.m_Target.GetObject() );
		ItemBase item = action_data.m_MainItem;
		FFFF_Consumables_Cigarette_Base cigarette = FFFF_Consumables_Cigarette_Base.Cast(target_item);
		
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