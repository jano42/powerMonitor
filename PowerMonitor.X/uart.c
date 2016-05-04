#include <pic18f14k22.h>

#include "uart.h"
#include "pin_mapping.h"

void UART_Initialize()
{
    //SYNC = 0, BRGH = 1, BRG16 = 0,   SPBRG = 25
    SPBRG = 25;
    SPBRGH = 0;
    
    TXSTAbits.SYNC = 0;
    RCSTAbits.SPEN = 1;
    
    TXSTAbits.BRGH = 1;
    TXSTAbits.TX9 = 0;
    TXSTAbits.SENDB = 0;
    
    BAUDCONbits.BRG16 = 0;
    
    TXSTAbits.TXEN = 1;
}

void UART_Putc( char data)
{
    while(TXSTAbits.TRMT == 0);
    TXREG = data;
}

void UART_Puts( char *data)
{
  do
  {  // Transmit a byte
    UART_Putc(*data);
  } while( *data++ );
}