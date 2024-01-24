/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16F1579
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set GEARR aliases
#define GEARR_TRIS                 TRISAbits.TRISA2
#define GEARR_LAT                  LATAbits.LATA2
#define GEARR_PORT                 PORTAbits.RA2
#define GEARR_WPU                  WPUAbits.WPUA2
#define GEARR_OD                   ODCONAbits.ODA2
#define GEARR_ANS                  ANSELAbits.ANSA2
#define GEARR_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define GEARR_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define GEARR_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define GEARR_GetValue()           PORTAbits.RA2
#define GEARR_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define GEARR_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define GEARR_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define GEARR_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define GEARR_SetPushPull()        do { ODCONAbits.ODA2 = 0; } while(0)
#define GEARR_SetOpenDrain()       do { ODCONAbits.ODA2 = 1; } while(0)
#define GEARR_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define GEARR_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set LED2 aliases
#define LED2_TRIS                 TRISAbits.TRISA4
#define LED2_LAT                  LATAbits.LATA4
#define LED2_PORT                 PORTAbits.RA4
#define LED2_WPU                  WPUAbits.WPUA4
#define LED2_OD                   ODCONAbits.ODA4
#define LED2_ANS                  ANSELAbits.ANSA4
#define LED2_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define LED2_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define LED2_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define LED2_GetValue()           PORTAbits.RA4
#define LED2_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define LED2_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define LED2_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define LED2_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define LED2_SetPushPull()        do { ODCONAbits.ODA4 = 0; } while(0)
#define LED2_SetOpenDrain()       do { ODCONAbits.ODA4 = 1; } while(0)
#define LED2_SetAnalogMode()      do { ANSELAbits.ANSA4 = 1; } while(0)
#define LED2_SetDigitalMode()     do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set PICIN aliases
#define PICIN_TRIS                 TRISAbits.TRISA5
#define PICIN_LAT                  LATAbits.LATA5
#define PICIN_PORT                 PORTAbits.RA5
#define PICIN_WPU                  WPUAbits.WPUA5
#define PICIN_OD                   ODCONAbits.ODA5
#define PICIN_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define PICIN_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define PICIN_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define PICIN_GetValue()           PORTAbits.RA5
#define PICIN_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define PICIN_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define PICIN_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define PICIN_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define PICIN_SetPushPull()        do { ODCONAbits.ODA5 = 0; } while(0)
#define PICIN_SetOpenDrain()       do { ODCONAbits.ODA5 = 1; } while(0)

// get/set RB4 procedures
#define RB4_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define RB4_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define RB4_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define RB4_GetValue()              PORTBbits.RB4
#define RB4_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define RB4_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define RB4_SetPullup()             do { WPUBbits.WPUB4 = 1; } while(0)
#define RB4_ResetPullup()           do { WPUBbits.WPUB4 = 0; } while(0)
#define RB4_SetAnalogMode()         do { ANSELBbits.ANSB4 = 1; } while(0)
#define RB4_SetDigitalMode()        do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELBbits.ANSB5 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set I2C_SCL aliases
#define I2C_SCL_TRIS                 TRISBbits.TRISB6
#define I2C_SCL_LAT                  LATBbits.LATB6
#define I2C_SCL_PORT                 PORTBbits.RB6
#define I2C_SCL_WPU                  WPUBbits.WPUB6
#define I2C_SCL_OD                   ODCONBbits.ODB6
#define I2C_SCL_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define I2C_SCL_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define I2C_SCL_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define I2C_SCL_GetValue()           PORTBbits.RB6
#define I2C_SCL_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define I2C_SCL_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define I2C_SCL_SetPullup()          do { WPUBbits.WPUB6 = 1; } while(0)
#define I2C_SCL_ResetPullup()        do { WPUBbits.WPUB6 = 0; } while(0)
#define I2C_SCL_SetPushPull()        do { ODCONBbits.ODB6 = 0; } while(0)
#define I2C_SCL_SetOpenDrain()       do { ODCONBbits.ODB6 = 1; } while(0)

// get/set I2C_SDA aliases
#define I2C_SDA_TRIS                 TRISBbits.TRISB7
#define I2C_SDA_LAT                  LATBbits.LATB7
#define I2C_SDA_PORT                 PORTBbits.RB7
#define I2C_SDA_WPU                  WPUBbits.WPUB7
#define I2C_SDA_OD                   ODCONBbits.ODB7
#define I2C_SDA_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define I2C_SDA_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define I2C_SDA_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define I2C_SDA_GetValue()           PORTBbits.RB7
#define I2C_SDA_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define I2C_SDA_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define I2C_SDA_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define I2C_SDA_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define I2C_SDA_SetPushPull()        do { ODCONBbits.ODB7 = 0; } while(0)
#define I2C_SDA_SetOpenDrain()       do { ODCONBbits.ODB7 = 1; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set GEARL aliases
#define GEARL_TRIS                 TRISCbits.TRISC1
#define GEARL_LAT                  LATCbits.LATC1
#define GEARL_PORT                 PORTCbits.RC1
#define GEARL_WPU                  WPUCbits.WPUC1
#define GEARL_OD                   ODCONCbits.ODC1
#define GEARL_ANS                  ANSELCbits.ANSC1
#define GEARL_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define GEARL_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define GEARL_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define GEARL_GetValue()           PORTCbits.RC1
#define GEARL_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define GEARL_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define GEARL_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define GEARL_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define GEARL_SetPushPull()        do { ODCONCbits.ODC1 = 0; } while(0)
#define GEARL_SetOpenDrain()       do { ODCONCbits.ODC1 = 1; } while(0)
#define GEARL_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define GEARL_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set DCDC aliases
#define DCDC_TRIS                 TRISCbits.TRISC2
#define DCDC_LAT                  LATCbits.LATC2
#define DCDC_PORT                 PORTCbits.RC2
#define DCDC_WPU                  WPUCbits.WPUC2
#define DCDC_OD                   ODCONCbits.ODC2
#define DCDC_ANS                  ANSELCbits.ANSC2
#define DCDC_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define DCDC_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define DCDC_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define DCDC_GetValue()           PORTCbits.RC2
#define DCDC_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define DCDC_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define DCDC_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define DCDC_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define DCDC_SetPushPull()        do { ODCONCbits.ODC2 = 0; } while(0)
#define DCDC_SetOpenDrain()       do { ODCONCbits.ODC2 = 1; } while(0)
#define DCDC_SetAnalogMode()      do { ANSELCbits.ANSC2 = 1; } while(0)
#define DCDC_SetDigitalMode()     do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set SPI_CLOCK aliases
#define SPI_CLOCK_TRIS                 TRISCbits.TRISC3
#define SPI_CLOCK_LAT                  LATCbits.LATC3
#define SPI_CLOCK_PORT                 PORTCbits.RC3
#define SPI_CLOCK_WPU                  WPUCbits.WPUC3
#define SPI_CLOCK_OD                   ODCONCbits.ODC3
#define SPI_CLOCK_ANS                  ANSELCbits.ANSC3
#define SPI_CLOCK_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SPI_CLOCK_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SPI_CLOCK_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SPI_CLOCK_GetValue()           PORTCbits.RC3
#define SPI_CLOCK_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SPI_CLOCK_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SPI_CLOCK_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SPI_CLOCK_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SPI_CLOCK_SetPushPull()        do { ODCONCbits.ODC3 = 0; } while(0)
#define SPI_CLOCK_SetOpenDrain()       do { ODCONCbits.ODC3 = 1; } while(0)
#define SPI_CLOCK_SetAnalogMode()      do { ANSELCbits.ANSC3 = 1; } while(0)
#define SPI_CLOCK_SetDigitalMode()     do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set SPI_STRB aliases
#define SPI_STRB_TRIS                 TRISCbits.TRISC4
#define SPI_STRB_LAT                  LATCbits.LATC4
#define SPI_STRB_PORT                 PORTCbits.RC4
#define SPI_STRB_WPU                  WPUCbits.WPUC4
#define SPI_STRB_OD                   ODCONCbits.ODC4
#define SPI_STRB_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SPI_STRB_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SPI_STRB_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SPI_STRB_GetValue()           PORTCbits.RC4
#define SPI_STRB_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SPI_STRB_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SPI_STRB_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SPI_STRB_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SPI_STRB_SetPushPull()        do { ODCONCbits.ODC4 = 0; } while(0)
#define SPI_STRB_SetOpenDrain()       do { ODCONCbits.ODC4 = 1; } while(0)

// get/set PICOUT aliases
#define PICOUT_TRIS                 TRISCbits.TRISC5
#define PICOUT_LAT                  LATCbits.LATC5
#define PICOUT_PORT                 PORTCbits.RC5
#define PICOUT_WPU                  WPUCbits.WPUC5
#define PICOUT_OD                   ODCONCbits.ODC5
#define PICOUT_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define PICOUT_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define PICOUT_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define PICOUT_GetValue()           PORTCbits.RC5
#define PICOUT_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define PICOUT_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define PICOUT_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define PICOUT_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define PICOUT_SetPushPull()        do { ODCONCbits.ODC5 = 0; } while(0)
#define PICOUT_SetOpenDrain()       do { ODCONCbits.ODC5 = 1; } while(0)

// get/set SPI_DATA aliases
#define SPI_DATA_TRIS                 TRISCbits.TRISC6
#define SPI_DATA_LAT                  LATCbits.LATC6
#define SPI_DATA_PORT                 PORTCbits.RC6
#define SPI_DATA_WPU                  WPUCbits.WPUC6
#define SPI_DATA_OD                   ODCONCbits.ODC6
#define SPI_DATA_ANS                  ANSELCbits.ANSC6
#define SPI_DATA_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define SPI_DATA_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define SPI_DATA_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define SPI_DATA_GetValue()           PORTCbits.RC6
#define SPI_DATA_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define SPI_DATA_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define SPI_DATA_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define SPI_DATA_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define SPI_DATA_SetPushPull()        do { ODCONCbits.ODC6 = 0; } while(0)
#define SPI_DATA_SetOpenDrain()       do { ODCONCbits.ODC6 = 1; } while(0)
#define SPI_DATA_SetAnalogMode()      do { ANSELCbits.ANSC6 = 1; } while(0)
#define SPI_DATA_SetDigitalMode()     do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set LED1 aliases
#define LED1_TRIS                 TRISCbits.TRISC7
#define LED1_LAT                  LATCbits.LATC7
#define LED1_PORT                 PORTCbits.RC7
#define LED1_WPU                  WPUCbits.WPUC7
#define LED1_OD                   ODCONCbits.ODC7
#define LED1_ANS                  ANSELCbits.ANSC7
#define LED1_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define LED1_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define LED1_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define LED1_GetValue()           PORTCbits.RC7
#define LED1_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define LED1_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define LED1_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define LED1_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define LED1_SetPushPull()        do { ODCONCbits.ODC7 = 0; } while(0)
#define LED1_SetOpenDrain()       do { ODCONCbits.ODC7 = 1; } while(0)
#define LED1_SetAnalogMode()      do { ANSELCbits.ANSC7 = 1; } while(0)
#define LED1_SetDigitalMode()     do { ANSELCbits.ANSC7 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
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


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF4 pin functionality
 * @Example
    IOCCF4_ISR();
 */
void IOCCF4_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF4 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF4 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF4_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF4_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF4 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF4_SetInterruptHandler() method.
    This handler is called every time the IOCCF4 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF4_SetInterruptHandler(IOCCF4_InterruptHandler);

*/
extern void (*IOCCF4_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF4 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF4_SetInterruptHandler() method.
    This handler is called every time the IOCCF4 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF4_SetInterruptHandler(IOCCF4_DefaultInterruptHandler);

*/
void IOCCF4_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/