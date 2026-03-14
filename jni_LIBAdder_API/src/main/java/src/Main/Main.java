package src.Main;

import src.CLIBAdder.LIBADDER_API;
import com.sun.jna.Pointer;

public class Main 
{
	private static Pointer objPGM = null;
	
	public static void main(String[] args) 
	{
		System.out.printf("entered first member function, main().%n");
		Pointer objPGM = LIBADDER_API.INSTANCE.generate_Program();
		System.out.printf("==========%n");
		System.out.printf("decliration.%n");
		System.out.printf("definition.%n");
		System.out.printf("substanciation.%n");
		System.out.printf("initialisation.%n");
		System.out.printf("instanciation.%n");
		System.out.printf("running.%n");
		System.out.printf("==========%n");
		System.out.printf("SIMULATION%n");
		
	}
}









