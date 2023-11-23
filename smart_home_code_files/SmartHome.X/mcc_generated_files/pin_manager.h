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
        Device            :  PIC18F46K20
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

// get/set DCMOTOR_PIN0 aliases
#define DCMOTOR_PIN0_TRIS                 TRISAbits.TRISA0
#define DCMOTOR_PIN0_LAT                  LATAbits.LATA0
#define DCMOTOR_PIN0_PORT                 PORTAbits.RA0
#define DCMOTOR_PIN0_ANS                  ANSELbits.ANS0
#define DCMOTOR_PIN0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define DCMOTOR_PIN0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define DCMOTOR_PIN0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define DCMOTOR_PIN0_GetValue()           PORTAbits.RA0
#define DCMOTOR_PIN0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define DCMOTOR_PIN0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define DCMOTOR_PIN0_SetAnalogMode()      do { ANSELbits.ANS0 = 1; } while(0)
#define DCMOTOR_PIN0_SetDigitalMode()     do { ANSELbits.ANS0 = 0; } while(0)

// get/set DCMOTOR_PIN1 aliases
#define DCMOTOR_PIN1_TRIS                 TRISAbits.TRISA1
#define DCMOTOR_PIN1_LAT                  LATAbits.LATA1
#define DCMOTOR_PIN1_PORT                 PORTAbits.RA1
#define DCMOTOR_PIN1_ANS                  ANSELbits.ANS1
#define DCMOTOR_PIN1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define DCMOTOR_PIN1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define DCMOTOR_PIN1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define DCMOTOR_PIN1_GetValue()           PORTAbits.RA1
#define DCMOTOR_PIN1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define DCMOTOR_PIN1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define DCMOTOR_PIN1_SetAnalogMode()      do { ANSELbits.ANS1 = 1; } while(0)
#define DCMOTOR_PIN1_SetDigitalMode()     do { ANSELbits.ANS1 = 0; } while(0)

// get/set RC3 procedures
#define RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define RC3_GetValue()              PORTCbits.RC3
#define RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)

// get/set RC4 procedures
#define RC4_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define RC4_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define RC4_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define RC4_GetValue()              PORTCbits.RC4
#define RC4_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define RC4_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)

// get/set RC6 procedures
#define RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define RC6_GetValue()              PORTCbits.RC6
#define RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)

// get/set RC7 procedures
#define RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define RC7_GetValue()              PORTCbits.RC7
#define RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)

// get/set LED0 aliases
#define LED0_TRIS                 TRISDbits.TRISD0
#define LED0_LAT                  LATDbits.LATD0
#define LED0_PORT                 PORTDbits.RD0
#define LED0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define LED0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define LED0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define LED0_GetValue()           PORTDbits.RD0
#define LED0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define LED0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)

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



#endif // PIN_MANAGER_H
/**
 End of File
*/