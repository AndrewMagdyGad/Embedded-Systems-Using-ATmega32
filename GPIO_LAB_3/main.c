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
	GPIO_u8_WritePortVal(0x04, 'C');

	u8 counter = 0;
	while (1)
	{
		DELAY_MS(1000);
		if (counter > 9)
			counter = 0;
		GPIO_u8_WritePortVal(0x04 | counter << 4, 'C');
		counter++;
	}
}
