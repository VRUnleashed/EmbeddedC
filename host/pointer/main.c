/*
 * main.c
 *
 *  Created on: May 9, 2020
 *      Author: VRUnleashed
 */


#include <stdio.h>

int main() {
	char data = 100;
	char* address;
	char readData;

	address = &data;

	printf("The address of variable 'data' is : %p\n", address);

	readData = *address;

	printf("The value of variable 'data' is : %d\n", readData);

	*address = 65;

	printf("The new value of variable 'data' is : %d\n", data);

	while(getchar() != '\n');
	getchar();

	return 0;
}
