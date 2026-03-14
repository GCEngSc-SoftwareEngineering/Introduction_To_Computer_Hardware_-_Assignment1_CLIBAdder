package src.CLIBAdder;

import com.sun.jna.Pointer;
import com.sun.jna.Structure;

import src.CLIBAdder.PGM_LibAdder_Ptr;
import src.engine.App;

public class PGM_LibAdder_Ptr extends Structure
{
	private static App _App = null;
	
    public PGM_LibAdder_Ptr(Pointer p) 
    {
        super(p);
        read();
    }

    public PGM_LibAdder_Ptr() 
    {
        super();
    }
    
	public App get_App()
	{
		return stat_get_App();
	}
	
    public static class ByReference extends PGM_LibAdder_Ptr implements Structure.ByReference 
    {
    	
    }
    
    public static class ByValue extends PGM_LibAdder_Ptr implements Structure.ByValue 
    {
    	
    }
    
	private static App stat_get_App()
	{
		return _App;
	}
}
