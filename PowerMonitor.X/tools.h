/* 
 * File:   tools.h
 * Author: jmdecoret
 *
 * Created on May 3, 2016, 10:56 AM
 */
#include "mcc_generated_files/mcc.h"

#ifndef TOOLS_H
#define	TOOLS_H

/**
 * @Param
    n : the time to wait (100ms multiplier)
 * @Returns
    none
 * @Description
     delay for 100 milliseconds (repeated n times)
 */
void delay_100ms(unsigned char n);

/**
 * @Param
    n : the time to wait (1s multiplier)
 * @Returns
    none
 * @Description
     delay for 1 seconds (repeated n times)
 */
void delay_1s(unsigned char n);

#endif	/* TOOLS_H */

