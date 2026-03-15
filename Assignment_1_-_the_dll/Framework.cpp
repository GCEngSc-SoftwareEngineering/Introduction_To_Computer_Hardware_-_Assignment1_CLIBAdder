#include "pch.h"
#include "Framework.h"

// pointerrs.
	// classes.
	CLIBAdder::Adder* _stat_CLASS_Adder = NULL;
	CLIBAdder::Global* _stat_CLASS_Global = NULL;
	// registers.

// public.
	// constructor.
	CLIBAdder::Framework::Framework()
	{
		stat_CLASS_create_Global();
		stat_CLASS_create_Adder();
	}

	CLIBAdder::Framework::~Framework()
	{
		delete _stat_CLASS_Adder;
	}

	void CLIBAdder::Framework::initialise(void* obj)
	{
		CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->dyn_initialise_Input_Subset_praise0_valueA(CLIBAdder::Global::stat_obj_getClassOf(obj), (float)0.0);
		CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->dyn_initialise_Input_Subset_praise0_valueB(CLIBAdder::Global::stat_obj_getClassOf(obj), (float)0.0);
		CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->dyn_initialise_Output_Subset_praise0_value(CLIBAdder::Global::stat_obj_getClassOf(obj), (double)0.0);
	}

	// dynamic
		// crate.
		// get.
	CLIBAdder::Adder* CLIBAdder::Framework::get_CLASS_Adder()
	{
		return stat_CLASS_get_Adder();
	}
		// set.
// private.
	// static.
		// classes.
			// create.
	void CLIBAdder::Framework::stat_CLASS_create_Adder()
	{
		_stat_CLASS_Adder = new CLIBAdder::Adder();
		while (stat_CLASS_get_Adder() == NULL) {}
	}
	void CLIBAdder::Framework::stat_CLASS_create_Global()
	{
		_stat_CLASS_Global = new class CLIBAdder::Global();
		while (stat_CLASS_get_Global() == NULL) {}
	}
			// get.
	CLIBAdder::Adder* CLIBAdder::Framework::stat_CLASS_get_Adder()
	{
		return _stat_CLASS_Adder;
	}
	CLIBAdder::Global* CLIBAdder::Framework::stat_CLASS_get_Global()
	{
		return _stat_CLASS_Global;
	}
			// set.
		// registers.
			// create.
			// get.
			// set.
