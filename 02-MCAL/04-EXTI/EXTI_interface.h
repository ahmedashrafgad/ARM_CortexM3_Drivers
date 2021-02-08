/*
 * EXTI_interface.h
 *
 *  Created on: Feb 8, 2021
 *      Author: Ahmed Ashraf
 */

#ifndef EXTI_INTERFACE_H_
#define EXTI_INTERFACE_H_
void MEXTI_voidInit(void);
void MEXTI_voidEnableLine			(u8 Copy_u8EXTINum);
void MEXTI_voidSetSignalLatch		(u8 Copy_u8EXTINum, u8 Copy_u8EdgeMode);
void MEXTI_voidDisableLine			(u8 Copy_u8EXTINum );
void MEXTI_voidSetSoftwareTrigger	(u8 Copy_u8EXTINum );
void MEXTI0_voidSetCallBack			(void (*pf) (void) );
void MEXTI1_voidSetCallBack			(void (*pf) (void) );
void MEXTI2_voidSetCallBack			(void (*pf) (void) );
void MEXTI3_voidSetCallBack			(void (*pf) (void) );

#endif /* EXTI_INTERFACE_H_ */
