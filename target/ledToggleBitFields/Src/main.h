/*
 * main.h
 *
 *  Created on: May 25, 2020
 *      Author: VRUnleashed
 */

#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>

typedef struct {
	uint32_t gpioA_en   : 1;
	uint32_t gpioB_en   : 1;
	uint32_t gpioC_en   : 1;
	uint32_t gpioD_en   : 1;
	uint32_t gpioE_en   : 1;
	uint32_t reserved_1 : 2;
	uint32_t gpioH_en   : 1;
	uint32_t reserved_2 : 4;
	uint32_t crc_en     : 1;
	uint32_t reserved_3 : 8;
	uint32_t dma1_en    : 1;
	uint32_t dma2_en    : 1;
	uint32_t reserved_4 : 9;
} RCC_AHB1ENR_t;


typedef struct {
	uint32_t moder0  : 2;
	uint32_t moder1  : 2;
	uint32_t moder2  : 2;
	uint32_t moder3  : 2;
	uint32_t moder4  : 2;
	uint32_t moder5  : 2;
	uint32_t moder6  : 2;
	uint32_t moder7  : 2;
	uint32_t moder8  : 2;
	uint32_t moder9  : 2;
	uint32_t moder10 : 2;
	uint32_t moder11 : 2;
	uint32_t moder12 : 2;
	uint32_t moder13 : 2;
	uint32_t moder14 : 2;
	uint32_t moder15 : 2;
} GPIOx_MODER_t;


typedef struct {
	uint32_t odr0      : 1;
	uint32_t odr1      : 1;
	uint32_t odr2      : 1;
	uint32_t odr3      : 1;
	uint32_t odr4      : 1;
	uint32_t odr5      : 1;
	uint32_t odr6      : 1;
	uint32_t odr7      : 1;
	uint32_t odr8      : 1;
	uint32_t odr9      : 1;
	uint32_t odr10     : 1;
	uint32_t odr11     : 1;
	uint32_t odr12     : 1;
	uint32_t odr13     : 1;
	uint32_t odr14     : 1;
	uint32_t odr15     : 1;
	uint32_t reserved  : 16;
} GPIOx_ODR_t;


#endif /* MAIN_H_ */
