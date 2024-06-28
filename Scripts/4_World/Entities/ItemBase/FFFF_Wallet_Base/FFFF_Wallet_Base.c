class FFFF_Wallet_Base extends Container_Base
{
	override int GetDamageSystemVersionChange()
	{
		return 110;
	}
	override bool CanPutInCargo(EntityAI parent)
	{
		if (!super.CanPutInCargo(parent))
			return false;

		return true;
	}

	override bool CanReceiveItemIntoCargo( EntityAI item )
	{
		if (!item.IsKindOf("TraderPlusMoney_Base")) 
		{
			return false;
		}

		if (!super.CanReceiveItemIntoCargo(item))
			return false;
		
		if (GetInventory().IsAttachment())
		{
			return !GetHierarchyParent().GetInventory().IsInCargo() && (!item.GetInventory().GetCargo() || (item.GetInventory().GetCargo().GetItemCount() == 0 || item.IsContainer()));
		}
		
		return !item.GetInventory().GetCargo() || (item.GetInventory().GetCargo().GetItemCount() == 0 || item.IsContainer());
	}
	
	override bool CanLoadItemIntoCargo( EntityAI item )
	{
		if (!item.IsKindOf("TraderPlusMoney_Base")) 
		{
			return false;
		}

		if (!super.CanLoadItemIntoCargo(item))
			return false;
		
		return !item.GetInventory().GetCargo() || (item.GetInventory().GetCargo().GetItemCount() == 0 || item.IsContainer());
	}
};