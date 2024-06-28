class FFFF_Stash_Base : Inventory_Base 
{
  bool m_IsSearched = false;

  void FFFF_Stash_Base()
  {
    RegisterNetSyncVariableBool("m_IsSearched");
  }

  void OpenStash()
  {
    m_IsSearched = true;
    SetSynchDirty();
  }

  override bool CanDisplayCargo()
  {
    return m_IsSearched;
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