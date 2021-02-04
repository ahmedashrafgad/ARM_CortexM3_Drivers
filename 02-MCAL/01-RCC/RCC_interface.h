/*
 * RCC_interface.h
 *
 *  Created on: Feb 2, 2021
 *      Author: Ahmed Ashraf
 */

#ifndef RCC_INTERFACE_H_
#define RCC_INTERFACE_H_

void MRCC_voidInit(void);
void MRCC_voidEnablePeripheralClock (u8 Copy_u8BusID,u8 Copy_u8PeripheralID);
void MRCC_voidDisablePeripheralClock(u8 Copy_u8BusID,u8 Copy_u8PeripheralID);


#define RCC_AHB		0
#define RCC_APB1 	1
#define RCC_APB2 	2

#define RCC_GPIOA	2
#define RCC_GPIOB	3
#define RCC_GPIOC	4


#endif /* RCC_INTERFACE_H_ */
