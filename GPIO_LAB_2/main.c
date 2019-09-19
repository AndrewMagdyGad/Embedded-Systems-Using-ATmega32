/*
 * main.c
 *
 *  Created on: Sep 18, 2019
 *      Author: andrew
 */
#include "GPIO/GPIO.h"
#include "mydelay.h"

int main(void)
{
	/*
	 * configure PORTD5, PORTD6, PORTD7 as output pins
	 * and configure PORTD0 and PORTD1 as input pins
	 */
	GPIO_u8_WritePortDir(0xF0, 'D');
	u8 port_d;
	s8 counter = 0;
	while (1)
	{
		GPIO_u8_ReadPortVal(&port_d, 'D');
		if (port_d & 0x01)
		{
			counter++;
			if (counter > 7)
				counter = 0;
		}
		else if (port_d & 0x02)
		{
			counter--;
			if (counter < 0)
				counter = 7;
		}
		GPIO_u8_WritePortVal(counter << 5, 'D');
		DELAY_MS(1000);
	}
}
