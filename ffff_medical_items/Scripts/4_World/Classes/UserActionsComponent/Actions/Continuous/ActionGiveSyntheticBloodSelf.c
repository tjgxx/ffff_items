class ActionGiveSyntheticBloodSelfCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(5);
	}
};

class ActionGiveSyntheticBloodSelf: ActionContinuousBase
{
	const float CHEM_AGENT_BLOOD_REMOVAL_MODIFIER = 1;
	void ActionGiveSyntheticBloodSelf()
	{
		m_CallbackClass = ActionGiveSyntheticBloodSelfCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_HIGH;
		
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_SALINEBLOODBAG;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_Text = "Inject";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override bool HasTarget()
	{
		return false;
	}

    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        return item.IsInherited( FFFF_SyntheticBloodBag );
    }
	
	override void OnFinishProgressServer(ActionData action_data)
	{
        PlayerBase m_Player = action_data.m_Player;
        ItemBase item = ItemBase.Cast(action_data.m_MainItem);
        float blood_obtained = PlayerConstants.SL_BLOOD_HIGH - action_data.m_Player.GetHealth("", "Blood");
		
        m_Player.SetHealth("", "Blood", blood_obtained);
		m_Player.SetHealthMax("", "Blood");
        m_Player.SetHealthMax("", "Health");
        m_Player.SetHealthMax("", "Shock");

        while (m_Player.HasDisease())
        {
            m_Player.DecreaseDiseaseCount();
        };

        m_Player.RemoveAllAgents();

        m_Player.m_NotifiersManager.DeactivateByType(eNotifiers.NTF_SICK);

        m_Player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_TOXICITY, true );
        m_Player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_BRAIN, true );
        m_Player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_CHOLERA, true );
        m_Player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_COMMON_COLD, true );
        m_Player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_INFLUENZA, true );
        m_Player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_SALMONELLA, true );
        m_Player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_WOUND_INFECTION1, true );
        m_Player.GetModifiersManager().DeactivateModifier( eModifiers.MDF_WOUND_INFECTION2, true );

        if (action_data.m_WasExecuted && item)
        {
            item.Delete();
        }

		
		// if (!(action_data_b.m_Agents & eAgents.CHEMICAL_POISON))//does bloodbag NOT contain nerve agent ?
		// {
		// 	float remove_count_agents = blood_obtained * CHEM_AGENT_BLOOD_REMOVAL_MODIFIER;
		// 	action_data.m_Player.InsertAgent(eAgents.CHEMICAL_POISON, - remove_count_agents);
			
		// }
	}
};