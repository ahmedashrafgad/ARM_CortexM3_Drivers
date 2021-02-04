/*
 * GPIO_program.c
 *
 *  Created on: Feb 3, 2021
 *      Author: Ahmed Ashraf
 */


#include "StdTypes.h"
#include "BIT_MATH.h"

#include "GPIO_interface.h"
#include "GPIO_private.h"
#include "GPIO_config.h"


void MGPIO_voidSetPinDirction(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8Mode)
{
	/*            range check                    */
	if ((Copy_u8PortID <3) && (Copy_u8PinID <16) )
	{
		switch(Copy_u8PortID)
		{
		case GPIO_PORTA :
			/********** Low Port ***********/
			if (Copy_u8PinID < 8 )
			{
				/* i want to reset the the pin to zero case so ill make with the same idea of CLR_BIT
							   but with 4 bits togther so ill write 0b1111 then make not(~) to make it 0b0000 then
							   make AND (&) with the pin from ( Copy_u8Pin * 4 ) then put it in the register GPIOA_CRL*/

			GPIOA_CRL &= ~( ( 0b1111 )    << ( Copy_u8PinID * 4 ));
	    	/* i want to set the mode of the pin so ill use the same idea of SET_BIT but with 4 bits */
	    	GPIOA_CRL |=   ( Copy_u8Mode ) << ( Copy_u8PinID * 4 );
			}
			/********** High Port **********/
			/* more than 15 means that we will write on register GPIO_CRH  (the High pins of the port)*/
			/* we will use the same idea we used in the lower pins in the HIGh pins */
			else if (Copy_u8PinID < 16)
			{
				Copy_u8PinID = Copy_u8PinID - 8;
				GPIOA_CRH &= ~ ( ( 0b1111 )    << ( Copy_u8PinID * 4 ) );
				GPIOA_CRH |=   ( Copy_u8Mode ) << ( Copy_u8PinID * 4 );

			}
			break;

		case GPIO_PORTB :
			if (Copy_u8PinID < 8 )
						{
			/* i want to reset the the pin to zero case so ill make with the same idea of CLR_BIT
	     	   but with 4 bits togther so ill write 0b1111 then make not(~) to make it 0b0000 then
	     	   make AND (&) with the pin from ( Copy_u8Pin * 4 ) then put it in the register GPIOA_CRL*/

	     	GPIOB_CRL &= ~( ( 0b1111 )    << ( Copy_u8PinID * 4 ));
         	/* i want to set the mode of the pin so ill use the same idea of SET_BIT but with 4 bits */
         	GPIOB_CRL |=   ( Copy_u8Mode ) << ( Copy_u8PinID * 4 );
	     	}
	     	/********** High Port **********/
	     	/* more than 15 means that we will write on register GPIO_CRH  (the High pins of the port)*/
	     	/* we will use the same idea we used in the lower pins in the HIGh pins */
	     	else if (Copy_u8PinID < 16)
	     	{
	     		Copy_u8PinID = Copy_u8PinID - 8;
	     		GPIOB_CRH &= ~ ( ( 0b1111 )    << ( Copy_u8PinID * 4 ) );
	     		GPIOB_CRH |=   ( Copy_u8Mode ) << ( Copy_u8PinID * 4 );

	     	}
	     	break;

		case GPIO_PORTC :
			if (Copy_u8PinID < 8 )
						{
							/* i want to reset the the pin to zero case so ill make with the same idea of CLR_BIT
										   but with 4 bits togther so ill write 0b1111 then make not(~) to make it 0b0000 then
										   make AND (&) with the pin from ( Copy_u8Pin * 4 ) then put it in the register GPIOA_CRL*/

						GPIOC_CRL &= ~( ( 0b1111 )    << ( Copy_u8PinID * 4 ));
				    	/* i want to set the mode of the pin so ill use the same idea of SET_BIT but with 4 bits */
				    	GPIOC_CRL |=   ( Copy_u8Mode ) << ( Copy_u8PinID * 4 );
						}
						/********** High Port **********/
						/* more than 15 means that we will write on register GPIO_CRH  (the High pins of the port)*/
						/* we will use the same idea we used in the lower pins in the HIGh pins */
						else if (Copy_u8PinID < 16)
						{
							Copy_u8PinID = Copy_u8PinID - 8;
							GPIOC_CRH &= ~ ( ( 0b1111 )    << ( Copy_u8PinID * 4 ) );
							GPIOC_CRH |=   ( Copy_u8Mode ) << ( Copy_u8PinID * 4 );

						}
						break;

		}
	}
	else
	{
		/*return error*/
	}
}
 /* if Pin is output (High or Low) */
 void MGPIO_voidSetPinValue(u8 Copy_u8PortID,u8 Copy_u8PinID,u8 Copy_u8Value)
 {
		/*            range check                    */
		if ((Copy_u8PortID <3) && (Copy_u8PinID <16) )
		{
			switch(Copy_u8PortID)
		{
			case GPIO_PORTA:
				switch(Copy_u8Value)
				{
					case HIGH:	SET_BIT(GPIOA_ODR , Copy_u8PinID);	break;
					case LOW :	CLR_BIT(GPIOA_ODR , Copy_u8PinID);	break;
					default:;	/*		Return ERROR		*/
				}
				break;
			case GPIO_PORTB:
				switch(Copy_u8Value)
				{
					case HIGH:	SET_BIT(GPIOB_ODR , Copy_u8PinID);	break;
					case LOW :	CLR_BIT(GPIOB_ODR , Copy_u8PinID);	break;
					default:;	/*		Return ERROR		*/
				}
				break;
			case GPIO_PORTC:
				switch(Copy_u8Value)
				{
					case HIGH:	SET_BIT(GPIOC_ODR , Copy_u8PinID);	break;
					case LOW :	CLR_BIT(GPIOC_ODR , Copy_u8PinID);	break;
					default:;	/*		Return ERROR		*/
				}
				break;
	}
	}else{/*	Return ERROR	*/}
}
 /* IF Pin is input (return High or Low) */
 u8 MGPIO_u8GetPinValue(u8 Copy_u8PortID,u8 Copy_u8PinID)
 {
	 u8 Local_u8Value = 0 ;
	 /*            range check                    */
	 if ((Copy_u8PortID <3) && (Copy_u8PinID <16) )
	 {
	 switch(Copy_u8PortID)
	 	{
	 	case GPIO_PORTA:Local_u8Value = GET_BIT( GPIOA_IDR , Copy_u8PinID );break;
	 	case GPIO_PORTB:Local_u8Value = GET_BIT( GPIOB_IDR , Copy_u8PinID );break;
	 	case GPIO_PORTC:Local_u8Value = GET_BIT( GPIOC_IDR , Copy_u8PinID );break;
	 	}
	 }
	 else { /*return error*/}
	 return Local_u8Value;
 }

 void MGPIO_voidTogglePin(u8 Copy_u8PortID, u8 Copy_u8PinID)
 {
 		switch(Copy_u8PortID)
 	{
 		case GPIO_PORTA :
 		TOG_BIT(GPIOA_ODR, Copy_u8PinID);
 		break;
 		case GPIO_PORTB :
 		TOG_BIT(GPIOB_ODR, Copy_u8PinID);
 		break;
 		case GPIO_PORTC :
 		TOG_BIT(GPIOC_ODR, Copy_u8PinID);
 		break;
 	}
 }

 void MGPIO_voidSetPortDirction(u8 Copy_u8PortID,u8 Copy_u8Mode)
 {
	 switch(Copy_u8PortID)
		{
		case GPIO_PORTA :
		GPIOA_CRL &= ~( 0x1111      );
	    GPIOA_CRL |=  ( Copy_u8Mode ) ;
		GPIOA_CRH &= ~( 0x1111      );
	    GPIOA_CRH |=  ( Copy_u8Mode ) ;
			break;
		case GPIO_PORTB :
		GPIOB_CRL &= ~( 0x1111      );
	    GPIOB_CRL |=  ( Copy_u8Mode ) ;
		GPIOB_CRH &= ~( 0x1111      );
	    GPIOB_CRH |=  ( Copy_u8Mode ) ;
			break;
		case GPIO_PORTC :
		GPIOC_CRL &= ~( 0x1111      );
	    GPIOC_CRL |=  ( Copy_u8Mode ) ;
		GPIOC_CRH &= ~( 0x1111      );
	    GPIOC_CRH |=  ( Copy_u8Mode ) ;
			break;
		}
 }
 void MGPIO_voidSetPortValue(u8 Copy_u8PortID,u8 Value)
 {
	 switch(Copy_u8PortID)
	  	{
	  		case GPIO_PORTA :
	  		GPIOA_ODR = Value;
	  		break;
	  		case GPIO_PORTB :
	  		GPIOB_ODR = Value;
	  		break;
	  		case GPIO_PORTC :
	  		GPIOC_ODR = Value;
	  		break;
	  	}
}

