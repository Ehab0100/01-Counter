/*
 * MDIO.c
 *
 *  Created on: 11 Aug 2023
 *      Author: ehab
 */

#include "MDIO.h"

void MDIO_voidSetPinDirection(port A_PortName,pin A_PinNO,u8 A_u8Direction)
{
if((A_PortName <= MDIO_PORTD)&&(A_PinNO <= PIN7)&&(A_u8Direction <= OUTPUT)){

	switch(A_PortName)
	{


		case MDIO_PORTA:
					switch(A_u8Direction)
					{
						case OUTPUT: SET_BIT(DDRA,A_PinNO); break;
						case INPUT:  CLR_BIT(DDRA,A_PinNO); break;
					}break;

		case MDIO_PORTB:
					switch(A_u8Direction)
					{
						case OUTPUT: SET_BIT(DDRB,A_PinNO); break;
						case INPUT:  CLR_BIT(DDRB,A_PinNO); break;
					}break;

		case MDIO_PORTC:
					switch(A_u8Direction)
					{
						case OUTPUT: SET_BIT(DDRC,A_PinNO); break;
						case INPUT:  CLR_BIT(DDRC,A_PinNO); break;
					}break;

		case MDIO_PORTD:
					switch(A_u8Direction)
					{
						case OUTPUT: SET_BIT(DDRD,A_PinNO); break;
						case INPUT:  CLR_BIT(DDRD,A_PinNO); break;
					}break;

	} /*end if*/}
}

void MDIO_voidSetPinValue(port A_PortName,pin A_PinNO,u8 A_u8Value)
{
if((A_PortName <= MDIO_PORTD)&&(A_PinNO <= PIN7)&&(A_u8Value <= HIGH)){

	switch(A_PortName)
	{
		case MDIO_PORTA:
					switch(A_u8Value)
					{
						case HIGH: SET_BIT(PORTA,A_PinNO); break;
						case LOW:  CLR_BIT(PORTA,A_PinNO); break;
					}break;

		case MDIO_PORTB:
					switch(A_u8Value)
					{
						case HIGH: SET_BIT(PORTB,A_PinNO); break;
						case LOW:  CLR_BIT(PORTB,A_PinNO); break;
					}break;

		case MDIO_PORTC:
					switch(A_u8Value)
					{
						case HIGH: SET_BIT(PORTC,A_PinNO); break;
						case LOW:  CLR_BIT(PORTC,A_PinNO); break;
					}break;

		case MDIO_PORTD:
					switch(A_u8Value)
					{
						case HIGH: SET_BIT(PORTD,A_PinNO); break;
						case LOW:  CLR_BIT(PORTD,A_PinNO); break;
					}break;

	}/*end if*/}
}

u8 MDIO_U8ReadPinValue(port A_PortName,pin A_PinNO)
{
u8 L_u8PinValue=3;

if((A_PortName <= MDIO_PORTD)&&(A_PinNO <= PIN7)){

	switch(A_PortName)
	{
		case MDIO_PORTA: L_u8PinValue=READ_BIT(PINA,A_PinNO); break;

		case MDIO_PORTB: L_u8PinValue=READ_BIT(PINB,A_PinNO); break;

		case MDIO_PORTC: L_u8PinValue=READ_BIT(PINC,A_PinNO); break;

		case MDIO_PORTD: L_u8PinValue=READ_BIT(PIND,A_PinNO); break;

	}/*end if*/}
	return L_u8PinValue;
}

void MDIO_voidTogglePinValue(port A_PortName,pin A_PinNO)
{
if((A_PortName <= MDIO_PORTD)&&(A_PinNO <= PIN7)){

	switch(A_PortName)
	{
		case MDIO_PORTA: TOG_BIT(PORTA,A_PinNO); break;

		case MDIO_PORTB: TOG_BIT(PORTA,A_PinNO); break;

		case MDIO_PORTC: TOG_BIT(PORTA,A_PinNO); break;

		case MDIO_PORTD: TOG_BIT(PORTA,A_PinNO); break;

	}/*end if*/}
}

void MDIO_voidSetPortDirection(port A_PortName,u8 A_u8PortDirection)
{
if((A_PortName <= MDIO_PORTD)&&(A_u8PortDirection <= 0xFF)){

	switch(A_PortName)
	{
		case MDIO_PORTA: DDRA=A_u8PortDirection; break;

		case MDIO_PORTB: DDRB=A_u8PortDirection; break;

		case MDIO_PORTC: DDRC=A_u8PortDirection; break;

		case MDIO_PORTD: DDRD=A_u8PortDirection; break;

	}/*end if*/}
}

void MDIO_voidSetPortValue(port A_PortName,u8 A_u8PortValue)
{
if((A_PortName <= MDIO_PORTD)&&(A_u8PortValue <= 0xFF)){

	switch(A_PortName)
	{
		case MDIO_PORTA: PORTA=A_u8PortValue; break;

		case MDIO_PORTB: PORTB=A_u8PortValue; break;

		case MDIO_PORTC: PORTC=A_u8PortValue; break;

		case MDIO_PORTD: PORTD=A_u8PortValue; break;

	}/*end if*/}
}

u8 MDIO_U8ReadPortValue(port A_PortName)
{
u8 L_u8PortValue=0;

if(A_PortName <= MDIO_PORTD){

	switch(A_PortName)
	{
		case MDIO_PORTA: L_u8PortValue=PINA; break;

		case MDIO_PORTB: L_u8PortValue=PINB; break;

		case MDIO_PORTC: L_u8PortValue=PINC; break;

		case MDIO_PORTD: L_u8PortValue=PIND; break;

	}/*end if*/}
	return L_u8PortValue;
}
