/*
 * main.c
 *
 *  Created on: May 10, 2020
 *      Author: VRUnleashed
 */

#include <stdio.h>
#include <stdint.h>

int main() {
	uint32_t age;

	printf("Enter your age :\n");
	scanf("%d", &age);

	if(age >= 18)
		printf("You are eligible for voting.\n");
	else
		printf("You should be minimum 18 years old for voting.\n");

	while(getchar() != '\n');
	getchar();

	return 0;
}
