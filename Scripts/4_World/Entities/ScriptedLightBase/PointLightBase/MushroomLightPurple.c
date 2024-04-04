class MushroomLightPurple extends PointLightBase
{
	static float m_MushroomRadius = 10;
	float m_MushroomBrightness = 0.05;

	float m_maxBrightness = 0.05;
	float m_minBrightness = 0.001;

	void MushroomLightPurple()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo( m_MushroomRadius );
		SetCastShadow(false);
		SetDiffuseColor(80, 30, 100);
    	SetAmbientColor(80, 30, 100);
	}

	override void OnFrameLightSource(IEntity other, float timeSlice)
	{
		int year, month, day, hour, minute;
		GetGame().GetWorld().GetDate( year, month, day, hour, minute );
		float hourOfDay = hour + ( (minute/100) / (60/100);

		if (  hourOfDay >= 0.0 && hourOfDay <= 6.25  || hourOfDay >= 18.25 && hourOfDay <= 23.99  ) {
			SetBrightnessTo(0.001);
		} else {
			SetBrightnessTo(0.1);
		}
	}
}
