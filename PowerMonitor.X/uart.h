/* 
 * File:   uart.h
 * Author: jmdecoret
 *
 * Created on May 3, 2016, 2:52 PM
 */

#include "mcc_generated_files/mcc.h"

#ifndef UART_H
#define	UART_H

void UART_Initialize();
void UART_Putc(char data);
void UART_Puts(char *data);

#endif	/* UART_H */

