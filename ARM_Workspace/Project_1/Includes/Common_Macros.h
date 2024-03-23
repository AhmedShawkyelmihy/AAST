/*
 ============================================================================
 Name        : Common_Macros.h
 Author      : Ahmed Shawky
 Description : Header File for Common Macros Used in Bit Math.
 Date        : 23/03/2024
 ============================================================================
 */

#ifndef COMMON_MACROS_H_
#define COMMON_MACROS_H_

/****************************************************************************
 * 			       Definitions				    *
 ****************************************************************************/
#define SET_BIT(REG,BIT)    ((REG) |= (1<<(BIT)))
#define CLR_BIT(REG,BIT)    ((REG) &= ~(1<<(BIT)))
#define TOG_BIT(REG,BIT)    ((REG) ^= (1<<(BIT)))
#define GET_BIT(REG,BIT)    (((REG) >> (BIT)) & 0x1)

#endif /* COMMON_MACROS_H_ */