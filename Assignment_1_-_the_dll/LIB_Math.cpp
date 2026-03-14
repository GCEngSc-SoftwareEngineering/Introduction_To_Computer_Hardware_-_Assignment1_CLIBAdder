#include "pch.h"
#include "LIB_Math.h"


// pointers.
	// classes.
	CLIBAdder::Framework* _CLASS_framework = NULL;
	// registers.

// public.
	// constructor.

	// dynamic
	double CLIBAdder::LIB_Math::do_Add(void* obj)
	{
		return CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->do_Add(CLIBAdder::Global::stat_obj_getClassOf(obj));
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
	unsigned char* CLIBAdder::LIB_Math::get_Input_Subset_praise0_valueA(void* obj)
	{
		return CLIBAdder::Global::stat_Float_to_ByteArray(CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->dyn_REG_get_Input_Subset_praise0_valueA(CLIBAdder::Global::stat_obj_getClassOf(obj)));
	}
	unsigned char* CLIBAdder::LIB_Math::get_Input_Subset_praise0_valueB(void* obj)
	{
		return CLIBAdder::Global::stat_Float_to_ByteArray(CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->dyn_REG_get_Input_Subset_praise0_valueB(CLIBAdder::Global::stat_obj_getClassOf(obj)));
	}
		// set.
	void CLIBAdder::LIB_Math::set_Input_Subset_praise0_valueA(void* obj, unsigned char* newMangledValue)
	{
		float newfloat = Global::stat_ByteArray_to_Float(newMangledValue);
		CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->dyn_REG_set_Input_Subset_praise0_valueA(CLIBAdder::Global::stat_obj_getClassOf(obj), newfloat);
	}
	void CLIBAdder::LIB_Math::set_Input_Subset_praise0_valueB(void* obj, unsigned char* newMangledValue)
	{
		float newfloat = Global::stat_ByteArray_to_Float(newMangledValue);
		CLIBAdder::Global::stat_obj_getClassOf(obj)->get_CLASS_Adder()->dyn_REG_set_Input_Subset_praise0_valueB(CLIBAdder::Global::stat_obj_getClassOf(obj), newfloat);
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
