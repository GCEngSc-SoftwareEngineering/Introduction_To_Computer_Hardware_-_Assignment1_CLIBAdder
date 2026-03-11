#include "pch.h"
#include "Adder.h"

// pointers.
	// classes.
	CLIBAdder::Adder* _stat_CLASS_Adder = NULL;
	// registers.
	float* CLIBAdder::Adder::_ptr_Input_valueA = NULL;
	float* CLIBAdder::Adder::_ptr_Input_valueB = NULL;

// public.
	// constructor.
	CLIBAdder::Adder::Adder()
	{
		stat_CLASS_create_Adder();
	}
		// dynamic
			// crate.
			// get.
	double CLIBAdder::Adder::dyn_REG_get_Input_Subset_parise0_valueA()
	{
		return *stat_REG_get_Input_Subset_parise0_valueB();
	}
	double CLIBAdder::Adder::dyn_REG_get_Input_Subset_parise0_valueB()
	{
		return *stat_REG_get_Input_Subset_parise0_valueB();
	}
			// set.
	void CLIBAdder::Adder::dyn_REG_set_Input_Subset_parise0_valueA(float* newValue)
	{
		stat_REG_set_Input_Subset_parise0_valueA(newValue);
	}
	void CLIBAdder::Adder::dyn_REG_set_Input_Subset_parise0_valueB(float* newValue)
	{
		stat_REG_set_Input_Subset_parise0_valueB(newValue);
	}
// private.
	// static.
		// classes.
			// create.
			// get.
			// set.
		// registers.
			// create.
	void CLIBAdder::Adder::stat_REG_create_ptr_Input_valueA()
	{
		float* CLIBAdder::Adder::_ptr_Input_valueA = new float(FLT_MAX);
		while (stat_REG_get_Input_Subset_parise0_valueA() == NULL) {}
	}
	void CLIBAdder::Adder::stat_REG_create_ptr_Input_valueB()
	{
		float* CLIBAdder::Adder::_ptr_Input_valueB = new float(FLT_MAX);
		while (stat_REG_get_Input_Subset_parise0_valueB() == NULL) {}
	}
			// get.
	float* CLIBAdder::Adder::stat_REG_get_Input_Subset_parise0_valueA()
	{
		return _ptr_Input_valueA;
	}
	float* CLIBAdder::Adder::stat_REG_get_Input_Subset_parise0_valueB()
	{
		return _ptr_Input_valueB;
	}
		// set.
	void CLIBAdder::Adder::stat_REG_set_Input_Subset_parise0_valueA(float* newValue)
	{
		*_ptr_Input_valueA = *newValue;
	}
	void CLIBAdder::Adder::stat_REG_set_Input_Subset_parise0_valueB(float* newValue)
	{
		*_ptr_Input_valueB = *newValue;
	}