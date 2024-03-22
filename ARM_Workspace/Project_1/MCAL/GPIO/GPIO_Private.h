/*
 ============================================================================
 Name        : GPIO_Private.h
 Author      : Ahmed Shawky
 Description : Private Header File for TM4C123GH6PM GPIO Driver.
 Date        : 22/03/2024
 ============================================================================
 */

#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_

/****************************************************************************
 * 				Include                                     *
 ****************************************************************************/
#include "../../Includes/Std_Types.h"

/****************************************************************************
 * 			       Definitions				    *
 ****************************************************************************/
#define SYSCTL_BASE             0x400FE000
#define RCGCGPIO_MASK           0x608

#define GPIO_PORTF_BASE         0x40025000
#define GPIO_DATA_MASK          0x3FC
#define GPIO_DIR_MASK           0x400
#define GPIO_AFSEL_MASK         0x420
#define GPIO_DEN_MASK           0x51C
#define GPIO_AMSEL_MASK         0x528

#endif /* GPIO_PRIVATE_H_ */
