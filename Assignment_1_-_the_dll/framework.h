#pragma once

namespace CLIBAdder
{
    class Framework
    {
// public.
    public:
    // constructor.
        Framework();

    // destructor.
        virtual ~Framework();

    // dynamic.
        void initialise(void* obj);
        // create.    
        // get.
        // set.
        class Adder* get_CLASS_Adder();
    // static.
        // create.
        // get.
        // set.

// private.
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
