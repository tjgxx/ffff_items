class FFFF_Glow_Mushrooms_Harvestable_Base : ItemBase {};

class FFFF_Glow_Mushrooms_Harvestable_Green : FFFF_Glow_Mushrooms_Harvestable_Base
{
    MushroomLightGreen m_Light;

    void FFFF_Glow_Mushrooms_Harvestable_Green()
    {
        if (GetGame().IsClient() || !GetGame().IsMultiplayer())
        {
            m_Light = MushroomLightGreen.Cast( ScriptedLightBase.CreateLight(MushroomLightGreen, "0 0 0", 0.08) );
            m_Light.AttachOnMemoryPoint(this, "lightPoint");
        }
    }

    void ~FFFF_Glow_Mushrooms_Harvestable_Green()
    {
        if (m_Light) 
        { 
            m_Light.FadeOut();
        }
        
        m_Light = NULL;
    }
    
    bool CanBeHarvested()
    {
        return true;
    }

    override bool CanPutIntoHands(EntityAI parent)
    {
        return false;
    }

    override bool CanPutInCargo(EntityAI parent)
    {
        return false;
    }

};
