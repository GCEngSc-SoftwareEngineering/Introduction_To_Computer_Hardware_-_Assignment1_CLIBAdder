#include "pch.h"
#include "LIB_Math.h"

// pointers.
	// classes.
	CLIBAdder::Adder* _stat_CLASS_Adder = NULL;
	// registers.

// public.
	// constructor.
	CLIBAdder::LIB_Math::LIB_Math()
	{
		stat_CLASS_create_Adder();
	}
	// dynamic
	double CLIBAdder::LIB_Math::do_Add(CLIBAdder::Adder* obj)
	{
		return obj->do_Add();
	}
		// crate.
	void* CLIBAdder::LIB_Math::generate_Program()
	{
		stat_CLASS_create_Adder();
		return (void*)stat_CLASS_get_Adder();
	}
		// get.
	float CLIBAdder::LIB_Math::get_Input_Subset_parise0_valueA(CLIBAdder::Adder* obj)
	{
		return obj->dyn_REG_get_Input_Subset_parise0_valueA();
	}
	float CLIBAdder::LIB_Math::get_Input_Subset_parise0_valueB(CLIBAdder::Adder* obj)
	{
		return obj->dyn_REG_get_Input_Subset_parise0_valueB();
	}
		// set.
	void CLIBAdder::LIB_Math::set_Input_Subset_parise0_valueA(CLIBAdder::Adder* obj, float newValue)
	{
		obj->dyn_REG_set_Input_Subset_parise0_valueA(newValue);
	}
	void CLIBAdder::LIB_Math::set_Input_Subset_parise0_valueB(CLIBAdder::Adder* obj, float newValue)
	{
		obj->dyn_REG_set_Input_Subset_parise0_valueB(newValue);
	}
// private.
	// static.
		// classes.
			// create.
	void CLIBAdder::LIB_Math::stat_CLASS_create_Adder()
	{
		Adder* _stat_CLASS_Adder = new Adder();
		while (stat_CLASS_get_Adder() == NULL) {}
	}
			// get.
	CLIBAdder::Adder* CLIBAdder::LIB_Math::stat_CLASS_get_Adder()
	{
		return _stat_CLASS_Adder;
	}
			// set.
		// registers.
			// create.
			// get.
			// set.
