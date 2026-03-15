#include "pch.h"
#include "LIB_Math.h"


// pointers.
	// classes.
	CLIBAdder::Framework* _CLASS_framework = NULL;
	// registers.

// public.
	// constructor.

	// dynamic
	void CLIBAdder::LIB_Math::do_Add(void* obj)
	{
		CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->do_Add(CLIBAdder::Global::stat_obj_getClassOf(obj));		
	}
		// crate.
	void* CLIBAdder::LIB_Math::generate_Program()
	{
		stat_CLASS_create_Framework();
		stat_CLASS_get_Framework()->initialise(stat_CLASS_get_Framework());
		return (void*)stat_CLASS_get_Framework();
	}
	void initialise(void* obj)
	{
		CLIBAdder::Global::stat_obj_getClassOf(obj)->initialise(obj);
	}

	// get.
	unsigned char* CLIBAdder::LIB_Math::get_Output_Subset_praise0_value(void* obj)
	{
		return CLIBAdder::Global::stat_Double_to_ByteArray(CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->dyn_REG_get_Output_Subset_praise0_value(CLIBAdder::Global::stat_obj_getClassOf(obj)));
	}
		// set.
	void CLIBAdder::LIB_Math::set_Input_Subset_praise0_valueA(void* obj, unsigned char* bytes)
	{
		CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->dyn_REG_set_Input_Subset_praise0_valueA(CLIBAdder::Global::stat_obj_getClassOf(obj), CLIBAdder::Global::stat_ByteArray_to_Float(bytes));
	}
	void CLIBAdder::LIB_Math::set_Input_Subset_praise0_valueB(void* obj, unsigned char* bytes)
	{
		CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->dyn_REG_set_Input_Subset_praise0_valueB(CLIBAdder::Global::stat_obj_getClassOf(obj), CLIBAdder::Global::stat_ByteArray_to_Float(bytes));
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
		_CLASS_framework = new class CLIBAdder::Framework();
		while (stat_CLASS_get_Framework() == NULL) {}
	}
			// get.
	CLIBAdder::Framework* CLIBAdder::LIB_Math::stat_CLASS_get_Framework()
	{
		return _CLASS_framework;
	}
			// set.
