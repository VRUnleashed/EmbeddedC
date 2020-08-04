/*
 * main.c
 *
 *  Created on: May 11, 2020
 *      Author: VRUnleashed
 */

#include <stdio.h>
#include <stdint.h>

int main() {
	int32_t number, newNum1, newNum2;

	printf("Enter any number : ");
	scanf("%d", &number);

	newNum1 = 16 | number;
	newNum2 = 128 | newNum1;

	printf("\nThe original number in hex (decimal) : %x (%d)\n", number, number);
	printf("The number after setting 4th and 7th bit in hex (decimal) : %x (%d)\n", newNum2, newNum2);

	while(getchar() != '\n');
	getchar();

	return 0;
}
