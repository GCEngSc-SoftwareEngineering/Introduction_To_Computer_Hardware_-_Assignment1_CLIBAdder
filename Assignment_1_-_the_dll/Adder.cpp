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
	CLIBAdder::Adder::~Adder()
	{
		delete _ptr_Input_valueA;
		delete _ptr_Input_valueB;
		delete _ptr_Output_value;
	}
		// dynamic
	double CLIBAdder::Adder::do_Add(void* obj)
	{
		double ans = (double)CLIBAdder::Global::obj_getClassOf(obj)->get_CLASS_Adder()->stat_REG_get_Input_Subset_praise0_valueA() + (double)CLIBAdder::Global::obj_getClassOf(obj)->get_CLASS_Adder()->stat_REG_get_Input_Subset_praise0_valueB();
		CLIBAdder::Global::obj_getClassOf(obj)->get_CLASS_Adder()->stat_REG_set_Output_Subset_praise0_value(ans);
		return CLIBAdder::Global::obj_getClassOf(obj)->get_CLASS_Adder()->stat_REG_get_Output_Subset_praise0_value();
	}
	void CLIBAdder::Adder::dyn_initialise_Input_Subset_praise0_valueA(void* obj, float newINITIALISED_value)
	{
		CLIBAdder::Global::obj_getClassOf(obj)->get_CLASS_Adder()->stat_REG_set_Input_Subset_praise0_valueA(newINITIALISED_value);
	}
	void CLIBAdder::Adder::dyn_initialise_Input_Subset_praise0_valueB(void* obj, float newINITIALISED_value)
	{
		CLIBAdder::Global::obj_getClassOf(obj)->get_CLASS_Adder()->stat_REG_set_Input_Subset_praise0_valueB(newINITIALISED_value);
	}
	void CLIBAdder::Adder::dyn_initialise_Output_Subset_praise0_value(void* obj, double newINITIALISED_value)
	{
		CLIBAdder::Global::obj_getClassOf(obj)->get_CLASS_Adder()->stat_REG_set_Output_Subset_praise0_value(newINITIALISED_value);
	}
			// crate.
			// get.
	float CLIBAdder::Adder::dyn_REG_get_Input_Subset_praise0_valueA(void* obj)
	{
		return CLIBAdder::Global::obj_getClassOf(obj)->get_CLASS_Adder()->stat_REG_get_Input_Subset_praise0_valueB();
	}
	float CLIBAdder::Adder::dyn_REG_get_Input_Subset_praise0_valueB(void* obj)
	{
		return CLIBAdder::Global::obj_getClassOf(obj)->get_CLASS_Adder()->stat_REG_get_Input_Subset_praise0_valueB();
	}
			// set.
	void CLIBAdder::Adder::dyn_REG_set_Input_Subset_praise0_valueA(void* obj, float newValue)
	{
		CLIBAdder::Global::obj_getClassOf(obj)->get_CLASS_Adder()->stat_REG_set_Input_Subset_praise0_valueA(newValue);
	}
	void CLIBAdder::Adder::dyn_REG_set_Input_Subset_praise0_valueB(void* obj, float newValue)
	{
		CLIBAdder::Global::obj_getClassOf(obj)->get_CLASS_Adder()->stat_REG_set_Input_Subset_praise0_valueB(newValue);
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
		while (stat_REG_get_Input_Subset_praise0_valueA() == NULL) {}
	}
	void CLIBAdder::Adder::stat_REG_create_ptr_Input_valueB()
	{
		float* _ptr_Input_valueB = new float(FLT_MAX);
		while (stat_REG_get_Input_Subset_praise0_valueB() == NULL) {}
	}
	void CLIBAdder::Adder::stat_REG_create_ptr_Output_value()
	{
		double* _ptr_Output_value = new double(DBL_MAX);
		while (stat_REG_get_Output_Subset_praise0_value() == NULL) {}
	}
			// get.
	float CLIBAdder::Adder::stat_REG_get_Input_Subset_praise0_valueA()
	{
		return *_ptr_Input_valueA;
	}
	float CLIBAdder::Adder::stat_REG_get_Input_Subset_praise0_valueB()
	{
		return *_ptr_Input_valueB;
	}
	double CLIBAdder::Adder::stat_REG_get_Output_Subset_praise0_value()
	{
		return *_ptr_Output_value;
	}
		// set.
	void CLIBAdder::Adder::stat_REG_set_Input_Subset_praise0_valueA(float newValue)
	{
		*_ptr_Input_valueA = newValue;
	}
	void CLIBAdder::Adder::stat_REG_set_Input_Subset_praise0_valueB(float newValue)
	{
		*_ptr_Input_valueB = newValue;
	}
	void CLIBAdder::Adder::stat_REG_set_Output_Subset_praise0_value(double newValue)
	{
		*_ptr_Output_value = newValue;
	}