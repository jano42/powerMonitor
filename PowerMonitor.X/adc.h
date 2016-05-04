/* 
 * File:   adc.h
 * Author: jmdecoret
 *
 * Created on May 3, 2016, 1:14 PM
 */

#include "mcc_generated_files/mcc.h"

#ifndef ADC_H
#define	ADC_H

void ADC_Initialize();

void ADC_AcquireAll(unsigned short * ct1, unsigned short * ct2, unsigned short * ct3);


#endif	/* ADC_H */

