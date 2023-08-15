/*
 * HBUTTON.h
 *
 *  Created on: 11 Aug 2023
 *      Author: ehab
 */

#ifndef HAL_HBUTTON_H_
#define HAL_HBUTTON_H_

#include "../../MCAL/MDIO/MDIO.h"

#define PRESSED       (u8)0x01
#define UNPRESSED     (u8)0x00


// FUNCTIONS PROTOTYPES
void HBUTTON_voidButtonInit(port A_PortName,pin A_PinNO);
u8 HBUTTON_voidButtonRead(port A_PortName,pin A_PinNO);


#endif /* HAL_HBUTTON_H_ */
