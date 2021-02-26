#include "mbed.h"


DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

int main()
{
   myLED = 0;
   myLED2 = 0;
   while (true)
   {
    for (int i = 0; i < 6; ++i) { // light LED3 three times
        myLED2 = !myLED2;
        ThisThread::sleep_for(200ms);
    }
    for (int i = 0; i < 4; ++i) { // light LED1 three times
        myLED = !myLED;
        ThisThread::sleep_for(200ms);
    }
   }
}
