class FFFF_Weapons_Explosives_Pipebomb extends PipeBomb_Base
{
	void FFFF_Weapons_Explosives_Pipebomb()
	{
		SetAmmoType("M67Grenade_Ammo");
		SetFuseDelay(10);
		SetParticleExplosion(ParticleList.M67);
	}

	void ~FFFF_Weapons_Explosives_Pipebomb() {}
}