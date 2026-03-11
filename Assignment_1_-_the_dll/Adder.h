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
			// crate.
		// get.
		double dyn_REG_get_Input_Subset_parise0_valueA();
		double dyn_REG_get_Input_Subset_parise0_valueB();
		// set.
		void dyn_REG_set_Input_Subset_parise0_valueA(float* newValue);
		void dyn_REG_set_Input_Subset_parise0_valueB(float* newValue);
// private.
	private:
	// static.
		// classes.
		// create.
		static void stat_CLASS_create_Adder();
		// get.
		static Adder* stat_CLASS_get_Adder();
		// set.
	// registers.
		static float* _ptr_Input_valueA;
		static float* _ptr_Input_valueB;
		// create.
		static void stat_REG_create_ptr_Input_valueA();
		static void stat_REG_create_ptr_Input_valueB();
		// get.
		static float* stat_REG_get_Input_Subset_parise0_valueA();
		static float* stat_REG_get_Input_Subset_parise0_valueB();
		// set.
		static void stat_REG_set_Input_Subset_parise0_valueA(float* newValue);
		static void stat_REG_set_Input_Subset_parise0_valueB(float* newValue);
	};
}
