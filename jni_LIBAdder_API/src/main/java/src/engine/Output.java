package src.engine;

import src.PraiseSets.Output_praise0;

public class Output 
{
// classes.
	private static Output_praise0 _output_praise0 = null;
	
// registers.
	private static Object[] _list_Of_Subset_For_Output = null;
	
// constructor.
	public Output() 
	{
		System.out.printf("entered CLASS Output()%n");
		stat_REG_create_list_Of_Subset_For_Output();
		System.out.printf("exiting CLASS Output()%n");
	}
	
// public.
	// dynamic.
		// get.
	public static Object dyn_REG_get_Item_On_list_Of_Subset_For_Output(char praiseID)
	{
		return stat_REG_get_Item_On_list_Of_Subset_For_Output(praiseID);
		
	}
		// set.
	public static Object dyn_REG_set_Item_On_list_Of_Subset_For_Output(char praiseID, char newValue)
	{
		return stat_REG_get_Item_On_list_Of_Subset_For_Output(praiseID);
		
	}
	// static.
		// get.
		// set.

// private.
	// dynamic.
		// create.
		// get.
		// set.
	// static.
		// create.
	private static void stat_CLASS_create_output_praise0()
	{
		Output_praise0 _output_praise0 = new Output_praise0();
		try {
			stat_CLASS_get_output_praise0();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
	private static void stat_REG_create_list_Of_Subset_For_Output()
	{
		stat_CLASS_create_output_praise0();
		Object[] _list_Of_Subset_For_Output = new Object[1];
		try {
			stat_REG_get_list_Of_Subset_For_Output();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
		_list_Of_Subset_For_Output[0] = stat_CLASS_get_output_praise0();
	}	
		// get.
	private static Output_praise0 stat_CLASS_get_output_praise0()
	{
		return _output_praise0;
	}
	public static Object stat_REG_get_Item_On_list_Of_Subset_For_Output(char praiseID)
	{
		return _list_Of_Subset_For_Output[praiseID];
	}
	public static Object[] stat_REG_get_list_Of_Subset_For_Output()
	{
		return _list_Of_Subset_For_Output;
		
	}
		// set.
	public static void stat_REG_set_Item_On_list_Of_Subset_For_Output(char praiseID, Object newSubClass)
	{
		_list_Of_Subset_For_Output[praiseID] = newSubClass;
		
	}
}