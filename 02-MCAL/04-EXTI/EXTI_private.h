/*
 * EXTI_private.h
 *
 *  Created on: Feb 8, 2021
 *      Author: Ahmed Ashraf
 */

#ifndef EXTI_PRIVATE_H_
#define EXTI_PRIVATE_H_

typedef struct
{
	volatile u32 	IMR;
	volatile u32	EMR;
	volatile u32 	RTSR;
	volatile u32	FTSR;
	volatile u32 	SWIER;
	volatile u32	PR;

}EXTI_Type;

#define 	EXTI 		((EXTI_Type *)0x40010400)

#define 	EXTI_FALLING_EDGE			1
#define 	EXTI_RAISING_EDGE			3
#define 	EXTI_INTONCHANGE			5

#endif /* EXTI_PRIVATE_H_ */
