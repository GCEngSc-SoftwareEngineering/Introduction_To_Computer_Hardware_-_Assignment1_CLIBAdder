#include "pch.h"
#include "LIB_Math.h"

// pointers.
	// classes.
	CLIBAdder::Framework* _CLASS_framework = NULL;
	// registers.

// public.
	// constructor.
	CLIBAdder::LIB_Math::LIB_Math()
	{
	}
	// dynamic
	double CLIBAdder::LIB_Math::do_Add(CLIBAdder::Framework* obj)
	{
		return obj->get_CLASS_Adder()->do_Add(obj);
	}
		// crate.
	void* CLIBAdder::LIB_Math::generate_Program()
	{
		stat_CLASS_create_Framework();
		stat_CLASS_get_Framework()->initialise(stat_CLASS_get_Framework());
		return (void*)stat_CLASS_get_Framework();
	}
	// get.
	float CLIBAdder::LIB_Math::get_Input_Subset_parise0_valueA(CLIBAdder::Framework* obj)
	{
		return obj->get_CLASS_Adder()->dyn_REG_get_Input_Subset_parise0_valueA(obj);
	}
	float CLIBAdder::LIB_Math::get_Input_Subset_parise0_valueB(CLIBAdder::Framework* obj)
	{
		return obj->get_CLASS_Adder()->dyn_REG_get_Input_Subset_parise0_valueB(obj);
	}
		// set.
	void CLIBAdder::LIB_Math::set_Input_Subset_parise0_valueA(CLIBAdder::Framework* obj, float newValue)
	{
		obj->get_CLASS_Adder()->dyn_REG_set_Input_Subset_parise0_valueA(obj, newValue);
	}
	void CLIBAdder::LIB_Math::set_Input_Subset_parise0_valueB(CLIBAdder::Framework* obj, float newValue)
	{
		obj->get_CLASS_Adder()->dyn_REG_set_Input_Subset_parise0_valueB(obj, newValue);
	}


// private.
	// static.
		// classes.
			// create.
			// get.
			// set.
		// registers.
			// create.
	void CLIBAdder::LIB_Math::stat_CLASS_create_Framework()
	{
		CLIBAdder::Framework* _CLASS_framework = new class CLIBAdder::Framework();
		while (stat_CLASS_get_Framework() == NULL) {}
	}
			// get.
	CLIBAdder::Framework* CLIBAdder::LIB_Math::stat_CLASS_get_Framework()
	{
		return _CLASS_framework;
	}
			// set.
