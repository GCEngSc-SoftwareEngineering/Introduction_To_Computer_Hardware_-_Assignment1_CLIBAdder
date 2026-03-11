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

	}
	// dynamic
		// crate.
	void* CLIBAdder::LIB_Math::generate_Program()
	{
		stat_CLASS_create_Adder();
		return nullptr;
	}

		// get.
	double* CLIBAdder::LIB_Math::reg_get_Input_Subset_parise0_valueA()
	{
		return stat_REG_get_Input_Subset_parise0_valueB();
	}

	double* CLIBAdder::LIB_Math::reg_get_Input_Subset_parise0_valueB()
	{
		return stat_REG_get_Input_Subset_parise0_valueB();
	}
		// set.
	void CLIBAdder::LIB_Math::reg_set_Input_Subset_parise0_valueA(double* newValue)
	{
		stat_REG_set_Input_Subset_parise0_valueA(newValue);
	}

	void CLIBAdder::LIB_Math::reg_set_Input_Subset_parise0_valueB(double* newValue)
	{
		stat_REG_set_Input_Subset_parise0_valueB(newValue);
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
	double* CLIBAdder::LIB_Math::stat_REG_get_Input_Subset_parise0_valueA()
	{
		return;
	}
	double* CLIBAdder::LIB_Math::stat_REG_get_Input_Subset_parise0_valueB()
	{
		return;
	}
			// set.
	void CLIBAdder::LIB_Math::stat_REG_set_Input_Subset_parise0_valueA(double* newValue)
	{

	}
	void CLIBAdder::LIB_Math::stat_REG_set_Input_Subset_parise0_valueB(double* newValue)
	{

	}