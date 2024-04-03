class MushroomLight extends PointLightBase
{
	static float m_MushroomRadius = 7.5;
	static float m_MushroomBrightness = 0.1;
	
	void MushroomLight()
	{
		SetVisibleDuringDaylight(true);
		SetRadiusTo( m_MushroomRadius );
		SetBrightnessTo(m_MushroomBrightness);
		SetCastShadow(false);
		SetDiffuseColor(27, 87, 43);
    	SetAmbientColor(27, 87, 43);
	}
}