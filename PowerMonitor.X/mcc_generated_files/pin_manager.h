/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - v3.00
        Device            :  PIC18F14K22
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA0 aliases
#define IO_RA0_TRIS               TRISA0
#define IO_RA0_LAT                LATA0
#define IO_RA0_PORT               RA0
#define IO_RA0_WPU                WPUA0
#define IO_RA0_ANS                ANS0
#define IO_RA0_SetHigh()    do { LATA0 = 1; } while(0)
#define IO_RA0_SetLow()   do { LATA0 = 0; } while(0)
#define IO_RA0_Toggle()   do { LATA0 = ~LATA0; } while(0)
#define IO_RA0_GetValue()         RA0
#define IO_RA0_SetDigitalInput()    do { TRISA0 = 1; } while(0)
#define IO_RA0_SetDigitalOutput()   do { TRISA0 = 0; } while(0)

#define IO_RA0_SetPullup()    do { WPUA0 = 1; } while(0)
#define IO_RA0_ResetPullup()   do { WPUA0 = 0; } while(0)
#define IO_RA0_SetAnalogMode()   do { ANS0 = 1; } while(0)
#define IO_RA0_SetDigitalMode()   do { ANS0 = 0; } while(0)


// get/set IO_RA1 aliases
#define IO_RA1_TRIS               TRISA1
#define IO_RA1_LAT                LATA1
#define IO_RA1_PORT               RA1
#define IO_RA1_WPU                WPUA1
#define IO_RA1_ANS                ANS1
#define IO_RA1_SetHigh()    do { LATA1 = 1; } while(0)
#define IO_RA1_SetLow()   do { LATA1 = 0; } while(0)
#define IO_RA1_Toggle()   do { LATA1 = ~LATA1; } while(0)
#define IO_RA1_GetValue()         RA1
#define IO_RA1_SetDigitalInput()    do { TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISA1 = 0; } while(0)

#define IO_RA1_SetPullup()    do { WPUA1 = 1; } while(0)
#define IO_RA1_ResetPullup()   do { WPUA1 = 0; } while(0)
#define IO_RA1_SetAnalogMode()   do { ANS1 = 1; } while(0)
#define IO_RA1_SetDigitalMode()   do { ANS1 = 0; } while(0)


// get/set IO_RA2 aliases
#define IO_RA2_TRIS               TRISA2
#define IO_RA2_LAT                LATA2
#define IO_RA2_PORT               RA2
#define IO_RA2_WPU                WPUA2
#define IO_RA2_ANS                ANS2
#define IO_RA2_SetHigh()    do { LATA2 = 1; } while(0)
#define IO_RA2_SetLow()   do { LATA2 = 0; } while(0)
#define IO_RA2_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define IO_RA2_GetValue()         RA2
#define IO_RA2_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define IO_RA2_SetPullup()    do { WPUA2 = 1; } while(0)
#define IO_RA2_ResetPullup()   do { WPUA2 = 0; } while(0)
#define IO_RA2_SetAnalogMode()   do { ANS2 = 1; } while(0)
#define IO_RA2_SetDigitalMode()   do { ANS2 = 0; } while(0)


// get/set IO_RA3 aliases
#define IO_RA3_PORT               RA3
#define IO_RA3_WPU                WPUA3
#define IO_RA3_GetValue()         RA3

#define IO_RA3_SetPullup()    do { WPUA3 = 1; } while(0)
#define IO_RA3_ResetPullup()   do { WPUA3 = 0; } while(0)


// get/set IO_RA4 aliases
#define IO_RA4_TRIS               TRISA4
#define IO_RA4_LAT                LATA4
#define IO_RA4_PORT               RA4
#define IO_RA4_WPU                WPUA4
#define IO_RA4_ANS                ANS3
#define IO_RA4_SetHigh()    do { LATA4 = 1; } while(0)
#define IO_RA4_SetLow()   do { LATA4 = 0; } while(0)
#define IO_RA4_Toggle()   do { LATA4 = ~LATA4; } while(0)
#define IO_RA4_GetValue()         RA4
#define IO_RA4_SetDigitalInput()    do { TRISA4 = 1; } while(0)
#define IO_RA4_SetDigitalOutput()   do { TRISA4 = 0; } while(0)

#define IO_RA4_SetPullup()    do { WPUA4 = 1; } while(0)
#define IO_RA4_ResetPullup()   do { WPUA4 = 0; } while(0)
#define IO_RA4_SetAnalogMode()   do { ANS3 = 1; } while(0)
#define IO_RA4_SetDigitalMode()   do { ANS3 = 0; } while(0)


// get/set IO_RA5 aliases
#define IO_RA5_TRIS               TRISA5
#define IO_RA5_LAT                LATA5
#define IO_RA5_PORT               RA5
#define IO_RA5_WPU                WPUA5
#define IO_RA5_SetHigh()    do { LATA5 = 1; } while(0)
#define IO_RA5_SetLow()   do { LATA5 = 0; } while(0)
#define IO_RA5_Toggle()   do { LATA5 = ~LATA5; } while(0)
#define IO_RA5_GetValue()         RA5
#define IO_RA5_SetDigitalInput()    do { TRISA5 = 1; } while(0)
#define IO_RA5_SetDigitalOutput()   do { TRISA5 = 0; } while(0)

#define IO_RA5_SetPullup()    do { WPUA5 = 1; } while(0)
#define IO_RA5_ResetPullup()   do { WPUA5 = 0; } while(0)


// get/set IO_RB4 aliases
#define IO_RB4_TRIS               TRISB4
#define IO_RB4_LAT                LATB4
#define IO_RB4_PORT               RB4
#define IO_RB4_WPU                WPUB4
#define IO_RB4_ANS                ANS10
#define IO_RB4_SetHigh()    do { LATB4 = 1; } while(0)
#define IO_RB4_SetLow()   do { LATB4 = 0; } while(0)
#define IO_RB4_Toggle()   do { LATB4 = ~LATB4; } while(0)
#define IO_RB4_GetValue()         RB4
#define IO_RB4_SetDigitalInput()    do { TRISB4 = 1; } while(0)
#define IO_RB4_SetDigitalOutput()   do { TRISB4 = 0; } while(0)

#define IO_RB4_SetPullup()    do { WPUB4 = 1; } while(0)
#define IO_RB4_ResetPullup()   do { WPUB4 = 0; } while(0)
#define IO_RB4_SetAnalogMode()   do { ANS10 = 1; } while(0)
#define IO_RB4_SetDigitalMode()   do { ANS10 = 0; } while(0)


// get/set IO_RB5 aliases
#define IO_RB5_TRIS               TRISB5
#define IO_RB5_LAT                LATB5
#define IO_RB5_PORT               RB5
#define IO_RB5_WPU                WPUB5
#define IO_RB5_ANS                ANS11
#define IO_RB5_SetHigh()    do { LATB5 = 1; } while(0)
#define IO_RB5_SetLow()   do { LATB5 = 0; } while(0)
#define IO_RB5_Toggle()   do { LATB5 = ~LATB5; } while(0)
#define IO_RB5_GetValue()         RB5
#define IO_RB5_SetDigitalInput()    do { TRISB5 = 1; } while(0)
#define IO_RB5_SetDigitalOutput()   do { TRISB5 = 0; } while(0)

#define IO_RB5_SetPullup()    do { WPUB5 = 1; } while(0)
#define IO_RB5_ResetPullup()   do { WPUB5 = 0; } while(0)
#define IO_RB5_SetAnalogMode()   do { ANS11 = 1; } while(0)
#define IO_RB5_SetDigitalMode()   do { ANS11 = 0; } while(0)


// get/set IO_RB6 aliases
#define IO_RB6_TRIS               TRISB6
#define IO_RB6_LAT                LATB6
#define IO_RB6_PORT               RB6
#define IO_RB6_WPU                WPUB6
#define IO_RB6_SetHigh()    do { LATB6 = 1; } while(0)
#define IO_RB6_SetLow()   do { LATB6 = 0; } while(0)
#define IO_RB6_Toggle()   do { LATB6 = ~LATB6; } while(0)
#define IO_RB6_GetValue()         RB6
#define IO_RB6_SetDigitalInput()    do { TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISB6 = 0; } while(0)

#define IO_RB6_SetPullup()    do { WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()   do { WPUB6 = 0; } while(0)


// get/set IO_RB7 aliases
#define IO_RB7_TRIS               TRISB7
#define IO_RB7_LAT                LATB7
#define IO_RB7_PORT               RB7
#define IO_RB7_WPU                WPUB7
#define IO_RB7_SetHigh()    do { LATB7 = 1; } while(0)
#define IO_RB7_SetLow()   do { LATB7 = 0; } while(0)
#define IO_RB7_Toggle()   do { LATB7 = ~LATB7; } while(0)
#define IO_RB7_GetValue()         RB7
#define IO_RB7_SetDigitalInput()    do { TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISB7 = 0; } while(0)

#define IO_RB7_SetPullup()    do { WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()   do { WPUB7 = 0; } while(0)


// get/set IO_RC0 aliases
#define IO_RC0_TRIS               TRISC0
#define IO_RC0_LAT                LATC0
#define IO_RC0_PORT               RC0
#define IO_RC0_ANS                ANS4
#define IO_RC0_SetHigh()    do { LATC0 = 1; } while(0)
#define IO_RC0_SetLow()   do { LATC0 = 0; } while(0)
#define IO_RC0_Toggle()   do { LATC0 = ~LATC0; } while(0)
#define IO_RC0_GetValue()         RC0
#define IO_RC0_SetDigitalInput()    do { TRISC0 = 1; } while(0)
#define IO_RC0_SetDigitalOutput()   do { TRISC0 = 0; } while(0)

#define IO_RC0_SetAnalogMode()   do { ANS4 = 1; } while(0)
#define IO_RC0_SetDigitalMode()   do { ANS4 = 0; } while(0)


// get/set IO_RC1 aliases
#define IO_RC1_TRIS               TRISC1
#define IO_RC1_LAT                LATC1
#define IO_RC1_PORT               RC1
#define IO_RC1_ANS                ANS5
#define IO_RC1_SetHigh()    do { LATC1 = 1; } while(0)
#define IO_RC1_SetLow()   do { LATC1 = 0; } while(0)
#define IO_RC1_Toggle()   do { LATC1 = ~LATC1; } while(0)
#define IO_RC1_GetValue()         RC1
#define IO_RC1_SetDigitalInput()    do { TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISC1 = 0; } while(0)

#define IO_RC1_SetAnalogMode()   do { ANS5 = 1; } while(0)
#define IO_RC1_SetDigitalMode()   do { ANS5 = 0; } while(0)


// get/set IO_RC2 aliases
#define IO_RC2_TRIS               TRISC2
#define IO_RC2_LAT                LATC2
#define IO_RC2_PORT               RC2
#define IO_RC2_ANS                ANS6
#define IO_RC2_SetHigh()    do { LATC2 = 1; } while(0)
#define IO_RC2_SetLow()   do { LATC2 = 0; } while(0)
#define IO_RC2_Toggle()   do { LATC2 = ~LATC2; } while(0)
#define IO_RC2_GetValue()         RC2
#define IO_RC2_SetDigitalInput()    do { TRISC2 = 1; } while(0)
#define IO_RC2_SetDigitalOutput()   do { TRISC2 = 0; } while(0)

#define IO_RC2_SetAnalogMode()   do { ANS6 = 1; } while(0)
#define IO_RC2_SetDigitalMode()   do { ANS6 = 0; } while(0)


// get/set IO_RC3 aliases
#define IO_RC3_TRIS               TRISC3
#define IO_RC3_LAT                LATC3
#define IO_RC3_PORT               RC3
#define IO_RC3_ANS                ANS7
#define IO_RC3_SetHigh()    do { LATC3 = 1; } while(0)
#define IO_RC3_SetLow()   do { LATC3 = 0; } while(0)
#define IO_RC3_Toggle()   do { LATC3 = ~LATC3; } while(0)
#define IO_RC3_GetValue()         RC3
#define IO_RC3_SetDigitalInput()    do { TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISC3 = 0; } while(0)

#define IO_RC3_SetAnalogMode()   do { ANS7 = 1; } while(0)
#define IO_RC3_SetDigitalMode()   do { ANS7 = 0; } while(0)


// get/set IO_RC4 aliases
#define IO_RC4_TRIS               TRISC4
#define IO_RC4_LAT                LATC4
#define IO_RC4_PORT               RC4
#define IO_RC4_SetHigh()    do { LATC4 = 1; } while(0)
#define IO_RC4_SetLow()   do { LATC4 = 0; } while(0)
#define IO_RC4_Toggle()   do { LATC4 = ~LATC4; } while(0)
#define IO_RC4_GetValue()         RC4
#define IO_RC4_SetDigitalInput()    do { TRISC4 = 1; } while(0)
#define IO_RC4_SetDigitalOutput()   do { TRISC4 = 0; } while(0)



// get/set IO_RC5 aliases
#define IO_RC5_TRIS               TRISC5
#define IO_RC5_LAT                LATC5
#define IO_RC5_PORT               RC5
#define IO_RC5_SetHigh()    do { LATC5 = 1; } while(0)
#define IO_RC5_SetLow()   do { LATC5 = 0; } while(0)
#define IO_RC5_Toggle()   do { LATC5 = ~LATC5; } while(0)
#define IO_RC5_GetValue()         RC5
#define IO_RC5_SetDigitalInput()    do { TRISC5 = 1; } while(0)
#define IO_RC5_SetDigitalOutput()   do { TRISC5 = 0; } while(0)



// get/set IO_RC6 aliases
#define IO_RC6_TRIS               TRISC6
#define IO_RC6_LAT                LATC6
#define IO_RC6_PORT               RC6
#define IO_RC6_ANS                ANS8
#define IO_RC6_SetHigh()    do { LATC6 = 1; } while(0)
#define IO_RC6_SetLow()   do { LATC6 = 0; } while(0)
#define IO_RC6_Toggle()   do { LATC6 = ~LATC6; } while(0)
#define IO_RC6_GetValue()         RC6
#define IO_RC6_SetDigitalInput()    do { TRISC6 = 1; } while(0)
#define IO_RC6_SetDigitalOutput()   do { TRISC6 = 0; } while(0)

#define IO_RC6_SetAnalogMode()   do { ANS8 = 1; } while(0)
#define IO_RC6_SetDigitalMode()   do { ANS8 = 0; } while(0)


// get/set IO_RC7 aliases
#define IO_RC7_TRIS               TRISC7
#define IO_RC7_LAT                LATC7
#define IO_RC7_PORT               RC7
#define IO_RC7_ANS                ANS9
#define IO_RC7_SetHigh()    do { LATC7 = 1; } while(0)
#define IO_RC7_SetLow()   do { LATC7 = 0; } while(0)
#define IO_RC7_Toggle()   do { LATC7 = ~LATC7; } while(0)
#define IO_RC7_GetValue()         RC7
#define IO_RC7_SetDigitalInput()    do { TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISC7 = 0; } while(0)

#define IO_RC7_SetAnalogMode()   do { ANS9 = 1; } while(0)
#define IO_RC7_SetDigitalMode()   do { ANS9 = 0; } while(0)



/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
*/