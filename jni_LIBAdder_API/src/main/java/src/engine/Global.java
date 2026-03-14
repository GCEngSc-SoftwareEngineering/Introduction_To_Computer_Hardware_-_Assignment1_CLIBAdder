package src.engine;

public class Global
{
// definitions.
	
// classes.

// registers.
	private static char _numberOfCores;
	private static char _numberOfPraises;
	
// constructor.
	public Global() 
	{
		System.out.printf("entering Global()%n");
		stat_REG_create_numberOfCores();
		stat_REG_create_numberOfPraises();
		System.out.printf("exiting Global()%n");
	}
	
// public.
	// dynamic.
		// get.
	private static char dyn_REG_get_numberOfCores()
	{
		return stat_REG_get_numberOfCores();
		
	}
	private static char dyn_REG_get_numberOfPraises()
	{
		return stat_REG_get_numberOfPraises();
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
	private static void stat_REG_create_numberOfCores()
	{
		System.out.printf("entering member function stat_REG_create_numberOfCores()%n");
		char _numberOfCores = 4;
	}
	private static void stat_REG_create_numberOfPraises()
	{
		System.out.printf("entering member function stat_REG_create_numberOfPraises()%n");
		char _numberOfPraises = 1;
	}
			// get.
	private static char stat_REG_get_numberOfCores() 
	{
		return _numberOfCores;
	}
	private static char stat_REG_get_numberOfPraises()
	{
		return _numberOfPraises;
	}
			// set.
		// registers.
			// create.
			// get.
			// set.	
}