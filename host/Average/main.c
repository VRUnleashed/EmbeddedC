/*
 * main.c
 *
 *  Created on: May 8, 2020
 *      Author: VRUnleashed
 */

#include <stdio.h>

int main() {
	float n1, n2, n3;
	float average;

	printf("Enter the first number : ");
	fflush(stdout);
	scanf("%f", &n1);
	printf("Enter the second number : ");
	fflush(stdout);
	scanf("%f", &n2);
	printf("Enter the third number : ");
	fflush(stdout);
	scanf("%f", &n3);

	average = (n1 + n2 + n3) / 3;

	printf("\nAverage is : %f\n", average);

	while(getchar() != '\n');
	getchar();

	return 0;
}
