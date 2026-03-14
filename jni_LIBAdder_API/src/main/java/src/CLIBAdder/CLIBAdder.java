package src.CLIBAdder;

import src.Main.Framework_Ptr;
import src.PraiseSets.Algorithim_praise0;
import src.PraiseSets.Input_praise0;
import src.PraiseSets.Output_praise0;
import src.engine.Framework;

// library imports.
import com.sun.jna.Pointer;

public class CLIBAdder implements LIBADDER_API
{
// classes.
	public static Pointer _framework = null;
		
// registers.

// pointers.
	public static Framework_Ptr _framework_Ptr = null;

// dynamic.
	// API member functions.
	@Override
	public double do_Add(Framework_Ptr obj) 
	{
		Algorithim_praise0 objAlg = (Algorithim_praise0)obj.get_App().get_Algorithms().dyn_REG_get_Item_On_list_Of_Subset_For_Algorithm((char) 0);
		Input_praise0 objIn = (Input_praise0)obj.get_App().get_Data().dyn_REG_get_Item_On_list_Of_Subsets_For_Input((char) 0);
		Output_praise0 objOut = (Output_praise0)obj.get_App().get_Data().dyn_REG_get_Item_On_list_Of_Subsets_For_Output((char) 0);
		return objAlg.do_Add(objIn, objOut);
	}

	@Override
	public Pointer generate_Program() 
	{
		stat_CLASS_create_Framework();
		return (Pointer)stat_CLASS_get_Framework();
	}

	@Override
	public long get_Output_Subset_praise0_value(PGM_LibAdder_Ptr obj) {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public short get_PraiseEventId() {
		// TODO Auto-generated method stub
		return 0;
	}

	@Override
	public void set_Input_Subset_praise0_valueA(PGM_LibAdder_Ptr obj, float newFloat) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void set_Input_Subset_praise0_valueB(PGM_LibAdder_Ptr obj, float newFloat) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void set_PraiseEventId(PGM_LibAdder_Ptr obj, short newValue) {
		// TODO Auto-generated method stub
		
	}

	@Override
	public void updateFramPtr(PGM_LibAdder_Ptr s) {
		// TODO Auto-generated method stub
		
	}

// static.
	// classes.
		// create.
	private static void stat_CLASS_create_Framework()
	{
		Framework _framework = new Framework();
		try {
			stat_CLASS_get_Framework();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
		// get.
	private static Pointer stat_CLASS_get_Framework()
	{
		return _framework;
	}
		// set.
	public static Framework_Ptr stat_PTR_get_Framework_Ptr()
	{
		return _framework_Ptr;
	}
	// registers.
		// create.
		// get.
		// set.
}
