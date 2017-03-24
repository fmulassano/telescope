#include "Arduino.h"
#include "Telescope.h"

Telescope::Telescope(int pin)
{
    pinMode(pin, OUTPUT);
    _pin = pin;
}

void Telescope::punto()
{
    digitalWrite(_pin,HIGH);
    delay(250);
    digitalWrite(_pin,LOW);
    delay(250);
}

void Telescope::linea()
{
    digitalWrite(_pin,HIGH);
    delay(1000);
    digitalWrite(_pin,LOW);
    delay(250);
}