#pragma once

namespace CLIBAdder
{
    class Global
    {
// public.
    public:
    // constructor.
        Global();

    // destructor.
        virtual ~Global();

    // dynamic.
        // create.    
        // get.
        // set.
    // static.
        static double stat_ByteArray_to_Double(unsigned char* java_bytes);
        static float stat_ByteArray_to_Float(unsigned char* java_bytes);
        static unsigned char* stat_Double_to_ByteArray(double doubleValue);
        static unsigned char* stat_Float_to_ByteArray(float floatValue);
        static class Framework* stat_obj_getClassOf(void* obj);
        // create.
        // get.
        // set.
    
    private:
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
    };
}

