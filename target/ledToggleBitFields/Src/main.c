/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdio.h>
#include "main.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	RCC_AHB1ENR_t volatile *const pClkCtrlReg   = (RCC_AHB1ENR_t*) 0x40023830;
	GPIOx_MODER_t volatile *const pPortAModeReg = (GPIOx_MODER_t*) 0x40020000;
	GPIOx_ODR_t volatile *const pPortAOutReg    = (GPIOx_ODR_t*) 0x40020014;

	pClkCtrlReg->gpioA_en = 0; //1 for enabling
	pPortAModeReg->moder5 = 1;

	while (1) {
		pPortAOutReg->odr5 = 1;

		for(uint32_t i = 0; i < 300000; i++);

		pPortAOutReg->odr5 = 0;

		for(uint32_t i = 0; i < 300000; i++);
	}

}
