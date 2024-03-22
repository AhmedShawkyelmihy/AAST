/*
 ============================================================================
 Name        : GPIO_Prog.h
 Author      : Ahmed Shawky
 Description : Program Source File for TM4C123GH6PM GPIO Driver.
 Date        : 22/03/2024
 ============================================================================
 */

/****************************************************************************
 * 				Include                                     *
 ****************************************************************************/
#include "GPIO_Interface.h"
#include "GPIO_Private.h"

/****************************************************************************
 * 			  Functions Definitions				    *
 ****************************************************************************/
void M_GPIO_Void_Init(GPIO_ConfigType* Config_Ptr)
{
    switch(Config_Ptr->Port_Num)
    {
        case PORTA_ID :

        break;
        case PORTB_ID :

        break;
        case PORTC_ID :

        break;
        case PORTD_ID :

        break;
        case PORTE_ID :

        break;
        case PORTF_ID :
        (*((u32 *)(SYSCTL_BASE | RCGCGPIO_MASK))) |= (1<<(Config_Ptr->Port_Num)) ;

        (*((u32 *)(GPIO_PORTF_BASE | GPIO_DEN_MASK))) |= (1<<(Config_Ptr->Pin_Num)) ;
        (*((u32 *)(GPIO_PORTF_BASE | GPIO_DIR_MASK))) |= (1<<(Config_Ptr->Pin_Num)) ;
        (*((u32 *)(GPIO_PORTF_BASE | GPIO_DATA_MASK))) |= (1<<(Config_Ptr->Pin_Num)) ;

        break;
    }
}