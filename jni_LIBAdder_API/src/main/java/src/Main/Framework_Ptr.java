package src.Main;

import src.engine.App;
import com.sun.jna.Structure;
import com.sun.jna.Pointer;

public class Framework_Ptr extends Structure
{
	private static App _App = null;
	
    public Framework_Ptr(Pointer p) 
    {
        super(p);
        read();
    }

    public Framework_Ptr() 
    {
        super();
    }
    
	public void initalise(Framework_Ptr obj)
	{
		obj.get_App().get_Execute().initalise_Control(obj.get_App().get_Execute());
		obj.get_App().get_Execute().initialise_Programs();
	}

	public App get_App()
	{
		return stat_get_App();
	}
	
    public static class ByReference extends Framework_Ptr implements Structure.ByReference 
    {
    	
    }
    
    public static class ByValue extends Framework_Ptr implements Structure.ByValue 
    {
    	
    }
    
	private static App stat_get_App()
	{
		return _App;
	}
}