/*
 * main.c
 *
 *  Created on: May 11, 2020
 *      Author: VRUnleashed
 */

#include <stdio.h>
#include <stdint.h>

int main() {
	int32_t number;

	printf("Enter any number: ");
	scanf("%d", &number);

	if(number & 1)
		printf("The number is odd.\n");
	else
		printf("The number is even.\n");

	while(getchar() != '\n');
	getchar();

	return 0;
}
