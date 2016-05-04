#include "rf68w.h"
#include "pin_mapping.h"

void rf68w_powerup()
{
    //reset
    RF69W_RESET_SetDigitalOutput();
    RF69W_RESET_SetHigh();
    
    //ensure rf68w is reset
    __delay_ms(5);
    
    //setup RF68W to use "Power&Go" mode 2
    //  -> 433.92 MHz
    //  -> OOK
    //  -> +10dBm
    RF69W_CTRL_SetDigitalOutput();
    RF69W_CTRL_SetHigh();

    //release reset
    RF69W_RESET_SetLow();
    
    //ensure ctrl is hold 1 for 200us + TS_FOSC
    //TS_FOSC is oscillator startup time
    __delay_us(200);
    __delay_us(100);
}
