#include "tools.h"

void delay_100ms(unsigned char n) 
{ 
    while (n-- != 0) { 
        __delay_ms(100); 
    } 
}

void delay_1s(unsigned char secondCount)
{
    while (secondCount-- != 0) { 
        delay_100ms(10); 
    } 
}