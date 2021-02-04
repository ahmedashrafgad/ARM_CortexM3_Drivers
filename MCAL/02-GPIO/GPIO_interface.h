/*
 * GPIO_interface.h
 *
 *  Created on: Feb 3, 2021
 *      Author: Ahmed Ashraf
 */

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

/*function to take port , pin and the mode to set its dirction and type*/
 void MGPIO_voidSetPinDirction(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8Mode);
 /*function to take the value of the pin as it has many speeds and types of output and inputs */
 /* if Pin is output (High or Low) */
 void MGPIO_voidSetPinValue(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8Value);
 /*function to get the value of the input (input by 0 or input by 1 ) */
 /* IF Pin is input (return High or Low) */
 u8 MGPIO_u8GetPinValue(u8 Copy_u8PortID,u8 Copy_u8PinID);

 void MGPIO_voidTogglePin(u8 Copy_u8PortID, u8 Copy_u8PinID);

 // set port direction
 void MGPIO_voidSetPortDirction(u8 Copy_u8PortID,u8 Copy_u8Mode);
 // set port value
 void MGPIO_voidSetPortValue(u8 Copy_u8PortID,u8 Value);


#define GPIO_u8_PORTA   0
#define GPIO_u8_PORTB   1
#define GPIO_u8_PORTC	2

#define GPIO_u8_PIN0     0
#define GPIO_u8_PIN1     1
#define GPIO_u8_PIN2     2
#define GPIO_u8_PIN3     3
#define GPIO_u8_PIN4     4
#define GPIO_u8_PIN5     5
#define GPIO_u8_PIN6     6
#define GPIO_u8_PIN7     7
#define GPIO_u8_PIN8     8
#define GPIO_u8_PIN9     9
#define GPIO_u8_PIN10    10
#define GPIO_u8_PIN11    11
#define GPIO_u8_PIN12    12
#define GPIO_u8_PIN13    13
#define GPIO_u8_PIN14    14
#define GPIO_u8_PIN15    15

 /********** Input Options ************/
#define GPIO_INPUT_ANALOG   	 0b0000
#define GPIO_INPUT_FLOATING		 0b0100
#define GPIO_INPUT_PULL_UP_DOWN  0b1000

 /*Note Output Options : PP = Push Pull
                         OD = Open Drain
 				        AF = Alternative Function */

 /******* OutPut Modes for 10 MHZ *******/
 #define GPIO_OUTPUT_10MHZ_PP      0b0001
 #define GPIO_OUTPUT_10MHZ_OD      0b0101
 #define GPIO_OUTPUT_10MHZ_AF_PP   0b1001
 #define GPIO_OUTPUT_10MHZ_AF_OD   0b1101

 /******* Output Modes for 2 MHZ *******/
 #define GPIO_OUTPUT_2MHZ_PP       0b0010
 #define GPIO_OUTPUT_2MHZ_OD       0b0110
 #define GPIO_OUTPUT_2MHZ_AF_PP    0b1010
 #define GPIO_OUTPUT_2MHZ_AF_OD    0b1110

 /******* Output Modes for 50 MHZ *******/
 #define GPIO_OUTPUT_50MHZ_PP      0b0011
 #define GPIO_OUTPUT_50MHZ_OD      0b0111
 #define GPIO_OUTPUT_50MHZ_AF_PP   0b1011
 #define GPIO_OUTPUT_50MHZ_AF_OD   0b1111

#endif /* GPIO_INTERFACE_H_ */
