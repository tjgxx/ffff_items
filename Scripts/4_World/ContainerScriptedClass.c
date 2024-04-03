class FFFF_ProtectorCaseStash_T1 : SmallProtectorCase
{
  override bool CanPutIntoHands(EntityAI parent)
  {
      return false;
  }

  override bool CanPutInCargo(EntityAI parent)
  {
      return false;
  }
};


class FFFF_WoodenCrateStash_T1 : WoodenCrate
{
  override bool CanPutIntoHands(EntityAI parent)
  {
      return false;
  }

  override bool CanPutInCargo(EntityAI parent)
  {
      return false;
  }
};


class FFFF_CanvasBagStash_T1 : Inventory_Base
{
  override bool CanPutIntoHands(EntityAI parent)
  {
      return false;
  }

  override bool CanPutInCargo(EntityAI parent)
  {
      return false;
  }
};
