#pragma once

#ifdef LIBADDER_EXPORTS
#define LIBADDER_API __declspec(dllexport)
#else
#define LIBADDER_API __declspec(dllimport)
#endif

namespace CLIBAdder
{
	class LIBADDER_API LIB_Math
	{
// public.
	public:
	// constructor.
		LIB_Math();
	// dynamic
		// crate.
		static void* generate_Program();
		// get.
		static double* reg_get_Input_Subset_parise0_valueA();
		static double* reg_get_Input_Subset_parise0_valueB();
		// set.
		static void reg_set_Input_Subset_parise0_valueA(double* newValue);
		static void reg_set_Input_Subset_parise0_valueB(double* newValue);
// private.
	private:
	// static.
		// classes.
			// create.
		static void stat_CLASS_create_Adder();
			// get.
   		static class Adder* stat_CLASS_get_Adder();
			// set.
		// registers.
			// create.
			// get.
		static double* stat_REG_get_Input_Subset_parise0_valueA();
		static double* stat_REG_get_Input_Subset_parise0_valueB();
			// set.
		static void stat_REG_set_Input_Subset_parise0_valueA(double* newValue);
		static void stat_REG_set_Input_Subset_parise0_valueB(double* newValue);
	};
}