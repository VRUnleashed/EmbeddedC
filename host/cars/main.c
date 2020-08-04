/*
 * main.c
 *
 *  Created on: May 20, 2020
 *      Author: VRUnleashed
 */

#include <stdio.h>
#include <stdint.h>

struct carModel {
	unsigned int carNumber;
	uint32_t carPrice;
	uint32_t carMaxSpeed;
	float carWeight;
};


int main() {
	struct carModel carBMW = {2021, 15000, 220, 1330}; // one-to-one mapping (order is imp)
	struct carModel carFord = {.carWeight = 1900.96, .carMaxSpeed = 160, .carNumber = 4031, .carPrice = 35000};

	printf("The details of BMW car are:\n");
	printf("carNumber   = %u\n", carBMW.carNumber);
	printf("carPrice    = %u\n", carBMW.carPrice);
	printf("carMaxSpeed = %u\n", carBMW.carMaxSpeed);
	printf("carWeight   = %f\n", carBMW.carWeight);

	while(getchar() != '\n');
	getchar();

	return 0;
}

