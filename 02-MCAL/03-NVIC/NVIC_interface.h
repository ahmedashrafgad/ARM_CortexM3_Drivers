/*
 * NVIC_interface.h
 *
 *  Created on: Feb 7, 2021
 *      Author: Ahmed Ashraf
 */

#ifndef NVIC_INTERFACE_H_
#define NVIC_INTERFACE_H_

void MNVIC_voidInit             (void);
void MNVIC_voidEnableInterrupt  (u8 Copy_u8InterruptNum);
void MNVIC_voidDisableInterrupt (u8 Copy_u8InterruptNum);
void MNVIC_voidSetPendingFlag   (u8 Copy_u8InterruptNum);
void MNVIC_voidClearPendingFlag (u8 Copy_u8InterruptNum);
u8   MNVIC_u8GetActiveFlag      (u8 Copy_u8InterruptNum);
void MNVIC_voidSetPriority      (u8 Copy_u8InterruptNum, u8 Copy_u8Priority);


/* =====================   Priority grouping  =====================
 *  Case ----->  MNVIC_GROUP_16_SUB_0   ----->   0bXXXX
 *  Case ----->  MNVIC_GROUP_8_SUB_2    ----->   0bXXXY
 *  Case ----->  MNVIC_GROUP_4_SUB_4    ----->   0bXXYY
 *  Case ----->  MNVIC_GROUP_2_SUB_8    ----->   0bXYYY
 *  Case ----->  MNVIC_GROUP_0_SUB_16   ----->   0bYYYY
 */

/* =====================   NVIC_GROUP_4_SUB_4 Priorites  =====================
 *  0b0000			Group 0 Sub-Group 0
 *  0b0001			Group 0 Sub-Group 1
 *  0b0010			Group 0 Sub-Group 2
 *  0b0011			Group 0 Sub-Group 3
 *  0b0100			Group 1 Sub-Group 0
 *  0b0101			Group 1 Sub-Group 1
 *  0b0110			Group 1 Sub-Group 2
 *  0b0111			Group 1 Sub-Group 3
 *  0b0111			Group 2 Sub-Group 0
 *  0b1001			Group 2 Sub-Group 1
 *  0b1010			Group 2 Sub-Group 2
 *  0b1011			Group 2 Sub-Group 3
 *  0b1100 			Group 3 Sub-Group 0
 *  0b1101 			Group 3 Sub-Group 1
 *  0b1110 			Group 3 Sub-Group 2
 *  0b1111 			Group 3 Sub-Group 3
 */

#define Group1Sub0 			0b0000
#define Group2Sub0 			0b0100
#define Group3Sub0 			0b0111
#define Group4Sub0 			0b1100

#endif /* NVIC_INTERFACE_H_ */
