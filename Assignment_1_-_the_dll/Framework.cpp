#include "pch.h"
#include "Framework.h"

// pointerrs.
	// classes.
	CLIBAdder::Adder* _stat_CLASS_Adder = NULL;
	// registers.

// public.
	// constructor.
	CLIBAdder::Framework::Framework()
	{
		stat_CLASS_create_Adder();
	}

	CLIBAdder::Framework::~Framework()
	{
		delete _stat_CLASS_Adder;
	}

	void CLIBAdder::Framework::initialise(CLIBAdder::Framework* obj)
	{
		obj->get_CLASS_Adder()->dyn_initialise_Input_Subset_parise0_valueA(obj, (float)0.0);
		obj->get_CLASS_Adder()->dyn_initialise_Input_Subset_parise0_valueB(obj, (float)0.0);
		obj->get_CLASS_Adder()->dyn_initialise_Output_Subset_parise0_value(obj, (double)0.0);
	}

	// dynamic
		// crate.
		// get.
	CLIBAdder::Adder* CLIBAdder::Framework::get_CLASS_Adder()
	{
		return stat_CLASS_get_Adder();
	}
		// set.
		// 
// private.
	// static.
		// classes.
			// create.
	void CLIBAdder::Framework::stat_CLASS_create_Adder()
	{
		CLIBAdder::Adder* _stat_CLASS_Adder = new CLIBAdder::Adder();
		while (stat_CLASS_get_Adder() == NULL) {}
	}
			// get.
	CLIBAdder::Adder* CLIBAdder::Framework::stat_CLASS_get_Adder()
	{
		return _stat_CLASS_Adder;
	}
			// set.
		// registers.
			// create.
			// get.
			// set.
