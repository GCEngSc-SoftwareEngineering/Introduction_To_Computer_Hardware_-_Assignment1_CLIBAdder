#include "pch.h"
#include "Global.h"
// public.

    // constructor.
    CLIBAdder::Global::Global()
    {

    }

    // destructor.
    CLIBAdder::Global::~Global()
    {

    }

    // dynamic.
    CLIBAdder::Framework* CLIBAdder::Global::obj_getClassOf(void* obj)
    {
        CLIBAdder::Framework* ojbFram = reinterpret_cast<CLIBAdder::Framework*>(obj);
        return ojbFram;
    }
        // create.    
        // get.
        // set.
        // static.
            // create.
            // get.
            // set.

// private.
    // static.

    // classes.
        // create.
        // get.
        // set.
    // registers.
        // create.
        // get.
        // set.