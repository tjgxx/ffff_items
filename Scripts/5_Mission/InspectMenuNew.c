#ifndef EXPANSION_INSPECT_MENU_NEW_ENABLE
modded class InspectMenuNew
{
	override static void UpdateItemInfoLiquidType(Widget root_widget, EntityAI item)
	{
		if ( item.IsInherited( ZombieBase ) || item.IsInherited( Car ) ) return;
		
		ItemBase item_base = ItemBase.Cast( item );
		
		if( item_base && item_base.GetQuantity() > 0 && item_base.IsBloodContainer() )
		{
			BloodContainerBase blood_container = BloodContainerBase.Cast( item_base );
			
			if( blood_container.GetBloodTypeVisible() )
			{
				string type;
				bool positive;
				string blood_type_name = BloodTypes.GetBloodTypeName(blood_container.GetLiquidType(), type, positive);
				WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_blood: " + blood_type_name, 0x8A0303);
			}
			else
			{
				WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_blood", 0x8A0303);
			}
		}
		else if( item_base && item_base.GetQuantity() > 0 && item_base.IsLiquidContainer() )
		{
			int liquid_type = item_base.GetLiquidType();

			Print("LIQUID TYPE: " + liquid_type.ToString());
			
			switch(liquid_type)
			{
				case LIQUID_WATER://9
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_water", Colors.COLOR_LIQUID);
					break;
				}
					
				case LIQUID_RIVERWATER://10
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_river_water", Colors.COLOR_LIQUID);
					break;
				}
					
				case LIQUID_VODKA://11
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_vodka", Colors.GRAY);
					break;
				}
				
				case LIQUID_BEER://12
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_beer", 0xF28E1C);
					break;
				}
				
				case LIQUID_GASOLINE://13
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_gasoline", 0x005F6A);
					break;
				}
				
				case LIQUID_DIESEL://14
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_diesel", 0x322C2B);
					break;
				}
				
				case LIQUID_DISINFECTANT://15
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "DISINFECTANT", 0xFFE8A4);
					break;
				}
	
				case LIQUID_SALINE://16
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "#inv_inspect_saline", Colors.COLOR_LIQUID);
					break;
				}

				case LIQUID_COFFEE://18
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "COFFEE", 0x5C3A17);
					break;
				}

				case LIQUID_TEA:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "TEA", 0x7D562D);
					break;
				}

				default:
				{
					WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "ERROR", Colors.COLOR_LIQUID);
					break;
				}
			}
		}
		else
		{
			WidgetTrySetText(root_widget, "ItemLiquidTypeWidget", "");
		}
	}
};