class ActionSmokeCigaretteCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(1.5);
	}
};

class ActionSmokeCigarette: ActionContinuousBase
{

	protected EffectSound m_BurnSound;
	static protected const string BURN_SOUND = "CigaretteBurn_SoundSet";

	void ActionSmokeCigarette()
	{
		m_CallbackClass = ActionSmokeCigaretteCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_TAKETEMPSELF;
		m_CommandUIDProne = DayZPlayerConstants.CMD_ACTIONFB_TAKETEMPSELF;
		m_Text = "#Smoke Cigarette";
	}
	
	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}
	
	override bool HasProneException()
	{
		return true;
	}

	override bool HasTarget()
	{
		return false;
	}

    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
        FFFF_Consumables_Cigarette_Base cigarette = FFFF_Consumables_Cigarette_Base.Cast(item);

		if (!player.CanEatAndDrink())
		{
			return false;
		}

		if (cigarette.m_IsLit) 
        {
            return true;
        }

        return false;
	}

    override void OnStartAnimationLoopServer(ActionData action_data)
    {
        super.OnStartAnimationLoopServer(action_data);
        FFFF_Consumables_Cigarette_Base cigarette = FFFF_Consumables_Cigarette_Base.Cast(action_data.m_MainItem);
		cigarette.m_Light.SetRadiusTo(0.5);
		cigarette.m_Light.SetBrightnessTo(0.5);
		cigarette.PlaySoundSetAtMemoryPoint( m_BurnSound, BURN_SOUND, "light", 0, 0 );
        cigarette.SetObjectMaterial(cigarette.m_ModelState, cigarette.BURNING_MATERIAL);
		cigarette.m_IsActivelySmoking = true;
    }

    override void OnEndAnimationLoopServer(ActionData action_data)
    {
        super.OnEndAnimationLoopServer(action_data);
        FFFF_Consumables_Cigarette_Base cigarette = FFFF_Consumables_Cigarette_Base.Cast(action_data.m_MainItem);
		cigarette.m_Light.SetRadiusTo(0.25);
		cigarette.m_Light.SetBrightnessTo(0.25);
        cigarette.SetObjectMaterial(cigarette.m_ModelState, cigarette.LIT_MATERIAL);
		cigarette.m_IsActivelySmoking = false;
    }
	
	override void OnFinishProgressServer( ActionData action_data )
	{	
		FFFF_Consumables_Cigarette_Base cigarette = FFFF_Consumables_Cigarette_Base.Cast(action_data.m_MainItem);
		
		if (cigarette)
		{
			cigarette.GetCompEM().AddEnergy(-10);
		}
		
	}
};