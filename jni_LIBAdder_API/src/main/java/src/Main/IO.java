package src.Main;

import com.sun.jna.Pointer;

import src.CLIBAdder.CLIBAdder;
import src.CLIBAdder.PGM_LibAdder_Ptr;
import src.engine.Global;

public class IO 
{
// classes.
	public static Pointer _framework = null;
	
// registers.

// pointers.
	public static PGM_LibAdder_Ptr _PGM_LibAdder_Ptr = null;
		
// constructor.

// public.
	// dynamic.
	public static PGM_LibAdder_Ptr generate_Program()
	{
		System.out.printf("entered dll.IO generate_Program().%n");
		Pointer _framework = CLIBAdder.INSTANCE.generate_Program();
		try {
			stat_get_Framework();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
		
		PGM_LibAdder_Ptr _PGM_LibAdder_Ptr = new PGM_LibAdder_Ptr(_framework);
		while(stat_get_PGM_LibAdder_Ptr() == null) { }//high level hardware.
		/*
		try {
			stat_get_PGM_LibAdder_Ptr();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}//high level software.
		 */
		System.out.printf("exiting dll.IO generate_Program().%n");
		return stat_get_PGM_LibAdder_Ptr();
	}
		// get.
		// set.
// Praise Event Id
	public static short get_PraiseEventId(PGM_LibAdder_Ptr obj) 
	{
		return 0;//CLIBAdder.INSTANCE.get_PraiseEventId(obj);
	}
	public static void set_PraiseEventId(PGM_LibAdder_Ptr obj, short newPraiseID)
	{
		//CLIBAdder.INSTANCE.set_PraiseEventId(obj, newPraiseID);
	}
// Praise_0.
	public static void set_Input_Subset_praise0_REG_valueA(PGM_LibAdder_Ptr obj, String valueMangle)
	{
		byte[] bytes = valueMangle.getBytes();
		CLIBAdder.INSTANCE.set_Input_Subset_praise0_valueA(obj, Global.bytesToFloat(bytes));
	}
	public static void set_Input_Subset_praise0_REG_valueB(PGM_LibAdder_Ptr obj, String valueMangle)
	{
		byte[] bytes = valueMangle.getBytes();
		CLIBAdder.INSTANCE.set_Input_Subset_praise0_valueB(obj, Global.bytesToFloat(bytes));
	}
	public static float get_Output_Subset_praise0_REG_value(PGM_LibAdder_Ptr obj)
	{
		return CLIBAdder.INSTANCE.get_Output_Subset_praise0_value(obj);
	}
// private.
	// dynamic.
		// create.
		// get.
		// set.
	// static.
		// create.
		// get.
	private static Pointer stat_get_Framework()
	{
		return _framework;
	}
	public static PGM_LibAdder_Ptr stat_get_PGM_LibAdder_Ptr()
	{
		return _PGM_LibAdder_Ptr;
	}
		// set.
}