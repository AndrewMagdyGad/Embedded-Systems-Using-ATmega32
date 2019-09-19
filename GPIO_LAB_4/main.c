/*
 * main.c
 *
 *  Created on: Aug 27, 2019
 *      Author: andrew
 */
#include "GPIO/GPIO.h"
#include "mydelay.h"

int main(void)
{
	/* configure port c as output pins */
	GPIO_u8_WritePortDir(0xFF, 'C');
	GPIO_u8_WritePortVal(0x0, 'C');

	u8 i, j, k;
	while (1)
	{
		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 10; j++)
			{
				for (k = 0; k < 100; k++)
				{
					GPIO_u8_WritePortVal(0x08 | i << 4, 'C');
					DELAY_MS(50);
					GPIO_u8_WritePortVal(0x04 | j << 4, 'C');
					DELAY_MS(50);
				}
			}
		}
	}
}

