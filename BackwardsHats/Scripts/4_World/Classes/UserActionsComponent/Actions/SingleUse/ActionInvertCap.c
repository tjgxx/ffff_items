/**
 * ActionInvertCap Action
 * @author Ryan Broman (Whitename) <ryan@broman.dev>
 * Model by misho5244 
 * Permission given by Misho and Ryan for use, all credit to origional authors.
 * Adapted from Hellmaker2a <davidou2a@hotmail.com> with permission
 * Adapted for use in FFFF by Knight
 */

class ActionInvertCap : ActionSingleUseBase {
    void ActionInvertCap() {
        m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_PICKUP_HANDS;
    }

    override void CreateConditionComponents() {
        m_ConditionItem = new CCINonRuined;
        m_ConditionTarget = new CCTNone;
    }

    override string GetText() {
        return "Rotate cap";
    }

    override bool HasTarget() { return false; }
    override bool ActionConditionContinue(ActionData action_data) { return true; }

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item) {
        return true;
        if (item) {
            return true;
        }
        else {
            return false;
        }
    }

    override void OnExecuteClient(ActionData action_data) {
        ClearInventoryReservationEx(action_data);
    }

    override void OnExecuteServer(ActionData action_data) {
        const string REAR_CAP_CLASSNAME = "BaseballCapReverse_";
        const string FRONT_CAP_CLASSNAME = "BaseballCap_";
        string requestedItem = "";
        ItemBase actualItem = action_data.m_MainItem;
        string itemName = actualItem.GetInventoryItemType().GetName();
        TurnItemIntoItemLambda newItem = null;

        string itemColor = actualItem.GetInventoryItemType().GetName();

        // Turn front cap into reverse
        int index = itemColor.Length() - itemColor.IndexOf("_") - 1;
        int _Pos = itemColor.IndexOf("_") + 1;
        itemColor = itemColor.Substring(_Pos, index);

        if (itemName.Contains("Reverse")) {
            requestedItem = FRONT_CAP_CLASSNAME + itemColor;
        }
        else {
            requestedItem = REAR_CAP_CLASSNAME + itemColor;
        }

        if (!GetGame().IsMultiplayer())
            ClearInventoryReservationEx(action_data);

        newItem = new TurnItemIntoItemLambda(action_data.m_MainItem, requestedItem, action_data.m_Player);

        newItem.SetTransferParams(true, true, true, false, 1);
        action_data.m_Player.ServerReplaceItemInHandsWithNew(newItem);
    }
};