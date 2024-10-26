modded class PetrolLighter extends ItemBase
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionLightCigarette);
		AddAction(ActionLightAttachedCigarette);
	}
};

modded class Torch extends FlammableBase
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionLightCigarette);
		AddAction(ActionLightAttachedCigarette);
	}
};

modded class Matchbox extends ItemBase
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionLightCigarette);
		AddAction(ActionLightAttachedCigarette);
	}
};