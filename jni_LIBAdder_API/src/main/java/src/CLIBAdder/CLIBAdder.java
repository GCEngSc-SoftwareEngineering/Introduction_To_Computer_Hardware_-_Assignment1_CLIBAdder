package src.CLIBAdder;

import com.sun.jna.Library;
import com.sun.jna.Native;

public interface CLIBAdder extends Library 
{
	CLIBAdder INSTANCE = (CLIBAdder)Native.load("Assignment_1_-_the_dll", CLIBAdder.class);
	
	//Framework_Ptr generate_Program();
}
