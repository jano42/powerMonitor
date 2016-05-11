#include "adc.h"
#include "mcc_generated_files/mcc.h"
#include "pin_mapping.h"
#include "global.h"
#include "uart.h"
#include "math.h"


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

void ADC_SetChannel(unsigned char channel)
{
    //select channel
    ADCON0bits.CHS = channel;

    __delay_ms(1);
}

short ADC_AcquireRaw()
{
    //start the conversion
    ADCON0bits.GO = 1;
    
    //wait until conversion ends
    while(ADCON0bits.GO == 1);
 
    return (ADRESH<<8) + ADRESL;
}

short ADC_Acquire_FVR()
{
    ADC_SetChannel(0b1111);
    return ADC_AcquireRaw();
}

double ADC_Acquire_CT_100(unsigned char channel, int n)
{
    int raw;
    unsigned long sumP2 = 0;

    ADC_SetChannel(channel);
    for(int i=0; i<n; ++i)
    {
        raw = ADC_AcquireRaw() - 512;
        sumP2 += raw*raw;
        __delay_us(100);
    }
    
    double meanCt3P2 = (double)sumP2 / (double)n;
    return sqrt(meanCt3P2);

}

double ADC_Adjust(double adcValue, double fvr)
{
        //adjust CT to VCC using FVR value

    return adcValue * 1.024 / fvr;
}

void ADC_AcquireAll(double *fvr, double * fct1, double * fct2, double * fct3)
{
    //acquire and display FVR
    *fvr = (double)ADC_Acquire_FVR();
    
    double adcValue = ADC_Acquire_CT_100(CT3_CHANNEL, 200);
    
    //acquire and display CT3
    //*fct1 = ADC_Adjust(adcValue, *fvr);
    //*fct2 = ADC_Adjust(ADC_Acquire_CT_100(CT2_CHANNEL, 200), *fvr);
    *fct3 = ADC_Adjust(adcValue, *fvr);
    
    sprintf(buffer, "fvr=%.0f adcValue=%f", *fvr, adcValue);
    UART_Puts(buffer);
}

