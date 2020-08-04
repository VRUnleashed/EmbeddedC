/*
 * main.c
 *
 *  Created on: May 11, 2020
 *      Author: VRUnleashed
 */

#include <stdio.h>
#include <stdint.h>

int main() {
	int32_t number, newNum1;

	printf("Enter any number : ");
	scanf("%d", &number);

	newNum1 = 0x8f & number;

	printf("\nThe original number in hex (decimal) : %x (%d)\n", number, number);
	printf("The number after clearing 4th, 5th and 6th bit in hex (decimal) : %x (%d)\n",
			newNum1, newNum1);

	while(getchar() != '\n');
	getchar();

	return 0;
}
