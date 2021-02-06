/*
 * GPIO_interface.h
 *
 *  Created on: Feb 3, 2021
 *      Author: Ahmed Ashraf
 */

#ifndef GPIO_INTERFACE_H_
#define GPIO_INTERFACE_H_

/*function to take port , pin and the mode to set its dirction and type*/
 void MGPIO_voidSetPinDirection(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8Mode);
 /*function to take the value of the pin as it has many speeds and types of output and inputs */
 /* if Pin is output (High or Low) */
 void MGPIO_voidSetPinValue(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8Value);
 /*function to get the value of the input (input by 0 or input by 1 ) */
 /* IF Pin is input (return High or Low) */
 u8 MGPIO_u8GetPinValue(u8 Copy_u8PortID,u8 Copy_u8PinID);

 void MGPIO_voidTogglePin(u8 Copy_u8PortID, u8 Copy_u8PinID);
 // set port direction
 void MGPIO_voidSetPortDirection  ( u8 Copy_u8PortID , u32 Copy_u32PortMode  ) ;
 // set port value
 void MGPIO_voidSetPortValue   ( u8 Copy_u8PortID , u32 Copy_u32Value );
 // Get port value
 u32 MGPIO_voidGetPortValue(u8 Copy_u8PortID);


#define HIGH     1
#define LOW      0

#define PORT_HIGH  0xFFFFFFFF
#define PORT_LOW   0x00000000

#define GPIO_PORTA   0
#define GPIO_PORTB   1
#define GPIO_PORTC	 2

#define GPIO_PIN0     0
#define GPIO_PIN1     1
#define GPIO_PIN2     2
#define GPIO_PIN3     3
#define GPIO_PIN4     4
#define GPIO_PIN5     5
#define GPIO_PIN6     6
#define GPIO_PIN7     7
#define GPIO_PIN8     8
#define GPIO_PIN9     9
#define GPIO_PIN10    10
#define GPIO_PIN11    11
#define GPIO_PIN12    12
#define GPIO_PIN13    13
#define GPIO_PIN14    14
#define GPIO_PIN15    15

 /*Note Input Options : Analog
 					   Floating
 					   PullUp
 					   PullDown
 					   Pull up and pull down has the same mode in bits*/

 #define INPUT_ANLOG               0b0000
 #define INPUT_FLOATING            0b0100
 #define INPUT_PULLUP_PULLDOWN     0b1000

 /*Note Output Options : PP = Push Pull
                         OD = Open Drain
 				        AF = Alternative Function */

 /*OutPut Modes for 10 MHZ */
 #define OUTPUT_10MHZ_PP      0b0001
 #define OUTPUT_10MHZ_OD      0b0101
 #define OUTPUT_10MHZ_AF_PP   0b1001
 #define OUTPUT_10MHZ_AF_OD   0b1101

 /*Output Modes for 2 MHZ */
 #define OUTPUT_2MHZ_PP       0b0010
 #define OUTPUT_2MHZ_OD       0b0110
 #define OUTPUT_2MHZ_AF_PP    0b1010
 #define OUTPUT_2MHZ_AF_OD    0b1110

 /*Output Modes for 50 MHZ */
 #define OUTPUT_50MHZ_PP      0b0011
 #define OUTPUT_50MHZ_OD      0b0111
 #define OUTPUT_50MHZ_AF_PP   0b1011
 #define OUTPUT_50MHZ_AF_OD   0b1111


 /*----------------------------------------- PORT MODES -----------------------------------------*/

 #define INPUT_PORT_ANLOG             ( (u32)0x00000000 )          // 0b00000000000000000000000000000000
 #define INPUT_PORT_FLOATING          ( (u32)0x44444444 )          // 0b01000100010001000100010001000100
 #define INPUT_PORT_PULLUP_PULLDOWN   ( (u32)0x88888888 )          // 0b10001000100010001000100010001000
 //For Speed 10
 #define OUTPUT_PORT_10MHZ_PP         ( (u32)0x11111111 )          // 0b00010001000100010001000100010001
 #define OUTPUT_PORT_10MHZ_OD         ( (u32)0x55555555 )          // 0b01010101010101010101010101010101
 #define OUTPUT_PORT_10MHZ_AFPP       ( (u32)0x99999999 )          // 0b10011001100110011001100110011001
 #define OUTPUT_PORT_10MHZ_AFOD       ( (u32)0xDDDDDDDD )          // 0b11011101110111011101110111011101

 //For Speed 2
 #define OUTPUT_PORT_2MHZ_PP          ( (u32)0x22222222 )           // 0b00100010001000100010001000100010
 #define OUTPUT_PORT_2MHZ_OD          ( (u32)0x66666666 )           // 0b01100110011001100110011001100110
 #define OUTPUT_PORT_2MHZ_AFPP        ( (u32)0xAAAAAAAA )           // 0b10101010101010101010101010101010
 #define OUTPUT_PORT_2MHZ_AFOD        ( (u32)0xEEEEEEEE )           // 0b11101110111011101110111011101110

 //For Speed 2
 #define OUTPUT_PORT_50MHZ_PP         ( (u32)0x33333333 )           // 0b00110011001100110011001100110011
 #define OUTPUT_PORT_50MHZ_OD         ( (u32)0x77777777 )           // 0b01110111011101110111011101110111
 #define OUTPUT_PORT_50MHZ_AFPP       ( (u32)0xBBBBBBBB )           // 0b10111011101110111011101110111011
 #define OUTPUT_PORT_50MHZ_AFOD       ( (u32)0xFFFFFFFF )‬           // 0b11111111111111111111111111111111

 /************************************************************************************************/


#endif /* GPIO_INTERFACE_H_ */
