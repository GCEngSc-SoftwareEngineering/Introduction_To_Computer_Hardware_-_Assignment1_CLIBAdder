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
		static double do_Add(class Adder* obj, float valueA, float valueB);
		// crate.
		static void* generate_Program();
		// get.
		static float reg_get_Input_Subset_parise0_valueA(class Adder* obj);
		static float reg_get_Input_Subset_parise0_valueB(class Adder* obj);
		// set.
		static void reg_set_Input_Subset_parise0_valueA(class Adder* obj, float* newValue);
		static void reg_set_Input_Subset_parise0_valueB(class Adder* obj, float* newValue);
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
			// set.
	};
}