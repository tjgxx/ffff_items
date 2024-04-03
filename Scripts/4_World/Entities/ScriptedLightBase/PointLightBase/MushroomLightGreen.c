class MushroomLightGreen extends PointLightBase
{
	static float m_MushroomRadius = 10;
	float m_MushroomBrightness = 0.1;

	float m_maxBrightness = 0.1;
	float m_minBrightness = 0.01;
	
	void MushroomLightGreen()
	{
		Print(m_MushroomBrightness.ToString() + " MUSHROOM BRIGHTNESS IN CONSTRUCTOR");
		SetVisibleDuringDaylight(true);
		SetRadiusTo( m_MushroomRadius );
		SetBrightnessTo(m_MushroomBrightness);
		SetCastShadow(false);
		SetDiffuseColor(27, 87, 43);
    	SetAmbientColor(27, 87, 43);
	}

	override void OnFrameLightSource(IEntity other, float timeSlice)
	{
		int year, month, day, hour, minute;
		GetGame().GetWorld().GetDate( year, month, day, hour, minute );
		float hourOfDay = hour + ( (minute/100) / (60/100);

        // Convert timeOfDay to radians to use in the sine function
        float m_Radians = (hourOfDay / 24) * 2 * Math.PI;

        // Use a sine function to map timeOfDay to a brightness value
        m_MushroomBrightness = (m_maxBrightness - m_minBrightness) * (Math.Sin(m_Radians) + 1) / 2 + m_minBrightness;
	

		Print(m_MushroomBrightness.ToString() + " MUSHROOM BRIGHTNESS IN UPDATE");
	}
}
