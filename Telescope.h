#ifndef Telescope_h
#define Telescope_h

#include "Arduino.h"

class Telescope
{
    public:
        Telescope(int pin);
        void punto();
        void linea();
    private:
        int _pin;
};
#endif