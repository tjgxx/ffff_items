class FFFF_Glow_Mushroom_Green : MushroomBase
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionCreateIndoorFireplace);
		AddAction(ActionCreateIndoorOven);
	}
}