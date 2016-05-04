/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_mapping.h

  @Summary:
    This is the Pin Mapping for high level use

  @Description:
 *  This file is used to map pins with high level names
*/
#include "mcc_generated_files/mcc.h"


#ifndef PIN_MAPPING_H
#define PIN_MAPPING_H

/*
 RF69W I/O
 */

//CTRL pin
#define RF69W_CTRL_SetHigh IO_RB6_SetHigh
#define RF69W_CTRL_SetLow IO_RB6_SetLow
#define RF69W_CTRL_Toggle IO_RB6_Toggle
#define RF69W_CTRL_GetValue IO_RB6_GetValue
#define RF69W_CTRL_SetDigitalInput IO_RB6_SetDigitalInput
#define RF69W_CTRL_SetDigitalOutput IO_RB6_SetDigitalOutput

//Data pin
#define RF69W_DATA_SetHigh IO_RC2_SetHigh
#define RF69W_DATA_SetLow IO_RC2_SetLow
#define RF69W_DATA_Toggle IO_RC2_Toggle
#define RF69W_DATA_GetValue IO_RC2_GetValue
#define RF69W_DATA_SetDigitalInput IO_RC2_SetDigitalInput
#define RF69W_DATA_SetDigitalOutput IO_RC2_SetDigitalOutput


//TX Ready pin
#define RF69W_TXREADY_SetHigh IO_RC5_SetHigh
#define RF69W_TXREADY_SetLow IO_RC5_SetLow
#define RF69W_TXREADY_Toggle IO_RC5_Toggle
#define RF69W_TXREADY_GetValue IO_RC5_GetValue
#define RF69W_TXREADY_SetDigitalInput IO_RC5_SetDigitalInput
#define RF69W_TXREADY_SetDigitalOutput IO_RC5_SetDigitalOutput

//Reset PIN
#define RF69W_RESET_SetHigh IO_RB4_SetHigh
#define RF69W_RESET_SetLow IO_RB4_SetLow
#define RF69W_RESET_Toggle IO_RB4_Toggle
#define RF69W_RESET_GetValue IO_RB4_GetValue
#define RF69W_RESET_SetDigitalInput IO_RB4_SetDigitalInput
#define RF69W_RESET_SetDigitalOutput IO_RB4_SetDigitalOutput

/*
 LED
 */
//NOTE : led is on when RA5 is low
#define LED_ON IO_RA5_SetLow
#define LED_OFF IO_RA5_SetHigh
#define LED_Toggle IO_RA5_Toggle

/*
 ADC
 */
// CT1
#define CT1_GetValue IO_RA4_GetValue
#define CT1_SetAnalogMode IO_RA4_SetAnalogMode
#define CT1_Input IO_RA4_SetDigitalInput
#define CT1_CHANNEL 0b0011

// CT2
#define CT2_GetValue IO_RC3_GetValue
#define CT2_SetAnalogMode IO_RC3_SetAnalogMode
#define CT2_Input IO_RC7_SetDigitalInput
#define CT2_CHANNEL 0b0111

// CT3
#define CT3_GetValue IO_RC7_GetValue
#define CT3_SetAnalogMode IO_RC7_SetAnalogMode
#define CT3_Input IO_RC7_SetDigitalInput
#define CT3_CHANNEL 0b1001

//CT POWER
#define CTPOWER_SetHigh IO_RC6_SetHigh
#define CTPOWER_SetLow IO_RC6_SetLow
#define CTPOWER_GetValue IO_RC6_GetValue
#define CTPOWER_SetDigitalInput IO_RC6_SetDigitalInput
#define CTPOWER_SetDigitalOutput IO_RC6_SetDigitalOutput


#endif // PIN_MAPPING_H
/**
 End of File
*/