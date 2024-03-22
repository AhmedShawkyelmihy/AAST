/*
 ============================================================================
 Name        : GPIO_Interface.h
 Author      : Ahmed Shawky
 Description : Interface Header File for TM4C123GH6PM GPIO Driver.
 Date        : 22/03/2024
 ============================================================================
 */

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

/****************************************************************************
 * 				Include                                     *
 ****************************************************************************/
#include "../../Includes/Std_Types.h"

/****************************************************************************
 * 			       Definitions				    *
 ****************************************************************************/
#define PORTA_ID                0
#define PORTB_ID                1
#define PORTC_ID                2
#define PORTD_ID                3
#define PORTE_ID                4
#define PORTF_ID                5

#define PIN0_ID                 0   
#define PIN1_ID                 1 
#define PIN2_ID                 2 
#define PIN3_ID                 3
#define PIN4_ID                 4   
#define PIN5_ID                 5 
#define PIN6_ID                 6 
#define PIN7_ID                 7    

/****************************************************************************
 * 			     Types Declaration				    *
 ****************************************************************************/
typedef struct
{
    u8 Port_Num ;
    u8 Pin_Num ;
}GPIO_ConfigType;


/****************************************************************************
 * 			    Functions Prototypes			    *
 ****************************************************************************/
void M_GPIO_Void_Init(GPIO_ConfigType*);

#endif /* GPIO_INTERFACE_H_ */