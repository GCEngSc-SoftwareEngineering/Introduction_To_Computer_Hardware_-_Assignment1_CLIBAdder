#pragma once

#ifdef LIBADDER_EXPORTS
#define LIBADDER_API __declspec(dllexport)
#else
#define LIBADDER_API __declspec(dllimport)
#endif

namespace LIB_Adder
{
	class LIBADDER_API LIB_Adder
	{
	public:
		LIB_Adder();
		static void* dyn_generate_Program();
		static double* dyn_REG_get_Input_Subset_parise0_valueA();
		static double* dyn_REG_get_Input_Subset_parise0_valueB();
		static void dyn_REG_set_Input_Subset_parise0_valueA(double* newValue);
		static void dyn_REG_set_Input_Subset_parise0_valueB(double* newValue);
	private:
	};
}