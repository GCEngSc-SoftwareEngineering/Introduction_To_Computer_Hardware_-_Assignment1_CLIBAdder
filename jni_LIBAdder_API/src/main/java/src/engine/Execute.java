package src.engine;

import com.sun.jna.Pointer;

import src.CLIBAdder.LIBADDER_API;
import src.Main.Framework_Ptr;

public class Execute 
{
// classes.
	private static Execute_Control _CLASS_Execute_Control = null;
// registers.

// programs.
	private static Pointer _PGM_CLIBConcurrentServerIO = null;
	
// constructor.
	public Execute()
	{
		System.out.printf("entered CLASS Execute()%n");
		
		System.out.printf("exiting CLASS Execute()%n");
	}
	
// public.
	// dynamic.
	public void initalise_Control(Execute obj)
	{
		stat_CLASS_create_Execute_Control();
	}
	public void initialise_Programs()
	{
		System.out.printf("entered initialise_Programs().%n");
		stat_PGM_create_CLIBConcurrentServerIO();
		System.out.printf("exiting initialise_Programs().%n");
	}
		// get.
	public Execute_Control class_get_Execute_Control()
	{
		return stat_CLASS_get_Execute_Control();
	}
	public Pointer pgm_get_CLIBConcurrentServerIO()
	{
		return stat_PGM_get_CLIBConcurrentServerIO();
	}
		// set.
	// static.
		// get.
		// set.

//private.
	// dynamic.
		// create.
	    // get.
	    // set.
	// static.
		// classes.
			// create.
	private static void stat_CLASS_create_Execute_Control()
	{
		Execute_Control _Execute_Control = new Execute_Control();
		try {
			stat_CLASS_get_Execute_Control();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
			// get.
			// set.
		// registers.
			// create.
	private static void stat_PGM_create_CLIBConcurrentServerIO()
	{
		Pointer _PGM_CLIBConcurrentServerIO = LIBADDER_API.INSTANCE.generate_Program();
		Framework_Ptr _objFram = new Framework_Ptr(_PGM_CLIBConcurrentServerIO);
		try {
			stat_PGM_get_CLIBConcurrentServerIO();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
		try {
			//_objFram.initalise(stat_PGM_get_CLIBConcurrentServerIO());
		} 
		catch (NullPointerException e) {
			System.out.printf("wait for constructor(s) under top level.%n");
		}
	}
			// get.
	private static Execute_Control stat_CLASS_get_Execute_Control()
	{
		return _CLASS_Execute_Control;
	}
	private static Pointer stat_PGM_get_CLIBConcurrentServerIO()
	{
		return _PGM_CLIBConcurrentServerIO;
	}
			// set.
}