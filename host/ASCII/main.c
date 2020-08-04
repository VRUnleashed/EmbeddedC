/*
 * main.c
 *
 *  Created on: May 8, 2020
 *      Author: VRUnleashed
 */


#include <stdio.h>

int main() {
	char c1, c2, c3, c4, c5, c6;

	printf("Enter 6 characters of your choice: ");
	scanf("%c %c %c %c %c %c", &c1, &c2, &c3, &c4, &c5, &c6);

	printf("\nASCII codes : %d, %d, %d, %d, %d, %d", c1, c2, c3, c4, c5, c6);

	while(getchar() != '\n');
	getchar();

	return 0;
}
