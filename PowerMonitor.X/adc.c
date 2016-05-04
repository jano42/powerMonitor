#include "adc.h"
#include "pin_mapping.h"
#include "global.h"
#include "uart.h"

void ADC_Initialize()
{
    //configure the ADC
    ADCON1bits.PVCFG = 0;//VDD as positive voltage reference
    ADCON1bits.NVCFG = 0; //VSS as negative voltage reference

    ADCON2bits.ADFM = 1; //right justified
    ADCON2bits.ACQT = 0b100; //8 Tad before converting
    ADCON2bits.ADCS = 0b011; //using FRC

    VREFCON0bits.FVR1EN = 1; //enable FVR
    VREFCON0bits.FVR1S0 = 1; //FVR = 1x = 1.024 V
    VREFCON0bits.FVR1S1 = 0;
    while(VREFCON0bits.FVR1ST == 0);
    
    //configure pins as input, analog
    CT1_Input();
    CT1_SetAnalogMode();
    CT2_Input();
    CT2_SetAnalogMode();
    CT3_Input();
    CT3_SetAnalogMode();
    
    //power UP CTPower pin
    CTPOWER_SetHigh();
    
    //turn ADC on
    ADCON0bits.ADON = 1;
    
}

void ADC_Acquire(unsigned char channel, unsigned short * result)
{
    //select channel CT1, ADC ON, go/done at 0
    ADCON0bits.CHS = channel;

    __delay_ms(1);
    
    //start the conversion
    ADCON0bits.GO = 1;
    
    //wait until conversion ends
    while(ADCON0bits.GO == 1);
 
    *result = (ADRESH<<8) + ADRESL;
}

void ADC_AcquireAll(unsigned short * ct1, unsigned short * ct2, unsigned short * ct3)
{
    unsigned short fvr;
    ADC_Acquire(0b1111, &fvr); //FVR
    
    sprintf(buffer, "fvr=%u;", fvr);
    UART_Puts(buffer);
    
    int rssi = (((int)((-0.4049*fvr) + 236.03 + 0.5)) / 5) *5;
    sprintf(buffer, "rssi=%d;", rssi);
    UART_Puts(buffer);
    
    
    
    //ADC_Acquire(CT1_CHANNEL, ct1);
    //ADC_Acquire(CT2_CHANNEL, ct2);
    //ADC_Acquire(CT3_CHANNEL, ct3);
}

