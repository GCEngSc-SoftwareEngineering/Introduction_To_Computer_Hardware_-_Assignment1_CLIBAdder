package src.engine;

public class App 
{
// classes.

// registers.
	private static Algorithms _Algorithms = null;
	private static Data _Data = null;
	private static Execute _Execute = null;
	private static Global _Global = null;
	
// constructor.
	public App() 
	{
		System.out.printf("entered CONSTRUCTOR App()%n");
		stat_create_Global();
		stat_create_Algorithm();
		stat_create_Data();
		stat_create_Execute();
		System.out.printf("exiting CONSTRUCTOR App()%n");
	}
	
// public.
	// dynamic.
		// get.
	public Algorithms get_Algorithms()
	{
		return stat_get_Algorithms();
	}
	public Data get_Data()
	{
		return stat_get_Data();
	}
	public Execute get_Execute()
	{
		return stat_get_Execute();
	}
	public Global get_Global()
	{
		return stat_get_Global();
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
	private static void stat_create_Algorithm()
	{
		Algorithms _Algorithms = new Algorithms();
		try {
			stat_get_Algorithms();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
	private static void stat_create_Data()
	{
		Data _Data = new Data();
		try {
			stat_get_Data();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
	private static void stat_create_Execute()
	{
		Execute _Execute = new Execute();
		try {
			stat_get_Execute();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
	private static void stat_create_Global()
	{
		Global _Global = new Global();
		try {
			stat_get_Global();
		} 
		catch (NullPointerException e) {
			System.out.printf("NullPointerException.%n");
		}
	}
		// get.
	private static Algorithms stat_get_Algorithms()
	{
		return _Algorithms;
	}
	private static Data stat_get_Data()
	{
		return _Data;
	}
	private static Execute stat_get_Execute()
	{
		return _Execute;
	}
	private static Global stat_get_Global()
	{
		return _Global;
	}
		// set.
}