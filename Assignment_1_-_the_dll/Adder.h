#pragma once
#include <limits>
namespace CLIBAdder
{
	class Adder
	{
// public.
	public:
	// constructor.
		Adder();

	// destructor.
		~Adder();

	// dynamic
		double do_Add(void* obj);
		// crate.
		// initialise.
		void dyn_initialise_Input_Subset_parise0_valueA(void* obj, float newINITIALISED_value);
		void dyn_initialise_Input_Subset_parise0_valueB(void* obj, float newINITIALISED_value);
		void dyn_initialise_Output_Subset_parise0_value(void* obj, double newINITIALISED_value);
		// get.
		float dyn_REG_get_Input_Subset_parise0_valueA(void* obj);
		float dyn_REG_get_Input_Subset_parise0_valueB(void* obj);
			// set.
		void dyn_REG_set_Input_Subset_parise0_valueA(void* obj, float newValue);
		void dyn_REG_set_Input_Subset_parise0_valueB(void* obj, float newValue);
// private.
	private:
	// static.
		// classes.
		// create.
		// get.
		// set.
	// registers.
		static float* _ptr_Input_valueA;
		static float* _ptr_Input_valueB;
		static double* _ptr_Output_value;
		// create.
		static void stat_REG_create_ptr_Input_valueA();
		static void stat_REG_create_ptr_Input_valueB();
		static void stat_REG_create_ptr_Output_value();
		// get.
		static float stat_REG_get_Input_Subset_parise0_valueA();
		static float stat_REG_get_Input_Subset_parise0_valueB();
		static double stat_REG_get_Output_Subset_parise0_value();
		// set.
		static void stat_REG_set_Input_Subset_parise0_valueA(float newValue);
		static void stat_REG_set_Input_Subset_parise0_valueB(float newValue);
		static void stat_REG_set_Output_Subset_parise0_value(double newValue);
	};
}
