class ActionGiveSyntheticBloodTargetCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(5);
	}
};

class ActionGiveSyntheticBloodTarget: ActionContinuousBase
{
	void ActionGiveSyntheticBloodTarget()
	{
		m_CallbackClass = ActionGiveBloodTargetCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_HIGH;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_SALINEBLOODBAGTARGET;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_Text = "Give Injection";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
		m_ConditionItem = new CCINonRuined;
	}

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        return item.IsInherited( FFFF_SyntheticBloodBag );
    }
	
	override void OnFinishProgressServer(ActionData action_data)
	{
		PlayerBase player_target = PlayerBase.Cast(action_data.m_Target.GetObject());
        ItemBase item = ItemBase.Cast(action_data.m_MainItem);
        float blood_obtained = PlayerConstants.SL_BLOOD_HIGH - player_target.GetHealth("", "Blood");
		
        player_target.SetHealth("", "Blood", blood_obtained);
		player_target.SetHealthMax("", "Blood");
        player_target.SetHealthMax("", "Health");
        player_target.SetHealthMax("", "Shock");

        while (player_target.HasDisease())
        {
            player_target.DecreaseDiseaseCount();
        };

        player_target.RemoveAllAgents();

        player_target.m_NotifiersManager.DeactivateByType(eNotifiers.NTF_SICK);

        player_target.GetModifiersManager().DeactivateModifier( eModifiers.MDF_TOXICITY, true );
        player_target.GetModifiersManager().DeactivateModifier( eModifiers.MDF_BRAIN, true );
        player_target.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CHOLERA, true );
        player_target.GetModifiersManager().DeactivateModifier( eModifiers.MDF_COMMON_COLD, true );
        player_target.GetModifiersManager().DeactivateModifier( eModifiers.MDF_INFLUENZA, true );
        player_target.GetModifiersManager().DeactivateModifier( eModifiers.MDF_SALMONELLA, true );
        player_target.GetModifiersManager().DeactivateModifier( eModifiers.MDF_WOUND_INFECTION1, true );
        player_target.GetModifiersManager().DeactivateModifier( eModifiers.MDF_WOUND_INFECTION2, true );

        if (action_data.m_WasExecuted && item)
        {
            item.Delete();
        }
		
		
		// if (!(action_data_b.m_Agents & eAgents.CHEMICAL_POISON))//does bloodbag NOT contain nerve agent ?
		// {
		// 	float remove_count_agents = blood_obtained * ActionGiveBloodSelf.CHEM_AGENT_BLOOD_REMOVAL_MODIFIER;
		// 	player_target.InsertAgent(eAgents.CHEMICAL_POISON, -remove_count_agents);
			
		// }
       
	}
};