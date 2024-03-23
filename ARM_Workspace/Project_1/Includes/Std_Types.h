/*
 ============================================================================
 Name        : Std_Types.h
 Author      : Ahmed Shawky
 Description : Header File for ARM Standard Types
 Date        : 22/03/2024
 ============================================================================
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

/* Boolean Data Type */
typedef unsigned char bool ;

/* Boolean Values */
#ifndef FALSE
#define FALSE               (0u)
#endif
#ifndef TRUE
#define TRUE                (1u)
#endif

#define LOGIC_HIGH          (1u)
#define LOGIC_LOW           (0u)

#define NULL_PTR            ((void*)0)

typedef unsigned char 		u8 ;
typedef signed char 		s8 ;
typedef unsigned short 		u16 ;
typedef signed short 		s16 ;
typedef unsigned long 		u32 ;
typedef signed long 		s32 ;
typedef unsigned long long 	u64 ;
typedef signed long long 	s64 ;
typedef float 				f32 ;
typedef double 				f64 ;

#endif /* STD_TYPES_H_ */
