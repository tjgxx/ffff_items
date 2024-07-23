class ActionGiveSyntheticBloodSelfCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(UATimeSpent.SALINE);
	}
};

class ActionGiveSyntheticBloodSelf: ActionContinuousBase
{
	const float CHEM_AGENT_BLOOD_REMOVAL_MODIFIER = 1;
	void ActionGiveSyntheticBloodSelf()
	{
		m_CallbackClass = ActionGiveSyntheticBloodSelfCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_MEDIUM;
		
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
		
		DamageSystem.ResetAllZones(m_Player);
		m_Player.GetModifiersManager().ResetAll();
		m_Player.GetModifiersManager().ActivateModifier(eModifiers.MDF_IMMUNITYBOOST);

		if (m_Player.m_BleedingManagerServer)
			m_Player.m_BleedingManagerServer.RemoveAllSources();

		if (m_Player.GetPlayerStats())
		{
			int bloodType 		= m_Player.GetStatBloodType().Get();
			float energyValue 	= m_Player.GetStatEnergy().Get();
			float waterValue 	= m_Player.GetStatWater().Get();
			float heatBuffer	= m_Player.GetStatHeatBuffer().Get();
			float heatComfort	= m_Player.GetStatHeatComfort().Get();

			m_Player.GetPlayerStats().ResetAllStats();
			
			m_Player.GetStatBloodType().Set(bloodType);
			m_Player.GetStatWater().Set(m_Player.GetStatWater().GetMax());
			m_Player.GetStatEnergy().Set(m_Player.GetStatEnergy().GetMax());
			m_Player.GetStatHeatBuffer().Set(m_Player.GetStatHeatBuffer().GetMax());
			m_Player.GetStatHeatComfort().Set(heatComfort);
		}

		if (m_Player.m_AgentPool)
			m_Player.m_AgentPool.RemoveAllAgents();
	
		if (m_Player.m_StaminaHandler)
			m_Player.m_StaminaHandler.SetStamina(GameConstants.STAMINA_MAX);


        while (m_Player.HasDisease())
        {
            m_Player.DecreaseDiseaseCount();
        };

		if (m_Player.IsUnconscious())
			DayZPlayerSyncJunctures.SendPlayerUnconsciousness(m_Player, false);

		if (m_Player.GetModifiersManager().IsModifierActive(eModifiers.MDF_HEATBUFFER))
		{
			m_Player.GetModifiersManager().DeactivateModifier(eModifiers.MDF_HEATBUFFER);
		}
		
		m_Player.GetModifiersManager().ActivateModifier(eModifiers.MDF_HEATBUFFER);

		action_data.m_Player.GetSoftSkillsManager().AddSpecialty( m_SpecialtyWeight );

        action_data.m_MainItem.Delete();

	}
};