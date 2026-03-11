#include "pch.h"
#include "Adder.h"

// pointers.
	// classes.
	// registers.
	float* CLIBAdder::Adder::_ptr_Input_valueA = NULL;
	float* CLIBAdder::Adder::_ptr_Input_valueB = NULL;
	double* CLIBAdder::Adder::_ptr_Output_value = NULL;

// public.
	// constructor.
	CLIBAdder::Adder::Adder()
	{
		stat_REG_create_ptr_Input_valueA();
		stat_REG_create_ptr_Input_valueB();
		stat_REG_create_ptr_Output_value();
	}
		// dynamic
	double CLIBAdder::Adder::do_Add(float valueA, float valueB)
	{
		stat_REG_set_Output_Subset_parise0_value((double)*stat_REG_get_Input_Subset_parise0_valueA() + (double)*stat_REG_get_Input_Subset_parise0_valueB());
		return *stat_REG_get_Output_Subset_parise0_value();
	}
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
		stat_REG_set_Input_Subset_parise0_valueA(*newValue);
	}
	void CLIBAdder::Adder::dyn_REG_set_Input_Subset_parise0_valueB(float* newValue)
	{
		stat_REG_set_Input_Subset_parise0_valueB(*newValue);
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
		float* _ptr_Input_valueA = new float(FLT_MAX);
		while (stat_REG_get_Input_Subset_parise0_valueA() == NULL) {}
	}
	void CLIBAdder::Adder::stat_REG_create_ptr_Input_valueB()
	{
		float* _ptr_Input_valueB = new float(FLT_MAX);
		while (stat_REG_get_Input_Subset_parise0_valueB() == NULL) {}
	}
	void CLIBAdder::Adder::stat_REG_create_ptr_Output_value()
	{
		double* _ptr_Output_value = new double(DBL_MAX);
		while (stat_REG_get_Output_Subset_parise0_value() == NULL) {}
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
	double* CLIBAdder::Adder::stat_REG_get_Output_Subset_parise0_value()
	{
		return _ptr_Output_value;
	}
		// set.
	void CLIBAdder::Adder::stat_REG_set_Input_Subset_parise0_valueA(float newValue)
	{
		*_ptr_Input_valueA = newValue;
	}
	void CLIBAdder::Adder::stat_REG_set_Input_Subset_parise0_valueB(float newValue)
	{
		*_ptr_Input_valueB = newValue;
	}
	void CLIBAdder::Adder::stat_REG_set_Output_Subset_parise0_value(double newValue)
	{
		*_ptr_Output_value = newValue;
	}