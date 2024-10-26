enum CigaretteBurningState
{
	LIT,
    UNLIT
};


enum CigaretteModelStates
{
	UNLIT = 0,
	LIT = 1,
	LIT_HALF = 2,
    UNLIT_OUT = 3
};

class FFFF_Consumables_Cigarette_Base extends Clothing
{
    CigaretteLight m_Light;

    int m_ModelState = CigaretteModelStates.UNLIT;
    private int m_BurningState = CigaretteBurningState.UNLIT;

	protected Particle m_SmokeParticle;

	static protected int PARTICLE_FINAL_SMOKE = ParticleList.ROADFLARE_BURNING_SMOKE;
    bool m_IsLit = false;

	vector m_UnattachedParticleLocalPos = "0 0.085 0";
	vector m_AttachedParticleLocalPos = "-0.028 1.574 -0.371";

	bool m_IsAttached = false;
	bool m_IsAttachedStateSet = false;
	bool m_IsActivelySmoking = false;

    // Selections
	static const string SELECTION_UNLIT = "camo";
	static const string SELECTION_LIT_FULL = "camo2";
	static const string SELECTION_LIT_HALF = "camo3";
	static const string SELECTION_UNLIT_OUT = "camo4";

    static const int SELECTION_INT_UNLIT = 0;
	static const int SELECTION_INT_LIT_FULL = 1;
	static const int SELECTION_INT_LIT_HALF = 2;
	static const int SELECTION_INT_UNLIT_OUT = 3;

    static const string DEFAULT_TEXTURE = "ffff_items\\ffff_medical_items\\Data\\Cigarettes\\Cigarette\\Textures\\Cigarette_co.paa";

    static const string DEFAULT_MATERIAL = "ffff_items\\ffff_medical_items\\Data\\Cigarettes\\Cigarette\\Textures\\Cigarette.rvmat";
    static const string LIT_MATERIAL = "ffff_items\\ffff_medical_items\\Data\\Cigarettes\\Cigarette\\Textures\\Cigarette_lit.rvmat";
	static const string BURNING_MATERIAL = "ffff_items\\ffff_medical_items\\Data\\Cigarettes\\Cigarette\\Textures\\Cigarette_lit_active.rvmat";

	protected EffectSound m_BurnSound;
	static protected const string BURN_SOUND = "CigaretteBurn_SoundSet";

	void FFFF_Consumables_Cigarette_Base()
	{
		RegisterNetSyncVariableBool("m_IsLit");
		RegisterNetSyncVariableBool("m_IsActivelySmoking");
		RegisterNetSyncVariableInt("m_ModelState");
	}

    void SetModelState(int enum_state)
	{
		m_ModelState = enum_state;
		UpdateModelSelections();
	}

    override void EEDelete(EntityAI parent)
	{
		super.EEDelete(parent);
		
		if (m_Light)
			m_Light.FadeOut(0);	
	}

    override void OnStoreSave(ParamsWriteContext ctx)
	{
		super.OnStoreSave(ctx);
		
		ctx.Write( m_ModelState );
	};

    override bool OnStoreLoad(ParamsReadContext ctx, int version)
	{
		if ( !super.OnStoreLoad(ctx, version) )
			return false;

		int state;
		if ( !ctx.Read(state) )
		{
			return false;
		}
		
		SetModelState(state);

		return true;
	};
	
	bool IsLit() 
	{
		return m_IsLit;
	}

	override void OnWasAttached(EntityAI parent, int slot_id)
	{
		super.OnWasAttached(parent, slot_id);

		m_IsAttachedStateSet = false;

		if (m_SmokeParticle)
		{
			m_SmokeParticle.Stop();
		}

		m_IsAttached = true;
	};

	override void OnWasDetached(EntityAI parent, int slot_id)
	{
		super.OnWasDetached(parent, slot_id);

		m_IsAttachedStateSet = false;

		if (m_SmokeParticle)
		{
			m_SmokeParticle.Stop();
		}
		
		m_IsAttached = false
	}

    // When the flare starts burning
	override void OnWorkStart()
	{
		if ( !GetGame().IsServer()  ||  !GetGame().IsMultiplayer() )
		{
			PlaySoundSetAtMemoryPoint( m_BurnSound, BURN_SOUND, "light", 0, 0 );
			
			m_Light = CigaretteLight.Cast(  ScriptedLightBase.CreateLight( CigaretteLight, "0 0 0" )  );
			m_Light.AttachOnMemoryPoint( this, m_Light.m_MemoryPoint );
		}
		
		SetBurningState(CigaretteBurningState.LIT);
		SetModelState( CigaretteModelStates.LIT );
	}

    // Insert CigaretteBurningState enum index as parameter
	void SetBurningState(int state_number)
	{
		FFFF_Consumables_Cigarette_Base attached_item = FFFF_Consumables_Cigarette_Base.Cast(GetGame().GetPlayer().FindAttachmentBySlotName("Mask"));
		if (attached_item == this) {
			m_BurningState = CigaretteBurningState.UNLIT;
		}
		m_BurningState = state_number;
	}
	
	// Insert CigaretteBurningState enum index as parameter. Activates server -> client synchronization
	void SetBurningStateSynchronized(int state_number)
	{
		if ( GetGame().IsServer() )
		{
			m_BurningState = state_number;
			SetSynchDirty();
		}
	}
	
	// Every second of the flare burning
	override void OnWork(float consumed_energy)
	{
		m_IsLit = true;
		if ( GetGame().IsServer() )
		{
			SetBurningStateSynchronized(CigaretteBurningState.LIT);

			if (GetCompEM().GetEnergy() > 175 && GetCompEM().GetEnergy() <= 100 && m_ModelState != CigaretteModelStates.LIT) 
			{
				SetModelState(CigaretteModelStates.LIT);
			}
			else if (GetCompEM().GetEnergy() > 0 && GetCompEM().GetEnergy() <= 175 && m_ModelState != CigaretteModelStates.LIT_HALF)
			{
				SetModelState(CigaretteModelStates.LIT_HALF);
			}
		}

		UpdateActiveParticlesWithAttachment();
		
	}

	void UpdateActiveParticlesWithAttachment()
	{
		if (m_IsAttachedStateSet == false || !m_SmokeParticle) {
			m_IsAttachedStateSet = true;

			if (m_IsAttached && m_SmokeParticle) 
			{
				m_SmokeParticle.Stop();
			}
			else 
			{
				UpdateActiveParticles(m_UnattachedParticleLocalPos);
			}
		}
	}
	
	// When the flare stops burning
	override void OnWorkStop()
	{
		if ( GetGame().IsMissionMainMenu() ) // This is singleplayer main menu so no synchronization here!
		{
			SetBurningState(CigaretteBurningState.UNLIT);
			UpdateActiveParticlesWithAttachment();
		}
		else
		{
			if ( GetGame().IsServer())
			{
				if (GetCompEM().GetEnergy() > 0)
				{
					if (m_Light)
					{
						m_Light.FadeOut();
					}
					SetBurningState(CigaretteBurningState.UNLIT);
					return;
				}

				SetBurningStateSynchronized(CigaretteBurningState.UNLIT);
				m_IsLit = false;
				SetHealth("", "", 0);
			}

			UpdateActiveParticlesWithAttachment();
		}

		if (m_Light)
				m_Light.FadeOut();
			
		SetModelState(CigaretteModelStates.UNLIT_OUT);
	}
	
	// Updates all (in)active particles
	void UpdateActiveParticles(vector attachmentPoint)
	{
		if ( GetGame().IsDedicatedServer() )
			return;
		
		switch (m_BurningState)
		{
			case CigaretteBurningState.UNLIT:			
				if (m_SmokeParticle)
				{
					m_SmokeParticle.Stop();
				}
				break;

			case CigaretteBurningState.LIT:
				
				if (!m_SmokeParticle && !m_IsActivelySmoking)
				{	
					m_SmokeParticle = Particle.PlayOnObject(ParticleList.POWER_GENERATOR_SMOKE, this, attachmentPoint, Vector(0,0,0), true);
					m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.VELOCITY, 0.05);
					m_SmokeParticle.ScaleParticleParamFromOriginal(EmitorParam.SIZE, 0.25);
				}
				
				break;	
		}
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
		if ( m_BurningState != CigaretteBurningState.UNLIT )
			return false;
		
		return true;
	}
	
	override bool CanIgniteItem(EntityAI ignite_target = NULL)
	{
		return GetCompEM().IsWorking();
	}
	
	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		UpdateActiveParticlesWithAttachment();
	}
	
	override void SetActions()
	{
		super.SetActions();
		
		// add action
		AddAction(ActionLightCigarette);
		AddAction(ActionSmokeCigarette);
	}

	void UpdateModelSelections()
	{
		switch (m_ModelState)
		{
			case CigaretteModelStates.UNLIT:			

				SetObjectTexture(CigaretteModelStates.UNLIT, DEFAULT_TEXTURE);
				SetObjectMaterial(CigaretteModelStates.UNLIT, DEFAULT_MATERIAL);

                SetObjectTexture(CigaretteModelStates.LIT, "");
                SetObjectMaterial(CigaretteModelStates.LIT, "");

				SetObjectTexture(CigaretteModelStates.LIT_HALF, "");
                SetObjectMaterial(CigaretteModelStates.LIT_HALF, "");

				SetObjectTexture(CigaretteModelStates.UNLIT_OUT, "");
                SetObjectMaterial(CigaretteModelStates.UNLIT_OUT, "");
		
				
				break;
				
			case CigaretteModelStates.LIT:			
				
				SetObjectTexture(CigaretteModelStates.LIT, DEFAULT_TEXTURE);
				SetObjectMaterial(CigaretteModelStates.LIT, LIT_MATERIAL);

                SetObjectTexture(CigaretteModelStates.UNLIT, "");
                SetObjectMaterial(CigaretteModelStates.UNLIT, "");

				SetObjectTexture(CigaretteModelStates.LIT_HALF, "");
                SetObjectMaterial(CigaretteModelStates.LIT_HALF, "");

				SetObjectTexture(CigaretteModelStates.UNLIT_OUT, "");
                SetObjectMaterial(CigaretteModelStates.UNLIT_OUT, "");
			
				
				
				break;
				
			case CigaretteModelStates.LIT_HALF:
				
				SetObjectTexture(SELECTION_INT_LIT_HALF, DEFAULT_TEXTURE);
				SetObjectMaterial(SELECTION_INT_LIT_HALF, LIT_MATERIAL);

                SetObjectTexture(CigaretteModelStates.UNLIT, "");
                SetObjectMaterial(CigaretteModelStates.UNLIT, "");

				SetObjectTexture(CigaretteModelStates.LIT, "");
                SetObjectMaterial(CigaretteModelStates.LIT, "");

				SetObjectTexture(CigaretteModelStates.UNLIT_OUT, "");
                SetObjectMaterial(CigaretteModelStates.UNLIT_OUT, "");
				
				break;	
                
            case CigaretteModelStates.UNLIT_OUT:
				
				SetObjectTexture(CigaretteModelStates.UNLIT_OUT, DEFAULT_TEXTURE);
				SetObjectMaterial(CigaretteModelStates.UNLIT_OUT, DEFAULT_MATERIAL);

                SetObjectTexture(CigaretteModelStates.UNLIT, "");
                SetObjectMaterial(CigaretteModelStates.UNLIT, "");

				SetObjectTexture(CigaretteModelStates.LIT, "");
                SetObjectMaterial(CigaretteModelStates.LIT, "");

				SetObjectTexture(CigaretteModelStates.LIT_HALF, "");
                SetObjectMaterial(CigaretteModelStates.LIT_HALF, "");

				break;	
		}
	}
}