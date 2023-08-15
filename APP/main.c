/*
 * main.c
 *
 *  Created on: 11 Aug 2023
 *      Author: ehab
 */


#define F_CPU 8000000UL
#include <util/delay.h>
#include "../HAL/Seven_SEG/HSSD.h"
#include "../HAL/Key_Pad/HKPD.h"


int main()
{
	HSSD_voidInit(MDIO_PORTA);
	HSSD_voidInit(MDIO_PORTB);
	HSSD_voidInit(MDIO_PORTC);
	HKPD_voidInit();

	volatile u8 L_u8counter[3]={0};

	u8 L_u8Number=0,flag=0;
	while(1)
	{

		while(L_u8Number <'0' && flag==0)
		{
			L_u8Number= HKPD_U8PressedKey();
		}


		HSSD_voidDisplayNUM(MDIO_PORTB,L_u8counter[1]++);

		HSSD_voidDisplayNUM(MDIO_PORTC,L_u8counter[2]);

		if(L_u8Number >='0' && flag==0)
		{
			L_u8counter[0]=L_u8Number-'0';
			flag=1;
			HSSD_voidCountUP(MDIO_PORTA,L_u8counter[0]);
		}
		else
		{
			HSSD_voidCountUP(MDIO_PORTA,Zero);
		}


		if(L_u8counter[0] > 9)
		{
			L_u8counter[0]=0;
			L_u8counter[1]++;
		}

		if(L_u8counter[1] > 9)
		{
			L_u8counter[1]=0;
			L_u8counter[2]++;
		}

		if(L_u8counter[2] > 9)
		{
			L_u8counter[2]=0;
		}



	}
}

