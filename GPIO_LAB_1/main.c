/*
 * main.c
 *
 *  Created on: Aug 24, 2019
 *      Author: andrew
 */
#include "GPIO/GPIO.h"
#include "mydelay.h"

int main(void)
{
	unsigned char i;

	/* configure PORTD4, PORTD5, PORTD6, PORTD7 as output pins */
	GPIO_u8_WritePortDir(0xF0, 'D');
	GPIO_u8_WritePortVal(0x0, 'D');

	u8 port_d;
	while (1)
	{
		for (i = 5; i < 8; i++)
		{
			GPIO_u8_ReadPortVal(&port_d, 'D');
			port_d &= ~(1 << 4);
			GPIO_u8_WritePortVal(port_d , 'D');
			port_d = (1 << i);
			GPIO_u8_WritePortVal(port_d, 'D');
			DELAY_MS(1000);
		}
		GPIO_u8_WritePortVal(0x10, 'D'); /* start buzzer */
		DELAY_MS(1000);
	}
}
