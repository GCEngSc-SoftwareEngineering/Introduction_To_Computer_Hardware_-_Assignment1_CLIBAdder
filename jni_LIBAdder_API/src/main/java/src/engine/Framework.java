package src.engine;

public class Framework
{
// classes.
	private static App _App = null;
// registers.
	
// constructor.
	public Framework() 
	{
		System.out.printf("entered CONSTRUCTOR Framework()%n");
		stat_create_App();
		System.out.printf("exiting CONSTRUCTOR Framework()%n");
	}
	
// public.
	// dynamic.
	public void initalise(Framework obj)
	{
		obj.get_App().get_Execute().initalise_Control(obj.get_App().get_Execute());
		obj.get_App().get_Execute().initialise_Programs();
	}
		// get.
	public App get_App()
	{
		return stat_get_App();
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
	private static void stat_create_App()
	{
		App _App = new App();
		try {
			stat_get_App();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
		// get.
	private static App stat_get_App()
	{
		return _App;
	}
		// set.
}