package src.engine;

import java.util.ArrayList;
import java.util.List;

public class Data 
{
// classes.
	private static Input _Input = null;
	private static Output _Output = null;
	
// registers.
	private static Input[] _REG_list_Of_Subsets_For_Input = new Input[1];//NUMBER OF PRAISES.
	private static Output[] _REG_list_Of_Subsets_For_Output = new Output[1];//NUMBER OF PRAISES.
	private static boolean _REG_2STATE_DoubleBuffer_For_Input = false;
	private static boolean _REG_2STATE_DoubleBuffer_For_Output = false;
	
// constructor.
	public Data() 
	{
		System.out.printf("entered CLASS Data()%n");
		stat_CLASS_create_Input();
		stat_CLASS_create_Output();
		stat_REG_create_list_Of_Subsets_For_Input();
		stat_REG_create_list_Of_Subsets_For_Output();
		stat_REG_create_2STATE_DoubleBuffer_For_Input();
		stat_REG_create_2STATE_DoubleBuffer_For_Output();
		System.out.printf("exiting CLASS Data()%n");
	}
// public.
	// dynamic.
		// get.
	public Input get_CLASS_Input() 
	{
		return stat_CLASS_get_Input();
	}
	public Output get_CLASS_Output()
	{
		return stat_CLASS_get_Output();
	}
	public Object dyn_REG_get_Item_On_list_Of_Subsets_For_Input(char side)
	{
		return stat_REG_get_Item_On_list_Of_Subsets_For_Input(side);
	}
	public Object dyn_REG_get_Item_On_list_Of_Subsets_For_Output(char side)
	{
		return stat_REG_get_Item_On_list_Of_Subsets_For_Output(side);
	}
	public boolean dyn_REG_get_Item_STATE_DoubleBuffer_To_READ_For_Input()
	{
		return stat_REG_get_Item_2bitSTATE_DoubleBuffer_To_READ_For_Input();
	}
	public boolean dyn_REG_get_STATE_DoubleBuffer_To_READ_For_Output()
	{
		return !stat_REG_get_Item_2bitstate_DoubleBuffer_To_READ_For_Output();
	}
	public boolean dyn_REG_get_STATE_DoubleBuffer_To_WRITE_For_Input()
	{
		return stat_REG_get_Item_2bitstate_DoubleBuffer_To_WRITE_For_Input();
	}
	public boolean dyn_REG_get_STATE_DoubleBuffer_To_Write_For_Output()
	{
		return stat_REG_get_Item_2bitstate_DoubleBuffer_To_WRITE_For_Output();
	}
		// set.
	// static.
		// get.
		// set.

// private.
    // dynamic.
        // get.
        // set.
    // static.
		// classes.
			// create.
	private static void stat_CLASS_create_Input()
	{
		Input _Input = new Input();
		try {
			stat_CLASS_get_Input();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
	private static void stat_CLASS_create_Output()
	{
		Output _Output = new Output();
		try {
			stat_CLASS_get_Output();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
			// get.
	private static Input stat_CLASS_get_Input()
	{
		return _Input;
	}
	private static Output stat_CLASS_get_Output()
	{
		return _Output;
	}
			// set.
		// registers.
			// create.
	private static void stat_REG_create_list_Of_Subsets_For_Input()
	{
		Object[] _REG_list_Of_Subsets_For_Input = new Object[1];
		try {
			stat_REG_get_list_Of_Subsets_For_Input();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
	private static void stat_REG_create_list_Of_Subsets_For_Output()
	{
		Object[] _REG_list_Of_Subsets_For_Output = new Object[1];
		try {
			stat_REG_get_list_Of_Subsets_For_Output();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
	private static void stat_REG_create_2STATE_DoubleBuffer_For_Input()
	{
		boolean _REG_state_DoubleBuffer_To_Write_For_Input = false;
	}
	private static void stat_REG_create_2STATE_DoubleBuffer_For_Output()
	{
		boolean _REG_state_DoubleBuffer_To_Write_For_Output = false;
	}
			// get.
	private static boolean stat_REG_get_Item_2bitSTATE_DoubleBuffer_To_READ_For_Input()
	{
		return !_REG_2STATE_DoubleBuffer_For_Input;
	}
	private static boolean stat_REG_get_Item_2bitstate_DoubleBuffer_To_READ_For_Output()
	{
		return !_REG_2STATE_DoubleBuffer_For_Output;
	}
	private static boolean stat_REG_get_Item_2bitstate_DoubleBuffer_To_WRITE_For_Input()
	{
		return _REG_2STATE_DoubleBuffer_For_Input;
	}
	private static boolean stat_REG_get_Item_2bitstate_DoubleBuffer_To_WRITE_For_Output()
	{
		return _REG_2STATE_DoubleBuffer_For_Output;
	}
	private static Object stat_REG_get_Item_On_list_Of_Subsets_For_Input(char praiseID)
	{
		return _REG_list_Of_Subsets_For_Input[praiseID];
	}
	private static Object stat_REG_get_Item_On_list_Of_Subsets_For_Output(char praiseID)
	{
		return _REG_list_Of_Subsets_For_Output[praiseID];
	}
	private static Input[] stat_REG_get_list_Of_Subsets_For_Input()
	{
		return _REG_list_Of_Subsets_For_Input;
	}
	private static Output[] stat_REG_get_list_Of_Subsets_For_Output()
	{
		return _REG_list_Of_Subsets_For_Output;
	}
	// set.
}