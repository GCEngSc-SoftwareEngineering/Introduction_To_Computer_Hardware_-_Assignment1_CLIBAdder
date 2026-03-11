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
		// dynamic
		double do_Add(float valueA, float valueB);
			// crate.
			// get.
		double dyn_REG_get_Input_Subset_parise0_valueA();
		double dyn_REG_get_Input_Subset_parise0_valueB();
			// set.
		void dyn_REG_set_Input_Subset_parise0_valueA(float newValue);
		void dyn_REG_set_Input_Subset_parise0_valueB(float newValue);
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
		static float* stat_REG_get_Input_Subset_parise0_valueA();
		static float* stat_REG_get_Input_Subset_parise0_valueB();
		static double* stat_REG_get_Output_Subset_parise0_value();
		// set.
		static void stat_REG_set_Input_Subset_parise0_valueA(float newValue);
		static void stat_REG_set_Input_Subset_parise0_valueB(float newValue);
		static void stat_REG_set_Output_Subset_parise0_value(double newValue);
	};
}
