/*
 * main_new.c
 *
 *  Created on: May 8, 2020
 *      Author: VRUnleashed
 */


#include <stdio.h>

int main() {
	double n1, n2, n3;
	double average;

	printf("Enter 3 numbers : ");
	scanf("%lf %lf %lf", &n1, &n2, &n3);

	average = (n1 + n2 + n3) / 3;

	printf("\nAverage is : %lf\n", average);

	while(getchar() != '\n');
	getchar();

	return 0;
}
