package src.engine;

import src.PraiseSets.Input_praise0;

public class Input 
{
// classes.
	private static Input_praise0 _input_praise0 = null;
	
// registers.
	private static Object[] _list_Of_Subset_For_Input = { null };
	
// constructor.
	public Input() 
	{
		System.out.printf("entered CLASS Input()%n");
		stat_CLASS_create_input_praise0();
		stat_REG_create_list_Of_Subset_For_Input();
		System.out.printf("exiting CLASS Input()%n");
	}
	
// public.
	// dynamic.
		// get.
	public static Object dyn_REG_get_Item_On_list_Of_Subset_For_Input(char praiseID)
	{
		return stat_REG_get_Item_On_list_Of_Subset_For_Input(praiseID);
		
	}
		// set.
	public static Object dyn_REG_set_Item_On_list_Of_Subset_For_Input(char praiseID, char newValue)
	{
		return stat_REG_get_Item_On_list_Of_Subset_For_Input(praiseID);
		
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
	private static void stat_CLASS_create_input_praise0()
	{
		Input_praise0 _input_praise0 = new Input_praise0();
		try {
			stat_CLASS_get_input_praise0();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
	private static void stat_REG_create_list_Of_Subset_For_Input()
	{
		Object[] _list_Of_Subset_For_Input = { new Object() };
		try {
			stat_REG_get_list_Of_Subset_For_Input();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
		try {
			stat_REG_set_Item_On_list_Of_Subset_For_Input((char) 0, stat_CLASS_get_input_praise0());
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}	
		// get.
	private static Input_praise0 stat_CLASS_get_input_praise0()
	{
		return _input_praise0;
	}
	public static Object stat_REG_get_Item_On_list_Of_Subset_For_Input(int i)
	{
		return _list_Of_Subset_For_Input[i];
		
	}
	public static Object[] stat_REG_get_list_Of_Subset_For_Input()
	{
		return _list_Of_Subset_For_Input;
		
	}
		// set.
	public static void stat_REG_set_Item_On_list_Of_Subset_For_Input(char praiseID, Object newSubClass)
	{
		_list_Of_Subset_For_Input[praiseID] = newSubClass;
		
	}
}