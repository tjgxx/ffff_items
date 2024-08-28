modded class PlayerBase
{
    private ref KTHybridAttachmentsManager kthybridManager;

    override void Init()
    {
        super.Init();

        kthybridManager = new KTHybridAttachmentsManager(this);
    }

    override void EEItemAttached(EntityAI item, string slot_name)
    {
        super.EEItemAttached(item, slot_name);
        
        if (kthybridManager)
            kthybridManager.ItemAttached(item, slot_name);
    }

    override void EEItemDetached(EntityAI item, string slot_name)
    {
        super.EEItemDetached(item, slot_name);

        if (kthybridManager)
            kthybridManager.ItemDetached(item, slot_name);
    }
}
class KTHybridAttachmentsManager
{
    private PlayerBase player;

    private const string CONFIG_SLOTS_NAME = "conflictedSlots";
    private const string CONFIG_TYPES_NAME = "conflictedTypes";

    void KTHybridAttachmentsManager(PlayerBase _player)
    {
        player = _player;
    }

    void Fold(EntityAI item)
    {
        item.SetSimpleHiddenSelectionState(0,0); 
        item.SetSimpleHiddenSelectionState(1,1);
    }

    void Unfold(EntityAI item)
    {
        item.SetSimpleHiddenSelectionState(0,1);
        item.SetSimpleHiddenSelectionState(1,0);
    }

    bool IsHybridItem(EntityAI item)
    {
        bool hasConflictedSlots = item.ConfigIsExisting(CONFIG_SLOTS_NAME);
        bool hasSimpleSelections = item.ConfigIsExisting("simpleHiddenSelections");

        return hasConflictedSlots && hasSimpleSelections;
    }

    bool HasConflict(EntityAI item, string slot_name)
    {
        array<string> conflictedSlots = {};
        item.ConfigGetTextArray(CONFIG_SLOTS_NAME, conflictedSlots);

        return (conflictedSlots.Find(slot_name) + 1);
    }

    bool HasMultiplyConflicts(EntityAI item)
    {
        array<string> conflictedSlots = {};
        array<string> conflictedTypes = {};
        item.ConfigGetTextArray(CONFIG_SLOTS_NAME, conflictedSlots);
        bool hasTypes;
        bool result;

        hasTypes = item.ConfigIsExisting(CONFIG_TYPES_NAME);

        if (hasTypes)
        {
            item.ConfigGetTextArray(CONFIG_TYPES_NAME, conflictedTypes);
        }

        for (int i = 0; i < conflictedSlots.Count() && !result; i++)
        {
            EntityAI itemOnSlot = player.GetItemOnSlot(conflictedSlots[i]);
            if (itemOnSlot)
            {
                if (hasTypes)
                {
                    for (int j = 0; j < conflictedTypes.Count() && !result; j++)
                        result = itemOnSlot.IsKindOf(conflictedTypes[j]);
                }
                else
                    result = true;
            }
        }

        return result;
    }

    void ItemAttached(EntityAI item, string slot_name)
    {
        if (IsHybridItem(item))
            Unfold(item);

        EntityAI attachment;
        int attCount  = player.GetInventory().AttachmentCount();
        
        for ( int i = 0; i < attCount; ++i)
        {
            attachment = player.GetInventory().GetAttachmentFromIndex(i);

            if (!attachment.IsClothing() || !IsHybridItem(attachment))
                continue;

            if (HasMultiplyConflicts(attachment))
            {
                Fold(attachment);
            }
        }
    }

	void ItemDetached(EntityAI item, string slot_name)
    {
        EntityAI attachment;
        int attCount  = player.GetInventory().AttachmentCount();
        
        for ( int i = 0; i < attCount; ++i)
        {
            attachment = player.GetInventory().GetAttachmentFromIndex(i);

            if (attachment != item)
                player.HideHairSelections(ItemBase.Cast(attachment), true);
            
            if (!attachment.IsClothing() || !IsHybridItem(attachment))
                continue;

            if (HasConflict(attachment, slot_name))
            {
                if (HasMultiplyConflicts(attachment))
                {
                    return;
                }

                Unfold(attachment);
            }
        }
    }
}