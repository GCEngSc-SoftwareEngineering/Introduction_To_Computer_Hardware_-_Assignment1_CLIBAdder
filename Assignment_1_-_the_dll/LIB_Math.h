#pragma once

#ifdef LIBADDER_EXPORTS
#define LIBADDER_API __declspec(dllexport)
#else
#define LIBADDER_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
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
			static double do_Add(class Framework* obj);
			// crate.
			static void* generate_Program();
			// get.
			static class Adder* get_CLASS_Adder();
			static float get_Input_Subset_parise0_valueA(class Framework* obj);
			static float get_Input_Subset_parise0_valueB(class Framework* obj);
			// set.
			static void set_Input_Subset_parise0_valueA(class Framework* obj, float newValue);
			static void set_Input_Subset_parise0_valueB(class Framework* obj, float newValue);
			// private.
		private:
			// static.
				// classes.
					// create.
			static void stat_CLASS_create_Framework();
			// get.
			static class Framework* stat_CLASS_get_Framework();
			// set.
		// registers.
			// create.
			// get.
			// set.
		};
	}

#ifdef __cplusplus
}
#endif