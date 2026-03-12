package src.Main;

import src.CLIBAdder.*;
import com.sun.jna.Pointer;

public class Main 
{
	private static Pointer objPGM = null;
	
	public static void main(String[] args) 
	{
		System.out.printf("entered first member function, main().%n");
		LIBADDER_API pgmID_Adder = new LIBADDER_API();
		System.out.printf("==========%n");
		System.out.printf("decliration.%n");
		System.out.printf("definition.%n");
		System.out.printf("substanciation.%n");
		System.out.printf("initialisation.%n");
		System.out.printf("instanciation.%n");
		System.out.printf("running.%n");
		System.out.printf("==========%n");
		System.out.printf("SIMULATION%n");
		Pointer objPGM = pgmID_Adder.generate_Pprogram();
	}
}









