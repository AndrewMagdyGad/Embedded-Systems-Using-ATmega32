/*
 * main.c
 *
 *  Created on: Aug 24, 2019
 *      Author: andrew
 */
#include "GPIO/GPIO.h"

int main(void) {
	GPIO_u8_WritePortDir(0xE0, 'D');
	GPIO_u8_WritePortVal(0xE0, 'D');
	while (1) {

	}
	return 1;
}
