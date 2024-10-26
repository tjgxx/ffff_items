class CigaretteLight extends PointLightBase
{
	static float 	m_CigaretteRadius = 0.25;
	static float 	m_CigaretteBrightness = 0.25;
	static string 	m_MemoryPoint = "light";
	
	void CigaretteLight()
	{
		SetRadiusTo( m_CigaretteRadius );
		SetBrightnessTo(m_CigaretteBrightness);
		FadeIn(1);
		SetFadeOutTime(1);
		SetDiffuseColor(0.82, 0.478, 0.078);
		SetAmbientColor(0.82, 0.478, 0.078);
	}
	
	/*override void OnFrameLightSource(IEntity other, float timeSlice)
	{
		
	}*/
}