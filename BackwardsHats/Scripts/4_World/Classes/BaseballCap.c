modded class BaseballCapReverse_ColorBase extends Clothing_Base
{

    override void SetActions()
    {
        super.SetActions();

        AddAction( ActionInvertCap );
    }
}