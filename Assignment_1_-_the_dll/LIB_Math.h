#pragma once

#ifdef LIBADDER_EXPORTS
#define LIBADDER_API __declspec(dllexport)
#else
#define LIBADDER_API __declspec(dllimport)
#endif
#include <string>
extern "C" 
{
	namespace CLIBAdder
	{
		class LIBADDER_API LIB_Math
		{
// public.
		public:
	// constructor.
			LIB_Math();
	// dynamic
			static double do_Add(void* obj);
		// crate.
			static void* generate_Program();
			static void initialise(void* obj);
		// get.
			static class Adder* get_CLASS_Adder();
			static unsigned char* get_Input_Subset_praise0_valueA(void* obj);
			static unsigned char* get_Input_Subset_praise0_valueB(void* obj);
		// set.
			static void set_Input_Subset_praise0_valueA(void* obj, unsigned char* newMangledValue);
			static void set_Input_Subset_praise0_valueB(void* obj, unsigned char* newMAngledValue);
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
}