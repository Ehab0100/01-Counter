/*
 * HBUTTON.c
 *
 *  Created on: 11 Aug 2023
 *      Author: ehab
 */

#include "HBUTTON.h"


void HBUTTON_voidButtonInit(port A_PortName,pin A_PinNO)
{
	MDIO_voidSetPinDirection(A_PortName,A_PinNO,INPUT);
}

u8 HBUTTON_voidButtonRead(port A_PortName,pin A_PinNO)
{
	return MDIO_U8ReadPinValue(A_PortName,A_PinNO);
}
