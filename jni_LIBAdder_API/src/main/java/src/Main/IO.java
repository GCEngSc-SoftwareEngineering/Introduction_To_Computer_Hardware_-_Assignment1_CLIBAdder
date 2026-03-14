package src.Main;

import com.sun.jna.Pointer;

import src.CLIBAdder.CLIBAdder;

public class IO 
{
// classes.
	public static Pointer _framework = null;
	
// registers.

// pointers.
	public static Framework_Ptr _framework_Ptr = null;
		
// constructor.

// public.
	// dynamic.
	public static Framework_Ptr generate_Program()
	{
		System.out.printf("entered dll.IO generate_Program().%n");
		Pointer _framework = CLIBAdder.INSTANCE.generate_Program();
		try {
			stat_get_Framework();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
		
		Framework_Ptr _framework_Ptr = new Framework_Ptr(_framework);
		while(stat_get_Framework_Ptr() == null) { }//high level hardware.
		/*
		try {
			stat_get_Framework_Ptr();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}//high level software.
		 */
		System.out.printf("exiting dll.IO generate_Program().%n");
		return stat_get_Framework_Ptr();
	}
		// get.
		// set.
// Praise Event Id
	public static short get_PraiseEventId(Pointer obj) 
	{
		return 0;//CLIBAdder.INSTANCE.get_PraiseEventId(obj);
	}
	public static void set_PraiseEventId(Pointer obj, short newPraiseID)
	{
		//CLIBAdder.INSTANCE.set_PraiseEventId(obj, newPraiseID);
	}
// Praise_0.
	public static void set_Input_Subset_praise0_REG_valueA(Framework_Ptr obj, int signedInt)
	{
		//long unsignedLong = signedInt & 0xFFFFFFFFL;//high level hardware
		long unsignedLong = Integer.toUnsignedLong(signedInt);//high level software
		CLIBAdder.INSTANCE.set_Input_Subset_praise0_valueA(obj, unsignedLong);
	}
	public static void set_Input_Subset_praise0_REG_valueB(Framework_Ptr obj, int signedInt)
	{
		//long unsignedLong = signedInt & 0xFFFFFFFFL;//high level hardware
		long unsignedLong = Integer.toUnsignedLong(signedInt);//high level software
		CLIBAdder.INSTANCE.set_Input_Subset_praise0_valueA(obj, unsignedLong);
	}
	public static float get_Output_Subset_praise0_REG_value(Framework_Ptr obj)
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
	public static Framework_Ptr stat_get_Framework_Ptr()
	{
		return _framework_Ptr;
	}
		// set.
}