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
    
    double CLIBAdder::Global::stat_ByteArray_to_Double(unsigned char* java_bytes)
    {
        double cpp_double_value;
        std::memcpy(&cpp_double_value, java_bytes, sizeof(cpp_double_value));
        return cpp_double_value;
    }
    float CLIBAdder::Global::stat_ByteArray_to_Float(unsigned char* java_bytes)
    {
        float cpp_float_value;
        std::memcpy(&cpp_float_value, java_bytes, sizeof(cpp_float_value));
        return cpp_float_value;
    }
    unsigned char* CLIBAdder::Global::stat_Double_to_ByteArray(double doubleValue)
    {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &doubleValue, sizeof(doubleValue));
        return bytes_array;
    }
    unsigned char* CLIBAdder::Global::stat_Float_to_ByteArray(float floatValue)
    {
        unsigned char* bytes_array;
        std::memcpy(&bytes_array, &floatValue, sizeof(floatValue));
        return bytes_array;
    }
    CLIBAdder::Framework* CLIBAdder::Global::stat_obj_getClassOf(void* obj)
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