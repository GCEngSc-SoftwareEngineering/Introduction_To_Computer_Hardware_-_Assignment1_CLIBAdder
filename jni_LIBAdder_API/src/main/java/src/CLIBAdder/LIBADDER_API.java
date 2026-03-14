package src.CLIBAdder;

import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.Pointer;

import src.Main.Framework_Ptr;

public interface LIBADDER_API extends Library
{
	LIBADDER_API INSTANCE = (LIBADDER_API) Native.load("Assignment_1_-_the_dll", LIBADDER_API.class);
	double do_Add(Framework_Ptr obj);
	Pointer generate_Program();
	long get_Output_Subset_praise0_value(PGM_LibAdder_Ptr obj);
	short get_PraiseEventId();
	void set_Input_Subset_praise0_valueA(PGM_LibAdder_Ptr obj, float newFloat);
	void set_Input_Subset_praise0_valueB(PGM_LibAdder_Ptr obj, float newFloat);
	void set_PraiseEventId(PGM_LibAdder_Ptr obj, short newValue);
	void updateFramPtr(PGM_LibAdder_Ptr s);
}