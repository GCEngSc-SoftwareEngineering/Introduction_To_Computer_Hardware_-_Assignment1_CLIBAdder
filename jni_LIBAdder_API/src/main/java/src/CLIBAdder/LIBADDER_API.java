package src.CLIBAdder;

import com.sun.jna.Pointer;

public class LIBADDER_API
{
    static {
        System.loadLibrary("Assignment_1_-_the_dll");
    }
    
	public native static double do_Add(Pointer objFram);
	public native static Pointer generate_Pprogram();
	public native static float get_Input_Subset_praise0_valueA(Pointer objFram);
	public native static float get_Input_Subset_praise0_valueB(Pointer objFram);
	public native static void set_Input_Subset_praise0_valueA(Pointer objFram, float newValue);
	public native static void set_Input_Subset_praise0_valueB(Pointer objFram, float newValue);
}
